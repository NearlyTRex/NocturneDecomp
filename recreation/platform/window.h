#pragma once

#include <cstdint>
#include <string>
#include <string_view>

namespace nocturne::platform {

enum class EWindowEventType : std::uint8_t {
    Quit,
    Activate,
    Deactivate,
    KeyDown,
    KeyUp,
    Character,
    MouseMove,
    MouseButtonDown,
    MouseButtonUp,
    MouseWheel,
};

enum class EMouseButton : std::uint8_t { Left, Right, Middle };

struct SWindowEvent {
    EWindowEventType type = EWindowEventType::Quit;
    // PC set-1 scancode as Win32 reports it in lParam bits 16-24; 0x100 marks an extended key.
    std::uint16_t scancode = 0;
    char character = 0;
    int x = 0;
    int y = 0;
    EMouseButton button = EMouseButton::Left;
    // Multiples of WHEEL_DELTA (120) per notch, as WM_MOUSEWHEEL; positive is away from the user.
    int wheel_delta = 0;
};

class IWindow {
public:
    virtual ~IWindow() = default;

    // False once no event is waiting.
    [[nodiscard]] virtual bool pollEvent(SWindowEvent &event) = 0;
    virtual void warpMouse(int x, int y) = 0;
    // Empty when the OS has no name for the key.
    [[nodiscard]] virtual std::string getScancodeName(std::uint16_t scancode) = 0;
    // A warning box with an OK button, as MessageBoxA with MB_ICONWARNING.
    virtual void showMessageBox(std::string_view message, std::string_view title) = 0;
};

} // namespace nocturne::platform
