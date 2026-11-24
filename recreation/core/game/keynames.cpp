#include "core/game/keynames.h"

#include "engine/gamepadinput.h"
#include "engine/keys/inputcodetype.h"
#include "engine/keys/keyname.h"
#include "support/newmsg/newmsg.h"

#include <algorithm>
#include <array>
#include <format>
#include <optional>
#include <string_view>

namespace nocturne::core {
namespace {

using engine::EInputCodeType;

struct SDeviceName {
    EInputCodeType code;
    std::string_view name;
};

// The joystick's directions are the enhanced game's left stick.
constexpr std::array<SDeviceName, 20> kDeviceNames{{
    {.code = EInputCodeType::INPUT_NONE, .name = "(none)"},
    {.code = EInputCodeType::DIM_XAXIS, .name = "Mouse X-Axis"},
    {.code = EInputCodeType::DIM_YAXIS, .name = "Mouse Y-Axis"},
    {.code = EInputCodeType::DIM_LBUTTON, .name = "Mouse B1"},
    {.code = EInputCodeType::DIM_RBUTTON, .name = "Mouse B2"},
    {.code = EInputCodeType::DIM_MBUTTON, .name = "Mouse B3"},
    {.code = EInputCodeType::DIJ_BUTTON1, .name = "Button 1"},
    {.code = EInputCodeType::DIJ_BUTTON2, .name = "Button 2"},
    {.code = EInputCodeType::DIJ_BUTTON3, .name = "Button 3"},
    {.code = EInputCodeType::DIJ_BUTTON4, .name = "Button 4"},
    {.code = EInputCodeType::DIJ_BUTTON5, .name = "Button 5"},
    {.code = EInputCodeType::DIJ_BUTTON6, .name = "Button 6"},
    {.code = EInputCodeType::DIJ_BUTTON7, .name = "Button 7"},
    {.code = EInputCodeType::DIJ_BUTTON8, .name = "Button 8"},
    {.code = EInputCodeType::DIJ_BUTTON9, .name = "Button 9"},
    {.code = EInputCodeType::DIJ_BUTTON10, .name = "Button 10"},
    {.code = EInputCodeType::DIJ_LEFT, .name = "Left Stick Left"},
    {.code = EInputCodeType::DIJ_RIGHT, .name = "Left Stick Right"},
    {.code = EInputCodeType::DIJ_UP, .name = "Left Stick Forward"},
    {.code = EInputCodeType::DIJ_DOWN, .name = "Left Stick Back"},
}};

constexpr std::string_view kNameSeparator = ", ";

} // namespace

// The original copied the name into the next of ten shared buffers. The pad's own codes are
// named as the pad plugged in labels them.
// nocedit 0x005134e0
std::string getKeyDisplayName(const SKeyNameOwners &owners, EInputCodeType key_code) {
    const std::optional<std::string_view> pad_name = owners.gamepad.getCodeName(key_code);
    if (pad_name) {
        return std::string(*pad_name);
    }
    const auto *found = std::ranges::find(kDeviceNames, key_code, &SDeviceName::code);
    if (found != kDeviceNames.end()) {
        return std::string(owners.messages.getLocalizedString(found->name));
    }
    return std::string(engine::getKeyName(key_code));
}

std::string getChordDisplayName(const SKeyNameOwners &owners, const SKeyChord &chord) {
    std::string name;
    for (const SChordModifier &modifier : kChordModifiers) {
        if (chord.*modifier.flag) {
            name += std::format("{}+", modifier.label);
        }
    }
    return name + getKeyDisplayName(owners, chord.code);
}

std::string getBindingNames(const SKeyNameOwners &owners, std::span<const SKeyChord> chords) {
    std::string names;
    for (const SKeyChord &chord : chords) {
        names += names.empty() ? "" : kNameSeparator;
        names += getChordDisplayName(owners, chord);
    }
    return names.empty() ? getKeyDisplayName(owners, EInputCodeType::INPUT_NONE) : names;
}

} // namespace nocturne::core
