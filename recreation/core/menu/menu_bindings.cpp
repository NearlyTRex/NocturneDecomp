#include "core/actor/notported.h"
#include "core/game/controlbindings.h"
#include "core/game/controlmode.h"
#include "core/game/game.h"
#include "core/game/gameaction.h"
#include "core/menu/menu.h"
#include "engine/2d/2d.h"
#include "engine/gamepadinput.h"
#include "engine/keys/inputcodetype.h"
#include "engine/keys/keyname.h"
#include "engine/keys/keys.h"
#include "engine/menuinput.h"
#include "engine/rawinput.h"
#include "engine/screendevice.h"
#include "engine/special/special.h"
#include "shape/edittool/editortools.h"
#include "shape/edittool/picklist.h"
#include "support/newmsg/newmsg.h"

#include <algorithm>
#include <array>
#include <cstddef>
#include <cstdint>
#include <format>
#include <iterator>
#include <optional>
#include <ranges>
#include <span>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

namespace nocturne::core {
namespace {

using engine::EInputCodeType;

struct SBindingRow {
    EGameAction action;
    std::string_view label;
};

// The original's list, in its order, and the map after it.
constexpr auto kBindingRows = std::to_array<SBindingRow>({
    {.action = EGameAction::Walk, .label = "Forward"},
    {.action = EGameAction::Backup, .label = "Back"},
    {.action = EGameAction::Run, .label = "Run"},
    {.action = EGameAction::Strafe, .label = "Strafe on"},
    {.action = EGameAction::StrafeLeft, .label = "Strafe left"},
    {.action = EGameAction::StrafeRight, .label = "Strafe right"},
    {.action = EGameAction::Left, .label = "Turn left"},
    {.action = EGameAction::Right, .label = "Turn right"},
    {.action = EGameAction::Fire, .label = "Fire / Action"},
    {.action = EGameAction::UseItem, .label = "Use item"},
    {.action = EGameAction::Light, .label = "Light"},
    {.action = EGameAction::Infrared, .label = "Night Vision"},
    {.action = EGameAction::Draw, .label = "Draw"},
    {.action = EGameAction::PointUp, .label = "Point up"},
    {.action = EGameAction::PointDown, .label = "Point down"},
    {.action = EGameAction::Jump, .label = "Jump"},
    {.action = EGameAction::Weapon1, .label = "Select pistol weapons"},
    {.action = EGameAction::Weapon2, .label = "Select assault weapons"},
    {.action = EGameAction::Weapon3, .label = "Select flame weapons"},
    {.action = EGameAction::Weapon4, .label = "Select grenade weapons"},
    {.action = EGameAction::Weapon5, .label = "Select melee weapons"},
    {.action = EGameAction::NextWeapon, .label = "Next weapon"},
    {.action = EGameAction::PrevWeapon, .label = "Previous weapon"},
    {.action = EGameAction::NextItem, .label = "Next item"},
    {.action = EGameAction::PrevItem, .label = "Previous item"},
    {.action = EGameAction::ItemDesc, .label = "Item description"},
    {.action = EGameAction::NextAmmo, .label = "Next ammo"},
    {.action = EGameAction::Map, .label = "Map"},
});

// The original's hotkeys, its developers' after the rest.
constexpr auto kHotkeyRows = std::to_array<SBindingRow>({
    {.action = EGameAction::Mute, .label = "Mute sound"},
    {.action = EGameAction::SaveGame, .label = "Save game"},
    {.action = EGameAction::LoadGame, .label = "Load game"},
    {.action = EGameAction::QuickSave, .label = "Quick save"},
    {.action = EGameAction::QuickLoad, .label = "Quick load"},
    {.action = EGameAction::KeysHelp, .label = "Keys help"},
    {.action = EGameAction::GammaDown, .label = "Gamma down"},
    {.action = EGameAction::GammaUp, .label = "Gamma up"},
    {.action = EGameAction::MotionDebug, .label = "Motion debug"},
    {.action = EGameAction::EditMode, .label = "Edit mode"},
    {.action = EGameAction::Pause, .label = "Pause"},
    {.action = EGameAction::CameraDebug, .label = "Camera debug"},
    {.action = EGameAction::ScriptView, .label = "Script view"},
    {.action = EGameAction::DebugDisplay, .label = "Debug display"},
    {.action = EGameAction::Console, .label = "Console"},
    {.action = EGameAction::CameraToggle, .label = "Camera on/off"},
    {.action = EGameAction::AmbientUp, .label = "Ambient light up"},
    {.action = EGameAction::AmbientDown, .label = "Ambient light down"},
    {.action = EGameAction::NextCamera, .label = "Next camera (edit mode)"},
    {.action = EGameAction::PrevCamera, .label = "Previous camera (edit mode)"},
    {.action = EGameAction::ScriptRun, .label = "Run or stop script (script debug)"},
    {.action = EGameAction::ScriptResume, .label = "Resume script (script debug)"},
    {.action = EGameAction::ScriptResetDialog, .label = "Reset dialog (script debug)"},
});
static_assert(kBindingRows.size() + kHotkeyRows.size() == kGameActionCount);

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

constexpr std::string_view kInvalidBindings =
    "One or more keys not valid.  Restoring default controls.";
constexpr std::string_view kNameSeparator = ", ";
constexpr auto kFirstCode = static_cast<std::size_t>(EInputCodeType::DIK_ESCAPE);

[[nodiscard]] bool isMouseCode(EInputCodeType code) {
    return (code >= EInputCodeType::DIM_LBUTTON && code <= EInputCodeType::DIM_RBUTTON) ||
           code == EInputCodeType::DIM_MBUTTON || code == EInputCodeType::DIM_XAXIS ||
           code == EInputCodeType::DIM_YAXIS;
}

[[nodiscard]] bool isJoystickCode(EInputCodeType code) {
    return (code >= EInputCodeType::DIJ_BUTTON1 && code <= EInputCodeType::DIJ_BUTTON10) ||
           (code >= EInputCodeType::DIJ_LEFT && code <= EInputCodeType::DIJ_DOWN);
}

// A pick list that Delete leaves as Cancel does, saying so.
class CBindingList final : public shape::CPickList {
public:
    explicit CBindingList(const shape::SPickListOwners &owners)
        : CPickList(owners), menu_input_(owners.menu_input) {}

    int handleInput() override {
        if (menu_input_.takeMenuAction(engine::EMenuAction::Delete)) {
            delete_pressed_ = true;
            return kCancelled;
        }
        return CPickList::handleInput();
    }

    [[nodiscard]] bool getDeletePressed() const {
        return delete_pressed_;
    }

private:
    engine::CMenuInput &menu_input_;
    bool delete_pressed_ = false;
};

} // namespace

// The original copied the name into the next of ten shared buffers. The pad's own codes are
// named as the pad plugged in labels them.
// nocedit 0x005134e0
std::string CMenu::getKeyDisplayName(EInputCodeType key_code) const {
    const std::optional<std::string_view> pad_name = owners_.gamepad.getCodeName(key_code);
    if (pad_name) {
        return std::string(*pad_name);
    }
    const auto *found = std::ranges::find(kDeviceNames, key_code, &SDeviceName::code);
    if (found != kDeviceNames.end()) {
        return std::string(owners_.messages.getLocalizedString(found->name));
    }
    return std::string(engine::getKeyName(key_code));
}

std::string CMenu::getChordDisplayName(const SKeyChord &chord) const {
    std::string name;
    for (const SChordModifier &modifier : kChordModifiers) {
        if (chord.*modifier.flag) {
            name += std::format("{}+", modifier.label);
        }
    }
    return name + getKeyDisplayName(chord.code);
}

// The original answered the other way round, 1 for a code that doesn't suit, and took a
// description it never read. The gamepad's own codes are the enhanced game's, and suit every
// type.
// nocedit 0x00513720
bool CMenu::isKeyCodeValidForMode(EInputCodeType key_code) const {
    const EControlMode mode = owners_.game.game_control;
    if (mode == EControlMode::CONTROL_MODE_KEYBOARD) {
        return !isMouseCode(key_code) && !isJoystickCode(key_code);
    }
    if (mode == EControlMode::CONTROL_MODE_MOUSE) {
        return !isJoystickCode(key_code);
    }
    return !isMouseCode(key_code);
}

// The original bound one code to each action, which a pick replaced, and kept the joystick's
// and the mouse's directions from being moved; the enhanced game can move any binding, and lists
// the map's after the rest, then Hotkeys, which opens a list of its own. Restore defaults goes
// back once it is done. The lists keep to one column, as the original forced its own, whatever
// the names' widths. The pad is read with each present while a code is waited for, and its menu
// presses aren't codes, so a button counts once.
// nocedit 0x005138e0
void CMenu::configureCustomKeyBindings() {
    const CGame &game = owners_.game;
    if (game.game_control == EControlMode::CONTROL_MODE_GAMEPAD && game.x_center == 0) {
        quitNotPorted("CMenu", "calibrateGamepad");
    }
    int cursor = 0;
    while (true) {
        owners_.special.clearScreen();
        owners_.screen.swapBuffers();
        shape::CPickList list(owners_.pick_list);
        list.setForcedColumnCount(true);
        list.add(owners_.messages.getLocalizedString("Restore defaults"));
        std::vector<std::string_view> labels;
        labels.reserve(kBindingRows.size());
        for (const SBindingRow &row : kBindingRows) {
            const bool walks = row.action == EGameAction::Run && game.always_run != 0;
            labels.push_back(owners_.messages.getLocalizedString(walks ? "Walk" : row.label));
            list.add(std::format("{}\t{}", labels.back(), getBindingNames(row.action)));
        }
        list.add(owners_.messages.getLocalizedString("Hotkeys"));
        const int choice = list.displayChoicesAndWaitForInput(
            owners_.messages.getLocalizedString("Edit key settings"), cursor);
        const auto hotkeys = static_cast<int>(kBindingRows.size()) + 1;
        if (choice == hotkeys) {
            cursor = choice;
            configureHotkeyBindings();
            continue;
        }
        if (choice > 0) {
            cursor = choice;
            const auto row = static_cast<std::size_t>(choice - 1);
            editActionBindings(kBindingRows.at(row).action, labels.at(row));
            continue;
        }
        if (choice == 0) {
            owners_.game.restoreDefaultControls();
        } else {
            validateBindings();
        }
        return;
    }
}

// The enhanced game's: the hotkeys the original read from fixed keys, the developers' only in
// developer mode, though they are kept in nocturne.ini either way.
void CMenu::configureHotkeyBindings() {
    std::vector<SBindingRow> rows;
    std::ranges::copy_if(kHotkeyRows, std::back_inserter(rows), [this](const SBindingRow &row) {
        return owners_.game.developer_mode || !getGameActionInfo(row.action).developer;
    });
    int cursor = 0;
    while (true) {
        shape::CPickList list(owners_.pick_list);
        list.setForcedColumnCount(true);
        for (const SBindingRow &row : rows) {
            list.add(std::format("{}\t{}", owners_.messages.getLocalizedString(row.label),
                                 getBindingNames(row.action)));
        }
        const int choice = list.displayChoicesAndWaitForInput(
            owners_.messages.getLocalizedString("Hotkeys"), cursor);
        if (choice < 0) {
            return;
        }
        cursor = choice;
        const SBindingRow &row = rows.at(static_cast<std::size_t>(choice));
        editActionBindings(row.action, owners_.messages.getLocalizedString(row.label));
    }
}

std::string CMenu::getBindingNames(EGameAction action) const {
    std::string names;
    for (const SKeyChord &chord : owners_.game.controls.getBindings(action)) {
        names += names.empty() ? "" : kNameSeparator;
        names += getChordDisplayName(chord);
    }
    return names.empty() ? getKeyDisplayName(EInputCodeType::INPUT_NONE) : names;
}

// The enhanced game's: the original's pick went straight to capturing the action's one code. A
// chord taken is this action's alone, given up by this action's other slots and by any other
// action of its context holding it.
void CMenu::editActionBindings(EGameAction action, std::string_view label) {
    CControlBindings &controls = owners_.game.controls;
    int cursor = 0;
    while (true) {
        std::vector<SKeyChord> codes(std::from_range, controls.getBindings(action));
        CBindingList list(owners_.pick_list);
        list.setForcedColumnCount(true);
        for (const SKeyChord &chord : codes) {
            list.add(getChordDisplayName(chord));
        }
        list.add(owners_.messages.getLocalizedString("Add binding"));
        const int choice = list.displayChoicesAndWaitForInput(label, cursor);
        if (list.getDeletePressed()) {
            cursor = list.getCurrentIndex();
            if (std::cmp_less(cursor, codes.size())) {
                codes.erase(codes.begin() + cursor);
                controls.setBindings(action, std::move(codes));
            }
            continue;
        }
        if (choice < 0) {
            return;
        }
        cursor = choice;
        const std::optional<SKeyChord> captured = captureChord(label);
        if (!captured) {
            continue;
        }
        auto slot = static_cast<std::size_t>(choice);
        if (slot < codes.size()) {
            codes.erase(codes.begin() + choice);
        }
        std::erase(codes, *captured);
        slot = std::min(slot, codes.size());
        codes.insert(codes.begin() + static_cast<std::ptrdiff_t>(slot), *captured);
        const EActionContext context = getGameActionInfo(action).context;
        for (std::size_t index = 0; index < kGameActionCount; ++index) {
            const auto other = static_cast<EGameAction>(index);
            if (other == action || getGameActionInfo(other).context != context) {
                continue;
            }
            std::vector<SKeyChord> others(std::from_range, controls.getBindings(other));
            if (std::erase(others, *captured) != 0) {
                controls.setBindings(other, std::move(others));
            }
        }
        controls.setBindings(action, std::move(codes));
    }
}

// The original took the one code first held. A key that isn't a modifier is taken as it goes
// down, with the modifiers held then; a modifier pressed alone is taken as it is let go, so it
// can still become a chord's. A closing window cancels while nothing is taken, as it ends every
// wait for input.
std::optional<SKeyChord> CMenu::captureChord(std::string_view label) {
    engine::CKeys &keys = owners_.pick_list.keys;
    const engine::IRawInput &input = owners_.raw_input;
    shape::CEditorTools &tools = owners_.editor_tools;
    const std::string_view release =
        owners_.messages.getLocalizedString("OK - you can release the key now...");
    while (readHeldKeys().any) {
        tools.displayCenteredStatusMessage(release);
        if (keys.getKeyState(EInputCodeType::DIK_ESCAPE) != 0 || input.getInputDisabled()) {
            owners_.two_d.clearInputAndWait();
            return std::nullopt;
        }
        owners_.screen.swapBuffers();
    }
    tools.displayCenteredStatusMessage(std::format(
        "{}{}", owners_.messages.getLocalizedString("Press new key or button for "), label));
    keys.toggleInputMask(true);
    std::optional<SKeyChord> captured;
    std::optional<SKeyChord> modifier_alone;
    while (!captured) {
        owners_.screen.swapBuffers();
        if (input.getInputDisabled()) {
            keys.toggleInputMask(false);
            return std::nullopt;
        }
        const SHeldKeys held = readHeldKeys();
        if (held.chord && findChordModifier(held.chord->code) == nullptr) {
            captured = held.chord;
        } else if (held.chord) {
            modifier_alone = modifier_alone.value_or(*held.chord);
        } else if (!held.any && modifier_alone) {
            keys.toggleInputMask(false);
            return modifier_alone;
        }
    }
    tools.displayCenteredStatusMessage(release);
    while (readHeldKeys().any && !input.getInputDisabled()) {
        owners_.screen.swapBuffers();
    }
    keys.toggleInputMask(false);
    return captured;
}

// The original asked the keys of each code in turn.
CMenu::SHeldKeys CMenu::readHeldKeys() const {
    const std::span<const std::uint8_t> state = owners_.raw_input.getKeyboardState();
    SHeldKeys held;
    SKeyChord keyed;
    int key_count = 0;
    SKeyChord modifier_alone;
    int modifier_count = 0;
    // Slot 0 is no code; they start at Escape.
    for (std::size_t index = kFirstCode; index < state.size(); ++index) {
        if (state[index] == 0) {
            continue;
        }
        held.any = true;
        const auto code = static_cast<EInputCodeType>(index);
        const SChordModifier *modifier = findChordModifier(code);
        if (modifier == nullptr) {
            keyed.code = code;
            ++key_count;
            continue;
        }
        keyed.*modifier->flag = true;
        modifier_alone.code = code;
        ++modifier_count;
    }
    if (key_count == 1) {
        held.chord = keyed;
    } else if (key_count == 0 && modifier_count == 1) {
        held.chord = modifier_alone;
    }
    return held;
}

// Every code of every action, where the original asked of each in turn.
void CMenu::validateBindings() {
    const bool valid = std::ranges::all_of(
        std::views::iota(std::size_t{0}, kGameActionCount), [this](std::size_t index) {
            return std::ranges::all_of(
                owners_.game.controls.getBindings(static_cast<EGameAction>(index)),
                [this](const SKeyChord &chord) { return isKeyCodeValidForMode(chord.code); });
        });
    if (valid) {
        return;
    }
    owners_.game.restoreDefaultControls();
    owners_.editor_tools.showError(kInvalidBindings);
}

} // namespace nocturne::core
