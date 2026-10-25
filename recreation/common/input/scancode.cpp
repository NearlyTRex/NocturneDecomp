#include "common/input/scancode.h"

#include <algorithm>
#include <array>

namespace nocturne::common {
namespace {

struct SKeyMapping {
    std::uint16_t usage;
    std::uint16_t scancode;
};

constexpr std::uint16_t kExtended = kExtendedScancode;

// Win32 reports Num Lock as extended and Pause as plain 0x45, the reverse of the raw set-1 bytes.
constexpr std::array kKeyMappings = std::to_array<SKeyMapping>({
    {.usage = 0x04, .scancode = 0x1e},
    {.usage = 0x05, .scancode = 0x30},
    {.usage = 0x06, .scancode = 0x2e},
    {.usage = 0x07, .scancode = 0x20},
    {.usage = 0x08, .scancode = 0x12},
    {.usage = 0x09, .scancode = 0x21},
    {.usage = 0x0a, .scancode = 0x22},
    {.usage = 0x0b, .scancode = 0x23},
    {.usage = 0x0c, .scancode = 0x17},
    {.usage = 0x0d, .scancode = 0x24},
    {.usage = 0x0e, .scancode = 0x25},
    {.usage = 0x0f, .scancode = 0x26},
    {.usage = 0x10, .scancode = 0x32},
    {.usage = 0x11, .scancode = 0x31},
    {.usage = 0x12, .scancode = 0x18},
    {.usage = 0x13, .scancode = 0x19},
    {.usage = 0x14, .scancode = 0x10},
    {.usage = 0x15, .scancode = 0x13},
    {.usage = 0x16, .scancode = 0x1f},
    {.usage = 0x17, .scancode = 0x14},
    {.usage = 0x18, .scancode = 0x16},
    {.usage = 0x19, .scancode = 0x2f},
    {.usage = 0x1a, .scancode = 0x11},
    {.usage = 0x1b, .scancode = 0x2d},
    {.usage = 0x1c, .scancode = 0x15},
    {.usage = 0x1d, .scancode = 0x2c},
    {.usage = 0x1e, .scancode = 0x02},
    {.usage = 0x1f, .scancode = 0x03},
    {.usage = 0x20, .scancode = 0x04},
    {.usage = 0x21, .scancode = 0x05},
    {.usage = 0x22, .scancode = 0x06},
    {.usage = 0x23, .scancode = 0x07},
    {.usage = 0x24, .scancode = 0x08},
    {.usage = 0x25, .scancode = 0x09},
    {.usage = 0x26, .scancode = 0x0a},
    {.usage = 0x27, .scancode = 0x0b},
    {.usage = 0x28, .scancode = 0x1c},
    {.usage = 0x29, .scancode = 0x01},
    {.usage = 0x2a, .scancode = 0x0e},
    {.usage = 0x2b, .scancode = 0x0f},
    {.usage = 0x2c, .scancode = 0x39},
    {.usage = 0x2d, .scancode = 0x0c},
    {.usage = 0x2e, .scancode = 0x0d},
    {.usage = 0x2f, .scancode = 0x1a},
    {.usage = 0x30, .scancode = 0x1b},
    {.usage = 0x31, .scancode = 0x2b},
    {.usage = 0x32, .scancode = 0x2b},
    {.usage = 0x33, .scancode = 0x27},
    {.usage = 0x34, .scancode = 0x28},
    {.usage = 0x35, .scancode = 0x29},
    {.usage = 0x36, .scancode = 0x33},
    {.usage = 0x37, .scancode = 0x34},
    {.usage = 0x38, .scancode = 0x35},
    {.usage = 0x39, .scancode = 0x3a},
    {.usage = 0x3a, .scancode = 0x3b},
    {.usage = 0x3b, .scancode = 0x3c},
    {.usage = 0x3c, .scancode = 0x3d},
    {.usage = 0x3d, .scancode = 0x3e},
    {.usage = 0x3e, .scancode = 0x3f},
    {.usage = 0x3f, .scancode = 0x40},
    {.usage = 0x40, .scancode = 0x41},
    {.usage = 0x41, .scancode = 0x42},
    {.usage = 0x42, .scancode = 0x43},
    {.usage = 0x43, .scancode = 0x44},
    {.usage = 0x44, .scancode = 0x57},
    {.usage = 0x45, .scancode = 0x58},
    {.usage = 0x46, .scancode = kExtended | 0x37},
    {.usage = 0x47, .scancode = 0x46},
    {.usage = 0x48, .scancode = 0x45},
    {.usage = 0x49, .scancode = kExtended | 0x52},
    {.usage = 0x4a, .scancode = kExtended | 0x47},
    {.usage = 0x4b, .scancode = kExtended | 0x49},
    {.usage = 0x4c, .scancode = kExtended | 0x53},
    {.usage = 0x4d, .scancode = kExtended | 0x4f},
    {.usage = 0x4e, .scancode = kExtended | 0x51},
    {.usage = 0x4f, .scancode = kExtended | 0x4d},
    {.usage = 0x50, .scancode = kExtended | 0x4b},
    {.usage = 0x51, .scancode = kExtended | 0x50},
    {.usage = 0x52, .scancode = kExtended | 0x48},
    {.usage = 0x53, .scancode = kExtended | 0x45},
    {.usage = 0x54, .scancode = kExtended | 0x35},
    {.usage = 0x55, .scancode = 0x37},
    {.usage = 0x56, .scancode = 0x4a},
    {.usage = 0x57, .scancode = 0x4e},
    {.usage = 0x58, .scancode = kExtended | 0x1c},
    {.usage = 0x59, .scancode = 0x4f},
    {.usage = 0x5a, .scancode = 0x50},
    {.usage = 0x5b, .scancode = 0x51},
    {.usage = 0x5c, .scancode = 0x4b},
    {.usage = 0x5d, .scancode = 0x4c},
    {.usage = 0x5e, .scancode = 0x4d},
    {.usage = 0x5f, .scancode = 0x47},
    {.usage = 0x60, .scancode = 0x48},
    {.usage = 0x61, .scancode = 0x49},
    {.usage = 0x62, .scancode = 0x52},
    {.usage = 0x63, .scancode = 0x53},
    {.usage = 0x64, .scancode = 0x56},
    {.usage = 0x65, .scancode = kExtended | 0x5d},
    {.usage = 0x67, .scancode = 0x59},
    {.usage = 0x68, .scancode = 0x64},
    {.usage = 0x69, .scancode = 0x65},
    {.usage = 0x6a, .scancode = 0x66},
    {.usage = 0x6b, .scancode = 0x67},
    {.usage = 0x6c, .scancode = 0x68},
    {.usage = 0x6d, .scancode = 0x69},
    {.usage = 0x6e, .scancode = 0x6a},
    {.usage = 0x6f, .scancode = 0x6b},
    {.usage = 0x70, .scancode = 0x6c},
    {.usage = 0x71, .scancode = 0x6d},
    {.usage = 0x72, .scancode = 0x6e},
    {.usage = 0x73, .scancode = 0x76},
    {.usage = 0x85, .scancode = 0x7e},
    {.usage = 0x87, .scancode = 0x73},
    {.usage = 0x88, .scancode = 0x70},
    {.usage = 0x89, .scancode = 0x7d},
    {.usage = 0x8a, .scancode = 0x79},
    {.usage = 0x8b, .scancode = 0x7b},
    {.usage = 0xe0, .scancode = 0x1d},
    {.usage = 0xe1, .scancode = 0x2a},
    {.usage = 0xe2, .scancode = 0x38},
    {.usage = 0xe3, .scancode = kExtended | 0x5b},
    {.usage = 0xe4, .scancode = kExtended | 0x1d},
    {.usage = 0xe5, .scancode = 0x36},
    {.usage = 0xe6, .scancode = kExtended | 0x38},
    {.usage = 0xe7, .scancode = kExtended | 0x5c},
});

} // namespace

std::uint16_t usageToScancode(std::uint16_t usage) {
    const auto *const found = std::ranges::find(kKeyMappings, usage, &SKeyMapping::usage);
    return found == kKeyMappings.end() ? 0 : found->scancode;
}

std::uint16_t scancodeToUsage(std::uint16_t scancode) {
    const auto *const found = std::ranges::find(kKeyMappings, scancode, &SKeyMapping::scancode);
    return found == kKeyMappings.end() ? 0 : found->usage;
}

char keyToControlCharacter(std::uint16_t scancode, char32_t key, bool ctrl, bool alt) {
    if (alt) {
        return 0;
    }
    switch (scancode) {
    case 0x01:
        return '\x1b';
    case 0x0e:
        return ctrl ? '\x7f' : '\b';
    case 0x0f:
        return ctrl ? '\0' : '\t';
    case 0x1c:
    case kExtended | 0x1c:
        return ctrl ? '\n' : '\r';
    default:
        break;
    }
    if (!ctrl) {
        return 0;
    }
    // Ctrl with a letter, '[', '\' or ']' gives the character's low five bits: 0x01-0x1D.
    const bool letter = (key >= U'a' && key <= U'z') || (key >= U'A' && key <= U'Z');
    const bool bracket = key == U'[' || key == U'\\' || key == U']';
    return letter || bracket ? static_cast<char>(key & 0x1fU) : '\0';
}

} // namespace nocturne::common
