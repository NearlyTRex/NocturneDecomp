#include "common/text/ascii.h"
#include "common/text/scan.h"
#include "common/text/scanformat.h"
#include "core/event/eventlist.h"
#include "core/script/commandchecks.h"
#include "core/script/script.h"
#include "core/script/script_functions.h"
#include "core/set/demonset.h"
#include "engine/dosio/dosio.h"

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

// A command that takes only a condition.
Result checkCondition(CScript & /*script*/, SScriptStatement &statement) {
    const std::expected<std::string, std::string> condition =
        parseConditionExpr(statement.rest, statement.owners.events);
    if (!condition) {
        return std::unexpected(condition.error());
    }
    return {};
}

// An event command: the whole line goes to the events, more commands after a ';' included.
Result checkEventCommand(CScript & /*script*/, SScriptStatement &statement) {
    statement.rest = {};
    return statement.owners.events.validateCommands(statement.line);
}

Result checkRaise(CScript & /*script*/, SScriptStatement &statement) {
    const std::expected<std::string, std::string> commands =
        parseArgument(statement.rest, kMaxShortArgument);
    if (!commands) {
        return std::unexpected(
            std::format("Error parsing event expression on raise statament: {}", commands.error()));
    }
    return statement.owners.events.validateCommands(*commands);
}

// "(light, filter, seconds)": the light, untrimmed, must be a spotlight of the set, and the
// filter a file in art that holds something.
Result checkAddLightFilter(CScript & /*script*/, SScriptStatement &statement) {
    std::string light;
    std::string filter;
    float seconds = 0.0F;
    if (Result scanned = consumeScanned(
            statement,
            common::scanPrefix(statement.rest, "( %[^,], %[^,], %f )", light, filter, seconds),
            "Error parsing addLightFilter command parms");
        !scanned) {
        return scanned;
    }
    if (!statement.owners.set.addLightFilter(light)) {
        return std::unexpected(std::format("Light \"{}\" does not exist", light));
    }
    if (statement.owners.dosio.getFileSize("art", filter) < 1) {
        return std::unexpected(std::format("Can't open filter \"{}\"", filter));
    }
    return {};
}

// "(camera, condition)".
Result checkEnableCamera(CScript & /*script*/, SScriptStatement &statement) {
    std::string camera;
    std::string condition;
    if (Result scanned = consumeScanned(
            statement, common::scanPrefix(statement.rest, "(%[^,], %[^)])", camera, condition),
            "Error parsing enableCamera parms");
        !scanned) {
        return scanned;
    }
    if (!statement.owners.set.findCameraByName(trimString(camera))) {
        return std::unexpected(std::format("Camera \"{}\" does not exist.", trimString(camera)));
    }
    return statement.owners.events.validateCondition(trimString(condition));
}

// "(camera, group)"; the original's message spells it setCameragroup.
Result checkSetCameraGroup(CScript & /*script*/, SScriptStatement &statement) {
    std::string camera;
    int group = 0;
    if (Result scanned = consumeScanned(
            statement, common::scanPrefix(statement.rest, "(%[^,], %d)", camera, group),
            "Error parsing setCameragroup parms");
        !scanned) {
        return scanned;
    }
    if (!statement.owners.set.findCameraByName(trimString(camera))) {
        return std::unexpected(std::format("Camera \"{}\" does not exist.", trimString(camera)));
    }
    return {};
}

// "(camera[, seconds])". Without the seconds the camera holds as long as it can, which no hold
// may outlast.
Result checkSwitchCamera(CScript & /*script*/, SScriptStatement &statement) {
    constexpr std::size_t kMaxArgument = 200;
    constexpr float kHoldForever = 1e10F;
    constexpr float kMaxHold = 99999.0F;
    const std::expected<std::string, std::string> argument =
        parseArgument(statement.rest, kMaxArgument);
    if (!argument) {
        return std::unexpected(argument.error());
    }
    const std::size_t comma = argument->find(',');
    if (argument->empty() || comma == 0) {
        return std::unexpected("Error parsing out camera name");
    }
    const std::string_view camera = trimString(std::string_view(*argument).substr(0, comma));
    if (!statement.owners.set.findCameraByName(camera)) {
        return std::unexpected(std::format("Camera \"{}\" doesn't exist.", camera));
    }
    if (comma != std::string::npos) {
        const float hold =
            common::scanFloat(std::string_view(*argument).substr(comma + 1)).value_or(kHoldForever);
        if (hold < 0.0F || hold > kMaxHold) {
            return std::unexpected("Invalid hold time value");
        }
    }
    return {};
}

// "(group, condition)".
Result checkEnableCameraGroup(CScript & /*script*/, SScriptStatement &statement) {
    int group = 0;
    std::string condition;
    if (Result scanned = consumeScanned(
            statement, common::scanPrefix(statement.rest, "(%d , %[^)])", group, condition),
            "Error parsing enableCameraGroup parms");
        !scanned) {
        return scanned;
    }
    return statement.owners.events.validateCondition(trimString(condition));
}

Result checkFinishedAct(CScript & /*script*/, SScriptStatement &statement) {
    return consumeScanned(statement, common::scanPrefix(statement.rest, " ( )"),
                          "Error parsing finishedAct command");
}

Result checkRollCredits(CScript & /*script*/, SScriptStatement &statement) {
    return consumeScanned(statement, common::scanPrefix(statement.rest, " ( )"),
                          "Error parsing rollCredits command");
}

Result checkGetIniInt(CScript & /*script*/, SScriptStatement &statement) {
    std::string key;
    std::string counter;
    return consumeScanned(statement,
                          common::scanPrefix(statement.rest, "(%[^,], %[^,)] )", key, counter),
                          "Error parsing getIniInt command parms");
}

Result checkSetIniInt(CScript & /*script*/, SScriptStatement &statement) {
    std::string key;
    int value = 0;
    return consumeScanned(statement, common::scanPrefix(statement.rest, "(%[^,], %d )", key, value),
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
    return consumeScanned(statement, common::scanPrefix(statement.rest, " (%d )", key_type),
                          "Error parsing removeKeys() command parms");
}

// Either "()" or "(seconds)", with whitespace anywhere around them.
Result checkSetSayTimeOverride(CScript & /*script*/, SScriptStatement &statement) {
    constexpr std::string_view kError = "Error parsing setSayTimeOverride parameters.";
    if (Result opened =
            consumeScanned(statement, common::scanPrefix(statement.rest, " ( "), kError);
        !opened) {
        return opened;
    }
    if (statement.rest.starts_with(')')) {
        statement.rest.remove_prefix(1);
        return {};
    }
    float seconds = 0.0F;
    return consumeScanned(statement, common::scanPrefix(statement.rest, "%f )", seconds), kError);
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
    return consumeScanned(statement, common::scanPrefix(statement.rest, "(%f)", seconds),
                          "Error parsing time value on wait statament");
}

} // namespace

Result consumeScanned(SScriptStatement &statement, std::optional<std::size_t> taken,
                      std::string_view error) {
    if (!taken) {
        return std::unexpected(std::string(error));
    }
    statement.rest.remove_prefix(*taken);
    return {};
}

const CScript::SCommand *CScript::findCommand(std::string_view name) {
    static constexpr std::array kCommands{
        SCommand{.name = "addItemToInventory", .check = &checkAddItemToInventory},
        SCommand{.name = "addLightFilter", .check = &checkAddLightFilter},
        SCommand{.name = "advanceLightFilter", .check = &checkEventCommand},
        SCommand{.name = "allowEnemyAttack", .check = &checkCondition},
        SCommand{.name = "allowHeroControls", .check = &checkCondition},
        SCommand{.name = "allowHeroDamage", .check = &checkCondition},
        SCommand{.name = "attachActorToPlatform", .check = &checkAttachActorToPlatform},
        SCommand{.name = "beginFadeIn", .check = &checkNothing},
        SCommand{.name = "beginFadeOut", .check = &checkNothing},
        SCommand{.name = "breakPoint", .check = &checkNothing},
        SCommand{.name = "cancelCameraHold", .check = &checkNothing},
        SCommand{.name = "cancelWalkTo", .check = &checkCancelWalkTo},
        SCommand{.name = "chainToMission", .check = &checkMissionName},
        SCommand{.name = "clearActorVariable", .check = &checkClearActorVariable},
        SCommand{.name = "createExplosion", .check = &checkEventCommand},
        SCommand{.name = "dbSay", .check = &checkDbSay},
        SCommand{.name = "dbStartSay", .check = &checkDbSay},
        SCommand{.name = "debug", .check = &checkText},
        SCommand{.name = "deleteActor", .check = &checkEventCommand},
        SCommand{.name = "dismember", .check = &checkDismember},
        SCommand{.name = "display", .check = &checkDisplay},
        SCommand{.name = "displayBitmap", .check = &checkEventCommand},
        SCommand{.name = "else", .check = &checkElse},
        SCommand{.name = "enableCamera", .check = &checkEnableCamera},
        SCommand{.name = "enableCameraGroup", .check = &checkEnableCameraGroup},
        SCommand{.name = "enableHealthBar", .check = &checkEnableHealthBar},
        SCommand{.name = "end", .check = &checkNothing},
        SCommand{.name = "fadeAmbientSound", .check = &checkEventCommand},
        SCommand{.name = "fadeIn", .check = &checkNothing},
        SCommand{.name = "fadeOut", .check = &checkNothing},
        SCommand{.name = "fadeSfx", .check = &checkEventCommand},
        SCommand{.name = "finishedAct", .check = &checkFinishedAct},
        SCommand{.name = "flagOff", .check = &checkEventCommand},
        SCommand{.name = "flagOn", .check = &checkEventCommand},
        SCommand{.name = "gameFlagOff", .check = &checkEventCommand},
        SCommand{.name = "gameFlagOn", .check = &checkEventCommand},
        SCommand{.name = "gesture", .check = &checkGesture},
        SCommand{.name = "getIniInt", .check = &checkGetIniInt},
        SCommand{.name = "getTriggerActor", .check = &checkGetTriggerActor},
        SCommand{.name = "gosub", .check = &checkJumpLabel},
        SCommand{.name = "goto", .check = &checkJumpLabel},
        SCommand{.name = "gtfo", .check = &checkText},
        SCommand{.name = "holsterWeapon", .check = &checkHolsterWeapon},
        SCommand{.name = "hurtCharacter", .check = &checkEventCommand},
        SCommand{.name = "idle", .check = &checkNothing},
        SCommand{.name = "if", .check = &checkCondition},
        SCommand{.name = "incCounter", .check = &checkEventCommand},
        SCommand{.name = "killCharacter", .check = &checkEventCommand},
        SCommand{.name = "killHero", .check = &checkEventCommand},
        SCommand{.name = "killSfx", .check = &checkEventCommand},
        SCommand{.name = "letterbox", .check = &checkLetterbox},
        SCommand{.name = "lightning", .check = &checkEventCommand},
        SCommand{.name = "lockFocusActor", .check = &checkCondition},
        SCommand{.name = "lookAt", .check = &checkLookAt},
        SCommand{.name = "movePlatform", .check = &checkMovePlatform},
        SCommand{.name = "openDoor", .check = &checkOpenDoor},
        SCommand{.name = "playSfx", .check = &checkEventCommand},
        SCommand{.name = "pressButton", .check = &checkPressButton},
        SCommand{.name = "raise", .check = &checkRaise},
        SCommand{.name = "releaseButton", .check = &checkReleaseButton},
        SCommand{.name = "removeAllItemsFromInventory", .check = &checkRemoveAllItemsFromInventory},
        SCommand{.name = "removeItemFromInventory", .check = &checkRemoveItemFromInventory},
        SCommand{.name = "removeKeys", .check = &checkRemoveKeys},
        SCommand{.name = "return", .check = &checkNothing},
        SCommand{.name = "rollCredits", .check = &checkRollCredits},
        SCommand{.name = "say", .check = &checkSay},
        SCommand{.name = "selectWeapon", .check = &checkSelectWeapon},
        SCommand{.name = "setActorVariable", .check = &checkSetActorVariable},
        SCommand{.name = "setAmbientSound", .check = &checkShortArgument},
        SCommand{.name = "setCameraAmbient", .check = &checkEventCommand},
        SCommand{.name = "setCameraGroup", .check = &checkSetCameraGroup},
        SCommand{.name = "setCharacterHealth", .check = &checkSetCharacterHealth},
        SCommand{.name = "setCounter", .check = &checkEventCommand},
        SCommand{.name = "setFocusActor", .check = &checkSetFocusActor},
        SCommand{.name = "setGroupAmbient", .check = &checkEventCommand},
        SCommand{.name = "setHeroTask", .check = &checkSetHeroTask},
        SCommand{.name = "setIniInt", .check = &checkSetIniInt},
        SCommand{.name = "setLeverState", .check = &checkEventCommand},
        SCommand{.name = "setLightFilterFrame", .check = &checkEventCommand},
        SCommand{.name = "setModelState", .check = &checkEventCommand},
        SCommand{.name = "setSayTimeOverride", .check = &checkSetSayTimeOverride},
        SCommand{.name = "setSkipLabel", .check = &checkSetSkipLabel},
        SCommand{.name = "setSpeaker", .check = &checkSetSpeaker},
        SCommand{.name = "setTimeFactor", .check = &checkSetTimeFactor},
        SCommand{.name = "setTimer", .check = &checkEventCommand},
        SCommand{.name = "setVictim", .check = &checkSetVictim},
        SCommand{.name = "setWeather", .check = &checkEventCommand},
        SCommand{.name = "shakeScreen", .check = &checkEventCommand},
        SCommand{.name = "slamModelToMotion", .check = &checkEventCommand},
        SCommand{.name = "snapToFace", .check = &checkSnapToFace},
        SCommand{.name = "startSay", .check = &checkSay},
        SCommand{.name = "switchCamera", .check = &checkSwitchCamera},
        SCommand{.name = "timedDisplay", .check = &checkTimedDisplay},
        SCommand{.name = "turnToFace", .check = &checkTurnToFace},
        SCommand{.name = "wait", .check = &checkWait},
        SCommand{.name = "waitFor", .check = &checkCondition},
        SCommand{.name = "walkTo", .check = &checkWalkTo},
        SCommand{.name = "warpTo", .check = &checkEventCommand},
    };
    const auto *command = std::ranges::find_if(kCommands, [name](const SCommand &candidate) {
        return common::equalsIgnoringAsciiCase(candidate.name, name);
    });
    return command == kCommands.end() ? nullptr : command;
}

} // namespace nocturne::core
