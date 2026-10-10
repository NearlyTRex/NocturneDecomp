#include "common/input/scancode.h"

#include <gtest/gtest.h>

#include <cstdint>

namespace nocturne::common {
namespace {

// Usages from the USB HID Usage Tables, keyboard page; scancodes from Microsoft's Keyboard Scan
// Code Specification as Win32 reports them.
TEST(Scancode, MapsLettersDigitsAndPunctuation) {
    EXPECT_EQ(usageToScancode(0x04), 0x1e); // A
    EXPECT_EQ(usageToScancode(0x1d), 0x2c); // Z
    EXPECT_EQ(usageToScancode(0x1e), 0x02); // 1
    EXPECT_EQ(usageToScancode(0x27), 0x0b); // 0
    EXPECT_EQ(usageToScancode(0x28), 0x1c); // Enter
    EXPECT_EQ(usageToScancode(0x35), 0x29); // Grave
    EXPECT_EQ(usageToScancode(0x45), 0x58); // F12
}

TEST(Scancode, MarksNavigationKeysExtended) {
    EXPECT_EQ(usageToScancode(0x52), 0x148); // Up
    EXPECT_EQ(usageToScancode(0x50), 0x14b); // Left
    EXPECT_EQ(usageToScancode(0x4c), 0x153); // Delete
    EXPECT_EQ(usageToScancode(0xe4), 0x11d); // Right Ctrl
    EXPECT_EQ(usageToScancode(0xe6), 0x138); // Right Alt
}

TEST(Scancode, KeepsKeypadTwinsDistinctFromExtendedKeys) {
    EXPECT_EQ(usageToScancode(0x60), 0x48);  // Keypad 8
    EXPECT_EQ(usageToScancode(0x58), 0x11c); // Keypad Enter
    EXPECT_EQ(usageToScancode(0x54), 0x135); // Keypad /
}

TEST(Scancode, ReportsNumLockExtendedAndPausePlain) {
    EXPECT_EQ(usageToScancode(0x53), 0x145);
    EXPECT_EQ(usageToScancode(0x48), 0x45);
}

TEST(Scancode, MapsFunctionKeysAboveF12) {
    EXPECT_EQ(usageToScancode(0x68), 0x64); // F13
    EXPECT_EQ(usageToScancode(0x72), 0x6e); // F23
    EXPECT_EQ(usageToScancode(0x73), 0x76); // F24
}

TEST(Scancode, MapsInternationalKeys) {
    EXPECT_EQ(usageToScancode(0x67), 0x59); // Keypad =
    EXPECT_EQ(usageToScancode(0x85), 0x7e); // Keypad ,
    EXPECT_EQ(usageToScancode(0x87), 0x73); // International1 (Ro)
    EXPECT_EQ(usageToScancode(0x89), 0x7d); // International3 (Yen)
    EXPECT_EQ(usageToScancode(0x8b), 0x7b); // International5 (Muhenkan)
}

TEST(Scancode, UnknownUsageHasNoScancode) {
    EXPECT_EQ(usageToScancode(0), 0);
    EXPECT_EQ(usageToScancode(0x90), 0); // LANG1
}

TEST(Scancode, EveryScancodeMapsBackToAUsageThatProducesIt) {
    for (std::uint16_t usage = 0; usage < 0x100; ++usage) {
        const std::uint16_t scancode = usageToScancode(usage);
        if (scancode != 0) {
            EXPECT_EQ(usageToScancode(scancodeToUsage(scancode)), scancode) << usage;
        }
    }
}

TEST(Scancode, NonUsBackslashDuplicateMapsBackToTheUsKey) {
    EXPECT_EQ(usageToScancode(0x32), 0x2b);
    EXPECT_EQ(scancodeToUsage(0x2b), 0x31);
}

TEST(Scancode, UnknownScancodeHasNoUsage) {
    EXPECT_EQ(scancodeToUsage(0), 0);
    EXPECT_EQ(scancodeToUsage(0x1ff), 0);
}

// Characters TranslateMessage posts on a US layout.
TEST(Scancode, TypingKeysPostControlCharacters) {
    EXPECT_EQ(keyToControlCharacter(0x01, U'\x1b', false, false), '\x1b');
    EXPECT_EQ(keyToControlCharacter(0x0e, U'\b', false, false), '\b');
    EXPECT_EQ(keyToControlCharacter(0x0f, U'\t', false, false), '\t');
    EXPECT_EQ(keyToControlCharacter(0x1c, U'\r', false, false), '\r');
    EXPECT_EQ(keyToControlCharacter(0x11c, U'\r', false, false), '\r');
}

TEST(Scancode, CtrlChangesTypingKeys) {
    EXPECT_EQ(keyToControlCharacter(0x01, U'\x1b', true, false), '\x1b');
    EXPECT_EQ(keyToControlCharacter(0x0e, U'\b', true, false), '\x7f');
    EXPECT_EQ(keyToControlCharacter(0x0f, U'\t', true, false), '\0');
    EXPECT_EQ(keyToControlCharacter(0x1c, U'\r', true, false), '\n');
}

TEST(Scancode, CtrlLetterPostsItsControlCode) {
    EXPECT_EQ(keyToControlCharacter(0x1e, U'a', true, false), '\x01');
    EXPECT_EQ(keyToControlCharacter(0x2c, U'z', true, false), '\x1a');
}

TEST(Scancode, CtrlShiftLetterPostsTheSameControlCode) {
    EXPECT_EQ(keyToControlCharacter(0x1e, U'A', true, false), '\x01');
    EXPECT_EQ(keyToControlCharacter(0x2c, U'Z', true, false), '\x1a');
}

TEST(Scancode, CtrlFollowsTheLayoutNotThePosition) {
    // The AZERTY key in the US Q position types 'a'.
    EXPECT_EQ(keyToControlCharacter(0x10, U'a', true, false), '\x01');
}

TEST(Scancode, CtrlBracketsPostEscapeAndFieldSeparators) {
    EXPECT_EQ(keyToControlCharacter(0x1a, U'[', true, false), '\x1b');
    EXPECT_EQ(keyToControlCharacter(0x2b, U'\\', true, false), '\x1c');
    EXPECT_EQ(keyToControlCharacter(0x1b, U']', true, false), '\x1d');
}

TEST(Scancode, CtrlWithOtherKeysPostsNothing) {
    EXPECT_EQ(keyToControlCharacter(0x02, U'1', true, false), '\0');
    EXPECT_EQ(keyToControlCharacter(0x148, 0, true, false), '\0');
    EXPECT_EQ(keyToControlCharacter(0x1e, U'\x7f', true, false), '\0');
    EXPECT_EQ(keyToControlCharacter(0x1e, U'@', true, false), '\0');
    EXPECT_EQ(keyToControlCharacter(0x1e, U'`', true, false), '\0');
}

TEST(Scancode, PrintableKeysWithoutCtrlPostNoControlCharacter) {
    EXPECT_EQ(keyToControlCharacter(0x1e, U'a', false, false), '\0');
    EXPECT_EQ(keyToControlCharacter(0x148, 0, false, false), '\0');
}

TEST(Scancode, AltPostsSysCharInstead) {
    EXPECT_EQ(keyToControlCharacter(0x1c, U'\r', false, true), '\0');
    EXPECT_EQ(keyToControlCharacter(0x1e, U'a', true, true), '\0');
}

} // namespace
} // namespace nocturne::common
