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

[[nodiscard]] bool isValidIdentifierChar(char c);
// The actor an event names, of the class it needs. A null actor is one missing for now: "$"
// without a hero. A name the mission doesn't hold, or an actor of another class, is an error.
[[nodiscard]] std::expected<CDemonActor *, std::string>
resolveActorByName(const CDemonMission &mission, std::string_view name,
                   const CDemonActorType &expected_class);
// The named actor, of the class, or why not; one missing for now passes.
[[nodiscard]] CEventList::CheckResult checkActor(const CDemonMission &mission,
                                                 std::string_view name,
                                                 const CDemonActorType &expected_class);
// Moves past what a format took, or fails with the message.
[[nodiscard]] CEventList::CheckResult
consume(std::string_view &rest, std::optional<std::size_t> taken, std::string_view error);

} // namespace nocturne::core
