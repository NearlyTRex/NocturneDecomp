#pragma once

#include "platform/window.h"

#include <deque>
#include <memory>

struct SDL_Window;

namespace nocturne::platform::sdl {

// Needs a CSdlContext.
class CSdlWindow final : public IWindow {
public:
    CSdlWindow(std::string_view title, int width, int height);

    [[nodiscard]] bool pollEvent(SWindowEvent &event) override;
    void warpMouse(int x, int y) override;
    [[nodiscard]] std::string getScancodeName(std::uint16_t scancode) override;
    void showMessageBox(std::string_view message, std::string_view title) override;

private:
    struct SWindowDeleter {
        void operator()(SDL_Window *window) const;
    };

    std::unique_ptr<SDL_Window, SWindowDeleter> window_;
    // One SDL event can become several, such as a text event of several characters.
    std::deque<SWindowEvent> pending_;
};

} // namespace nocturne::platform::sdl
