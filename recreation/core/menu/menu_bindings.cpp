#include "core/actor/notported.h"
#include "core/game/controlbindings.h"
#include "core/game/controlmode.h"
#include "core/game/game.h"
#include "core/game/gameaction.h"
#include "core/game/keynames.h"
#include "core/menu/menu.h"
#include "engine/2d/2d.h"
#include "engine/gamepadinput.h"
#include "engine/keys/inputcodetype.h"
#include "engine/keys/keys.h"
#include "engine/menuinput.h"
#include "engine/package/gamecontent.h"
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

// The original's hotkeys, its developers' after the rest; the labels' ids.
constexpr auto kHotkeyRows = std::to_array<SBindingRow>({
    {.action = EGameAction::Mute, .label = "hotkey_mute"},
    {.action = EGameAction::SaveGame, .label = "hotkey_save_game"},
    {.action = EGameAction::LoadGame, .label = "hotkey_load_game"},
    {.action = EGameAction::QuickSave, .label = "hotkey_quick_save"},
    {.action = EGameAction::QuickLoad, .label = "hotkey_quick_load"},
    {.action = EGameAction::KeysHelp, .label = "hotkey_keys_help"},
    {.action = EGameAction::GammaDown, .label = "hotkey_gamma_down"},
    {.action = EGameAction::GammaUp, .label = "hotkey_gamma_up"},
    {.action = EGameAction::Screenshot, .label = "hotkey_screenshot"},
    {.action = EGameAction::MotionDebug, .label = "hotkey_motion_debug"},
    {.action = EGameAction::EditMode, .label = "hotkey_edit_mode"},
    {.action = EGameAction::Pause, .label = "hotkey_pause"},
    {.action = EGameAction::CameraDebug, .label = "hotkey_camera_debug"},
    {.action = EGameAction::ScriptView, .label = "hotkey_script_view"},
    {.action = EGameAction::DebugDisplay, .label = "hotkey_debug_display"},
    {.action = EGameAction::Console, .label = "hotkey_console"},
    {.action = EGameAction::CameraToggle, .label = "hotkey_camera_toggle"},
    {.action = EGameAction::AmbientUp, .label = "hotkey_ambient_up"},
    {.action = EGameAction::AmbientDown, .label = "hotkey_ambient_down"},
    {.action = EGameAction::NextCamera, .label = "hotkey_next_camera"},
    {.action = EGameAction::PrevCamera, .label = "hotkey_prev_camera"},
    {.action = EGameAction::ScriptRun, .label = "hotkey_script_run"},
    {.action = EGameAction::ScriptResume, .label = "hotkey_script_resume"},
    {.action = EGameAction::ScriptResetDialog, .label = "hotkey_script_reset_dialog"},
});
static_assert(kHotkeyRows.size() == kGameActionCount - static_cast<std::size_t>(kFirstHotkey));

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

std::string CMenu::getKeyDisplayName(EInputCodeType key_code) const {
    return core::getKeyDisplayName(getKeyNameOwners(), key_code);
}

void CMenu::setBindingButtons(shape::CPickList &list) const {
    list.setOkButtonText(label("bindings_select"));
    list.setCancelButtonText(label("bindings_close"));
}

std::string CMenu::getChordDisplayName(const SKeyChord &chord) const {
    return core::getChordDisplayName(getKeyNameOwners(), chord);
}

SKeyNameOwners CMenu::getKeyNameOwners() const {
    return {.gamepad = owners_.gamepad, .messages = owners_.messages};
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
        setBindingButtons(list);
        list.add(label("bindings_restore_defaults"));
        std::vector<SBindingRow> rows;
        // The rows' own labels are the game's, from its [[controls.binding]].
        std::vector<std::string> labels;
        for (const engine::SBindingRowSpec &spec : game.getControls().bindings) {
            const EGameAction action = requirePlayAction(spec.action, "A bindings page row");
            rows.push_back({.action = action, .label = spec.label});
            const bool walks = action == EGameAction::Run && game.always_run != 0;
            labels.push_back(walks ? label("bindings_walk")
                                   : std::string(owners_.messages.getLocalizedString(spec.label)));
            list.add(std::format("{}\t{}", labels.back(), getBindingNames(action)));
        }
        list.add(label("bindings_hotkeys"));
        const int choice = list.displayChoicesAndWaitForInput(label("bindings_title"), cursor);
        const auto hotkeys = static_cast<int>(rows.size()) + 1;
        if (choice == hotkeys) {
            cursor = choice;
            configureHotkeyBindings();
            continue;
        }
        if (choice > 0) {
            cursor = choice;
            const auto row = static_cast<std::size_t>(choice - 1);
            editActionBindings(rows.at(row).action, labels.at(row));
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
        setBindingButtons(list);
        for (const SBindingRow &row : rows) {
            list.add(std::format("{}\t{}", label(row.label), getBindingNames(row.action)));
        }
        const int choice = list.displayChoicesAndWaitForInput(label("bindings_hotkeys"), cursor);
        if (choice < 0) {
            return;
        }
        cursor = choice;
        const SBindingRow &row = rows.at(static_cast<std::size_t>(choice));
        editActionBindings(row.action, label(row.label));
    }
}

std::string CMenu::getBindingNames(EGameAction action) const {
    return core::getBindingNames(getKeyNameOwners(), owners_.game.controls.getBindings(action));
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
        list.add(this->label("bindings_add"));
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
    const std::string release = this->label("bindings_release_key");
    while (readHeldKeys().any) {
        tools.displayCenteredStatusMessage(release);
        if (keys.getKeyState(EInputCodeType::DIK_ESCAPE) != 0 || input.getInputDisabled()) {
            owners_.two_d.clearInputAndWait();
            return std::nullopt;
        }
        owners_.screen.swapBuffers();
    }
    tools.displayCenteredStatusMessage(
        std::format("{}{}", this->label("bindings_press_key"), label));
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
    owners_.editor_tools.showError(label("bindings_invalid"));
}

} // namespace nocturne::core
