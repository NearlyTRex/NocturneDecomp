#include "core/script/script_functions.h"

#include "common/text/ascii.h"
#include "common/text/scan.h"
#include "core/actor/demonactor.h"
#include "core/actor/demonactortype.h"
#include "core/event/eventlist.h"
#include "core/game/gameaction.h"
#include "core/hero/hero.h"
#include "core/mission/demonmission.h"

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

constexpr std::size_t kMaxActorVariableLength = 30;
// A condition is shorter than the original's buffer for it.
constexpr std::size_t kMaxCondition = 100;

std::string_view trimTrailing(std::string_view text) {
    const std::size_t last = text.find_last_not_of(common::kWhitespace);
    return text.substr(0, last == std::string_view::npos ? 0 : last + 1);
}

} // namespace

// nocedit 0x005592c0
std::string trimLine(std::string_view line) {
    const std::string_view text = skipWhitespace(line);
    return std::string(trimTrailing(text.substr(0, text.find("//"))));
}

// The events' trimWhitespace is the same function.
// nocedit 0x00559360
// nocedit 0x004aa650
std::string_view trimString(std::string_view text) {
    return skipWhitespace(trimTrailing(text));
}

// nocedit 0x005593d0
std::string_view skipWhitespace(std::string_view text) {
    const std::size_t first = text.find_first_not_of(common::kWhitespace);
    return text.substr(first == std::string_view::npos ? text.size() : first);
}

// The events' extractParenArg is the same function.
// nocedit 0x005593f0
// nocedit 0x004aa6c0
std::expected<std::string, std::string> parseArgument(std::string_view &cursor,
                                                      std::size_t max_length) {
    cursor = skipWhitespace(cursor);
    if (!cursor.starts_with('(')) {
        return std::unexpected("No opening parenthesis");
    }
    int depth = 0;
    std::string argument;
    for (std::size_t i = 1; argument.size() < max_length; ++i) {
        if (i >= cursor.size()) {
            return std::unexpected("Can't find closing parenthesis");
        }
        const char c = cursor[i];
        if (c == '(') {
            ++depth;
        } else if (c == ')') {
            if (depth == 0) {
                cursor = skipWhitespace(cursor.substr(i + 1));
                return std::string(trimString(argument));
            }
            --depth;
        }
        argument.push_back(c);
    }
    return std::unexpected("Argument too long");
}

// deferred: only parsing the condition while the script runs, with process
// nocedit 0x005594a0
std::expected<std::string, std::string> parseConditionExpr(std::string_view &cursor,
                                                           CEventList &events) {
    std::expected<std::string, std::string> condition = parseArgument(cursor, kMaxCondition);
    if (!condition) {
        return condition;
    }
    if (const CEventList::CheckResult valid = events.validateCondition(*condition); !valid) {
        return std::unexpected(valid.error());
    }
    return condition;
}

// nocedit 0x00559660
std::optional<EGameAction> getActionState(std::string_view button) {
    struct SButton {
        std::string_view name;
        EGameAction action;
    };
    constexpr std::array kButtons{
        SButton{.name = "walk", .action = EGameAction::Walk},
        SButton{.name = "backup", .action = EGameAction::Backup},
        SButton{.name = "run", .action = EGameAction::Run},
        SButton{.name = "fire", .action = EGameAction::Fire},
        SButton{.name = "useItem", .action = EGameAction::UseItem},
        SButton{.name = "light", .action = EGameAction::Light},
        SButton{.name = "draw", .action = EGameAction::Draw},
        SButton{.name = "jump", .action = EGameAction::Jump},
    };
    const auto *found = std::ranges::find_if(kButtons, [button](const SButton &candidate) {
        return common::equalsIgnoringAsciiCase(candidate.name, button);
    });
    if (found == kButtons.end()) {
        return std::nullopt;
    }
    return found->action;
}

// nocedit 0x00559220
std::expected<void, std::string> validateActorVariableName(std::string_view variable_name) {
    if (!variable_name.starts_with('@')) {
        return std::unexpected("Actor variable name must begin with '@'");
    }
    if (variable_name.size() > kMaxActorVariableLength) {
        return std::unexpected(
            std::format("Actor variable name \"{}\" is too long", variable_name));
    }
    const std::string_view name = variable_name.substr(1);
    if (name.empty() ||
        !std::ranges::all_of(name, [](char c) { return common::isAsciiAlnum(c) || c == '_'; })) {
        return std::unexpected(
            std::format("Actor variable name \"{}\" is not valid", variable_name));
    }
    return {};
}

// "$" is the local hero, which is the first outside a network game. Anything wrong with an actor
// named through a variable counts as missing through it, its class included.
// deferred: the hero "$" means in a network game, the gas room's unmasked hero else the first,
//   with CNetGame's sessions
// nocedit 0x005594e0
std::expected<CDemonActor *, SActorLookupError> getActor(std::string_view specifier,
                                                         const CDemonActorType &expected_class,
                                                         const CDemonMission &mission,
                                                         const CEventList &events) {
    if (specifier.empty()) {
        return std::unexpected(SActorLookupError{.message = "Must specify actor name"});
    }
    const bool by_variable = specifier.starts_with('@');
    CDemonActor *actor = nullptr;
    if (by_variable) {
        if (const std::expected<void, std::string> valid = validateActorVariableName(specifier);
            !valid) {
            return std::unexpected(SActorLookupError{.message = valid.error()});
        }
        actor = events.getActorByVarName(specifier);
        if (actor == nullptr) {
            return std::unexpected(SActorLookupError{
                .message = std::format(
                    "Actor variable {} not defined, or doesn't reference an existing actor",
                    specifier),
                .by_variable = true});
        }
    } else if (common::equalsIgnoringAsciiCase(specifier, "$")) {
        actor = mission.getHero(0);
        if (actor == nullptr) {
            return std::unexpected(
                SActorLookupError{.message = "Hero doesn't exist!!?!", .by_variable = true});
        }
    } else {
        actor = mission.findActorByName(specifier);
        if (actor == nullptr) {
            return std::unexpected(SActorLookupError{
                .message = std::format("Actor \"{}\" does not exist.", specifier)});
        }
    }
    if (!checkNameHash(&actor->getActorType(), expected_class.name_hash)) {
        return std::unexpected(SActorLookupError{
            .message = std::format(
                "Actor \"{}\" is of type {}, this command requires an actor of type {}.", specifier,
                actor->getActorClassName(), expected_class.class_name),
            .by_variable = by_variable});
    }
    return actor;
}

} // namespace nocturne::core
