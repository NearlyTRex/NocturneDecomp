#pragma once

#include "core/fwd.h"

#include <optional>
#include <span>
#include <string>

namespace nocturne::core {

void freeInventory();

// The model an item the inventory holds is shown with; fatal for a class that is no item.
[[nodiscard]] const CKeyFramedModelInstance &getItemModel(const CDemonActor &actor);
// To draw it.
[[nodiscard]] CKeyFramedModelInstance &getItemModel(CDemonActor &actor);
// The item's name and description as the item list gives them for its model, matched in either
// case; a model the list lacks takes the unlisted text given, and without one reads
// "Add to dict: " and the model's name.
[[nodiscard]] std::string getItemDisplayName(const CDemonActor &actor,
                                             std::span<const SInventoryItemInfo> items,
                                             const std::optional<std::string> &unlisted = {});
[[nodiscard]] std::string getItemDescription(const CDemonActor &actor,
                                             std::span<const SInventoryItemInfo> items,
                                             const std::optional<std::string> &unlisted = {});

} // namespace nocturne::core
