#include "platform/sdl/sdldisplay.h"

#include "platform/gl/glformat.h"
#include "platform/sdl/sdlwindow.h"

#include <SDL3/SDL.h>
#include <array>
#include <stdexcept>

namespace nocturne::platform::sdl {
namespace {

// Indexed by whether the frame is a whole multiple of its size on screen: nearest stays even
// there, and makes pixels uneven anywhere else.
constexpr std::array<GLint, 2> kFilters = {GL_LINEAR, GL_NEAREST};

} // namespace

void CSdlDisplay::SContextDeleter::operator()(SDL_GLContextState *context) const {
    SDL_GL_DestroyContext(context);
}

CSdlDisplay::CSdlDisplay(CSdlWindow &window) : window_(window) {
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
    // Adaptive vsync where the driver has it, plain vsync otherwise.
    if (!SDL_GL_SetSwapInterval(-1)) {
        SDL_GL_SetSwapInterval(1);
    }
    quad_ = std::make_unique<gl::CGlQuad>(gl_);
    gl_.GenTextures(1, &texture_);
}

CSdlDisplay::~CSdlDisplay() {
    gl_.DeleteTextures(1, &texture_);
}

bool CSdlDisplay::setDisplayMode(int width, int height, int bits_per_pixel) {
    const std::optional<common::EPixelLayout> layout = common::layoutForDepth(bits_per_pixel);
    if (!layout || width <= 0 || height <= 0) {
        return false;
    }
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
        return;
    }
    const gl::SGlPixelFormat format = gl::getGlPixelFormat(upload->layout);
    gl_.PixelStorei(GL_UNPACK_ALIGNMENT, 1);
    gl_.PixelStorei(GL_UNPACK_ROW_LENGTH, upload->row_length);
    gl_.BindTexture(GL_TEXTURE_2D, texture_);
    gl_.TexSubImage2D(GL_TEXTURE_2D, 0, 0, 0, logical_.width, logical_.height, format.format,
                      format.type, upload->pixels.data());
    gl_.PixelStorei(GL_UNPACK_ROW_LENGTH, 0);
    drawFrame();
    SDL_GL_SwapWindow(window_.getSdlWindow());
}

void CSdlDisplay::setWindowMode(EWindowMode mode) {
    SDL_Window *const window = window_.getSdlWindow();
    window_mode_ = mode;
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

void CSdlDisplay::setWindowSize(int width, int height) {
    window_size_ = {.width = width, .height = height};
    if (window_mode_ == EWindowMode::Windowed) {
        applyWindowSize();
    }
}

void CSdlDisplay::applyWindowSize() {
    SDL_Window *const window = window_.getSdlWindow();
    SDL_SetWindowSize(window, window_size_.width, window_size_.height);
    SDL_SetWindowPosition(window, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED);
}

void CSdlDisplay::drawFrame() {
    common::SExtent drawable;
    SDL_GetWindowSizeInPixels(window_.getSdlWindow(), &drawable.width, &drawable.height);
    const common::SViewport viewport = common::fitViewport(drawable, logical_);
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
    // Sampling is restated every frame: a mipmap filter another texture user left behind would
    // make this texture incomplete, and the quad would draw white.
    const GLint filter = kFilters.at(common::isWholeMultiple(viewport, logical_) ? 1 : 0);
    gl_.ActiveTexture(GL_TEXTURE0);
    gl_.BindTexture(GL_TEXTURE_2D, texture_);
    gl_.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, filter);
    gl_.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, filter);
    gl_.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    gl_.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    quad_->draw(texture_, gl::EQuadRows::TopFirst);
}

} // namespace nocturne::platform::sdl
