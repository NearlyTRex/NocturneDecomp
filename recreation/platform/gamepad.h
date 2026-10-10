#pragma once

#include <cstdint>
#include <string_view>

namespace nocturne::platform {

// Positions as on an Xbox pad. The values are frozen: the game saves 0x160 + value as an input
// code in the player's INI, and the 26 fill the span it reserves for pad buttons.
enum class EGamepadButton : std::uint8_t {
    A,
    B,
    X,
    Y,
    Back,
    Guide,
    Start,
    LeftStick,
    RightStick,
    LeftShoulder,
    RightShoulder,
    DpadUp,
    DpadDown,
    DpadLeft,
    DpadRight,
    Misc1,
    Paddle1,
    Paddle2,
    Paddle3,
    Paddle4,
    Touchpad,
    Misc2,
    Misc3,
    Misc4,
    Misc5,
    Misc6,
    Count,
};

enum class EGamepadAxis : std::uint8_t {
    LeftX,
    LeftY,
    RightX,
    RightY,
    LeftTrigger,
    RightTrigger,
    Count,
};

// Which labels the face buttons carry.
enum class EGamepadType : std::uint8_t {
    Unknown,
    Standard,
    Xbox360,
    XboxOne,
    PS3,
    PS4,
    PS5,
    SwitchPro,
    JoyConLeft,
    JoyConRight,
    JoyConPair,
    GameCube,
};

// The first gamepad attached. Reads as released, centred and Unknown while none is.
class IGamepad {
public:
    virtual ~IGamepad() = default;

    // Drops a gamepad that was unplugged and opens one that was plugged in; once a frame.
    // False while none is attached.
    [[nodiscard]] virtual bool updateGamepad() = 0;
    [[nodiscard]] virtual bool getGamepadButton(EGamepadButton button) = 0;
    // Sticks -32768..32767 with y positive down; triggers 0..32767.
    [[nodiscard]] virtual std::int16_t getGamepadAxis(EGamepadAxis axis) = 0;
    [[nodiscard]] virtual EGamepadType getGamepadType() = 0;
    // SDL gamecontrollerdb format; mappings added, or -1 when the file cannot be read.
    virtual int addGamepadMappings(std::string_view path) = 0;
};

} // namespace nocturne::platform
