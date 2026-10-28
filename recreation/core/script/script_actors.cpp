#include "common/text/ascii.h"
#include "common/text/scanformat.h"
#include "core/actor/demonactor.h"
#include "core/actor/demonactortype.h"
#include "core/actor/notported.h"
#include "core/charactr/character.h"
#include "core/door/door.h"
#include "core/enemy/enemy.h"
#include "core/event/eventlist.h"
#include "core/hero/hero.h"
#include "core/platfrm/platform.h"
#include "core/script/commandchecks.h"
#include "core/script/script.h"
#include "core/script/script_functions.h"
#include "core/trigger/trigger.h"

#include <algorithm>
#include <array>
#include <cstddef>
#include <expected>
#include <format>
#include <optional>
#include <span>
#include <string>
#include <string_view>
#include <type_traits>

namespace nocturne::core {
namespace {

using Result = ScriptCheckResult;

constexpr std::size_t kMaxActorName = 100;
constexpr std::size_t kMaxWalker = 200;
constexpr std::array<std::string_view, 3> kHealthBarModes = {"false", "true", "always"};
constexpr std::array<std::string_view, 5> kHeroTasks = {"stand", "follow", "kill", "guard",
                                                        "suspend"};

// Nothing when the actor is there. Otherwise what the command's check comes to: the error, or,
// for an actor missing through a variable, passing the rest of the command over unchecked.
std::optional<Result> missing(SScriptStatement &statement, std::string_view specifier,
                              const CDemonActorType &expected_class) {
    const auto actor =
        getActor(specifier, expected_class, statement.owners.mission, statement.owners.events);
    if (actor) {
        return std::nullopt;
    }
    if (!actor.error().by_variable) {
        return std::unexpected(actor.error().message);
    }
    statement.rest = {};
    return Result{};
}

std::string trimmed(std::string_view text) {
    return std::string(trimString(text));
}

bool isOneOf(std::string_view word, std::span<const std::string_view> words) {
    return std::ranges::any_of(words, [word](std::string_view candidate) {
        return common::equalsIgnoringAsciiCase(word, candidate);
    });
}

// The two arguments most of the commands take, each trimmed.
struct SPair {
    std::string first;
    std::string second;
};

using PairFormat = std::type_identity_t<common::CScanFormat<std::string, std::string>>;

std::expected<SPair, std::string> scanPair(SScriptStatement &statement, PairFormat format,
                                           std::string_view error) {
    SPair pair;
    if (const Result scanned = consumeScanned(statement,
                                              common::scanPrefix<std::string, std::string>(
                                                  statement.rest, format, pair.first, pair.second),
                                              error);
        !scanned) {
        return std::unexpected(scanned.error());
    }
    return SPair{.first = trimmed(pair.first), .second = trimmed(pair.second)};
}

// Two actors, in the order the command looks them up.
Result checkBoth(SScriptStatement &statement, std::string_view earlier,
                 const CDemonActorType &earlier_class, std::string_view later,
                 const CDemonActorType &later_class) {
    if (const std::optional<Result> stop = missing(statement, earlier, earlier_class)) {
        return *stop;
    }
    return missing(statement, later, later_class).value_or(Result{});
}

// "(first, second)" with two actors, the second looked up first when second_looked_up_first.
Result checkPairOfActors(SScriptStatement &statement, PairFormat format, std::string_view error,
                         const CDemonActorType &first_class, const CDemonActorType &second_class,
                         bool second_looked_up_first) {
    const std::expected<SPair, std::string> pair = scanPair(statement, format, error);
    if (!pair) {
        return std::unexpected(pair.error());
    }
    if (second_looked_up_first) {
        return checkBoth(statement, pair->second, second_class, pair->first, first_class);
    }
    return checkBoth(statement, pair->first, first_class, pair->second, second_class);
}

// "(name" then, when a comma follows, ", second" looked up as second_class, then ")".
Result checkOptionalSecond(SScriptStatement &statement, std::string_view error,
                           std::string_view missing_parenthesis, const CDemonActorType &first_class,
                           const CDemonActorType &second_class, bool second_may_disable) {
    std::string first;
    if (const Result scanned =
            consumeScanned(statement, common::scanPrefix(statement.rest, "(%[^,)]", first), error);
        !scanned) {
        return scanned;
    }
    if (const std::optional<Result> stop = missing(statement, trimmed(first), first_class)) {
        return *stop;
    }
    if (statement.rest.starts_with(',')) {
        std::string second;
        if (const Result scanned = consumeScanned(
                statement, common::scanPrefix(statement.rest, ", %[^)]", second), error);
            !scanned) {
            return scanned;
        }
        second = trimmed(second);
        const bool disabled =
            second_may_disable && common::equalsIgnoringAsciiCase(second, "disable");
        if (const std::optional<Result> stop =
                disabled ? std::nullopt : missing(statement, second, second_class)) {
            return *stop;
        }
    }
    if (!statement.rest.starts_with(')')) {
        return std::unexpected(std::string(missing_parenthesis));
    }
    statement.rest.remove_prefix(1);
    return {};
}

// "(hero, button)".
Result checkButton(SScriptStatement &statement, std::string_view error) {
    const std::expected<SPair, std::string> pair = scanPair(statement, " ( %[^,], %[^)])", error);
    if (!pair) {
        return std::unexpected(pair.error());
    }
    if (const std::optional<Result> stop = missing(statement, pair->first, CHero::kType)) {
        return *stop;
    }
    if (!getActionState(pair->second)) {
        return std::unexpected(std::format("Invalid button name: {}", pair->second));
    }
    return {};
}

// One actor after a parenthesised argument the parse reads.
Result checkArgumentActor(SScriptStatement &statement, std::size_t max_length,
                          const CDemonActorType &expected_class) {
    const std::expected<std::string, std::string> actor = parseArgument(statement.rest, max_length);
    if (!actor) {
        return std::unexpected(actor.error());
    }
    return missing(statement, *actor, expected_class).value_or(Result{});
}

} // namespace

Result checkAddItemToInventory(CScript & /*script*/, SScriptStatement &statement) {
    return checkPairOfActors(statement, " ( %[^,], %[^)])",
                             "Error parsing addItemToInventory command parms", CHero::kType,
                             CDemonActor::kType, false);
}

Result checkAttachActorToPlatform(CScript & /*script*/, SScriptStatement &statement) {
    return checkPairOfActors(statement, "(%[^,], %[^)])",
                             "Error parsing attachActorToPlatform command parms",
                             CDemonActor::kType, CPlatform::kType, true);
}

Result checkCancelWalkTo(CScript & /*script*/, SScriptStatement &statement) {
    const std::expected<std::string, std::string> walker =
        parseArgument(statement.rest, kMaxWalker);
    if (!walker) {
        return std::unexpected(walker.error());
    }
    if (common::equalsIgnoringAsciiCase(*walker, "all")) {
        return {};
    }
    return missing(statement, *walker, CCharacter::kType).value_or(Result{});
}

Result checkEnableHealthBar(CScript & /*script*/, SScriptStatement &statement) {
    const std::expected<SPair, std::string> pair =
        scanPair(statement, "(%[^,], %[^)])", "Error parsing enableHealthBar parms");
    if (!pair) {
        return std::unexpected(pair.error());
    }
    if (const std::optional<Result> stop = missing(statement, pair->first, CCharacter::kType)) {
        return *stop;
    }
    if (!isOneOf(pair->second, kHealthBarModes)) {
        return std::unexpected(std::format("Invalid health bar mode '{}'", pair->second));
    }
    return {};
}

Result checkGetTriggerActor(CScript & /*script*/, SScriptStatement &statement) {
    const std::expected<SPair, std::string> pair =
        scanPair(statement, "(%[^,], %[^)])", "Error parsing getTriggerActor command parms");
    if (!pair) {
        return std::unexpected(pair.error());
    }
    if (const std::expected<void, std::string> valid = validateActorVariableName(pair->first);
        !valid) {
        return valid;
    }
    return missing(statement, pair->second, CTrigger::kType).value_or(Result{});
}

// "(character, parts...": the character's model must have each part, which the model's parts
// aren't ported to find yet. The original's scan had to take five characters, which "(a,b" falls
// short of.
Result checkDismember(CScript & /*script*/, SScriptStatement &statement) {
    constexpr std::size_t kMinScan = 5;
    std::string character;
    std::string parts;
    const std::optional<std::size_t> taken =
        common::scanPrefix(statement.rest, "(%[^,], %[^,)]", character, parts);
    if (!taken || *taken < kMinScan) {
        return std::unexpected("Error parsing dismember command parms");
    }
    statement.rest.remove_prefix(*taken);
    if (const std::optional<Result> stop =
            missing(statement, trimmed(character), CCharacter::kType)) {
        return *stop;
    }
    quitNotPorted("CDeformableModel", "findPartByName");
}

// "(character, motion)": the character's model must have the motion, which the model's motions
// aren't ported to find yet.
Result checkGesture(CScript & /*script*/, SScriptStatement &statement) {
    const std::expected<SPair, std::string> pair =
        scanPair(statement, "(%[^,], %[^)])", "Error parsing gesture command parms");
    if (!pair) {
        return std::unexpected(pair.error());
    }
    if (const std::optional<Result> stop = missing(statement, pair->first, CCharacter::kType)) {
        return *stop;
    }
    quitNotPorted("CMotionList", "findMotionIndex");
}

Result checkPressButton(CScript & /*script*/, SScriptStatement &statement) {
    return checkButton(statement, "Error parsing pressButton() command parms");
}

Result checkReleaseButton(CScript & /*script*/, SScriptStatement &statement) {
    return checkButton(statement, "Error parsing releaseButton() command parms");
}

// "(hero[, condition])": the condition is all but the last character after the comma, which must
// be the ')'.
Result checkHolsterWeapon(CScript & /*script*/, SScriptStatement &statement) {
    constexpr std::string_view kError = "Error parsing holsterWeapon command parms";
    std::string hero;
    if (const Result scanned =
            consumeScanned(statement, common::scanPrefix(statement.rest, "(%[^,)]", hero), kError);
        !scanned) {
        return scanned;
    }
    if (const std::optional<Result> stop = missing(statement, trimmed(hero), CHero::kType)) {
        return *stop;
    }
    if (statement.rest.starts_with(',')) {
        statement.rest.remove_prefix(1);
        if (statement.rest.size() < 2) {
            return std::unexpected(std::string(kError));
        }
        const std::string_view condition = statement.rest.substr(0, statement.rest.size() - 1);
        statement.rest.remove_prefix(condition.size());
        if (const CEventList::CheckResult valid =
                statement.owners.events.validateCondition(condition);
            !valid) {
            return valid;
        }
    }
    if (!statement.rest.starts_with(')')) {
        return std::unexpected("Missing closing ')' in holsterWeapon command");
    }
    statement.rest.remove_prefix(1);
    return {};
}

Result checkLookAt(CScript & /*script*/, SScriptStatement &statement) {
    return checkOptionalSecond(statement, "Error parsing lookAt command parms",
                               "Missing closing ')' in lookAt command", CCharacter::kType,
                               CDemonActor::kType, false);
}

// The position is a share of the platform's path; the rate moves along it.
Result checkMovePlatform(CScript & /*script*/, SScriptStatement &statement) {
    std::string platform;
    float position = 0.0F;
    float rate = 0.0F;
    if (const Result scanned = consumeScanned(
            statement,
            common::scanPrefix(statement.rest, "(%[^,], %f , %f )", platform, position, rate),
            "Error parsing movePlatform command parms");
        !scanned) {
        return scanned;
    }
    if (const std::optional<Result> stop =
            missing(statement, trimmed(platform), CPlatform::kType)) {
        return *stop;
    }
    if (position < 0.0F || position > 1.0F) {
        return std::unexpected("Paramater must be in range 0.0 .. 1.0");
    }
    if (rate <= 0.0F) {
        return std::unexpected(std::format("Invalid movement rate {:f}", rate));
    }
    return {};
}

Result checkOpenDoor(CScript & /*script*/, SScriptStatement &statement) {
    return checkPairOfActors(statement, "(%[^,], %[^)])", "Error parsing openDoor command parms",
                             CCharacter::kType, CDoor::kType, true);
}

Result checkRemoveAllItemsFromInventory(CScript & /*script*/, SScriptStatement &statement) {
    std::string hero;
    if (const Result scanned =
            consumeScanned(statement, common::scanPrefix(statement.rest, " ( %[^)])", hero),
                           "Error parsing removeAllItemsFromInventory command parms");
        !scanned) {
        return scanned;
    }
    return missing(statement, trimmed(hero), CHero::kType).value_or(Result{});
}

// The item is found by name among the hero's when the command runs.
Result checkRemoveItemFromInventory(CScript & /*script*/, SScriptStatement &statement) {
    const std::expected<SPair, std::string> pair = scanPair(
        statement, " ( %[^,], %[^)])", "Error parsing removeItemFromInventory command parms");
    if (!pair) {
        return std::unexpected(pair.error());
    }
    return missing(statement, pair->first, CHero::kType).value_or(Result{});
}

// The weapon is a class name the hero's weapons are tried against when the command runs.
Result checkSelectWeapon(CScript & /*script*/, SScriptStatement &statement) {
    const std::expected<SPair, std::string> pair =
        scanPair(statement, " (%[^,], %[^)])", "Error parsing selectWeapon parameters.");
    if (!pair) {
        return std::unexpected(pair.error());
    }
    return missing(statement, pair->first, CHero::kType).value_or(Result{});
}

// A missing actor fails only when it wasn't named through a variable, and the rest of the line is
// still checked.
Result checkSetActorVariable(CScript & /*script*/, SScriptStatement &statement) {
    const std::expected<SPair, std::string> pair =
        scanPair(statement, "(%[^,], %[^)])", "Error parsing setActorVariable command parms");
    if (!pair) {
        return std::unexpected(pair.error());
    }
    if (const std::expected<void, std::string> valid = validateActorVariableName(pair->first);
        !valid) {
        return valid;
    }
    const auto actor = getActor(pair->second, CDemonActor::kType, statement.owners.mission,
                                statement.owners.events);
    if (!actor && !actor.error().by_variable) {
        return std::unexpected(actor.error().message);
    }
    return {};
}

// The health is a share of the character's most.
Result checkSetCharacterHealth(CScript & /*script*/, SScriptStatement &statement) {
    std::string character;
    float health = 0.0F;
    if (const Result scanned = consumeScanned(
            statement, common::scanPrefix(statement.rest, "(%[^,], %f)", character, health),
            "Error parsing setCharacterHealth parms");
        !scanned) {
        return scanned;
    }
    return missing(statement, trimmed(character), CCharacter::kType).value_or(Result{});
}

Result checkSetFocusActor(CScript & /*script*/, SScriptStatement &statement) {
    return checkArgumentActor(statement, kMaxActorName, CDemonActor::kType);
}

Result checkSetHeroTask(CScript & /*script*/, SScriptStatement &statement) {
    const std::expected<SPair, std::string> pair =
        scanPair(statement, " (%[^,], %[^)])", "Error parsing setHeroTask parameters.");
    if (!pair) {
        return std::unexpected(pair.error());
    }
    if (const std::optional<Result> stop = missing(statement, pair->first, CHero::kType)) {
        return *stop;
    }
    if (!isOneOf(pair->second, kHeroTasks)) {
        return std::unexpected(std::format("Invalid Task: {}", pair->second));
    }
    return {};
}

// "()" names no one: the speaker is cleared.
Result checkSetSpeaker(CScript & /*script*/, SScriptStatement &statement) {
    const std::expected<std::string, std::string> speaker =
        parseArgument(statement.rest, kMaxActorName);
    if (!speaker) {
        return std::unexpected(speaker.error());
    }
    if (speaker->empty()) {
        return {};
    }
    return missing(statement, *speaker, CCharacter::kType).value_or(Result{});
}

// The victim may be "disable", which stops the enemy choosing one.
Result checkSetVictim(CScript & /*script*/, SScriptStatement &statement) {
    return checkOptionalSecond(statement, "Error parsing setVictim command parms",
                               "Missing closing ')' in setVictim command", CEnemy::kType,
                               CCharacter::kType, true);
}

// The original's message names turnToFace.
Result checkSnapToFace(CScript & /*script*/, SScriptStatement &statement) {
    return checkPairOfActors(statement, "(%[^,], %[^)])", "Error snaping turnToFace command parms",
                             CDemonActor::kType, CDemonActor::kType, false);
}

Result checkTurnToFace(CScript & /*script*/, SScriptStatement &statement) {
    return checkPairOfActors(statement, "(%[^,], %[^)])", "Error parsing turnToFace command parms",
                             CCharacter::kType, CDemonActor::kType, false);
}

// "(character, target[, distance[, seconds]])", looked up once the whole of it is read.
Result checkWalkTo(CScript & /*script*/, SScriptStatement &statement) {
    constexpr std::string_view kError = "Error parsing walkTo command parms";
    const std::expected<SPair, std::string> pair = scanPair(statement, "(%[^,], %[^,)] ", kError);
    if (!pair) {
        return std::unexpected(pair.error());
    }
    for (int optional = 0; optional < 2 && statement.rest.starts_with(','); ++optional) {
        float value = 0.0F;
        if (const Result scanned = consumeScanned(
                statement, common::scanPrefix(statement.rest, ",%f ", value), kError);
            !scanned) {
            return scanned;
        }
    }
    if (!statement.rest.starts_with(')')) {
        return std::unexpected("Missing closing parenthesis on walkTo parms");
    }
    statement.rest.remove_prefix(1);
    return checkBoth(statement, pair->first, CCharacter::kType, pair->second, CDemonActor::kType);
}

} // namespace nocturne::core
