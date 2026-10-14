#include "core/game/gameaction.h"

#include <array>

namespace nocturne::core {
namespace {

using engine::EInputCodeType;

constexpr std::optional<EInputCodeType> kSame = std::nullopt;

// Keyboard and mouse defaults are restoreDefaultControls'; the gamepad column and the map key are
// the enhanced game's. Rows are in EGameAction order.
constexpr std::array<SGameActionInfo, kGameActionCount> kGameActions = {{
    {"keyWalk", EInputCodeType::DIK_UP, EInputCodeType::DIK_W, EInputCodeType::DIJ_UP},
    {"keyBackup", EInputCodeType::DIK_DOWN, EInputCodeType::DIK_S, EInputCodeType::DIJ_DOWN},
    {"keyRun", EInputCodeType::DIK_LSHIFT, EInputCodeType::DIK_CAPITAL,
     EInputCodeType::PAD_LEFTSTICK},
    {"keyStrafe", EInputCodeType::DIK_LMENU, kSame, EInputCodeType::INPUT_NONE},
    {"keyStrafeLeft", EInputCodeType::DIK_Z, EInputCodeType::DIK_A, EInputCodeType::DIJ_LEFT},
    {"keyStrafeRight", EInputCodeType::DIK_X, EInputCodeType::DIK_D, EInputCodeType::DIJ_RIGHT},
    {"keyRight", EInputCodeType::DIK_RIGHT, EInputCodeType::DIM_XAXIS,
     EInputCodeType::PAD_RSTICK_RIGHT},
    {"keyLeft", EInputCodeType::DIK_LEFT, EInputCodeType::DIM_XAXIS,
     EInputCodeType::PAD_RSTICK_LEFT},
    {"keyFire", EInputCodeType::DIK_SPACE, EInputCodeType::DIM_LBUTTON,
     EInputCodeType::PAD_RTRIGGER},
    {"keyUseItem", EInputCodeType::DIK_RETURN, kSame, EInputCodeType::PAD_B},
    {"keyLight", EInputCodeType::DIK_F, EInputCodeType::DIK_Q, EInputCodeType::PAD_X},
    {"keyInfrared", EInputCodeType::DIK_I, kSame, EInputCodeType::PAD_Y},
    {"keyDraw", EInputCodeType::DIK_D, EInputCodeType::DIK_E, EInputCodeType::PAD_LTRIGGER},
    {"keyJump", EInputCodeType::DIK_G, EInputCodeType::DIK_G, EInputCodeType::PAD_A},
    {"keyPointUp", EInputCodeType::DIK_Q, EInputCodeType::DIM_YAXIS, EInputCodeType::PAD_RSTICK_UP},
    {"keyPointDown", EInputCodeType::DIK_A, EInputCodeType::DIM_YAXIS,
     EInputCodeType::PAD_RSTICK_DOWN},
    {"keyWeapon1", EInputCodeType::DIK_1, kSame, EInputCodeType::INPUT_NONE},
    {"keyWeapon2", EInputCodeType::DIK_2, kSame, EInputCodeType::INPUT_NONE},
    {"keyWeapon3", EInputCodeType::DIK_3, kSame, EInputCodeType::INPUT_NONE},
    {"keyWeapon4", EInputCodeType::DIK_4, kSame, EInputCodeType::INPUT_NONE},
    {"keyWeapon5", EInputCodeType::DIK_5, kSame, EInputCodeType::PAD_DPAD_DOWN},
    {"keyNextWeapon", EInputCodeType::DIK_EQUALS, kSame, EInputCodeType::PAD_RIGHTSHOULDER},
    {"keyPrevWeapon", EInputCodeType::DIK_MINUS, kSame, EInputCodeType::PAD_LEFTSHOULDER},
    {"keyNextItem", EInputCodeType::DIK_LBRACKET, kSame, EInputCodeType::PAD_DPAD_RIGHT},
    {"keyPrevItem", EInputCodeType::DIK_RBRACKET, kSame, EInputCodeType::PAD_DPAD_LEFT},
    {"keyItemDesc", EInputCodeType::DIK_SLASH, kSame, EInputCodeType::PAD_GUIDE},
    {"keyNextAmmo", EInputCodeType::DIK_GRAVE, kSame, EInputCodeType::PAD_DPAD_UP},
    {"keyMap", EInputCodeType::DIK_M, kSame, EInputCodeType::PAD_BACK},
}};

} // namespace

const SGameActionInfo &getGameActionInfo(EGameAction action) {
    return kGameActions.at(static_cast<std::size_t>(action));
}

} // namespace nocturne::core
