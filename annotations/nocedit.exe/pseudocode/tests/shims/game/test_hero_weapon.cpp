// =============================================================================
// HERO WEAPON — each hero's own weapon, and what each can carry
// =============================================================================

#include "behaviour_support.h"
#include "class_support.h"
#include "game/hero_weapon.h"
#include "nocturne_test.h"

#include <cstdio>
#include <cstring>
#include <memory>
#include <string>
#include <vector>

using namespace behaviour_support;

namespace {

// A player of `type`, holding the CGun CHero::ctor gives every hero.
CHero *built_as(CDemonActorType *type) {
    stand.reset();
    place_heroes(1);
    give_class(&heroes[0]->base.base, type);
    CWeapon *pistol = weapon(&g_CGunClassInfo);
    heroes[0]->inventory.items[0] = &pistol->base;
    heroes[0]->inventory.item_count = 1;
    heroes[0]->inventory.selected_weapon = pistol;
    return heroes[0];
}

CWeapon *selected(CHero *hero) {
    return hero->inventory.selected_weapon;
}

std::string model_of(CWeapon *w) {
    std::map<const void *, std::string>::const_iterator it = stand.models.find(&w->model);
    return (it != stand.models.end()) ? it->second : "(none)";
}

} // namespace

// The Stranger, Gabriella and the Baron keep the pistol they were built with.
NOCTURNE_TEST(some_heroes_keep_the_shipped_weapon) {
    for (int type : {HERO_TYPE_GABRIELLA, HERO_TYPE_STRANGER, HERO_TYPE_BARON}) {
        CHero *hero = built_as(&g_CHeroClassInfo);
        CWeapon *pistol = selected(hero);
        nocturne_hero_default_weapon(hero, type);
        CHECK_AT(selected(hero) == pistol, "kept");
        CHECK_AT(stand.inventory_clears == 0, "kept");
    }
}

// Svetlana's blades and Moloch's amulet are melee weapons with models of their
// own, Moloch's with a name of its own; IcePick and Haystack fight with their
// hands and hold nothing.
NOCTURNE_TEST(melee_heroes_hold_their_own_weapon_or_none) {
    CHero *hero = built_as(&g_CSvetlanaClassInfo);
    nocturne_hero_default_weapon(hero, HERO_TYPE_SVETLANA);
    CHECK_EQ(stand.inventory_clears, 1);
    CHECK_EQ(hero->inventory.item_count, 1);
    CWeapon *blades = selected(hero);
    CHECK(blades != nullptr);
    if (blades != nullptr) {
        CHECK_EQ(std::string(blades->base.actor_name), std::string("Your_weapon"));
        CHECK_EQ(model_of(blades), std::string("tort1.kfm"));
    }
    CHECK_EQ(stand.weapon_selections, 1);

    hero = built_as(&g_CMolochClassInfo);
    nocturne_hero_default_weapon(hero, HERO_TYPE_MOLOCH);
    CHECK_EQ(std::string(selected(hero)->base.actor_name),
             std::string(NOCTURNE_MOLOCH_AMULET_NAME));
    CHECK_EQ(model_of(selected(hero)), std::string("AMULET.KFM"));

    for (int type : {HERO_TYPE_ICEPICK, HERO_TYPE_HAYSTACK}) {
        hero = built_as(&g_CHeroClassInfo);
        nocturne_hero_default_weapon(hero, type);
        CHECK(selected(hero) == nullptr);
        CHECK_EQ(hero->inventory.item_count, 0);
    }
}

// Scat's Baron weapon is named by the powder that summons him; in netplay he
// also gets a pistol beside it, which stays unselected.
NOCTURNE_TEST(scat_names_his_powder_and_gets_a_pistol_in_netplay) {
    CHero *hero = built_as(&g_CScatClassInfo);
    CWeapon *baron = selected(hero);
    nocturne_hero_default_weapon(hero, HERO_TYPE_SCAT);
    CHECK_EQ(model_of(baron), std::string("a2s2-pouch.kfm"));
    CHECK_EQ(hero->inventory.item_count, 1);

    hero = built_as(&g_CScatClassInfo);
    stand.net_active = 1;
    nocturne_hero_default_weapon(hero, HERO_TYPE_SCAT);
    CHECK_EQ(hero->inventory.item_count, 2);
    CWeapon *pistol = (CWeapon *)hero->inventory.items[1];
    CHECK(selected(hero) != pistol);
    CHECK_EQ(pistol->ammo_count, 100);
}

// The Colonel's own pistol replaces the shipped one, and is selected.
NOCTURNE_TEST(the_colonel_gets_his_sidearm) {
    CHero *hero = built_as(&g_CColonelClassInfo);
    nocturne_hero_default_weapon(hero, HERO_TYPE_COLONEL);
    CHECK_EQ(hero->inventory.item_count, 1);
    CHECK_EQ(nocturne_hero_weapon_is_sidearm(selected(hero)), 1);
    CHECK_EQ(stand.weapon_selections, 1);
    CHECK_EQ(nocturne_hero_weapon_is_sidearm(nullptr), 0);
    CWeapon *other = weapon(&g_CGunClassInfo);
    std::snprintf(other->base.actor_name, sizeof(other->base.actor_name), "colonel_SIDEARM");
    CHECK_EQ(nocturne_hero_weapon_is_sidearm(other), 1);
    std::snprintf(other->base.actor_name, sizeof(other->base.actor_name), "Your_weapon");
    CHECK_EQ(nocturne_hero_weapon_is_sidearm(other), 0);
}

// The sidearm never runs dry. Scat's netplay pistol is topped up after each
// shot, in netplay only; any other gun is left as the shot left it.
NOCTURNE_TEST(the_extra_guns_never_run_dry) {
    CHero *hero = built_as(&g_CColonelClassInfo);
    nocturne_hero_default_weapon(hero, HERO_TYPE_COLONEL);
    selected(hero)->ammo_count = 99;
    nocturne_hero_reload_extra_gun(hero, selected(hero));
    CHECK_EQ(selected(hero)->ammo_count, 100);

    hero = built_as(&g_CScatClassInfo);
    stand.net_active = 1;
    nocturne_hero_default_weapon(hero, HERO_TYPE_SCAT);
    CWeapon *pistol = (CWeapon *)hero->inventory.items[1];
    CWeapon *picked_up = weapon(&g_CGunClassInfo);
    pistol->ammo_count = picked_up->ammo_count = 99;
    nocturne_hero_reload_extra_gun(hero, picked_up);
    CHECK_EQ(picked_up->ammo_count, 99);
    nocturne_hero_reload_extra_gun(hero, pistol);
    CHECK_EQ(pistol->ammo_count, 100);
    pistol->ammo_count = 99;
    stand.net_active = 0;
    nocturne_hero_reload_extra_gun(hero, pistol);
    CHECK_EQ(pistol->ammo_count, 99);
    // A hero who was never handed one.
    stand.net_active = 1;
    nocturne_hero_reload_extra_gun(heroes[1], pistol);
    CHECK_EQ(pistol->ammo_count, 99);
}

// The pistols remembered are the newest eight heroes'; a hero built again keeps
// his place, and the oldest is the one let go.
NOCTURNE_TEST(the_newest_eight_extra_guns_are_remembered) {
    stand.reset();
    stand.net_active = 1;
    place_heroes(1);
    std::vector<std::unique_ptr<CHero>> many;
    for (int i = 0; i < 9; i++) {
        many.emplace_back(new CHero());
        CHero *h = many.back().get();
        std::memset(h, 0, sizeof(*h));
        give_class(&h->base.base, &g_CScatClassInfo);
        h->inventory.selected_weapon = weapon(&g_CGunClassInfo);
        nocturne_hero_default_weapon(h, HERO_TYPE_SCAT);
    }
    nocturne_hero_default_weapon(many[8].get(), HERO_TYPE_SCAT); // built again
    for (int i = 0; i < 9; i++) {
        CInventory &inv = many[i]->inventory;
        CWeapon *pistol = (CWeapon *)inv.items[inv.item_count - 1];
        pistol->ammo_count = 1;
        nocturne_hero_reload_extra_gun(many[i].get(), pistol);
        CHECK_AT(pistol->ammo_count == (i == 0 ? 1 : 100), std::to_string(i).c_str());
    }
}

// The Baron's weapon and the melee stand-in have no ammunition to show.
NOCTURNE_TEST(weapons_without_ammunition_hide_it) {
    stand.reset();
    CDemonActorType baron = class_support::make("CBaronWeapon", 0x440, &g_CWeaponClassInfo);
    CHECK_EQ(nocturne_hero_weapon_hides_ammo(weapon(&baron)), 1);
    CHECK_EQ(nocturne_hero_weapon_hides_ammo(weapon(&g_CShovelClassInfo)), 1);
    CHECK_EQ(nocturne_hero_weapon_hides_ammo(weapon(&g_CGunClassInfo)), 0);
}

// The Stranger carries anything; Gabriella guns and the gas mask; any other
// player hero health and the rest, but no weapon; anyone not playing, anything.
NOCTURNE_TEST(each_class_carries_what_it_can_use) {
    stand.reset();
    place_heroes(3);
    give_class(&heroes[0]->base.base, &g_CStrangerClassInfo);
    give_class(&heroes[1]->base.base, &g_CGabriellaClassInfo);
    give_class(&heroes[2]->base.base, &g_CSvetlanaClassInfo);
    struct Item {
        CDemonActorType *type;
        int stranger, gabriella, svetlana;
    };
    const Item items[] = {
        {&g_CHealthItemClassInfo, 1, 1, 1}, {&g_CMeleeClassInfo, 1, 0, 0},
        {&g_CShovelClassInfo, 1, 0, 0},     {&g_CGasMaskClassInfo, 1, 1, 0},
        {&g_CGunClassInfo, 1, 1, 0},        {&g_CAmmoClassInfo, 1, 1, 0},
        {&g_CAmmoBoxClassInfo, 1, 1, 0},    {&item_type, 1, 1, 1},
    };
    for (const Item &it : items) {
        CDemonActor *thing = &weapon(it.type)->base;
        CHECK_AT(nocturne_hero_can_hold_item(heroes[0], thing) == it.stranger, it.type->class_name);
        CHECK_AT(nocturne_hero_can_hold_item(heroes[1], thing) == it.gabriella,
                 it.type->class_name);
        CHECK_AT(nocturne_hero_can_hold_item(heroes[2], thing) == it.svetlana, it.type->class_name);
        CHECK_AT(nocturne_hero_can_hold_item(heroes[3], thing) == 1, it.type->class_name);
    }
}

// The heroes' own slot items have names and descriptions of their own, found by
// the item's name or its model, whatever the case.
NOCTURNE_TEST(the_heroes_own_items_have_their_own_text) {
    stand.reset();
    CWeapon *amulet = weapon(&g_CShovelClassInfo);
    std::snprintf(amulet->base.actor_name, sizeof(amulet->base.actor_name), "moloch_amulet");
    CHECK_EQ(std::string(nocturne_hero_item_text(&amulet->base, "AMULET.KFM", 0)),
             std::string("Moloch's Amulet"));
    CWeapon *sidearm = weapon(&g_CGunClassInfo);
    std::snprintf(sidearm->base.actor_name, sizeof(sidearm->base.actor_name),
                  NOCTURNE_COLONEL_SIDEARM_NAME);
    CHECK(
        std::string(nocturne_hero_item_text(&sidearm->base, "gat.kfm", 1)).find("never runs dry") !=
        std::string::npos);
    CWeapon *other = weapon(&g_CGunClassInfo);
    CHECK_EQ(std::string(nocturne_hero_item_text(&other->base, "GABGUN.KFM", 0)),
             std::string("Gabriella's Pistol"));
    CHECK(nocturne_hero_item_text(&other->base, "gat.kfm", 0) == nullptr);
}

// Weapons in hand that are not the selected one go back in the inventory; a
// player's weapon is put away from his hand, and nothing else is touched.
NOCTURNE_TEST(unselected_weapons_are_put_away) {
    stand.reset();
    place_heroes(1);
    CInventory &inv = heroes[0]->inventory;
    CWeapon *chosen = weapon(&g_CGunClassInfo);
    CWeapon *held = weapon(&g_CGunClassInfo);
    CWeapon *stowed = weapon(&g_CGunClassInfo);
    CDemonActor *medkit = &weapon(&g_CHealthItemClassInfo)->base;
    chosen->weapon_state = WEAPON_STATE_IN_HAND;
    held->weapon_state = WEAPON_STATE_IN_HAND;
    stowed->weapon_state = WEAPON_STATE_IN_INVENTORY;
    CDemonActor *list[] = {&chosen->base, nullptr, &held->base, &stowed->base, medkit};
    for (CDemonActor *a : list)
        inv.items[inv.item_count++] = a;
    inv.selected_weapon = chosen;
    nocturne_hero_stow_unselected_weapons(heroes[0]);
    CHECK_EQ(stand.weapon_states.size(), (size_t)1);
    CHECK_EQ((int)held->weapon_state, (int)WEAPON_STATE_IN_INVENTORY);
    CHECK_EQ((int)chosen->weapon_state, (int)WEAPON_STATE_IN_HAND);

    nocturne_hero_put_away_weapon(heroes[0], chosen);
    CHECK_EQ((int)chosen->weapon_state, (int)WEAPON_STATE_IN_INVENTORY);
    held->weapon_state = WEAPON_STATE_IN_HAND;
    nocturne_hero_put_away_weapon(heroes[1], held);
    nocturne_hero_put_away_weapon(heroes[0], stowed);
    nocturne_hero_put_away_weapon(heroes[0], nullptr);
    CHECK_EQ(stand.weapon_states.size(), (size_t)2);
}

// The shotgun and the elephant gun throw a shell; nothing else does.
NOCTURNE_TEST(shotguns_throw_shells) {
    stand.reset();
    CDemonActorType shotgun = class_support::make("CShotgun", 0x450, &g_CGunClassInfo);
    CDemonActorType elephant = class_support::make("CElephantGun", 0x460, &g_CGunClassInfo);
    CHECK_EQ(nocturne_hero_weapon_ejects_shell(weapon(&shotgun)), 1);
    CHECK_EQ(nocturne_hero_weapon_ejects_shell(weapon(&elephant)), 1);
    CHECK_EQ(nocturne_hero_weapon_ejects_shell(weapon(&g_CGunClassInfo)), 0);
    CHECK_EQ(nocturne_hero_weapon_ejects_shell(nullptr), 0);
}

NOCTURNE_TEST_MAIN()
