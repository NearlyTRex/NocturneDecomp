// =============================================================================
// HERO ITEMS — every player hero's inventory, and its health items
// =============================================================================

#include "behaviour_support.h"
#include "class_support.h"
#include "game/hero_items.h"
#include "nocturne_test.h"

using namespace behaviour_support;

namespace {

CDemonActorType s_health_item;

// A player hero pressing use with a health item selected.
CHero *about_to_heal() {
    stand.reset();
    place_heroes(1);
    s_health_item = class_support::make("CHealthItem", 0x900);
    CDemonActor *medkit = &character(0)->base;
    give_class(medkit, &s_health_item);
    heroes[0]->inventory.selected_item = medkit;
    heroes[0]->player_input.action_state.use_item = 1;
    return heroes[0];
}

} // namespace

// A player's inventory ticks, unless the class ticks its own; anyone else's is
// not this one's to tick.
NOCTURNE_TEST(a_players_inventory_ticks) {
    stand.reset();
    place_heroes(3);
    give_class(&heroes[1]->base.base, &g_CScatClassInfo);
    give_class(&heroes[2]->base.base, &g_CIcePickClassInfo);
    for (CHero *hero : heroes)
        nocturne_hero_items_process(hero);
    nocturne_hero_items_process(nullptr);
    CHECK_EQ(stand.inventory_updates, 1);
}

// Use with a health item selected uses it, and the press is spent.
NOCTURNE_TEST(use_spends_a_health_item) {
    CHero *hero = about_to_heal();
    nocturne_hero_items_process(hero);
    CHECK_EQ(stand.items_used, 1);
    CHECK_EQ(hero->player_input.action_state.use_item, 0);
}

// Not without the press, with nothing selected, with something that does not
// heal, while dying, or while held.
NOCTURNE_TEST(use_needs_a_free_living_hero_with_a_health_item) {
    struct Case {
        const char *name;
        void (*apply)(CHero *);
    };
    const Case cases[] = {
        {"no press", [](CHero *h) { h->player_input.action_state.use_item = 0; }},
        {"nothing", [](CHero *h) { h->inventory.selected_item = nullptr; }},
        {"a gun", [](CHero *h) { give_class(h->inventory.selected_item, &item_type); }},
        {"dying", [](CHero *h) { death[h] = DEATH_STATE_DYING; }},
        {"held", [](CHero *h) { h->base.grabbed_by = &character(1)->base; }},
    };
    for (const Case &c : cases) {
        CHero *hero = about_to_heal();
        c.apply(hero);
        nocturne_hero_items_process(hero);
        CHECK_AT(stand.items_used == 0, c.name);
    }
}

// With auto-use on, a blow that would kill a player is caught by a health item;
// a death the shipped hero is never rescued from is not. Any damage shows the
// inventory, and a hero who is no player is left as he is.
NOCTURNE_TEST(a_killing_blow_uses_a_health_item) {
    stand.reset();
    place_heroes(1);
    CHero *hero = heroes[0];
    SDamageInfo damage = {};
    damage.damage_type = DAMAGE_TYPE_MELEE;
    damage.damage_amount = 30.0f;
    hero->base.hit_points = -5.0f;
    CHECK_EQ(nocturne_hero_items_damage_taken(hero, &damage), -5.0f);
    CHECK_EQ(stand.display_resets, 1);

    stand.auto_use_health = 1;
    CHECK_EQ(nocturne_hero_items_damage_taken(hero, &damage), 0.0f);
    CHECK_EQ(stand.health_auto_used, 1);

    hero->base.hit_points = -5.0f;
    damage.damage_type = DAMAGE_TYPE_EXPLODE;
    damage.damage_amount = 0.0f;
    nocturne_hero_items_damage_taken(hero, &damage);
    hero->base.hit_points = 5.0f;
    damage.damage_type = DAMAGE_TYPE_MELEE;
    nocturne_hero_items_damage_taken(hero, &damage);
    CHECK_EQ(stand.health_auto_used, 1);
    CHECK_EQ(stand.display_resets, 2);

    heroes[1]->base.hit_points = 7.0f;
    CHECK_EQ(nocturne_hero_items_damage_taken(heroes[1], &damage), 7.0f);
}

NOCTURNE_TEST_MAIN()
