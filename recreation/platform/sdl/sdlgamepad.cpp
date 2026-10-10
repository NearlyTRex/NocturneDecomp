#include "platform/sdl/sdlgamepad.h"

#include "platform/sdl/sdlfree.h"

#include <SDL3/SDL.h>
#include <algorithm>
#include <span>
#include <string>

namespace nocturne::platform::sdl {

// The enums are cast straight to SDL's, so their values must agree.
static_assert(static_cast<int>(EGamepadButton::A) == SDL_GAMEPAD_BUTTON_SOUTH);
static_assert(static_cast<int>(EGamepadButton::Y) == SDL_GAMEPAD_BUTTON_NORTH);
static_assert(static_cast<int>(EGamepadButton::DpadRight) == SDL_GAMEPAD_BUTTON_DPAD_RIGHT);
static_assert(static_cast<int>(EGamepadButton::Paddle1) == SDL_GAMEPAD_BUTTON_RIGHT_PADDLE1);
static_assert(static_cast<int>(EGamepadButton::Paddle4) == SDL_GAMEPAD_BUTTON_LEFT_PADDLE2);
static_assert(static_cast<int>(EGamepadButton::Touchpad) == SDL_GAMEPAD_BUTTON_TOUCHPAD);
static_assert(static_cast<int>(EGamepadButton::Misc6) == SDL_GAMEPAD_BUTTON_MISC6);
static_assert(static_cast<int>(EGamepadButton::Count) == SDL_GAMEPAD_BUTTON_COUNT);
static_assert(static_cast<int>(EGamepadAxis::LeftX) == SDL_GAMEPAD_AXIS_LEFTX);
static_assert(static_cast<int>(EGamepadAxis::RightTrigger) == SDL_GAMEPAD_AXIS_RIGHT_TRIGGER);
static_assert(static_cast<int>(EGamepadAxis::Count) == SDL_GAMEPAD_AXIS_COUNT);
static_assert(static_cast<int>(EGamepadType::Unknown) == SDL_GAMEPAD_TYPE_UNKNOWN);
static_assert(static_cast<int>(EGamepadType::PS5) == SDL_GAMEPAD_TYPE_PS5);
static_assert(static_cast<int>(EGamepadType::GameCube) == SDL_GAMEPAD_TYPE_GAMECUBE);
static_assert(static_cast<int>(EGamepadType::GameCube) + 1 == SDL_GAMEPAD_TYPE_COUNT);

void CSdlGamepad::SGamepadDeleter::operator()(SDL_Gamepad *gamepad) const {
    SDL_CloseGamepad(gamepad);
}

bool CSdlGamepad::updateGamepad() {
    if (gamepad_ && SDL_GamepadConnected(gamepad_.get())) {
        return true;
    }
    gamepad_.reset();
    int count = 0;
    const SdlOwned<SDL_JoystickID> ids(SDL_GetGamepads(&count));
    const std::span<const SDL_JoystickID> attached(ids.get(), ids ? count : 0);
    return std::ranges::any_of(attached, [this](SDL_JoystickID id) {
        gamepad_.reset(SDL_OpenGamepad(id));
        return gamepad_ != nullptr;
    });
}

// SDL reads a null gamepad as released, centred and of unknown type.
bool CSdlGamepad::getGamepadButton(EGamepadButton button) {
    return SDL_GetGamepadButton(gamepad_.get(), static_cast<SDL_GamepadButton>(button));
}

std::int16_t CSdlGamepad::getGamepadAxis(EGamepadAxis axis) {
    return SDL_GetGamepadAxis(gamepad_.get(), static_cast<SDL_GamepadAxis>(axis));
}

EGamepadType CSdlGamepad::getGamepadType() {
    return static_cast<EGamepadType>(SDL_GetGamepadType(gamepad_.get()));
}

int CSdlGamepad::addGamepadMappings(std::string_view path) {
    return SDL_AddGamepadMappingsFromFile(std::string(path).c_str());
}

} // namespace nocturne::platform::sdl
