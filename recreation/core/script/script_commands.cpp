#include "common/text/ascii.h"
#include "common/text/scan.h"
#include "common/text/scanformat.h"
#include "core/script/script.h"
#include "core/script/script_functions.h"

#include <algorithm>
#include <array>
#include <cstddef>
#include <expected>
#include <format>
#include <optional>
#include <string>
#include <string_view>

namespace nocturne::core {
namespace {

using Result = CScript::CommandResult;

// The longest argument each command takes is one shorter than the original's buffer for it.
constexpr std::size_t kMaxShortArgument = 100;
constexpr std::size_t kMaxMissionName = 200;
constexpr std::size_t kMaxText = 300;
constexpr std::size_t kMaxDisplayMessage = 0x400;
// setTimeFactor's range: faster than stopped, up to four times the normal speed.
constexpr float kMaxTimeFactor = 4.0F;

// Moves the statement past what a format took, or fails with the command's message.
Result consume(SScriptStatement &statement, std::optional<std::size_t> taken,
               std::string_view error) {
    if (!taken) {
        return std::unexpected(std::string(error));
    }
    statement.rest.remove_prefix(*taken);
    return {};
}

Result checkArgument(SScriptStatement &statement, std::size_t max_length) {
    const std::expected<std::string, std::string> argument =
        parseArgument(statement.rest, max_length);
    if (!argument) {
        return std::unexpected(argument.error());
    }
    return {};
}

// A command that takes nothing: anything after its name is extra.
Result checkNothing(CScript & /*script*/, SScriptStatement & /*statement*/) {
    return {};
}

Result checkMissionName(CScript & /*script*/, SScriptStatement &statement) {
    return checkArgument(statement, kMaxMissionName);
}

Result checkText(CScript & /*script*/, SScriptStatement &statement) {
    return checkArgument(statement, kMaxText);
}

Result checkShortArgument(CScript & /*script*/, SScriptStatement &statement) {
    return checkArgument(statement, kMaxShortArgument);
}

Result checkClearActorVariable(CScript & /*script*/, SScriptStatement &statement) {
    const std::expected<std::string, std::string> name = parseArgument(statement.rest, kMaxText);
    if (!name) {
        return std::unexpected(name.error());
    }
    return validateActorVariableName(*name);
}

Result checkDisplay(CScript & /*script*/, SScriptStatement &statement) {
    const std::expected<std::string, std::string> message =
        parseArgument(statement.rest, kMaxDisplayMessage);
    if (!message) {
        return std::unexpected(
            std::format("Error parsing message text on display statament: {}", message.error()));
    }
    return {};
}

Result checkFinishedAct(CScript & /*script*/, SScriptStatement &statement) {
    return consume(statement, common::scanPrefix(statement.rest, " ( )"),
                   "Error parsing finishedAct command");
}

Result checkRollCredits(CScript & /*script*/, SScriptStatement &statement) {
    return consume(statement, common::scanPrefix(statement.rest, " ( )"),
                   "Error parsing rollCredits command");
}

Result checkGetIniInt(CScript & /*script*/, SScriptStatement &statement) {
    std::string key;
    std::string counter;
    return consume(statement, common::scanPrefix(statement.rest, "(%[^,], %[^,)] )", key, counter),
                   "Error parsing getIniInt command parms");
}

Result checkSetIniInt(CScript & /*script*/, SScriptStatement &statement) {
    std::string key;
    int value = 0;
    return consume(statement, common::scanPrefix(statement.rest, "(%[^,], %d )", key, value),
                   "Error parsing setIniInt command parms");
}

Result checkLetterbox(CScript & /*script*/, SScriptStatement &statement) {
    const std::expected<std::string, std::string> mode =
        parseArgument(statement.rest, kMaxShortArgument);
    if (!mode) {
        return std::unexpected(mode.error());
    }
    for (const std::string_view known : {"false", "true", "bottom"}) {
        if (common::equalsIgnoringAsciiCase(*mode, known)) {
            return {};
        }
    }
    return std::unexpected(std::format("Invalid letterBox mode: {}", *mode));
}

// The shipped game refused removeKeys in a network game; there it takes every hero's keys.
Result checkRemoveKeys(CScript & /*script*/, SScriptStatement &statement) {
    int key_type = 0;
    return consume(statement, common::scanPrefix(statement.rest, " (%d )", key_type),
                   "Error parsing removeKeys() command parms");
}

// Either "()" or "(seconds)", with whitespace anywhere around them.
Result checkSetSayTimeOverride(CScript & /*script*/, SScriptStatement &statement) {
    constexpr std::string_view kError = "Error parsing setSayTimeOverride parameters.";
    if (Result opened = consume(statement, common::scanPrefix(statement.rest, " ( "), kError);
        !opened) {
        return opened;
    }
    if (statement.rest.starts_with(')')) {
        statement.rest.remove_prefix(1);
        return {};
    }
    float seconds = 0.0F;
    return consume(statement, common::scanPrefix(statement.rest, "%f )", seconds), kError);
}

Result checkSetTimeFactor(CScript & /*script*/, SScriptStatement &statement) {
    const std::expected<std::string, std::string> factor =
        parseArgument(statement.rest, kMaxShortArgument);
    if (!factor) {
        return std::unexpected(factor.error());
    }
    const float value = common::scanFloat(*factor).value_or(-1.0F);
    if (value <= 0.0F || value > kMaxTimeFactor) {
        return std::unexpected(std::format("Invalid time factor {}", *factor));
    }
    return {};
}

// "(seconds, message)".
Result checkTimedDisplay(CScript & /*script*/, SScriptStatement &statement) {
    const std::expected<std::string, std::string> argument =
        parseArgument(statement.rest, kMaxText);
    if (!argument) {
        return std::unexpected(argument.error());
    }
    float seconds = 0.0F;
    if (!common::scanPrefix(*argument, "%f,", seconds)) {
        return std::unexpected("Error parsing time value");
    }
    return {};
}

Result checkWait(CScript & /*script*/, SScriptStatement &statement) {
    float seconds = 0.0F;
    return consume(statement, common::scanPrefix(statement.rest, "(%f)", seconds),
                   "Error parsing time value on wait statament");
}

} // namespace

const CScript::SCommand *CScript::findCommand(std::string_view name) {
    static constexpr std::array kCommands{
        SCommand{.name = "addItemToInventory", .check = &checkNotPorted},
        SCommand{.name = "addLightFilter", .check = &checkNotPorted},
        SCommand{.name = "advanceLightFilter", .check = &checkNotPorted},
        SCommand{.name = "allowEnemyAttack", .check = &checkNotPorted},
        SCommand{.name = "allowHeroControls", .check = &checkNotPorted},
        SCommand{.name = "allowHeroDamage", .check = &checkNotPorted},
        SCommand{.name = "attachActorToPlatform", .check = &checkNotPorted},
        SCommand{.name = "beginFadeIn", .check = &checkNothing},
        SCommand{.name = "beginFadeOut", .check = &checkNothing},
        SCommand{.name = "breakPoint", .check = &checkNothing},
        SCommand{.name = "cancelCameraHold", .check = &checkNothing},
        SCommand{.name = "cancelWalkTo", .check = &checkNotPorted},
        SCommand{.name = "chainToMission", .check = &checkMissionName},
        SCommand{.name = "clearActorVariable", .check = &checkClearActorVariable},
        SCommand{.name = "createExplosion", .check = &checkNotPorted},
        SCommand{.name = "dbSay", .check = &checkNotPorted},
        SCommand{.name = "dbStartSay", .check = &checkNotPorted},
        SCommand{.name = "debug", .check = &checkText},
        SCommand{.name = "deleteActor", .check = &checkNotPorted},
        SCommand{.name = "dismember", .check = &checkNotPorted},
        SCommand{.name = "display", .check = &checkDisplay},
        SCommand{.name = "displayBitmap", .check = &checkNotPorted},
        SCommand{.name = "else", .check = &checkElse},
        SCommand{.name = "enableCamera", .check = &checkNotPorted},
        SCommand{.name = "enableCameraGroup", .check = &checkNotPorted},
        SCommand{.name = "enableHealthBar", .check = &checkNotPorted},
        SCommand{.name = "end", .check = &checkNothing},
        SCommand{.name = "fadeAmbientSound", .check = &checkNotPorted},
        SCommand{.name = "fadeIn", .check = &checkNothing},
        SCommand{.name = "fadeOut", .check = &checkNothing},
        SCommand{.name = "fadeSfx", .check = &checkNotPorted},
        SCommand{.name = "finishedAct", .check = &checkFinishedAct},
        SCommand{.name = "flagOff", .check = &checkNotPorted},
        SCommand{.name = "flagOn", .check = &checkNotPorted},
        SCommand{.name = "gameFlagOff", .check = &checkNotPorted},
        SCommand{.name = "gameFlagOn", .check = &checkNotPorted},
        SCommand{.name = "gesture", .check = &checkNotPorted},
        SCommand{.name = "getIniInt", .check = &checkGetIniInt},
        SCommand{.name = "getTriggerActor", .check = &checkNotPorted},
        SCommand{.name = "gosub", .check = &checkJumpLabel},
        SCommand{.name = "goto", .check = &checkJumpLabel},
        SCommand{.name = "gtfo", .check = &checkText},
        SCommand{.name = "holsterWeapon", .check = &checkNotPorted},
        SCommand{.name = "hurtCharacter", .check = &checkNotPorted},
        SCommand{.name = "idle", .check = &checkNothing},
        SCommand{.name = "if", .check = &checkNotPorted},
        SCommand{.name = "incCounter", .check = &checkNotPorted},
        SCommand{.name = "killCharacter", .check = &checkNotPorted},
        SCommand{.name = "killHero", .check = &checkNotPorted},
        SCommand{.name = "killSfx", .check = &checkNotPorted},
        SCommand{.name = "letterbox", .check = &checkLetterbox},
        SCommand{.name = "lightning", .check = &checkNotPorted},
        SCommand{.name = "lockFocusActor", .check = &checkNotPorted},
        SCommand{.name = "lookAt", .check = &checkNotPorted},
        SCommand{.name = "movePlatform", .check = &checkNotPorted},
        SCommand{.name = "openDoor", .check = &checkNotPorted},
        SCommand{.name = "playSfx", .check = &checkNotPorted},
        SCommand{.name = "pressButton", .check = &checkNotPorted},
        SCommand{.name = "raise", .check = &checkNotPorted},
        SCommand{.name = "releaseButton", .check = &checkNotPorted},
        SCommand{.name = "removeAllItemsFromInventory", .check = &checkNotPorted},
        SCommand{.name = "removeItemFromInventory", .check = &checkNotPorted},
        SCommand{.name = "removeKeys", .check = &checkRemoveKeys},
        SCommand{.name = "return", .check = &checkNothing},
        SCommand{.name = "rollCredits", .check = &checkRollCredits},
        SCommand{.name = "say", .check = &checkNotPorted},
        SCommand{.name = "selectWeapon", .check = &checkNotPorted},
        SCommand{.name = "setActorVariable", .check = &checkNotPorted},
        SCommand{.name = "setAmbientSound", .check = &checkShortArgument},
        SCommand{.name = "setCameraAmbient", .check = &checkNotPorted},
        SCommand{.name = "setCameraGroup", .check = &checkNotPorted},
        SCommand{.name = "setCharacterHealth", .check = &checkNotPorted},
        SCommand{.name = "setCounter", .check = &checkNotPorted},
        SCommand{.name = "setFocusActor", .check = &checkNotPorted},
        SCommand{.name = "setGroupAmbient", .check = &checkNotPorted},
        SCommand{.name = "setHeroTask", .check = &checkNotPorted},
        SCommand{.name = "setIniInt", .check = &checkSetIniInt},
        SCommand{.name = "setLeverState", .check = &checkNotPorted},
        SCommand{.name = "setLightFilterFrame", .check = &checkNotPorted},
        SCommand{.name = "setModelState", .check = &checkNotPorted},
        SCommand{.name = "setSayTimeOverride", .check = &checkSetSayTimeOverride},
        SCommand{.name = "setSkipLabel", .check = &checkSetSkipLabel},
        SCommand{.name = "setSpeaker", .check = &checkNotPorted},
        SCommand{.name = "setTimeFactor", .check = &checkSetTimeFactor},
        SCommand{.name = "setTimer", .check = &checkNotPorted},
        SCommand{.name = "setVictim", .check = &checkNotPorted},
        SCommand{.name = "setWeather", .check = &checkNotPorted},
        SCommand{.name = "shakeScreen", .check = &checkNotPorted},
        SCommand{.name = "slamModelToMotion", .check = &checkNotPorted},
        SCommand{.name = "snapToFace", .check = &checkNotPorted},
        SCommand{.name = "startSay", .check = &checkNotPorted},
        SCommand{.name = "switchCamera", .check = &checkNotPorted},
        SCommand{.name = "timedDisplay", .check = &checkTimedDisplay},
        SCommand{.name = "turnToFace", .check = &checkNotPorted},
        SCommand{.name = "wait", .check = &checkWait},
        SCommand{.name = "waitFor", .check = &checkNotPorted},
        SCommand{.name = "walkTo", .check = &checkNotPorted},
        SCommand{.name = "warpTo", .check = &checkNotPorted},
    };
    const auto *command = std::ranges::find_if(kCommands, [name](const SCommand &candidate) {
        return common::equalsIgnoringAsciiCase(candidate.name, name);
    });
    return command == kCommands.end() ? nullptr : command;
}

} // namespace nocturne::core
