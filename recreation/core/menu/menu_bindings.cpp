#include "core/actor/notported.h"
#include "core/game/controlbindings.h"
#include "core/game/controlmode.h"
#include "core/game/game.h"
#include "core/game/gameaction.h"
#include "core/menu/menu.h"
#include "engine/2d/2d.h"
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
#include <optional>
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
constexpr std::array<SBindingRow, kGameActionCount> kBindingRows{{
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
}};

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

// The original copied the name into the next of ten shared buffers.
// deferred: the gamepad's buttons, named for the pad plugged in (the decomp's gamepad.h
//   nocturne_gamepad_code_name), with the gamepad layer
// nocedit 0x005134e0
std::string CMenu::getKeyDisplayName(EInputCodeType key_code) const {
    const auto *found = std::ranges::find(kDeviceNames, key_code, &SDeviceName::code);
    if (found != kDeviceNames.end()) {
        return std::string(owners_.messages.getLocalizedString(found->name));
    }
    return std::string(engine::getKeyName(key_code));
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
// the map's after the rest. Restore defaults goes back once it is done.
// deferred: polling the gamepad while a code is waited for, with resetKeyState
// deferred: keeping the gamepad off the menus while a code is waited for (the decomp's
//   gamepad.h nocturne_gamepad_suppress_nav), with the gamepad layer
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
        list.add(owners_.messages.getLocalizedString("Restore defaults"));
        std::vector<std::string_view> labels;
        labels.reserve(kBindingRows.size());
        for (const SBindingRow &row : kBindingRows) {
            const bool walks = row.action == EGameAction::Run && game.always_run != 0;
            labels.push_back(owners_.messages.getLocalizedString(walks ? "Walk" : row.label));
            std::string names;
            for (const EInputCodeType code : game.controls.getBindings(row.action)) {
                names += names.empty() ? "" : kNameSeparator;
                names += getKeyDisplayName(code);
            }
            if (names.empty()) {
                names = getKeyDisplayName(EInputCodeType::INPUT_NONE);
            }
            list.add(std::format("{}\t{}", labels.back(), names));
        }
        const int choice = list.displayChoicesAndWaitForInput(
            owners_.messages.getLocalizedString("Edit key settings"), cursor);
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

// The enhanced game's: the original's pick went straight to capturing the action's one code. A
// code taken is this action's alone, given up by any other action holding it and by this
// action's other slots.
void CMenu::editActionBindings(EGameAction action, std::string_view label) {
    CControlBindings &controls = owners_.game.controls;
    int cursor = 0;
    while (true) {
        std::vector<EInputCodeType> codes(std::from_range, controls.getBindings(action));
        CBindingList list(owners_.pick_list);
        for (const EInputCodeType code : codes) {
            list.add(getKeyDisplayName(code));
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
        const std::optional<EInputCodeType> captured = captureKeyCode(label);
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
        for (const SBindingRow &row : kBindingRows) {
            std::vector<EInputCodeType> others(std::from_range, controls.getBindings(row.action));
            if (row.action != action && std::erase(others, *captured) != 0) {
                controls.setBindings(row.action, std::move(others));
            }
        }
        controls.setBindings(action, std::move(codes));
    }
}

// A closing window cancels, as it ends every wait for input.
std::optional<EInputCodeType> CMenu::captureKeyCode(std::string_view label) {
    engine::CKeys &keys = owners_.pick_list.keys;
    const engine::IRawInput &input = owners_.raw_input;
    shape::CEditorTools &tools = owners_.editor_tools;
    const std::string_view release =
        owners_.messages.getLocalizedString("OK - you can release the key now...");
    while (getHeldKeyCode() != kNoCodeHeld) {
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
    int code = kNoCodeHeld;
    while (code < 0) {
        owners_.screen.swapBuffers();
        if (input.getInputDisabled()) {
            keys.toggleInputMask(false);
            return std::nullopt;
        }
        code = getHeldKeyCode();
    }
    tools.displayCenteredStatusMessage(release);
    while (getHeldKeyCode() != kNoCodeHeld && !input.getInputDisabled()) {
        owners_.screen.swapBuffers();
    }
    keys.toggleInputMask(false);
    return static_cast<EInputCodeType>(code);
}

// The original asked the keys of each code in turn.
int CMenu::getHeldKeyCode() const {
    const std::span<const std::uint8_t> state = owners_.raw_input.getKeyboardState();
    int held = kNoCodeHeld;
    for (std::size_t code = 0; code < state.size(); ++code) {
        if (state[code] == 0) {
            continue;
        }
        if (held != kNoCodeHeld) {
            return kSeveralCodesHeld;
        }
        held = static_cast<int>(code);
    }
    return held;
}

// Every code of every action, where the original asked of each in turn.
void CMenu::validateBindings() {
    const bool valid = std::ranges::all_of(kBindingRows, [this](const SBindingRow &row) {
        return std::ranges::all_of(
            owners_.game.controls.getBindings(row.action),
            [this](EInputCodeType code) { return isKeyCodeValidForMode(code); });
    });
    if (valid) {
        return;
    }
    owners_.game.restoreDefaultControls();
    owners_.editor_tools.showError(kInvalidBindings);
}

} // namespace nocturne::core
