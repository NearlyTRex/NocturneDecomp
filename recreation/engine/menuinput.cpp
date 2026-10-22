#include "engine/menuinput.h"

#include "engine/keys/inputcodetype.h"
#include "engine/keys/keys.h"

#include <algorithm>
#include <array>
#include <cstddef>

namespace nocturne::engine {
namespace {

// The keyboard's first are the codes the original's menus read; the arrows and the editing keys
// fold onto them under the default key mask and keep their own codes under the wide one. Then
// the pad's: the d-pad and the left stick, which keeps the original joystick's codes, and the
// buttons the enhanced game confirms and cancels with.
constexpr std::array<std::array<EInputCodeType, 4>, 12> kBindings{{
    {EInputCodeType::DIK_NUMPAD8, EInputCodeType::DIK_UP, EInputCodeType::PAD_DPAD_UP,
     EInputCodeType::DIJ_UP},
    {EInputCodeType::DIK_NUMPAD2, EInputCodeType::DIK_DOWN, EInputCodeType::PAD_DPAD_DOWN,
     EInputCodeType::DIJ_DOWN},
    {EInputCodeType::DIK_NUMPAD4, EInputCodeType::DIK_LEFT, EInputCodeType::PAD_DPAD_LEFT,
     EInputCodeType::DIJ_LEFT},
    {EInputCodeType::DIK_NUMPAD6, EInputCodeType::DIK_RIGHT, EInputCodeType::PAD_DPAD_RIGHT,
     EInputCodeType::DIJ_RIGHT},
    {EInputCodeType::DIK_RETURN, EInputCodeType::PAD_A, EInputCodeType::INPUT_NONE,
     EInputCodeType::INPUT_NONE},
    {EInputCodeType::DIK_ESCAPE, EInputCodeType::PAD_B, EInputCodeType::PAD_START,
     EInputCodeType::INPUT_NONE},
    {EInputCodeType::DIK_NUMPAD7, EInputCodeType::DIK_HOME, EInputCodeType::INPUT_NONE,
     EInputCodeType::INPUT_NONE},
    {EInputCodeType::DIK_NUMPAD1, EInputCodeType::DIK_END, EInputCodeType::INPUT_NONE,
     EInputCodeType::INPUT_NONE},
    {EInputCodeType::DIK_NUMPAD9, EInputCodeType::DIK_PRIOR, EInputCodeType::INPUT_NONE,
     EInputCodeType::INPUT_NONE},
    {EInputCodeType::DIK_NUMPAD3, EInputCodeType::DIK_NEXT, EInputCodeType::INPUT_NONE,
     EInputCodeType::INPUT_NONE},
    {EInputCodeType::DIK_NUMPAD0, EInputCodeType::DIK_INSERT, EInputCodeType::DIK_C,
     EInputCodeType::INPUT_NONE},
    {EInputCodeType::DIK_M, EInputCodeType::INPUT_NONE, EInputCodeType::INPUT_NONE,
     EInputCodeType::INPUT_NONE},
}};

// The right control key folds onto the left under the default mask.
constexpr std::array<EInputCodeType, 2> kControlKeys{EInputCodeType::DIK_LCONTROL,
                                                     EInputCodeType::DIK_RCONTROL};

} // namespace

CMenuInput::CMenuInput(CKeys &keys) : keys_(keys) {}

bool CMenuInput::takeMenuAction(EMenuAction action) {
    if ((action == EMenuAction::Copy || action == EMenuAction::ToggleMute) &&
        std::ranges::none_of(
            kControlKeys, [this](EInputCodeType code) { return keys_.getKeyState(code) != 0; })) {
        return false;
    }
    bool pressed = false;
    for (const EInputCodeType code : kBindings[static_cast<std::size_t>(action)]) {
        if (code != EInputCodeType::INPUT_NONE && keys_.getAndClearKeyState(code) != 0) {
            pressed = true;
        }
    }
    return pressed;
}

} // namespace nocturne::engine
