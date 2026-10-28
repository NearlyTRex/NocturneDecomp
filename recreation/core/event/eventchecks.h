#pragma once

#include "core/event/eventlist.h"
#include "core/fwd.h"

#include <cstddef>
#include <expected>
#include <optional>
#include <string>
#include <string_view>

namespace nocturne::core {

// What the checks of conditions and commands share.

// What a check looks things up in: the events' owners, and the events, whose actor variables
// name actors and whose conditions a command can hold.
struct SCheckContext : SEventListOwners {
    CEventList &events;
};

[[nodiscard]] bool isValidIdentifierChar(char c);
// The actor an event names, of the class it needs. A null actor is one missing for now: "$"
// without a hero, or an actor variable unset or of another class. A name the mission doesn't
// hold, or a named actor of another class, is an error.
[[nodiscard]] std::expected<CDemonActor *, std::string>
resolveActorByName(const SCheckContext &context, std::string_view name,
                   const CDemonActorType &expected_class);
// The named actor, of the class, or why not; one missing for now passes.
[[nodiscard]] CEventList::CheckResult checkActor(const SCheckContext &context,
                                                 std::string_view name,
                                                 const CDemonActorType &expected_class);
// Moves past what a format took, or fails with the message.
[[nodiscard]] CEventList::CheckResult
consume(std::string_view &rest, std::optional<std::size_t> taken, std::string_view error);

} // namespace nocturne::core
