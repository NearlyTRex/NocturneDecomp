#include "platform/sdl/sdlwindow.h"

#include "common/input/scancode.h"
#include "common/text/windows1252.h"

#include <SDL3/SDL.h>
#include <stdexcept>

namespace nocturne::platform::sdl {
namespace {

void queueKey(EWindowEventType type, const SDL_KeyboardEvent &key, std::deque<SWindowEvent> &out) {
    const std::uint16_t scancode =
        common::usageToScancode(static_cast<std::uint16_t>(key.scancode));
    if (scancode == 0) {
        return;
    }
    out.push_back({.type = type, .scancode = scancode});
    // Win32 posts these as WM_CHAR after the key-down; SDL's text input never reports them.
    const char control = common::keyToControlCharacter(
        scancode, key.key, (key.mod & SDL_KMOD_CTRL) != 0, (key.mod & SDL_KMOD_ALT) != 0);
    if (type == EWindowEventType::KeyDown && control != 0) {
        out.push_back({.type = EWindowEventType::Character, .character = control});
    }
}

void queueText(const char *text, std::deque<SWindowEvent> &out) {
    for (const char character : common::utf8ToWindows1252(text)) {
        out.push_back({.type = EWindowEventType::Character, .character = character});
    }
}

common::SPoint toLogical(const common::SPresentation &presentation, float x, float y) {
    return common::windowToLogical(presentation,
                                   {.x = static_cast<int>(x), .y = static_cast<int>(y)});
}

void queueButton(EWindowEventType type, const SDL_MouseButtonEvent &button,
                 const common::SPresentation &presentation, std::deque<SWindowEvent> &out) {
    const common::SPoint point = toLogical(presentation, button.x, button.y);
    SWindowEvent event{.type = type, .x = point.x, .y = point.y};
    switch (button.button) {
    case SDL_BUTTON_LEFT:
        event.button = EMouseButton::Left;
        break;
    case SDL_BUTTON_RIGHT:
        event.button = EMouseButton::Right;
        break;
    case SDL_BUTTON_MIDDLE:
        event.button = EMouseButton::Middle;
        break;
    default:
        return;
    }
    out.push_back(event);
}

void queueWheel(const SDL_MouseWheelEvent &wheel, const common::SPresentation &presentation,
                std::deque<SWindowEvent> &out) {
    constexpr int kWheelDelta = 120;
    // Whole notches only; a high-resolution wheel's fractions accumulate until one completes.
    const int sign = wheel.direction == SDL_MOUSEWHEEL_FLIPPED ? -1 : 1;
    const int notches = wheel.integer_y * sign;
    if (notches == 0) {
        return;
    }
    const common::SPoint point = toLogical(presentation, wheel.mouse_x, wheel.mouse_y);
    out.push_back({.type = EWindowEventType::MouseWheel,
                   .x = point.x,
                   .y = point.y,
                   .wheel_delta = notches * kWheelDelta});
}

void queueEvents(const SDL_Event &event, const common::SPresentation &presentation,
                 std::deque<SWindowEvent> &out) {
    switch (event.type) {
    case SDL_EVENT_QUIT:
        out.push_back({.type = EWindowEventType::Quit});
        break;
    case SDL_EVENT_WINDOW_FOCUS_GAINED:
        out.push_back({.type = EWindowEventType::Activate});
        break;
    case SDL_EVENT_WINDOW_FOCUS_LOST:
        out.push_back({.type = EWindowEventType::Deactivate});
        break;
    case SDL_EVENT_KEY_DOWN:
        queueKey(EWindowEventType::KeyDown, event.key, out);
        break;
    case SDL_EVENT_KEY_UP:
        queueKey(EWindowEventType::KeyUp, event.key, out);
        break;
    case SDL_EVENT_TEXT_INPUT:
        queueText(event.text.text, out);
        break;
    case SDL_EVENT_MOUSE_MOTION: {
        const common::SPoint point = toLogical(presentation, event.motion.x, event.motion.y);
        out.push_back({.type = EWindowEventType::MouseMove, .x = point.x, .y = point.y});
        break;
    }
    case SDL_EVENT_MOUSE_BUTTON_DOWN:
        queueButton(EWindowEventType::MouseButtonDown, event.button, presentation, out);
        break;
    case SDL_EVENT_MOUSE_BUTTON_UP:
        queueButton(EWindowEventType::MouseButtonUp, event.button, presentation, out);
        break;
    case SDL_EVENT_MOUSE_WHEEL:
        queueWheel(event.wheel, presentation, out);
        break;
    default:
        break;
    }
}

} // namespace

void CSdlWindow::SWindowDeleter::operator()(SDL_Window *window) const {
    SDL_DestroyWindow(window);
}

CSdlWindow::CSdlWindow(std::string_view title, int width, int height) {
    // Hidden until the first display mode sizes it, so no default-sized window flashes up.
    window_.reset(SDL_CreateWindow(std::string(title).c_str(), width, height,
                                   SDL_WINDOW_OPENGL | SDL_WINDOW_HIDDEN));
    if (!window_ || !SDL_StartTextInput(window_.get())) {
        throw std::runtime_error(SDL_GetError());
    }
}

SDL_Window *CSdlWindow::getSdlWindow() const {
    return window_.get();
}

void CSdlWindow::setLogicalSize(common::SExtent logical) {
    logical_ = logical;
}

bool CSdlWindow::pollEvent(SWindowEvent &event) {
    SDL_Event sdl_event;
    while (pending_.empty() && SDL_PollEvent(&sdl_event)) {
        queueEvents(sdl_event, getPresentation(), pending_);
    }
    if (pending_.empty()) {
        return false;
    }
    event = pending_.front();
    pending_.pop_front();
    return true;
}

void CSdlWindow::warpMouse(int x, int y) {
    const common::SPoint point = common::logicalToWindow(getPresentation(), {.x = x, .y = y});
    SDL_WarpMouseInWindow(window_.get(), static_cast<float>(point.x), static_cast<float>(point.y));
}

std::string CSdlWindow::getScancodeName(std::uint16_t scancode) {
    return SDL_GetScancodeName(static_cast<SDL_Scancode>(common::scancodeToUsage(scancode)));
}

void CSdlWindow::showMessageBox(std::string_view message, std::string_view title) {
    SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_WARNING, std::string(title).c_str(),
                             std::string(message).c_str(), window_.get());
}

common::SPresentation CSdlWindow::getPresentation() const {
    common::SPresentation presentation{.window = {}, .drawable = {}, .logical = logical_};
    SDL_GetWindowSize(window_.get(), &presentation.window.width, &presentation.window.height);
    SDL_GetWindowSizeInPixels(window_.get(), &presentation.drawable.width,
                              &presentation.drawable.height);
    return presentation;
}

} // namespace nocturne::platform::sdl
