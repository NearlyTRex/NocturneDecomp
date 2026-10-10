#pragma once

#include "common/video/presentation.h"
#include "platform/window.h"

#include <deque>
#include <memory>

struct SDL_Window;

namespace nocturne::platform::sdl {

// An OpenGL window. Mouse positions arrive, and warps leave, in the game's render pixels,
// mapped through the letterbox CSdlDisplay draws. Needs a CSdlContext.
class CSdlWindow final : public IWindow {
public:
    CSdlWindow(std::string_view title, int width, int height);

    // For the display, which presents into this window.
    [[nodiscard]] SDL_Window *getSdlWindow() const;
    // The render resolution the mouse maps to; set by the display with each mode.
    void setLogicalSize(common::SExtent logical);

    [[nodiscard]] bool pollEvent(SWindowEvent &event) override;
    void warpMouse(int x, int y) override;
    [[nodiscard]] std::string getScancodeName(std::uint16_t scancode) override;
    void showMessageBox(std::string_view message, std::string_view title) override;

private:
    struct SWindowDeleter {
        void operator()(SDL_Window *window) const;
    };

    [[nodiscard]] common::SPresentation getPresentation() const;

    std::unique_ptr<SDL_Window, SWindowDeleter> window_;
    common::SExtent logical_;
    // One SDL event can become several, such as a text event of several characters.
    std::deque<SWindowEvent> pending_;
};

} // namespace nocturne::platform::sdl
