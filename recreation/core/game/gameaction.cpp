#include "core/game/gameaction.h"

#include <array>
#include <cctype>
#include <cstddef>
#include <optional>
#include <string>
#include <string_view>

namespace nocturne::core {
namespace {

using engine::EInputCodeType;

// The table's alone, made as it is compiled.
consteval SKeyChord key(EInputCodeType code) {
    return {.code = code};
}

consteval SKeyChord ctrl(EInputCodeType code) {
    return {.code = code, .control = true};
}

consteval SKeyChord alt(EInputCodeType code) {
    return {.code = code, .alt = true};
}

// The play actions' defaults are each game's, by control mode. The hotkeys' are processHotkeys',
// the same in every control mode; motion debug, which the original left to anyone, is a
// developer's. Rows are in EGameAction order.
constexpr std::array<SGameActionInfo, kGameActionCount> kGameActions = {{
    {.ini_key = "keyWalk"},
    {.ini_key = "keyBackup"},
    {.ini_key = "keyRun"},
    {.ini_key = "keyStrafe"},
    {.ini_key = "keyStrafeLeft"},
    {.ini_key = "keyStrafeRight"},
    {.ini_key = "keyRight"},
    {.ini_key = "keyLeft"},
    {.ini_key = "keyFire"},
    {.ini_key = "keyUseItem"},
    {.ini_key = "keyLight"},
    {.ini_key = "keyInfrared"},
    {.ini_key = "keyDraw"},
    {.ini_key = "keyJump"},
    {.ini_key = "keyPointUp"},
    {.ini_key = "keyPointDown"},
    {.ini_key = "keyWeapon1"},
    {.ini_key = "keyWeapon2"},
    {.ini_key = "keyWeapon3"},
    {.ini_key = "keyWeapon4"},
    {.ini_key = "keyWeapon5"},
    {.ini_key = "keyNextWeapon"},
    {.ini_key = "keyPrevWeapon"},
    {.ini_key = "keyNextItem"},
    {.ini_key = "keyPrevItem"},
    {.ini_key = "keyItemDesc"},
    {.ini_key = "keyNextAmmo"},
    {.ini_key = "keyMap"},
    {.ini_key = "keyCompass"},
    {.ini_key = "keyFieldNotes"},
    {.ini_key = "keyQuickTurn"},
    {.ini_key = "keySPS"},
    {.ini_key = "keyDrop"},
    {.ini_key = "keyAction"},
    {.ini_key = "keyVoodooDoll"},
    {.ini_key = "keyMute",
     .keyboard = key(EInputCodeType::DIK_F5),
     .also = ctrl(EInputCodeType::DIK_M)},
    {.ini_key = "keySaveGame",
     .keyboard = ctrl(EInputCodeType::DIK_S),
     .also = key(EInputCodeType::DIK_F2)},
    {.ini_key = "keyLoadGame", .keyboard = key(EInputCodeType::DIK_F3)},
    {.ini_key = "keyQuickSave", .keyboard = key(EInputCodeType::DIK_F6)},
    {.ini_key = "keyQuickLoad", .keyboard = key(EInputCodeType::DIK_F9)},
    {.ini_key = "keyKeysHelp", .keyboard = key(EInputCodeType::DIK_F1)},
    {.ini_key = "keyGammaDown", .keyboard = key(EInputCodeType::DIK_F11)},
    {.ini_key = "keyGammaUp", .keyboard = key(EInputCodeType::DIK_F12)},
    {.ini_key = "keyMotionDebug", .keyboard = alt(EInputCodeType::DIK_M), .developer = true},
    {.ini_key = "keyEditMode", .keyboard = ctrl(EInputCodeType::DIK_E), .developer = true},
    {.ini_key = "keyPause", .keyboard = ctrl(EInputCodeType::DIK_Y), .developer = true},
    {.ini_key = "keyCameraDebug", .keyboard = ctrl(EInputCodeType::DIK_Z), .developer = true},
    {.ini_key = "keyScriptView", .keyboard = ctrl(EInputCodeType::DIK_W), .developer = true},
    {.ini_key = "keyDebugDisplay", .keyboard = ctrl(EInputCodeType::DIK_V), .developer = true},
    {.ini_key = "keyConsole", .keyboard = key(EInputCodeType::DIK_TAB), .developer = true},
    {.ini_key = "keyCameraToggle", .keyboard = ctrl(EInputCodeType::DIK_H), .developer = true},
    {.ini_key = "keyAmbientUp", .keyboard = alt(EInputCodeType::DIK_A), .developer = true},
    {.ini_key = "keyAmbientDown",
     .keyboard = {.code = EInputCodeType::DIK_A, .alt = true, .shift = true},
     .developer = true},
    {.ini_key = "keyNextCamera",
     .keyboard = key(EInputCodeType::DIK_C),
     .context = EActionContext::EditMode,
     .developer = true},
    {.ini_key = "keyPrevCamera",
     .keyboard = {.code = EInputCodeType::DIK_C, .shift = true},
     .context = EActionContext::EditMode,
     .developer = true},
    {.ini_key = "keyScriptRun",
     .keyboard = key(EInputCodeType::DIK_F5),
     .context = EActionContext::ScriptDebug,
     .developer = true},
    {.ini_key = "keyScriptResume",
     .keyboard = key(EInputCodeType::DIK_F10),
     .context = EActionContext::ScriptDebug,
     .developer = true},
    {.ini_key = "keyScriptResetDialog",
     .keyboard = key(EInputCodeType::DIK_F9),
     .context = EActionContext::ScriptDebug,
     .developer = true},
}};

constexpr std::string_view kIniKeyPrefix = "key";

} // namespace

const SGameActionInfo &getGameActionInfo(EGameAction action) {
    return kGameActions.at(static_cast<std::size_t>(action));
}

bool isHotkeyAction(EGameAction action) {
    return action >= kFirstHotkey;
}

std::string getGameActionId(EGameAction action) {
    const std::string_view name = getGameActionInfo(action).ini_key.substr(kIniKeyPrefix.size());
    // A run of capitals is one word: keySPS is sps.
    std::string id;
    bool after_capital = false;
    for (const char letter : name) {
        const bool capital = std::isupper(static_cast<unsigned char>(letter)) != 0;
        if (capital) {
            if (!id.empty() && !after_capital) {
                id += '_';
            }
            id += static_cast<char>(std::tolower(static_cast<unsigned char>(letter)));
        } else {
            id += letter;
        }
        after_capital = capital;
    }
    return id;
}

std::optional<EGameAction> findGameAction(std::string_view id) {
    for (std::size_t index = 0; index < kGameActionCount; ++index) {
        const auto action = static_cast<EGameAction>(index);
        if (getGameActionId(action) == id) {
            return action;
        }
    }
    return std::nullopt;
}

} // namespace nocturne::core
