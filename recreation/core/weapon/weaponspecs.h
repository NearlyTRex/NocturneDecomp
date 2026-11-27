#pragma once

#include "core/fwd.h"
#include "engine/fwd.h"

#include <optional>
#include <string>
#include <vector>

namespace nocturne::core {

// The game's [[weapons.weapon]] the actor is, the most specific first: those naming its actor's
// name, then its model, then its class alone, each by how near their class is to its own; ties
// keep the game's order.
[[nodiscard]] std::vector<const engine::SWeaponSpec *>
findWeaponSpecs(const engine::SGameContent &content, const CDemonActor &weapon);

// A weapon's text, the actor's own when the weapon giving it names its actor: a hero's own
// weapon, whose text comes ahead of the item list's for its model.
struct SWeaponText {
    std::string text;
    bool actors_own = false;

    bool operator==(const SWeaponText &) const = default;
};

// The text alone, and the text only when it is the actor's own.
[[nodiscard]] inline std::optional<std::string> getText(const std::optional<SWeaponText> &text) {
    return text.has_value() ? std::optional(text->text) : std::nullopt;
}
[[nodiscard]] inline std::optional<std::string>
getActorsOwnText(const std::optional<SWeaponText> &text) {
    return text.has_value() && text->actors_own ? std::optional(text->text) : std::nullopt;
}

// The name and description of the most specific of its weapons giving one; none when none does.
[[nodiscard]] std::optional<SWeaponText> getWeaponName(const engine::SGameContent &content,
                                                       const CDemonActor &weapon);
[[nodiscard]] std::optional<SWeaponText>
getWeaponDescriptionText(const engine::SGameContent &content, const CDemonActor &weapon);

// Whether its panel shows its count, as the most specific of its weapons giving it says; yes
// when none does.
[[nodiscard]] bool isWeaponCounted(const engine::SGameContent &content, const CDemonActor &weapon);
// Whether its description names the rounds it loads, likewise; no when none says.
[[nodiscard]] bool doesWeaponNameRounds(const engine::SGameContent &content,
                                        const CDemonActor &weapon);

} // namespace nocturne::core
