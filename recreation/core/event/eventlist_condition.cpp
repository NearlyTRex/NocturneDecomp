#include "common/math/vector3f.h"
#include "common/text/ascii.h"
#include "common/text/scan.h"
#include "common/text/scanformat.h"
#include "core/actor/actor.h"
#include "core/actor/demonactor.h"
#include "core/charactr/character.h"
#include "core/event/eventchecks.h"
#include "core/event/eventlist.h"
#include "core/glass/glass.h"
#include "core/hero/hero.h"
#include "core/script/script_functions.h"
#include "core/set/demonset.h"

#include <algorithm>
#include <array>
#include <bit>
#include <cstddef>
#include <cstdint>
#include <expected>
#include <format>
#include <optional>
#include <string>
#include <string_view>

namespace nocturne::core {
namespace {

using Result = CEventList::CheckResult;

// How a cmp compares its two sides, numbered as the original numbers them.
enum class EComparisonOp : std::uint8_t {
    LESS = 0,
    LESS_OR_EQUAL = 1,
    EQUAL = 2,
    NOT_EQUAL = 3,
    GREATER_OR_EQUAL = 4,
    GREATER = 5,
};

// isFacing's cone, either side of straight ahead, in degrees: the default and the widest.
constexpr float kDefaultFacingAngle = 45.0F;
constexpr float kMaxFacingAngle = 180.0F;
// The least isFacing's "(first, second" can take, which a one-letter second name without a space
// before it falls short of.
constexpr std::size_t kMinFacingPair = 5;

bool isSpace(char c) {
    return common::kWhitespace.contains(c);
}

char charAt(std::string_view expression, std::size_t position) {
    return position < expression.size() ? expression[position] : '\0';
}

void skipSpaces(std::string_view expression, std::size_t &position) {
    while (isSpace(charAt(expression, position))) {
        ++position;
    }
}

std::string trimmed(std::string_view text) {
    return std::string(trimString(text));
}

// nocedit 0x004aa320
std::optional<EComparisonOp> parseComparisonOp(std::string_view op) {
    constexpr std::array<std::string_view, 6> kOps = {"<", "<=", "==", "!=", ">=", ">"};
    const auto *found = std::ranges::find(kOps, op);
    if (found == kOps.end()) {
        return std::nullopt;
    }
    return static_cast<EComparisonOp>(found - kOps.begin());
}

// "( name )", the name without spaces.
std::expected<std::string, std::string> scanName(std::string_view &rest, std::string_view error) {
    std::string name;
    if (Result scanned = consume(rest, common::scanPrefix(rest, " ( %[^ )] )", name), error);
        !scanned) {
        return std::unexpected(scanned.error());
    }
    return name;
}

// "(argument)", trimmed.
std::expected<std::string, std::string> scanArgument(std::string_view &rest,
                                                     std::string_view error) {
    std::string argument;
    if (Result scanned = consume(rest, common::scanPrefix(rest, " (%[^)])", argument), error);
        !scanned) {
        return std::unexpected(scanned.error());
    }
    return trimmed(argument);
}

// The named actor, of the class.
Result checkNamedActor(const SCheckContext &owners, std::string_view &rest, std::string_view error,
                       const CDemonActorType &expected_class) {
    const std::expected<std::string, std::string> name = scanName(rest, error);
    if (!name) {
        return std::unexpected(name.error());
    }
    return checkActor(owners, *name, expected_class);
}

// "{x, y, z}", or an actor whose place it is.
// nocedit 0x004aa530
Result parseVectorLocation(const SCheckContext &owners, std::string_view &rest) {
    common::CVector3f position;
    if (const std::optional<std::size_t> taken =
            common::scanPrefix(rest, " { %f, %f, %f }", position.x, position.y, position.z)) {
        rest.remove_prefix(*taken);
        return {};
    }
    std::string name;
    const std::optional<std::size_t> taken = common::scanPrefix(rest, " %[^ ,(){}]", name);
    if (!taken) {
        return std::unexpected("Error parsing vector location");
    }
    if (Result actor = checkActor(owners, name, CDemonActor::kType); !actor) {
        return actor;
    }
    rest.remove_prefix(*taken);
    return {};
}

Result checkCmp(const SCheckContext & /*owners*/, std::string_view &rest) {
    std::string left;
    std::string op;
    std::string right;
    if (Result scanned =
            consume(rest, common::scanPrefix(rest, " ( %s %s %[^ )] )", left, op, right),
                    "Error parsing cmp parameters.");
        !scanned) {
        return scanned;
    }
    if (!parseComparisonOp(op)) {
        return std::unexpected("Invalid relational operator in cmp statement");
    }
    return {};
}

// Whether the actor exists is the value, so a missing one is no error.
Result checkExists(const SCheckContext & /*owners*/, std::string_view &rest) {
    const std::expected<std::string, std::string> name =
        scanName(rest, "Error parsing exists parameters.");
    if (!name) {
        return std::unexpected(name.error());
    }
    return {};
}

// The shipped game refused hasItem in a network game; there it asks every hero.
Result checkHasItem(const SCheckContext & /*owners*/, std::string_view &rest) {
    const std::expected<std::string, std::string> item =
        scanArgument(rest, "Error parsing hasItem parameters.");
    if (!item) {
        return std::unexpected(item.error());
    }
    return {};
}

Result checkHasItemType(const SCheckContext &owners, std::string_view &rest) {
    std::string hero;
    std::string item_class;
    if (Result scanned =
            consume(rest, common::scanPrefix(rest, " (%[^,], %[^)] )", hero, item_class),
                    "Error parsing hasItemType parameters.");
        !scanned) {
        return scanned;
    }
    return checkActor(owners, trimmed(hero), CHero::kType);
}

// One key's bit; the shipped game refused hasKeyMask in a network game, where it asks every hero.
Result checkHasKeyMask(const SCheckContext & /*owners*/, std::string_view &rest) {
    int mask = 0;
    if (Result scanned = consume(rest, common::scanPrefix(rest, " ( %d )", mask),
                                 "Error parsing hasKeyMask parameters.");
        !scanned) {
        return scanned;
    }
    if (mask == 0) {
        return std::unexpected("hasKeyMask(0) always returns false!");
    }
    if (!std::has_single_bit(static_cast<std::uint32_t>(mask))) {
        return std::unexpected("mask value must be a power of 2.\n(To test for multiple keys, use "
                               "multiple hasKeyMask() tests)");
    }
    return {};
}

Result checkIsBroken(const SCheckContext &owners, std::string_view &rest) {
    const std::expected<std::string, std::string> glass =
        scanArgument(rest, "Error parsing isBroken parameters.");
    if (!glass) {
        return std::unexpected(glass.error());
    }
    return checkActor(owners, *glass, CGlass::kType);
}

// The original's message misspells the function.
Result checkIsCurrentCamera(const SCheckContext & /*owners*/, std::string_view &rest) {
    const std::expected<std::string, std::string> camera =
        scanName(rest, "Error parsing icCurrentCamera parameters.");
    if (!camera) {
        return std::unexpected(camera.error());
    }
    return {};
}

Result checkIsDead(const SCheckContext &owners, std::string_view &rest) {
    return checkNamedActor(owners, rest, "Error parsing isDead parameters.", CCharacter::kType);
}

Result checkIsFadeFinished(const SCheckContext & /*owners*/, std::string_view &rest) {
    return consume(rest, common::scanPrefix(rest, " ( )"),
                   "Error parsing isFadeFinished function.");
}

// "(place, place, distance)", each place a vector or an actor. The '(' that made the name a
// function's opens it.
Result checkIsInRange(const SCheckContext &owners, std::string_view &rest) {
    constexpr std::string_view kError = "Error parsing isInRange parameters.";
    rest.remove_prefix(1);
    if (Result first = parseVectorLocation(owners, rest); !first) {
        return first;
    }
    if (Result comma = consume(rest, common::scanPrefix(rest, " , "), kError); !comma) {
        return comma;
    }
    if (Result second = parseVectorLocation(owners, rest); !second) {
        return second;
    }
    float distance = 0.0F;
    return consume(rest, common::scanPrefix(rest, " , %f )", distance), kError);
}

Result checkIsOfType(const SCheckContext &owners, std::string_view &rest) {
    std::string actor;
    std::string class_name;
    if (Result scanned =
            consume(rest, common::scanPrefix(rest, " ( %[^ ,] , %[^ )] )", actor, class_name),
                    "Error parsing isOfType parameters.");
        !scanned) {
        return scanned;
    }
    return checkActor(owners, actor, CDemonActor::kType);
}

// "(actor, target[, degrees])": whether the target is within the angle of straight ahead.
Result checkIsFacing(const SCheckContext &owners, std::string_view &rest) {
    constexpr std::string_view kError = "Error parsing isFacing parameters.";
    std::string actor;
    std::string target;
    const std::optional<std::size_t> taken =
        common::scanPrefix(rest, " (%[^,], %[^,)]", actor, target);
    if (!taken || *taken < kMinFacingPair) {
        return std::unexpected(std::string(kError));
    }
    if (Result found = checkActor(owners, trimmed(actor), CDemonActor::kType); !found) {
        return found;
    }
    if (Result found = checkActor(owners, trimmed(target), CDemonActor::kType); !found) {
        return found;
    }
    rest.remove_prefix(*taken);
    if (rest.starts_with(',')) {
        float angle = kDefaultFacingAngle;
        if (Result scanned = consume(rest, common::scanPrefix(rest, ",%f ", angle), kError);
            !scanned) {
            return scanned;
        }
        if (angle < 0.0F || angle > kMaxFacingAngle) {
            return std::unexpected("isFacing() angle must be in range 0..180.");
        }
    }
    if (!rest.starts_with(')')) {
        return std::unexpected(std::string(kError));
    }
    rest.remove_prefix(1);
    return {};
}

Result checkIsLightOn(const SCheckContext &owners, std::string_view &rest) {
    const std::expected<std::string, std::string> light =
        scanName(rest, "Error parsing isLightOn parameters.");
    if (!light) {
        return std::unexpected(light.error());
    }
    if (!owners.set.addLightFilter(*light)) {
        return std::unexpected(std::format("Spotlight {} doesn't exist.", *light));
    }
    return {};
}

Result checkIsNudityEnabled(const SCheckContext & /*owners*/, std::string_view &rest) {
    return consume(rest, common::scanPrefix(rest, " ( )"), "Error parsing isNudityEnabled().");
}

Result checkIsSfxActive(const SCheckContext & /*owners*/, std::string_view &rest) {
    const std::expected<std::string, std::string> sound =
        scanName(rest, "Error parsing isSfxActive parameters.");
    if (!sound) {
        return std::unexpected(sound.error());
    }
    return {};
}

Result checkIsTalking(const SCheckContext &owners, std::string_view &rest) {
    return checkNamedActor(owners, rest, "Error parsing isTalking parameters.", CCharacter::kType);
}

Result checkIsVictim(const SCheckContext &owners, std::string_view &rest) {
    return checkNamedActor(owners, rest, "Error parsing isVictim parameters.", CCharacter::kType);
}

Result checkIsWeaponDrawn(const SCheckContext &owners, std::string_view &rest) {
    return checkNamedActor(owners, rest, "Error parsing isWeaponDrawn parameters.", CHero::kType);
}

Result checkIsWearingGasMask(const SCheckContext &owners, std::string_view &rest) {
    return checkNamedActor(owners, rest, "Error parsing isWearingGasMask parameters.",
                           CHero::kType);
}

// The chance is drawn while checking too.
Result checkRandBool(const SCheckContext &owners, std::string_view &rest) {
    float chance = 0.0F;
    if (Result scanned = consume(rest, common::scanPrefix(rest, " ( %f )", chance),
                                 "Error parsing randBool parameters.");
        !scanned) {
        return scanned;
    }
    static_cast<void>(owners.actor.randomChance(chance));
    return {};
}

Result checkReachedDest(const SCheckContext &owners, std::string_view &rest) {
    return checkNamedActor(owners, rest, "Error parsing reachedDest parameters.",
                           CCharacter::kType);
}

// The functions a condition can call, by name, and their checks.
struct SMetaFunction {
    std::string_view name;
    Result (*check)(const SCheckContext &owners, std::string_view &rest);
};

constexpr std::array kMetaFunctions{
    SMetaFunction{.name = "cmp", .check = &checkCmp},
    SMetaFunction{.name = "exists", .check = &checkExists},
    SMetaFunction{.name = "hasItem", .check = &checkHasItem},
    SMetaFunction{.name = "hasItemType", .check = &checkHasItemType},
    SMetaFunction{.name = "hasKeyMask", .check = &checkHasKeyMask},
    SMetaFunction{.name = "isBroken", .check = &checkIsBroken},
    SMetaFunction{.name = "isCurrentCamera", .check = &checkIsCurrentCamera},
    SMetaFunction{.name = "isDead", .check = &checkIsDead},
    SMetaFunction{.name = "isFadeFinished", .check = &checkIsFadeFinished},
    SMetaFunction{.name = "isInRange", .check = &checkIsInRange},
    SMetaFunction{.name = "isOfType", .check = &checkIsOfType},
    SMetaFunction{.name = "isFacing", .check = &checkIsFacing},
    SMetaFunction{.name = "isLightOn", .check = &checkIsLightOn},
    SMetaFunction{.name = "isNudityEnabled", .check = &checkIsNudityEnabled},
    SMetaFunction{.name = "isSfxActive", .check = &checkIsSfxActive},
    SMetaFunction{.name = "isTalking", .check = &checkIsTalking},
    SMetaFunction{.name = "isVictim", .check = &checkIsVictim},
    SMetaFunction{.name = "isWeaponDrawn", .check = &checkIsWeaponDrawn},
    SMetaFunction{.name = "isWearingGasMask", .check = &checkIsWearingGasMask},
    SMetaFunction{.name = "randBool", .check = &checkRandBool},
    SMetaFunction{.name = "reachedDest", .check = &checkReachedDest},
};

} // namespace

// deferred: evaluating the condition while running, printing an error to the console, with
//   evaluateCondition
// nocedit 0x004add00
Result CEventList::validateCondition(std::string_view expression) {
    expression = expression.substr(0, expression.find('\0'));
    if (expression.empty()) {
        return {};
    }
    return evaluateExpression(expression);
}

// nocedit 0x004add80
Result CEventList::evaluateExpression(std::string_view expression) {
    std::size_t position = 0;
    if (Result evaluated = evaluateLogicalExpr(expression, position); !evaluated) {
        return evaluated;
    }
    if (position < expression.size()) {
        return std::unexpected("Syntax error");
    }
    return {};
}

// Atoms joined by "|" or "&", either doubled or not, every one evaluated.
// deferred: the value of the atoms joined, with evaluateCondition
// nocedit 0x004b0270
Result CEventList::evaluateLogicalExpr(std::string_view expression, std::size_t &position) {
    if (Result first = evaluateAtom(expression, position); !first) {
        return first;
    }
    while (true) {
        const char op = charAt(expression, position);
        if (op != '|' && op != '&') {
            return {};
        }
        ++position;
        if (charAt(expression, position) == op) {
            ++position;
        }
        if (Result next = evaluateAtom(expression, position); !next) {
            return next;
        }
    }
}

// A parenthesised expression, "!" before an atom, a function of the table's, or a flag's name.
// A '.' before any of them is passed over.
// deferred: each atom's value: a flag, event or timer by its name, the counters a cmp compares,
//   the heroes' items and keys, the actors' state, the camera, the fade, the nudity setting and
//   the event sounds, with evaluateCondition
// deferred: hasItem and hasKeyMask asking every hero in a network game, isCurrentCamera asking
//   the network camera, and isWearingGasMask holding for the hero the gas room spares, with
//   CNetGame's sessions
// nocedit 0x004ae140
Result CEventList::evaluateAtom(std::string_view expression, std::size_t &position) {
    skipSpaces(expression, position);
    if (charAt(expression, position) == '.') {
        ++position;
    }
    const char first = charAt(expression, position);
    if (first == '\0') {
        return std::unexpected("Unexpected end of string");
    }
    if (first == '(') {
        ++position;
        if (Result inner = evaluateLogicalExpr(expression, position); !inner) {
            return inner;
        }
        if (charAt(expression, position) != ')') {
            return std::unexpected("Matching ')' is missing");
        }
        ++position;
        skipSpaces(expression, position);
        return {};
    }
    if (first == '!') {
        ++position;
        return evaluateAtom(expression, position);
    }
    if (!isValidIdentifierChar(first)) {
        return std::unexpected("Syntax error");
    }
    const std::size_t start = position;
    while (isValidIdentifierChar(charAt(expression, position))) {
        ++position;
    }
    const std::string_view name = expression.substr(start, position - start);
    if (charAt(expression, position) == '(') {
        const auto *function = std::ranges::find_if(kMetaFunctions, [name](const SMetaFunction &f) {
            return common::equalsIgnoringAsciiCase(f.name, name);
        });
        if (function == kMetaFunctions.end()) {
            return std::unexpected("Invalid meta-function");
        }
        std::string_view rest = expression.substr(position);
        if (Result checked = function->check(SCheckContext{owners_, *this}, rest); !checked) {
            return checked;
        }
        position = expression.size() - rest.size();
    }
    skipSpaces(expression, position);
    return {};
}

} // namespace nocturne::core
