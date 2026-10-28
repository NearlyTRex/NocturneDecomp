#include "core/event/eventlist.h"

#include "common/error/error.h"
#include "common/text/ascii.h"
#include "core/actor/demonactor.h"
#include "core/set/demonset.h"

#include <algorithm>
#include <cstddef>
#include <format>
#include <optional>
#include <string>
#include <string_view>

namespace nocturne::core {
namespace {

// The most actor variables there can be at once.
constexpr std::size_t kMaxActorVariables = 25;

} // namespace

// deferred: emptying the events, counters, timers, sounds and game flags, with the functions
//   that read them
// nocedit 0x004aaa50
CEventList::CEventList(const SEventListOwners &owners) : owners_(owners) {}

// deferred: emptying the events, counters, timers and sounds, with the functions that read them
// nocedit 0x004aaa70
void CEventList::reset() {
    actor_vars_.clear();
}

// nocedit 0x004b09a0
void CEventList::setActorVariable(std::string_view var_name, const CDemonActor *actor) {
    if (actor != nullptr && actor->getActorName().empty()) {
        common::displayErrorAndQuit(
            std::format("Tried to assign actor var {} an actor of type {} with no name", var_name,
                        actor->getActorClassName()));
    }
    const std::optional<std::size_t> found = findActorVariable(var_name);
    if (!found) {
        if (actor == nullptr) {
            return;
        }
        if (actor_vars_.size() >= kMaxActorVariables) {
            common::displayErrorAndQuit(std::format(
                "CEventList::setActorVariable - already too many actor variables.  Max is {}.",
                kMaxActorVariables));
        }
        actor_vars_.push_back(
            {.var_name = std::string(var_name), .actor_name = std::string(actor->getActorName())});
        return;
    }
    if (actor == nullptr) {
        actor_vars_.erase(actor_vars_.begin() + static_cast<std::ptrdiff_t>(*found));
        return;
    }
    actor_vars_[*found] = {.var_name = std::string(var_name),
                           .actor_name = std::string(actor->getActorName())};
}

// The actor is found by its name among the set's, so one not in the set names none.
// nocedit 0x004b0b80
CDemonActor *CEventList::getActorByVarName(std::string_view name) const {
    const std::optional<std::size_t> found = findActorVariable(name);
    if (!found) {
        return nullptr;
    }
    const std::string &actor_name = actor_vars_[*found].actor_name;
    for (CDemonActor *actor : owners_.set.getActors()) {
        if (common::equalsIgnoringAsciiCase(actor->getActorName(), actor_name)) {
            return actor;
        }
    }
    return nullptr;
}

// nocedit 0x004b0bf0
std::optional<std::size_t> CEventList::findActorVariable(std::string_view name) const {
    const auto found = std::ranges::find_if(actor_vars_, [name](const SActorVariable &variable) {
        return common::equalsIgnoringAsciiCase(variable.var_name, name);
    });
    if (found == actor_vars_.end()) {
        return std::nullopt;
    }
    return static_cast<std::size_t>(found - actor_vars_.begin());
}

} // namespace nocturne::core
