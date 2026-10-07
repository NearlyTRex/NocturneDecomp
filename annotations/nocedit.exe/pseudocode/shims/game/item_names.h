#pragma once

// =============================================================================
// ACTOR NAMES THAT INCLUDE CARRIED ITEMS
// =============================================================================
//
// CDemonMission::generateUniqueActorName tests a candidate name with
// findActorByName, which walks only the mission's actor list. An item in a
// hero's inventory is not on that list, so a generated name can repeat one
// already carried. Gated at that call site on NOCTURNE_AUTHENTIC_ITEM_NAMES.

struct CDemonActor;
struct CDemonMission;

#ifdef __cplusplus
extern "C" {
#endif

// findActorByName, then every CHero's inventory, the same set
// CDemonMission::writeFile saves. Case-insensitive, as findActorByName is.
struct CDemonActor *nocturne_item_names_find_actor(struct CDemonMission *mission,
                                                   const char *name);

#ifdef __cplusplus
}
#endif
