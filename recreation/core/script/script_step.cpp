#include "common/text/ascii.h"
#include "core/script/script.h"
#include "core/script/script_functions.h"

#include <algorithm>
#include <cstddef>
#include <expected>
#include <format>
#include <optional>
#include <string>
#include <string_view>
#include <utility>

namespace nocturne::core {
namespace {

constexpr std::size_t kMaxSkipLabelLength = 100;

// The run of letters and digits a line starts with: a command matches when the line starts with
// its name and the next character is neither.
std::string_view leadingWord(std::string_view text) {
    const auto *const end = std::ranges::find_if_not(text, common::isAsciiAlnum);
    return text.substr(0, static_cast<std::size_t>(end - text.begin()));
}

} // namespace

// The original also passed each step a quarter second, which only a running command reads.
// deferred: clearing the notes of dialogue missing from the database first, with the dbSay
//   commands and startDialogLine
// deferred: going back to running commands once the check passes, with process
// nocedit 0x0055a4b0
std::optional<CScript::SSyntaxError> CScript::validateSyntax() {
    checks_suspended_ = false;
    initRuntime();
    while (next_cmd_ < parsed_lines_.size()) {
        const std::size_t index = next_cmd_;
        if (CommandResult result = step(); !result) {
            return SSyntaxError{.line_number = parsed_lines_[index].line_number,
                                .message = std::move(result.error())};
        }
        next_cmd_ = index + 1;
    }
    return std::nullopt;
}

// deferred: clearing the shown message, with renderSubtitles
// deferred: clearing the wait and dialogue timers and the time a message shows for, with
//   processTimer and startDialogLine
// deferred: clearing the ending flag, the breakpoint state, the call stack, the skip label and
//   the loop warning, with process and skipCinematic
// deferred: choosing the focus actor, the local hero or else the first hero placed in an area,
//   and clearing the speaker and the focus lock, with setFocusActor and the scene camera
// deferred: letting the heroes be damaged and the enemies attack, and clearing the letterbox,
//   with CGame's readers of them
// deferred: clearing the script's time scale, with process
// deferred: playing the set's ambient sound, its geometry file's stem as a .wav and smill and
//   town at 0.85, with CSound::playAmbientSound
// nocedit 0x0055a540
void CScript::initRuntime() {
    next_cmd_ = 0;
}

// The original first set a placeholder message, which every error replaces.
// deferred: quitting on an instruction pointer outside the script, with process
// deferred: passing over labels without checking them while running, with process
// deferred: syntaxCheckOn and syntaxCheckOff leaving a running script alone, with process
// deferred: resetting the wait and dialogue timers once a command finishes, with processTimer
//   and startDialogLine
// deferred: staying on a command that hasn't finished, and the overrun past the end of the
//   script, while running, with process
// deferred: running advanceLightFilter, createExplosion, deleteActor, displayBitmap,
//   hurtCharacter, incCounter, fadeSfx, fadeAmbientSound, flagOn, flagOff, gameFlagOn,
//   gameFlagOff, killCharacter, killHero, killSfx, lightning, playSfx, setCameraAmbient,
//   setCounter, setGroupAmbient, setLightFilterFrame, setLeverState, setModelState, setTimer,
//   setWeather, shakeScreen, slamModelToMotion and warpTo, the line run as event commands, with
//   CEventList::executeCommands
// deferred: running raise, running its event commands, with CEventList::executeCommands
// deferred: running allowEnemyAttack, setting whether enemies attack by its condition, with
//   CEventList::evaluateCondition
// deferred: running allowHeroControls, blocking the heroes' controls unless its condition holds,
//   with CEventList::evaluateCondition
// deferred: running allowHeroDamage, setting whether heroes take damage by its condition, with
//   CEventList::evaluateCondition
// deferred: running lockFocusActor, locking the focus actor by its condition, with
//   CEventList::evaluateCondition
// deferred: running if, skipping the next statement, and an else after it, when its condition
//   is false, with CEventList::evaluateCondition
// deferred: running waitFor, holding the script until its condition holds, with
//   CEventList::evaluateCondition
// deferred: running addItemToInventory, adding the item to the hero's inventory, with
//   CInventory::addItem
// deferred: running attachActorToPlatform, attaching the actor, with CPlatform::attachActor
// deferred: running cancelWalkTo, stopping the character's walk, or every character's in the
//   set, with the characters' walk targets
// deferred: running enableHealthBar, setting the character's health bar, with its health bar
// deferred: running getTriggerActor, storing who set the trigger off in the variable, with
//   CTrigger's triggering actor
// deferred: running lookAt, turning the character's head, with CCharacter::setLookAtTarget
// deferred: running movePlatform, moving the platform, with CPlatform::startMovement
// deferred: running openDoor, holding the script until the character has the door open, with
//   the characters' door targets
// deferred: running removeAllItemsFromInventory, emptying the hero's inventory, with
//   CInventory::initialize
// deferred: running removeItemFromInventory, taking the item the local hero holds by that name
//   from the hero, with CInventory::findItemByName and removeItem
// deferred: running selectWeapon, cycling the hero's weapons to the class, or saying it can't,
//   with CInventory::selectWeapon
// deferred: running setActorVariable, storing the actor in the variable, with process
// deferred: running setCharacterHealth, setting the character's health as a share of its most,
//   with its hit points
// deferred: setFocusActor making the actor the focus, the network camera's choice of it
//   included, while checking too, with the scene camera
// deferred: running setHeroTask, setting the hero's task, with CHero::setAiTask
// deferred: setSpeaker making the character the speaker and, unless the focus is locked, the
//   focus, or clearing the speaker, while checking too, with renderSubtitles and the scene camera
// deferred: running setVictim, setting the enemy's victim or stopping it choosing one, with
//   CEnemy::setVictim
// deferred: running snapToFace, turning the first actor to face the second, with the actors'
//   orientation
// deferred: running turnToFace, turning the character to face the target, with the characters'
//   walk targets
// deferred: running walkTo, walking the character to the target, with the characters' walk
//   targets
// deferred: running addLightFilter, adding the filter to the light, with C3DSLight::addFilter
// deferred: running enableCamera, enabling the camera by its condition, with
//   CDemonSet::setCameraEnabled and CEventList::evaluateCondition
// deferred: running enableCameraGroup, enabling the group by its condition, with
//   CDemonSet::setCameraEnabledByGroup and CEventList::evaluateCondition
// deferred: running setCameraGroup, moving the camera to the group, with the cameras' groups
// deferred: running switchCamera, switching to the camera for the hold time, with
//   CDemonSet::setPendingCamera
// deferred: gesture, the motion the character's model must have and starting it, with
//   CMotionList::findMotionIndex and CCharacter::initGesture
// deferred: dismember, the parts the character's model must have, the direction and spread,
//   drawing the spread's two random angles while checking too, and cutting the parts off, with
//   parseBodyPartMask and createBodyPart
// deferred: running holsterWeapon, holstering the weapon when its condition holds and drawing it
//   otherwise, with CHero::drawWeapon and CEventList::evaluateCondition
// deferred: running pressButton and releaseButton, pressing or releasing the action in the
//   hero's input and handing the controls back from the script, with the heroes' input
// deferred: running dbSay and say, holding the script until the line is said, with
//   processTimer and setSpeaker
// deferred: noting a line the dialogue database doesn't hold in the script's pick list, while
//   checking too, with the script editor
// deferred: running beginFadeIn and beginFadeOut, starting the fade, with CGame's fades
// deferred: running breakPoint, showing where the script stopped and stopping it, with process
// deferred: running cancelCameraHold, ending the camera's hold, with the virtual director
// deferred: running chainToMission, naming the next mission and ending this one, with process
// deferred: running clearActorVariable, clearing the variable, with process
// deferred: running debug, showing the message, with process
// deferred: keeping display's message, while checking too, with renderSubtitles
// deferred: running else, skipping the statement after it, with process
// deferred: running end, ending the mission and noting it for the helper-death fix, with process
// deferred: running fadeIn and fadeOut, holding the script until the fade finishes, with CGame's
//   fades
// deferred: running finishedAct and rollCredits, ending the act, with process
// deferred: running getIniInt, reading the INI value into the counter, with CEventList's
//   counters
// deferred: running gosub and return, calling and returning through the call stack, with process
// deferred: running goto, jumping to the label, with process
// deferred: running gtfo, showing the message and ending the mission, with process
// deferred: running idle, stopping for the frame after moving past it, with process
// deferred: running letterbox, setting the letterbox and what it allows, and turning off the
//   goggles, with CGame's readers of them
// deferred: running removeKeys, taking the keys from every hero, with CHero::removeMatchingKeys
// deferred: running setAmbientSound, playing it, with CSound::playAmbientSound
// deferred: running setIniInt, writing the INI value, with process
// deferred: running setSayTimeOverride, setting how long lines show for, with startDialogLine
// deferred: running setSkipLabel, setting where a skipped cinematic goes, with skipCinematic
// deferred: running setTimeFactor, setting the game's speed, with CGame's time scale
// deferred: running timedDisplay, showing the message for its time, with renderSubtitles and
//   processTimer
// deferred: running wait, holding the script for its time, with processTimer
// nocedit 0x0055a810
CScript::CommandResult CScript::step() {
    const std::size_t index = next_cmd_;
    const SScriptLine &line = parsed_lines_[index];
    ++next_cmd_;
    SStatement statement{.line = line.text,
                         .command = {},
                         .rest = line.text,
                         .line_number = line.line_number,
                         .owners = owners_};
    const char first = line.text.front();
    if (first == '{' || first == '}') {
        return {};
    }
    if (first == ':') {
        return checkLabel(index, statement);
    }
    const std::string_view word = leadingWord(line.text);
    if (common::equalsIgnoringAsciiCase(word, "syntaxCheckOn")) {
        checks_suspended_ = false;
        return {};
    }
    if (common::equalsIgnoringAsciiCase(word, "syntaxCheckOff")) {
        checks_suspended_ = true;
        return {};
    }
    if (checks_suspended_) {
        return {};
    }
    const SCommand *command = findCommand(word);
    if (command == nullptr) {
        return std::unexpected(
            std::format("Unknown command on line {}: {}", line.line_number, line.text));
    }
    statement.command = command->name;
    statement.rest = skipWhitespace(statement.rest.substr(word.size()));
    if (CommandResult result = command->check(*this, statement); !result) {
        return result;
    }
    if (!statement.rest.empty()) {
        return std::unexpected(
            std::format("Extra characters \"{}\" on line {}", statement.rest, line.line_number));
    }
    return {};
}

// The original's message left out the line number its format was given. It also quit if a
// label couldn't find itself, which can't happen.
CScript::CommandResult CScript::checkLabel(std::size_t index, const SStatement &statement) const {
    const std::string_view name = skipWhitespace(statement.rest.substr(1));
    if (!std::ranges::all_of(name, [](char c) { return common::isAsciiAlnum(c) || c == '_'; })) {
        return std::unexpected(
            std::format("Invalid label \"{}\" on line {}", name, statement.line_number));
    }
    const std::size_t first = findLabelIndex(name).value_or(index);
    if (first != index) {
        return std::unexpected(std::format("Duplicate label {} on lines {} and {}", name,
                                           statement.line_number,
                                           parsed_lines_[first].line_number));
    }
    return {};
}

// nocedit 0x00560160
std::optional<std::size_t> CScript::findLabelIndex(std::string_view label_name) const {
    for (std::size_t i = 0; i < parsed_lines_.size(); ++i) {
        const std::string_view text = parsed_lines_[i].text;
        if (text.starts_with(':') &&
            common::equalsIgnoringAsciiCase(skipWhitespace(text.substr(1)), label_name)) {
            return i;
        }
    }
    return std::nullopt;
}

// One statement from start: a command, a { } block, or an if or else with its own statement.
// An if is only taken in as the first line or inside a block, as the original's strnicmp has
// it, so a line that merely starts with "if" counts as one.
// deferred: stopping at an else on the top level, to skip only an if's own statement, with
//   running if
// nocedit 0x005601c0
std::optional<std::size_t> CScript::skipCommands(std::size_t start) const {
    int depth = 0;
    for (std::size_t line = start; line < parsed_lines_.size();) {
        const std::string_view text = parsed_lines_[line].text;
        const bool is_first = line == start;
        if (text.front() == '{') {
            ++depth;
            ++line;
        } else if (text.front() == '}') {
            if (depth == 0) {
                return is_first ? line + 1 : line;
            }
            --depth;
            ++line;
        } else if ((common::startsWithIgnoringAsciiCase(text, "if") && (depth >= 1 || is_first)) ||
                   common::startsWithIgnoringAsciiCase(text, "else")) {
            // An inner skip that runs off the end ends this one too.
            line = skipCommands(line + 1).value_or(parsed_lines_.size());
        } else {
            if (depth == 0) {
                return is_first ? line + 1 : line;
            }
            ++line;
        }
    }
    return std::nullopt;
}

CScript::CommandResult CScript::checkElse(CScript &script, SStatement &statement) {
    if (!script.skipCommands(script.next_cmd_)) {
        return std::unexpected(std::format(
            "Can't skip next command after else statement on line {}", statement.line_number));
    }
    return {};
}

// goto and gosub take the rest of the line as the label.
CScript::CommandResult CScript::checkJumpLabel(CScript &script, SStatement &statement) {
    if (!script.findLabelIndex(statement.rest)) {
        return std::unexpected(std::format("Undefined label {} used in {} statement on line {}",
                                           statement.rest, statement.command,
                                           statement.line_number));
    }
    statement.rest = {};
    return {};
}

CScript::CommandResult CScript::checkSetSkipLabel(CScript &script, SStatement &statement) {
    const std::expected<std::string, std::string> label =
        parseArgument(statement.rest, kMaxSkipLabelLength);
    if (!label) {
        return std::unexpected(label.error());
    }
    if (!script.findLabelIndex(*label)) {
        return std::unexpected(std::format("Undefined label '{}'", *label));
    }
    return {};
}

} // namespace nocturne::core
