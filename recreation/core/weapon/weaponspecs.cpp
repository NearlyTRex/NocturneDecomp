#include "core/weapon/weaponspecs.h"

#include "common/text/ascii.h"
#include "core/actor/actor_functions.h"
#include "core/actor/demonactor.h"
#include "core/actor/demonactortype.h"
#include "core/dmodel/keyframedmodelinstance.h"
#include "core/weapon/weapon.h"
#include "engine/package/gamecontent.h"

#include <algorithm>
#include <cstddef>
#include <optional>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::core {
namespace {

// How many classes up from the actor's own the class is; none when it isn't one of them.
std::optional<std::size_t> getClassDistance(const CDemonActor &weapon,
                                            std::string_view class_name) {
    std::size_t distance = 0;
    for (const CDemonActorType *type = &weapon.getActorType(); type != nullptr;
         type = type->parent_type) {
        if (common::equalsIgnoringAsciiCase(type->class_name, class_name)) {
            return distance;
        }
        ++distance;
    }
    return std::nullopt;
}

// A given value narrows the match to it; an empty one doesn't.
bool fits(std::string_view given, std::string_view actual) {
    return given.empty() || common::equalsIgnoringAsciiCase(given, actual);
}

// How narrowly a weapon names an actor: by its name, then by its model, then by its class alone.
enum class ENarrowing : std::uint8_t { ClassAlone, Model, Actor };

struct SMatch {
    const engine::SWeaponSpec *spec;
    ENarrowing narrowing;
    std::size_t distance;
};

// The field of the most specific of the actor's weapons that gives it; fallback when none does.
bool findFlag(const engine::SGameContent &content, const CDemonActor &weapon,
              std::optional<bool> engine::SWeaponSpec::*field, bool fallback) {
    for (const engine::SWeaponSpec *spec : findWeaponSpecs(content, weapon)) {
        if (const std::optional<bool> &value = spec->*field) {
            return *value;
        }
    }
    return fallback;
}

// The text field of the most specific of the actor's weapons giving it, the actor's own when that
// weapon names its actor; none when none gives it.
std::optional<SWeaponText> findText(const engine::SGameContent &content, const CDemonActor &weapon,
                                    std::string engine::SWeaponSpec::*field) {
    for (const engine::SWeaponSpec *spec : findWeaponSpecs(content, weapon)) {
        if (!(spec->*field).empty()) {
            return SWeaponText{.text = spec->*field, .actors_own = !spec->actor.empty()};
        }
    }
    return std::nullopt;
}

} // namespace

std::vector<const engine::SWeaponSpec *> findWeaponSpecs(const engine::SGameContent &content,
                                                         const CDemonActor &weapon) {
    const auto *as_weapon = castToClass<CWeapon>(&weapon);
    const std::string_view model =
        as_weapon != nullptr ? std::string_view(as_weapon->getModel().getModelName()) : "";
    std::vector<SMatch> matches;
    for (const engine::SWeaponSpec &spec : content.weapons) {
        const std::optional<std::size_t> distance = getClassDistance(weapon, spec.class_name);
        if (distance && fits(spec.model, model) && fits(spec.actor, weapon.getActorName())) {
            ENarrowing narrowing = ENarrowing::ClassAlone;
            if (!spec.actor.empty()) {
                narrowing = ENarrowing::Actor;
            } else if (!spec.model.empty()) {
                narrowing = ENarrowing::Model;
            }
            matches.push_back({.spec = &spec, .narrowing = narrowing, .distance = *distance});
        }
    }
    std::ranges::stable_sort(matches, [](const SMatch &first, const SMatch &second) {
        if (first.narrowing != second.narrowing) {
            return first.narrowing > second.narrowing;
        }
        return first.distance < second.distance;
    });
    std::vector<const engine::SWeaponSpec *> specs;
    specs.reserve(matches.size());
    for (const SMatch &match : matches) {
        specs.push_back(match.spec);
    }
    return specs;
}

std::optional<SWeaponText> getWeaponName(const engine::SGameContent &content,
                                         const CDemonActor &weapon) {
    return findText(content, weapon, &engine::SWeaponSpec::name);
}

std::optional<SWeaponText> getWeaponDescriptionText(const engine::SGameContent &content,
                                                    const CDemonActor &weapon) {
    return findText(content, weapon, &engine::SWeaponSpec::description);
}

bool isWeaponCounted(const engine::SGameContent &content, const CDemonActor &weapon) {
    return findFlag(content, weapon, &engine::SWeaponSpec::counted, true);
}

bool doesWeaponNameRounds(const engine::SGameContent &content, const CDemonActor &weapon) {
    return findFlag(content, weapon, &engine::SWeaponSpec::names_rounds, false);
}

} // namespace nocturne::core
