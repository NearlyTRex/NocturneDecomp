#pragma once

#include "platform/gamepad.h"

#include <memory>

struct SDL_Gamepad;

namespace nocturne::platform::sdl {

// Needs a CSdlContext.
class CSdlGamepad final : public IGamepad {
public:
    [[nodiscard]] bool updateGamepad() override;
    [[nodiscard]] bool getGamepadButton(EGamepadButton button) override;
    [[nodiscard]] std::int16_t getGamepadAxis(EGamepadAxis axis) override;
    [[nodiscard]] EGamepadType getGamepadType() override;
    int addGamepadMappings(std::string_view path) override;

private:
    struct SGamepadDeleter {
        void operator()(SDL_Gamepad *gamepad) const;
    };

    std::unique_ptr<SDL_Gamepad, SGamepadDeleter> gamepad_;
};

} // namespace nocturne::platform::sdl
