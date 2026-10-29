#include "platform/sdl/sdldisplay.h"

#include "platform/gl/glformat.h"
#include "platform/log.h"
#include "platform/sdl/sdlwindow.h"

#include <SDL3/SDL.h>
#include <array>
#include <cstddef>
#include <optional>
#include <stdexcept>
#include <string>
#include <string_view>

namespace nocturne::platform::sdl {
namespace {

// By EWindowMode.
constexpr std::array<std::string_view, 3> kWindowModeNames{"windowed", "fullscreen", "borderless"};

std::string getGlString(const gl::SGlApi &gl, GLenum name) {
    std::string text;
    for (const GLubyte *c = gl.GetString(name); c != nullptr && *c != 0; ++c) {
        text.push_back(static_cast<char>(*c));
    }
    return text;
}

} // namespace

void CSdlDisplay::SContextDeleter::operator()(SDL_GLContextState *context) const {
    SDL_GL_DestroyContext(context);
}

CSdlDisplay::CSdlDisplay(CSdlWindow &window, ILog &log) : window_(window), log_(log) {
    // 3.3 core is the floor the hardware renderer needs, and asking for exactly it keeps the
    // driver from handing back anything older.
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
    SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);
    context_.reset(SDL_GL_CreateContext(window_.getSdlWindow()));
    if (!context_) {
        throw std::runtime_error(SDL_GetError());
    }
    gl_.load(SDL_GL_GetProcAddress);
    log_.print(ELogSubsystem::Render, "GL context up: GL_VERSION={} GL_RENDERER={}",
               getGlString(gl_, GL_VERSION), getGlString(gl_, GL_RENDERER));
    // Adaptive vsync where the driver has it, plain vsync otherwise.
    if (!SDL_GL_SetSwapInterval(-1)) {
        SDL_GL_SetSwapInterval(1);
    }
    quad_ = std::make_unique<gl::CGlQuad>(gl_);
    upscaler_ = std::make_unique<gl::CGlUpscaler>(gl_, *quad_, log_);
    gl_.GenTextures(1, &texture_);
}

CSdlDisplay::~CSdlDisplay() {
    gl_.DeleteTextures(1, &texture_);
}

bool CSdlDisplay::setDisplayMode(int width, int height, int bits_per_pixel) {
    const std::optional<common::EPixelLayout> layout = common::layoutForDepth(bits_per_pixel);
    if (!layout || width <= 0 || height <= 0) {
        log_.print(ELogSubsystem::Render, "display mode {}x{} at {} bits per pixel refused", width,
                   height, bits_per_pixel);
        return false;
    }
    log_.print(ELogSubsystem::Render, "display mode {}x{} at {} bits per pixel", width, height,
               bits_per_pixel);
    layout_ = *layout;
    logical_ = {.width = width, .height = height};
    converter_.setMode(layout_, width, height);
    const gl::SGlPixelFormat format = gl::getGlPixelFormat(converter_.getUploadLayout());
    gl_.BindTexture(GL_TEXTURE_2D, texture_);
    gl_.TexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, width, height, 0, format.format, format.type,
                   nullptr);
    window_.setLogicalSize(logical_);
    if (window_size_ == common::SExtent{}) {
        window_size_ = logical_;
        applyWindowSize();
    }
    SDL_ShowWindow(window_.getSdlWindow());
    return true;
}

common::SPixelFormat CSdlDisplay::getPixelFormat() {
    return common::getPixelFormat(layout_);
}

void CSdlDisplay::setPalette(std::span<const std::uint8_t, 768> rgb) {
    converter_.setPalette(rgb);
}

void CSdlDisplay::present(std::span<const std::byte> pixels, int pitch) {
    const std::optional<common::SFrameUpload> upload = converter_.convert(pixels, pitch);
    if (!upload) {
        if (const std::optional<int> call = unconverted_rate_.take()) {
            log_.print(ELogSubsystem::Render, "#{} present: no upload for this mode's frame",
                       *call);
        }
        return;
    }
    const gl::SGlPixelFormat format = gl::getGlPixelFormat(upload->layout);
    gl_.PixelStorei(GL_UNPACK_ALIGNMENT, 1);
    gl_.PixelStorei(GL_UNPACK_ROW_LENGTH, upload->row_length);
    gl_.BindTexture(GL_TEXTURE_2D, texture_);
    gl_.TexSubImage2D(GL_TEXTURE_2D, 0, 0, 0, logical_.width, logical_.height, format.format,
                      format.type, upload->pixels.data());
    gl_.PixelStorei(GL_UNPACK_ROW_LENGTH, 0);
    drawFrame(texture_, logical_, gl::EQuadRows::TopFirst);
    SDL_GL_SwapWindow(window_.getSdlWindow());
}

void CSdlDisplay::presentScene(GLuint texture, int width, int height) {
    drawFrame(texture, {.width = width, .height = height}, gl::EQuadRows::BottomFirst);
    SDL_GL_SwapWindow(window_.getSdlWindow());
}

const gl::SGlApi &CSdlDisplay::getGlApi() const {
    return gl_;
}

void CSdlDisplay::setWindowMode(EWindowMode mode) {
    SDL_Window *const window = window_.getSdlWindow();
    window_mode_ = mode;
    log_.print(ELogSubsystem::Render, "window mode {}",
               kWindowModeNames.at(static_cast<std::size_t>(mode)));
    // Leaving fullscreen first lets a change between the two kinds start from a window, which
    // not every video driver manages otherwise.
    SDL_SetWindowFullscreen(window, false);
    switch (mode) {
    case EWindowMode::Windowed:
        SDL_SetWindowBordered(window, true);
        applyWindowSize();
        return;
    case EWindowMode::Fullscreen: {
        // A size the display has no mode for falls back to the desktop; the letterbox scales
        // the frame into whatever it gets.
        SDL_DisplayMode closest{};
        const bool found =
            SDL_GetClosestFullscreenDisplayMode(SDL_GetDisplayForWindow(window), window_size_.width,
                                                window_size_.height, 0.0F, false, &closest);
        SDL_SetWindowFullscreenMode(window, found ? &closest : nullptr);
        break;
    }
    case EWindowMode::Borderless:
        SDL_SetWindowFullscreenMode(window, nullptr);
        break;
    }
    SDL_SetWindowFullscreen(window, true);
}

EWindowMode CSdlDisplay::getWindowMode() const {
    return window_mode_;
}

void CSdlDisplay::setUpscaler(EUpscaler upscaler) {
    upscaler_mode_ = upscaler;
}

EUpscaler CSdlDisplay::getUpscaler() const {
    return upscaler_mode_;
}

void CSdlDisplay::setUpscalerSharpness(int percent) {
    upscaler_sharpness_ = percent;
}

int CSdlDisplay::getUpscalerSharpness() const {
    return upscaler_sharpness_;
}

void CSdlDisplay::setWindowSize(int width, int height) {
    window_size_ = {.width = width, .height = height};
    if (window_mode_ == EWindowMode::Windowed) {
        applyWindowSize();
    }
}

// A window already that size is left where the player put it.
void CSdlDisplay::applyWindowSize() {
    SDL_Window *const window = window_.getSdlWindow();
    common::SExtent current;
    SDL_GetWindowSize(window, &current.width, &current.height);
    if (current == window_size_) {
        return;
    }
    log_.print(ELogSubsystem::Render,
               "resize window {}x{} -> {}x{} (the render resolution unchanged)", current.width,
               current.height, window_size_.width, window_size_.height);
    SDL_SetWindowSize(window, window_size_.width, window_size_.height);
    SDL_SetWindowPosition(window, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED);
}

void CSdlDisplay::drawFrame(GLuint texture, common::SExtent frame, gl::EQuadRows rows) {
    common::SExtent drawable;
    SDL_GetWindowSizeInPixels(window_.getSdlWindow(), &drawable.width, &drawable.height);
    const common::SViewport viewport = common::fitViewport(drawable, frame);
    gl_.BindFramebuffer(GL_FRAMEBUFFER, 0);
    gl_.Disable(GL_SCISSOR_TEST);
    gl_.Disable(GL_DEPTH_TEST);
    gl_.Disable(GL_BLEND);
    gl_.Disable(GL_CULL_FACE);
    // The bars stay black; the quad covers the rest.
    gl_.Viewport(0, 0, drawable.width, drawable.height);
    gl_.ClearColor(0.0F, 0.0F, 0.0F, 1.0F);
    gl_.Clear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    // GL counts viewport rows from the bottom.
    gl_.Viewport(viewport.x, drawable.height - viewport.y - viewport.height, viewport.width,
                 viewport.height);
    upscaler_->draw(texture, rows, frame, viewport, upscaler_mode_, upscaler_sharpness_);
}

} // namespace nocturne::platform::sdl
