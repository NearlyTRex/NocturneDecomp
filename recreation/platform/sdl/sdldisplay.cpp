#include "platform/sdl/sdldisplay.h"

#include "platform/gl/glformat.h"
#include "platform/log.h"
#include "platform/sdl/sdlwindow.h"

#include <SDL3/SDL.h>
#include <array>
#include <cmath>
#include <cstddef>
#include <memory>
#include <optional>
#include <span>
#include <stdexcept>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::platform::sdl {
namespace {

// By EWindowMode.
constexpr std::array<std::string_view, 3> kWindowModeNames{"windowed", "fullscreen", "borderless"};

// SDL_GL_SetSwapInterval's.
constexpr int kSwapImmediate = 0;
constexpr int kSwapSynced = 1;
constexpr int kSwapAdaptive = -1;

struct SSdlFree {
    void operator()(void *memory) const {
        SDL_free(memory);
    }
};

// The primary first, then the rest in SDL's order.
std::vector<SDL_DisplayID> listDisplayIds() {
    int count = 0;
    const std::unique_ptr<SDL_DisplayID, SSdlFree> ids(SDL_GetDisplays(&count));
    std::vector<SDL_DisplayID> listed;
    const SDL_DisplayID primary = SDL_GetPrimaryDisplay();
    if (primary != 0) {
        listed.push_back(primary);
    }
    if (ids) {
        for (const SDL_DisplayID id : std::span(ids.get(), static_cast<std::size_t>(count))) {
            if (id != primary) {
                listed.push_back(id);
            }
        }
    }
    return listed;
}

void centreOn(SDL_Window *window, SDL_DisplayID display) {
    const auto centred = static_cast<int>(SDL_WINDOWPOS_CENTERED_DISPLAY(display));
    SDL_SetWindowPosition(window, centred, centred);
}

SDisplayInfo describeDisplay(SDL_DisplayID id) {
    SDisplayInfo info{.name = {}, .desktop = {}, .fullscreen_modes = {}};
    if (const char *name = SDL_GetDisplayName(id)) {
        info.name = name;
    }
    if (const SDL_DisplayMode *desktop = SDL_GetDesktopDisplayMode(id)) {
        info.desktop = {.width = desktop->w, .height = desktop->h};
    }
    int count = 0;
    const std::unique_ptr<SDL_DisplayMode *, SSdlFree> modes(
        SDL_GetFullscreenDisplayModes(id, &count));
    if (modes) {
        for (const SDL_DisplayMode *mode :
             std::span(modes.get(), static_cast<std::size_t>(count))) {
            info.fullscreen_modes.push_back(
                {.size = {.width = mode->w, .height = mode->h},
                 .refresh_rate = static_cast<int>(std::lround(mode->refresh_rate))});
        }
    }
    return info;
}

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
    applyVsync();
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
    window_mode_ = mode;
    log_.print(ELogSubsystem::Render, "window mode {}",
               kWindowModeNames.at(static_cast<std::size_t>(mode)));
    applyWindowMode();
}

// Leaving fullscreen first lets a change between the two kinds start from a window, which not
// every video driver manages otherwise, and lets the window move to the chosen display.
void CSdlDisplay::applyWindowMode() {
    SDL_Window *const window = window_.getSdlWindow();
    SDL_SetWindowFullscreen(window, false);
    placeOnDisplay();
    switch (window_mode_) {
    case EWindowMode::Windowed:
        SDL_SetWindowBordered(window, true);
        applyWindowSize();
        return;
    case EWindowMode::Fullscreen:
        applyExclusiveMode();
        break;
    case EWindowMode::Borderless:
        SDL_SetWindowFullscreenMode(window, nullptr);
        break;
    }
    SDL_SetWindowFullscreen(window, true);
}

// A size the display has no mode for falls back to the desktop; the letterbox scales the frame
// into whatever it gets. Applied at once while already full screen.
void CSdlDisplay::applyExclusiveMode() {
    const SDL_DisplayID display = getDisplayId();
    common::SExtent desktop;
    if (const SDL_DisplayMode *mode = SDL_GetDesktopDisplayMode(display)) {
        desktop = {.width = mode->w, .height = mode->h};
    }
    const common::SExtent size = getExclusiveSize(desktop, fullscreen_size_, window_size_);
    SDL_DisplayMode closest{};
    const bool found = SDL_GetClosestFullscreenDisplayMode(
        display, size.width, size.height, static_cast<float>(refresh_rate_), false, &closest);
    if (found) {
        log_.print(ELogSubsystem::Render, "exclusive mode {}x{} at {} Hz", closest.w, closest.h,
                   closest.refresh_rate);
    }
    SDL_SetWindowFullscreenMode(window_.getSdlWindow(), found ? &closest : nullptr);
}

// Adaptive vsync where the driver has it, plain vsync otherwise.
void CSdlDisplay::applyVsync() const {
    if (!vsync_) {
        SDL_GL_SetSwapInterval(kSwapImmediate);
        return;
    }
    if (!SDL_GL_SetSwapInterval(kSwapAdaptive)) {
        SDL_GL_SetSwapInterval(kSwapSynced);
    }
}

// A window on another display moves to the chosen one's centre; one already on it stays where
// the player put it.
void CSdlDisplay::placeOnDisplay() {
    SDL_Window *const window = window_.getSdlWindow();
    const SDL_DisplayID display = getDisplayId();
    if (SDL_GetDisplayForWindow(window) != display) {
        centreOn(window, display);
    }
}

SDL_DisplayID CSdlDisplay::getDisplayId() const {
    const std::vector<SDL_DisplayID> ids = listDisplayIds();
    if (ids.empty()) {
        return SDL_GetDisplayForWindow(window_.getSdlWindow());
    }
    return ids.at(resolveDisplayIndex(display_index_, ids.size()));
}

void CSdlDisplay::setDisplayIndex(int index) {
    display_index_ = index;
    log_.print(ELogSubsystem::Render, "display {}", index);
    if (window_mode_ == EWindowMode::Windowed) {
        placeOnDisplay();
        return;
    }
    applyWindowMode();
}

int CSdlDisplay::getDisplayIndex() const {
    return display_index_;
}

void CSdlDisplay::setFullscreenSize(EFullscreenSize size) {
    fullscreen_size_ = size;
    if (window_mode_ == EWindowMode::Fullscreen) {
        applyExclusiveMode();
    }
}

EFullscreenSize CSdlDisplay::getFullscreenSize() const {
    return fullscreen_size_;
}

void CSdlDisplay::setRefreshRate(int hertz) {
    refresh_rate_ = hertz;
    if (window_mode_ == EWindowMode::Fullscreen) {
        applyExclusiveMode();
    }
}

int CSdlDisplay::getRefreshRate() const {
    return refresh_rate_;
}

void CSdlDisplay::setVsync(bool on) {
    vsync_ = on;
    applyVsync();
}

bool CSdlDisplay::getVsync() const {
    return vsync_;
}

std::vector<SDisplayInfo> CSdlDisplay::getDisplays() const {
    std::vector<SDisplayInfo> displays;
    for (const SDL_DisplayID id : listDisplayIds()) {
        displays.push_back(describeDisplay(id));
    }
    return displays;
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

void CSdlDisplay::setAntialias(EAntialias antialias) {
    antialias_ = antialias;
}

EAntialias CSdlDisplay::getAntialias() const {
    return antialias_;
}

void CSdlDisplay::setWidescreen(common::EWidescreen widescreen) {
    widescreen_ = widescreen;
}

common::EWidescreen CSdlDisplay::getWidescreen() const {
    return widescreen_;
}

std::optional<common::SSceneReframe> CSdlDisplay::getSceneReframe(int width, int height) const {
    return common::getSceneReframe(widescreen_, {.width = width, .height = height});
}

void CSdlDisplay::setWindowSize(int width, int height) {
    window_size_ = {.width = width, .height = height};
    if (window_mode_ == EWindowMode::Windowed) {
        applyWindowSize();
    } else if (window_mode_ == EWindowMode::Fullscreen &&
               fullscreen_size_ == EFullscreenSize::Game) {
        applyExclusiveMode();
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
    centreOn(window, getDisplayId());
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
