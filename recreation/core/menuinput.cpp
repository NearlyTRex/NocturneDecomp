#include "core/menuinput.h"

#include "engine/keys/inputcodetype.h"
#include "engine/keys/keys.h"

#include <array>
#include <cstddef>

namespace nocturne::core {
namespace {

using engine::EInputCodeType;

// The keyboard's first are the codes the original's menus read; the arrows fold onto them under
// the default key mask and keep their own codes under the wide one. Then the d-pad and the
// left stick, which keeps the original joystick's codes.
constexpr std::array<std::array<EInputCodeType, 4>, 5> kBindings{{
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
}};

} // namespace

CMenuInput::CMenuInput(engine::CKeys &keys) : keys_(keys) {}

bool CMenuInput::takeMenuAction(EMenuAction action) {
    bool pressed = false;
    for (const EInputCodeType code : kBindings[static_cast<std::size_t>(action)]) {
        if (code != EInputCodeType::INPUT_NONE && keys_.getAndClearKeyState(code) != 0) {
            pressed = true;
        }
    }
    return pressed;
}

} // namespace nocturne::core
