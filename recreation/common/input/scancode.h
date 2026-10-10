#pragma once

#include <cstdint>

namespace nocturne::common {

// Set-1 scancodes as Win32 reports them in lParam bits 16-24; this bit marks an extended key.
inline constexpr std::uint16_t kExtendedScancode = 0x100;

// USB HID keyboard usage (page 0x07) to its set-1 scancode; zero when the key has none.
[[nodiscard]] std::uint16_t usageToScancode(std::uint16_t usage);
// The first usage producing the scancode; zero when none does.
[[nodiscard]] std::uint16_t scancodeToUsage(std::uint16_t scancode);
// The control character TranslateMessage posts as WM_CHAR for a key-down, or zero. key is the
// layout's character for the key; Alt makes it WM_SYSCHAR, which the game ignores.
[[nodiscard]] char keyToControlCharacter(std::uint16_t scancode, char32_t key, bool ctrl, bool alt);

} // namespace nocturne::common
