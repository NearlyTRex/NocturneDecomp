#include "engine/menuinput.h"

#include "engine/gamepadinput.h"
#include "engine/keys/inputcodetype.h"
#include "engine/keys/keys.h"

#include <algorithm>
#include <array>
#include <cstddef>
#include <span>

namespace nocturne::engine {
namespace {

// The first are the codes the original's menus read; the arrows and the editing keys fold onto
// them under the default key mask and keep their own codes under the wide one.
constexpr std::array<std::array<EInputCodeType, 3>, 13> kBindings{{
    {EInputCodeType::DIK_NUMPAD8, EInputCodeType::DIK_UP, EInputCodeType::INPUT_NONE},
    {EInputCodeType::DIK_NUMPAD2, EInputCodeType::DIK_DOWN, EInputCodeType::INPUT_NONE},
    {EInputCodeType::DIK_NUMPAD4, EInputCodeType::DIK_LEFT, EInputCodeType::INPUT_NONE},
    {EInputCodeType::DIK_NUMPAD6, EInputCodeType::DIK_RIGHT, EInputCodeType::INPUT_NONE},
    {EInputCodeType::DIK_RETURN, EInputCodeType::INPUT_NONE, EInputCodeType::INPUT_NONE},
    {EInputCodeType::DIK_ESCAPE, EInputCodeType::INPUT_NONE, EInputCodeType::INPUT_NONE},
    {EInputCodeType::DIK_NUMPAD7, EInputCodeType::DIK_HOME, EInputCodeType::INPUT_NONE},
    {EInputCodeType::DIK_NUMPAD1, EInputCodeType::DIK_END, EInputCodeType::INPUT_NONE},
    {EInputCodeType::DIK_NUMPAD9, EInputCodeType::DIK_PRIOR, EInputCodeType::INPUT_NONE},
    {EInputCodeType::DIK_NUMPAD3, EInputCodeType::DIK_NEXT, EInputCodeType::INPUT_NONE},
    {EInputCodeType::DIK_DECIMAL, EInputCodeType::DIK_DELETE, EInputCodeType::INPUT_NONE},
    {EInputCodeType::DIK_NUMPAD0, EInputCodeType::DIK_INSERT, EInputCodeType::DIK_C},
    {EInputCodeType::DIK_M, EInputCodeType::INPUT_NONE, EInputCodeType::INPUT_NONE},
}};

// The right control key folds onto the left under the default mask.
constexpr std::array<EInputCodeType, 2> kControlKeys{EInputCodeType::DIK_LCONTROL,
                                                     EInputCodeType::DIK_RCONTROL};
// The original's menus look only at the left shift key.
constexpr std::array<EInputCodeType, 1> kShiftKeys{EInputCodeType::DIK_LSHIFT};

} // namespace

CMenuInput::CMenuInput(CKeys &keys, CGamepadInput &gamepad) : keys_(keys), gamepad_(gamepad) {}

bool CMenuInput::takeMenuAction(EMenuAction action) {
    if ((action == EMenuAction::Copy || action == EMenuAction::ToggleMute) &&
        !isModifierHeld(EMenuModifier::Control)) {
        return false;
    }
    bool pressed = gamepad_.takeMenuAction(action);
    for (const EInputCodeType code : kBindings[static_cast<std::size_t>(action)]) {
        if (code != EInputCodeType::INPUT_NONE && keys_.getAndClearKeyState(code) != 0) {
            pressed = true;
        }
    }
    return pressed;
}

bool CMenuInput::isModifierHeld(EMenuModifier modifier) const {
    const std::span<const EInputCodeType> codes =
        modifier == EMenuModifier::Control ? std::span<const EInputCodeType>(kControlKeys)
                                           : std::span<const EInputCodeType>(kShiftKeys);
    return std::ranges::any_of(
        codes, [this](EInputCodeType code) { return keys_.getKeyState(code) != 0; });
}

} // namespace nocturne::engine
