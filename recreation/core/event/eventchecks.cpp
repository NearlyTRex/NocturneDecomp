#include "core/event/eventchecks.h"

#include "common/text/ascii.h"
#include "core/actor/actor_functions.h"
#include "core/actor/demonactor.h"
#include "core/actor/demonactortype.h"
#include "core/actor/notported.h"
#include "core/hero/hero.h"
#include "core/mission/demonmission.h"

#include <cstddef>
#include <expected>
#include <format>
#include <optional>
#include <string>
#include <string_view>

namespace nocturne::core {

// nocedit 0x004b0f90
bool isValidIdentifierChar(char c) {
    return common::isAsciiAlnum(c) || c == '_' || c == '-';
}

// deferred: an actor variable, missing when unset or of another class, with getActorByVarName
// deferred: the hero "$" means in a network game, the gas room's unmasked hero else the first,
//   with CNetGame's sessions
// nocedit 0x004aa400
std::expected<CDemonActor *, std::string>
resolveActorByName(const CDemonMission &mission, std::string_view name,
                   const CDemonActorType &expected_class) {
    if (name.empty()) {
        return std::unexpected("Must specify actor name");
    }
    if (name.starts_with('@')) {
        quitNotPorted("CEventList", "getActorByVarName");
    }
    CDemonActor *actor = nullptr;
    if (common::equalsIgnoringAsciiCase(name, "$")) {
        actor = mission.getHero(0);
        if (actor == nullptr) {
            return nullptr;
        }
    } else {
        actor = mission.findActorByName(name);
        if (actor == nullptr) {
            return std::unexpected(std::format("Actor \"{}\" does not exist.", name));
        }
    }
    if (!isOfClassHash(actor, expected_class.name_hash)) {
        return std::unexpected(
            std::format("Actor \"{}\" is of type {}, this command requires an actor of type {}.",
                        name, actor->getActorClassName(), expected_class.class_name));
    }
    return actor;
}

CEventList::CheckResult checkActor(const CDemonMission &mission, std::string_view name,
                                   const CDemonActorType &expected_class) {
    const auto actor = resolveActorByName(mission, name, expected_class);
    if (!actor) {
        return std::unexpected(actor.error());
    }
    return {};
}

CEventList::CheckResult consume(std::string_view &rest, std::optional<std::size_t> taken,
                                std::string_view error) {
    if (!taken) {
        return std::unexpected(std::string(error));
    }
    rest.remove_prefix(*taken);
    return {};
}

} // namespace nocturne::core
