#include "common/error/error.h"
#include "common/text/ascii.h"
#include "core/actor/notported.h"
#include "core/game/game.h"
#include "core/hero/hero.h"
#include "core/mission/demonmission.h"
#include "core/script/script.h"
#include "core/script/script_functions.h"
#include "core/set/demonset.h"
#include "core/sound/sound.h"

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
// Steps an initSection may take without reaching its end.
constexpr int kMaxInitSectionSteps = 10000;
// The hero this machine plays, as a game without netplay always has it.
constexpr std::size_t kLocalHero = 0;

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
// nocedit 0x0055a4b0
// bw1 0x00544100
// bw2 0x00521ff0
// bw3 0x00529710
std::optional<CScript::SSyntaxError> CScript::validateSyntax() {
    checking_ = true;
    checks_suspended_ = false;
    initRuntime();
    while (next_cmd_ < parsed_lines_.size()) {
        const std::size_t index = next_cmd_;
        if (StepResult result = step(); !result) {
            return SSyntaxError{.line_number = parsed_lines_[index].line_number,
                                .message = std::move(result.error())};
        }
        next_cmd_ = index + 1;
    }
    checking_ = false;
    return std::nullopt;
}

// deferred: resetting the heroes' input and centring the pointer when a command in the section
//   took the input, with pressButton and releaseButton
// nocedit 0x0055a6c0
void CScript::executeInitSection() {
    checking_ = false;
    const std::optional<std::size_t> start = findLabelIndex("initSection");
    if (!start) {
        return;
    }
    const std::optional<std::size_t> end = findLabelIndex("initSectionEnd");
    if (!end) {
        common::displayErrorAndQuit(
            R"(Script has "initSection" label, but no "initSectionEnd" label.)");
    }
    const std::size_t resume = next_cmd_;
    next_cmd_ = *start;
    for (int steps = 1;; ++steps) {
        const std::size_t index = next_cmd_;
        if (StepResult result = step(); !result) {
            const SScriptLine &line = parsed_lines_[index];
            common::displayErrorAndQuit(
                std::format("Error processing script.\nLine: {}\nText: {}\nWhat's wrong: {}\n",
                            line.line_number, line.text, result.error()));
        }
        if (next_cmd_ == *end) {
            break;
        }
        if (steps > kMaxInitSectionSteps) {
            common::displayErrorAndQuit("Infinite loop detected in initSection.\n");
        }
    }
    next_cmd_ = resume;
}

// deferred: clearing the wait and dialogue timers and the time a message shows for, with
//   processTimer and startDialogLine
// deferred: clearing the skip label, with skipCinematic
// The cameras follow the local hero, the virtual director told to choose for them.
// deferred: following the first hero placed in an area when the local hero is in none (the
//   decomp's netplay focus fallback), with CNetGame's sessions, which bring the other heroes
// deferred: clearing the speaker and the focus lock, with setFocusActor and setSpeaker
// deferred: letting the heroes be damaged and the enemies attack, with CGame's readers of them
// The letterbox is down and drawn so, and no line is shown.
// The set's ambient sound is the one its file gives, or its geometry's stem as a .wav, the
// mill's and the town's quieter.
// nocedit 0x0055a540
void CScript::initRuntime() {
    next_cmd_ = 0;
    current_message_.clear();
    focus_actor_ = owners_.mission.getHero(kLocalHero);
    focus_actor_changed_ = true;
    owners_.game.letterbox_mode = ELetterbox::Off;
    letterbox_extension_ = 0.0F;
    owners_.sound.playAmbientSound(owners_.set.getAmbientSound());
    mission_ended_ = false;
    call_stack_.clear();
    loop_warning_shown_ = false;
    state_ = EState::Running;
}

CDemonActor *CScript::getFocusActor() const {
    return focus_actor_;
}

bool CScript::isMissionEnded() const {
    return mission_ended_;
}

bool CScript::takeFocusActorChanged() {
    return std::exchange(focus_actor_changed_, false);
}

// The original first set a placeholder message, which every error replaces.
// deferred: resetting the wait and dialogue timers once a command finishes, with processTimer
//   and startDialogLine
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
// deferred: running setActorVariable, storing the actor in the variable, with
//   CEventList::setActorVariable
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
// deferred: running cancelCameraHold, ending the camera's hold, with the virtual director
// deferred: running chainToMission, naming the next mission and ending this one, with
//   CDemonMission::setMissionName
// deferred: running clearActorVariable, clearing the variable, with
//   CEventList::setActorVariable
// deferred: end noting the mission's end for the helper-death fix (the decomp's
//   helper_death.h), with CGame::runGameSession's Game Over menu
// deferred: running fadeIn and fadeOut, holding the script until the fade finishes, with CGame's
//   fades
// deferred: running finishedAct and rollCredits, ending the act and the mission, with
//   runGameSession's act completion
// deferred: running getIniInt, reading the INI value into the counter, with CEventList's
//   counters
// deferred: letterbox setting what the letterbox allows: the heroes' damage, the enemies'
//   attacks and the hero's controls, the script's saved command and input flag, with their
//   readers
// deferred: letterbox turning the goggles off and choosing the focus's camera again, with the
//   goggles
// deferred: running removeKeys, taking the keys from every hero, with CHero::removeMatchingKeys
// deferred: running setIniInt, writing the INI value, with CIniFile::setInteger
// deferred: running setSayTimeOverride, setting how long lines show for, with startDialogLine
// deferred: running setSkipLabel, setting where a skipped cinematic goes, with skipCinematic
// deferred: running setTimeFactor, setting the game's speed, with CGame's time scale
// deferred: running timedDisplay, showing the message for its time, with renderSubtitles and
//   processTimer
// deferred: running wait, holding the script for its time, with processTimer
// nocedit 0x0055a810
CScript::StepResult CScript::step() {
    if (next_cmd_ >= parsed_lines_.size()) {
        common::displayErrorAndQuit(
            "CScript::step - Invalid instruction pointer!\n(This is an internal script processing "
            "error,\nand doesn't mean there's anything wrong with the\nscript file.)");
    }
    const std::size_t index = next_cmd_;
    const SScriptLine &line = parsed_lines_[index];
    ++next_cmd_;
    SStatement statement{.line = line.text,
                         .command = {},
                         .rest = line.text,
                         .line_number = line.line_number,
                         .running = !checking_,
                         .owners = owners_,
                         .focus = focus_actor_,
                         .end = EScriptStepEnd::Done};
    if (CommandResult result = stepLine(statement, index); !result) {
        return std::unexpected(result.error());
    }
    switch (statement.end) {
    case EScriptStepEnd::Done:
        if (!checking_ && next_cmd_ >= parsed_lines_.size()) {
            return std::unexpected("Overrun past the end of the script.");
        }
        break;
    case EScriptStepEnd::Holds:
        next_cmd_ = index;
        break;
    case EScriptStepEnd::Yields:
        break;
    }
    return statement.end;
}

// The line's brace, label, check switch or command.
CScript::CommandResult CScript::stepLine(SStatement &statement, std::size_t index) {
    const std::string_view text = statement.line;
    const char first = text.front();
    if (first == '{' || first == '}') {
        return {};
    }
    // A running script passes over its labels.
    if (first == ':') {
        return checking_ ? checkLabel(index, statement) : CommandResult{};
    }
    const std::string_view word = leadingWord(text);
    // Both leave a running script alone.
    const bool check_on = common::equalsIgnoringAsciiCase(word, "syntaxCheckOn");
    if (check_on || common::equalsIgnoringAsciiCase(word, "syntaxCheckOff")) {
        if (checking_) {
            checks_suspended_ = !check_on;
        }
        return {};
    }
    if (checking_ && checks_suspended_) {
        return {};
    }
    return stepCommand(statement, word);
}

// The command the line starts with, checked, and run when the script is running.
CScript::CommandResult CScript::stepCommand(SStatement &statement, std::string_view word) {
    const SCommand *command = findCommand(word);
    if (command == nullptr) {
        return std::unexpected(
            std::format("Unknown command on line {}: {}", statement.line_number, statement.line));
    }
    statement.command = command->name;
    statement.rest = skipWhitespace(statement.rest.substr(word.size()));
    if (CommandResult result = command->check(*this, statement); !result) {
        return result;
    }
    if (!statement.rest.empty()) {
        return std::unexpected(std::format("Extra characters \"{}\" on line {}", statement.rest,
                                           statement.line_number));
    }
    if (statement.running && !command->runs) {
        quitNotPorted("CScript", std::format("step running {}", command->name));
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
