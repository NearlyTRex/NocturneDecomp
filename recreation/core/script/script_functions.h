#pragma once

#include "core/fwd.h"

#include <cstddef>
#include <expected>
#include <optional>
#include <string>
#include <string_view>

namespace nocturne::core {

// Why getActor found no actor. A command passes over an actor missing through a variable, which
// may name nothing for now, rather than failing.
struct SActorLookupError {
    std::string message;
    bool by_variable = false;

    bool operator==(const SActorLookupError &) const = default;
};

// A script line without its leading whitespace, its "//" comment, and the whitespace before it.
[[nodiscard]] std::string trimLine(std::string_view line);
[[nodiscard]] std::string_view trimString(std::string_view text);
[[nodiscard]] std::string_view skipWhitespace(std::string_view text);
// A command's "( ... )", nested parentheses included, trimmed; the cursor moves past it and the
// whitespace after. The argument must be shorter than max_length.
[[nodiscard]] std::expected<std::string, std::string> parseArgument(std::string_view &cursor,
                                                                    std::size_t max_length);
// A command's condition, parsed as parseArgument parses it and then checked.
[[nodiscard]] std::expected<std::string, std::string> parseConditionExpr(std::string_view &cursor,
                                                                         CEventList &events);
// The action a pressButton or releaseButton names, ignoring case: walk, backup, run, fire,
// useItem, light, draw or jump.
[[nodiscard]] std::optional<EGameAction> getActionState(std::string_view button);
// '@' then one or more letters, digits or underscores, 30 characters at most.
[[nodiscard]] std::expected<void, std::string>
validateActorVariableName(std::string_view variable_name);
// The actor a command names, of the class it needs: "@variable", "$" for the hero, or an actor's
// name in the mission.
[[nodiscard]] std::expected<CDemonActor *, SActorLookupError>
getActor(std::string_view specifier, const CDemonActorType &expected_class,
         const CDemonMission &mission, const CEventList &events);

} // namespace nocturne::core
