// =============================================================================
// ITEM NAMES — an item found by name, carried or not
// =============================================================================

#include "game/item_names.h"
#include "game_support.h"
#include "nocturne_test.h"

#include <cstdio>
#include <memory>

using namespace game_support;

namespace {

void name(CDemonActor *actor, const char *text) {
    std::snprintf(actor->actor_name, sizeof(actor->actor_name), "%s", text);
}

} // namespace

// The mission's own lookup answers first; past that, an item a hero carries is
// found by its name, whatever its case. Actors that are not heroes carry
// nothing to look through, and an empty inventory slot is passed over.
NOCTURNE_TEST(an_item_is_found_in_the_world_or_in_a_heros_hands) {
    stand.reset();
    std::unique_ptr<CDemonMission> mission(new CDemonMission());
    CDemonActor *ground = &character(0)->base;
    stand.named["Lantern"] = ground;
    CHECK(nocturne_item_names_find_actor(mission.get(), "Lantern") == ground);

    // An actor that is no hero, then a hero holding a gap and the item.
    CDemonActor *stranger = &heroes[0]->base.base;
    CDemonActor *bystander = &character(1)->base;
    give_class(bystander, &g_CCharacterClassInfo);
    give_class(stranger, &g_CHeroClassInfo);
    mission->first_actor = bystander;
    bystander->next_actor = stranger;
    CDemonActor *gun = &character(2)->base;
    name(gun, "Shotgun");
    heroes[0]->inventory.items[1] = gun;
    heroes[0]->inventory.item_count = 2;
    CHECK(nocturne_item_names_find_actor(mission.get(), "shotgun") == gun);

    CHECK(nocturne_item_names_find_actor(mission.get(), "Crossbow") == nullptr);
}

NOCTURNE_TEST_MAIN()
