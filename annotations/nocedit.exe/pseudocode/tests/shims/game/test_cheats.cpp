// =============================================================================
// CHEATS — the Options > Cheats presets, armed from the menu, applied at start
// =============================================================================
//
// With no INI yet; test_cheats_saved.cpp starts from a saved one.

#include "../gl/ini_support.h"
#include "cheats_support.h"
#include "class_support.h"
#include "game/cheats.h"
#include "nocturne_test.h"

#include <cstring>
#include <string>
#include <vector>

using namespace cheats_support;

namespace {

// The first line of each page, in picker order, and one past the last page.
const int kPageStarts[] = {NOCTURNE_CHEAT_GOD_MODE,  NOCTURNE_CHEAT_ALL_GUNS,
                           NOCTURNE_CHEAT_ALL_MELEE, NOCTURNE_CHEAT_ITEM_TONIC,
                           NOCTURNE_CHEAT_DEV_MODE,  NOCTURNE_CHEAT_COUNT};

// Opens the line's page, steps the line once and backs out of both menus.
void step(int index) {
    int page = 0;
    while (kPageStarts[page + 1] <= index)
        page++;
    stand.choices = {page, index - kPageStarts[page]};
    nocturne_cheats_menu();
}

// Steps the line until it holds `value`.
void arm(int index, int value) {
    for (int i = 0; i < 3 && nocturne_cheat_local(index) != value; i++)
        step(index);
}

// Every line off and no host deciding, then a fresh stand.
void fresh() {
    enter_empty_dir("nocturne_cheats_test");
    stand.reset();
    nocturne_cheats_clear_override();
    for (int i = 0; i < NOCTURNE_CHEAT_COUNT; i++)
        arm(i, 0);
    stand.reset();
}

// The Stranger, as the one hero.
void play_stranger() {
    g_HeroActors[0] = &stranger->base;
    g_HeroCount = 1;
}

CMelee *melee_with_model(CHero *hero, const char *model) {
    for (int i = 0; i < hero->inventory.item_count; i++) {
        CMelee *m = (CMelee *)hero->inventory.items[i];
        if (std::strcmp(m->base.model.model_name, model) == 0)
            return m;
    }
    return nullptr;
}

} // namespace

// With no INI every line is off, here and as a host would send it; an index
// past either end is off too.
NOCTURNE_TEST(every_line_starts_off) {
    fresh();
    for (int i = 0; i < NOCTURNE_CHEAT_COUNT; i++) {
        CHECK_EQ_AT(nocturne_cheat_active(i), 0, std::to_string(i));
        CHECK_EQ_AT(nocturne_cheat_local(i), 0, std::to_string(i));
    }
    CHECK_EQ(nocturne_cheat_active(-1), 0);
    CHECK_EQ(nocturne_cheat_active(NOCTURNE_CHEAT_COUNT), 0);
    CHECK_EQ(nocturne_cheat_local(-1), 0);
    CHECK_EQ(nocturne_cheat_local(NOCTURNE_CHEAT_COUNT), 0);
}

// The picker offers the five pages; a frame with nothing picked keeps it open.
// A page lists its own lines with their states, and a line picked steps,
// is written to the INI and is applied at once.
NOCTURNE_TEST(the_menu_lists_pages_and_steps_lines) {
    fresh();
    place_heroes(1);
    heroes[0]->base.hit_points = 10.0f;
    stand.choices = {-1, 0, -1, 0};
    nocturne_cheats_menu();

    CHECK_EQ(stand.frames.size(), (size_t)5);
    CHECK_EQ(stand.frames[0].title, std::string("Cheats"));
    CHECK(stand.frames[0].lines ==
          std::vector<std::string>({"Gameplay", "Guns & Ammo", "Melee Weapons", "Items", "Debug"}));
    CHECK_EQ(stand.frames[1].title, std::string("Cheats"));
    CHECK_EQ(stand.frames[2].title, std::string("Gameplay"));
    CHECK_EQ(stand.frames[2].lines.size(), (size_t)8);
    CHECK_EQ(stand.frames[2].lines[0], std::string("God mode : Off"));
    CHECK_EQ(stand.frames[2].lines[3], std::string("Weather : Off"));
    CHECK_EQ(stand.frames[4].lines[0], std::string("God mode : On"));

    CHECK_EQ(nocturne_cheat_local(NOCTURNE_CHEAT_GOD_MODE), 1);
    CHECK_EQ(ini_support::values["Cheats/godMode"], std::string("1"));
    CHECK_EQ(game->god_mode_enabled, 1);
    CHECK_EQ(heroes[0]->base.hit_points, 100.0f);

    // Each page holds its run of lines.
    const size_t sizes[] = {8, 12, 8, 8, 11};
    for (int page = 0; page < 5; page++) {
        stand.frames.clear();
        stand.choices = {page, -1};
        nocturne_cheats_menu();
        CHECK_EQ_AT(stand.frames[1].lines.size(), sizes[page], std::to_string(page));
    }

    // Off again: the flag follows, and the hero is left as he is.
    heroes[0]->base.hit_points = 10.0f;
    step(NOCTURNE_CHEAT_GOD_MODE);
    CHECK_EQ(game->god_mode_enabled, 0);
    CHECK_EQ(heroes[0]->base.hit_points, 10.0f);
}

// Weather cycles Off, Rain, Snow and back, and backwards on left. Off hands
// the weather back to what the set asked for, or none with no set; with no
// weather there is nothing to tell.
NOCTURNE_TEST(weather_cycles_and_off_restores_the_sets_own) {
    fresh();
    set->weather_type = WEATHER_TYPE_SNOW;
    step(NOCTURNE_CHEAT_WEATHER);
    CHECK_EQ(nocturne_cheat_local(NOCTURNE_CHEAT_WEATHER), NOCTURNE_CHEAT_WEATHER_RAIN);
    step(NOCTURNE_CHEAT_WEATHER);
    CHECK_EQ(nocturne_cheat_local(NOCTURNE_CHEAT_WEATHER), NOCTURNE_CHEAT_WEATHER_SNOW);
    CHECK_EQ(stand.frames.back().lines[3], std::string("Weather : Snow"));
    step(NOCTURNE_CHEAT_WEATHER);
    CHECK_EQ(nocturne_cheat_local(NOCTURNE_CHEAT_WEATHER), NOCTURNE_CHEAT_WEATHER_OFF);
    CHECK(stand.weather ==
          std::vector<EWeatherType>({WEATHER_TYPE_RAIN, WEATHER_TYPE_SNOW, WEATHER_TYPE_SNOW}));
    CHECK_EQ(ini_support::values["Cheats/weather"], std::string("0"));

    stand.left = 1;
    step(NOCTURNE_CHEAT_WEATHER);
    CHECK_EQ(nocturne_cheat_local(NOCTURNE_CHEAT_WEATHER), NOCTURNE_CHEAT_WEATHER_SNOW);
    stand.left = 0;

    g_CDemonSetPtr = nullptr;
    step(NOCTURNE_CHEAT_WEATHER);
    CHECK_EQ(stand.weather.back(), WEATHER_TYPE_NONE);

    stand.weather.clear();
    g_CWeatherPtr = nullptr;
    step(NOCTURNE_CHEAT_WEATHER);
    CHECK(stand.weather.empty());
}

// Each line backed by a game flag follows it both ways.
NOCTURNE_TEST(flag_lines_follow_the_line) {
    struct Case {
        int index;
        int *flag;
    };
    fresh();
    const Case cases[] = {
        {NOCTURNE_CHEAT_FREEZE, &game->freeze_enemies_enabled},
        {NOCTURNE_CHEAT_DISMEMBER, &game->gratuitous_dismemberment},
        {NOCTURNE_CHEAT_DEV_MODE, &game->developer_mode_enabled},
        {NOCTURNE_CHEAT_GEOMETRY_DEBUG, &game->geometry_debug_enabled},
        {NOCTURNE_CHEAT_COLLISION_DEBUG, &game->collision_render_enabled},
        {NOCTURNE_CHEAT_EVENT_DEBUG, &game->event_processing_enabled},
        {NOCTURNE_CHEAT_MEMORY_DEBUG, &game->editor_tools_enabled},
        {NOCTURNE_CHEAT_SOUND_DEBUG, &g_SoundDebugEnabled},
        {NOCTURNE_CHEAT_RENDER_MODE, &game->render_mode},
        {NOCTURNE_CHEAT_HIDE_SET_GEOMETRY, &game->suppress_set_geometry},
    };
    for (const Case &c : cases) {
        step(c.index);
        CHECK_EQ_AT(*c.flag, 1, std::to_string(c.index));
        step(c.index);
        CHECK_EQ_AT(*c.flag, 0, std::to_string(c.index));
    }
}

// Script debug sets its flag and the clear it needs, and shrinks the view to
// 240 lines for the text, then gives the window its height back; with no set
// there is no camera to tell.
NOCTURNE_TEST(script_debug_shrinks_the_view) {
    fresh();
    step(NOCTURNE_CHEAT_SCRIPT_DEBUG);
    CHECK_EQ(game->subtitle_system_enabled, 1);
    CHECK_EQ(game->screen_clear_enabled, 1);
    step(NOCTURNE_CHEAT_SCRIPT_DEBUG);
    CHECK_EQ(game->subtitle_system_enabled, 0);
    CHECK(stand.camera_heights == std::vector<int>({0xf0, 480}));

    g_CDemonSetPtr = nullptr;
    step(NOCTURNE_CHEAT_SCRIPT_DEBUG);
    CHECK_EQ(stand.camera_heights.size(), (size_t)2);
}

// The lines read where they take effect are armed and apply nothing.
NOCTURNE_TEST(lines_read_in_place_apply_nothing) {
    fresh();
    place_heroes(1);
    const int lines[] = {NOCTURNE_CHEAT_INF_BATTERY, NOCTURNE_CHEAT_WARPS,
                         NOCTURNE_CHEAT_PERF_STATS};
    for (int index : lines) {
        step(index);
        CHECK_EQ_AT(nocturne_cheat_active(index), 1, std::to_string(index));
    }
    nocturne_cheats_apply();
    CHECK(stand.created.empty());
    CHECK(stand.kinds.empty());
}

// The easter eggs are armed as persistent events when the line goes on, and
// left alone when it goes off or there are no events.
NOCTURNE_TEST(easter_eggs_are_armed_as_events) {
    fresh();
    step(NOCTURNE_CHEAT_EASTER_EGGS);
    CHECK(stand.events == std::vector<std::string>({"EasterEggSex"}));
    step(NOCTURNE_CHEAT_EASTER_EGGS);
    CHECK_EQ(stand.events.size(), (size_t)1);

    g_CEventListPtr = nullptr;
    step(NOCTURNE_CHEAT_EASTER_EGGS);
    CHECK_EQ(stand.events.size(), (size_t)1);
}

// Big head scales the head and chest bones of every modelled character in the
// set by four, each bone's children through the engine, and puts the big hat
// on the Stranger; off scales them back and returns his own hat.
NOCTURNE_TEST(big_head_scales_the_set_and_swaps_the_hat) {
    fresh();
    play_stranger();
    CCharacter *c = set_character("hero.kfm");
    set_character("");
    stand.bones = {{"Bip01 head", 2}, {"biprtit02", 3}};
    skeleton->bone_count = 5;
    skeleton->bone_list[3].parent_index = 2;
    skeleton->bone_list[4].parent_index = 2;
    c->model.rest_pose_data[2] = 1.0f;
    c->model.rest_pose_data[3] = 2.0f;

    step(NOCTURNE_CHEAT_BIG_HEAD);
    CHECK_EQ(game->big_hat_cheat, 1);
    CHECK_EQ(c->model.rest_pose_data[2], 4.0f);
    CHECK_EQ(c->model.rest_pose_data[3], 8.0f);
    CHECK_EQ(stand.scaled.size(), (size_t)2);
    CHECK_EQ(stand.scaled[0].first, 3);
    CHECK_EQ(stand.scaled[0].second, 4.0f);
    CHECK_EQ(std::string(stranger->model.model_name), std::string("big-hat.kfm"));
    CHECK(stand.precached == std::vector<std::string>({"big-hat.kfm"}));

    step(NOCTURNE_CHEAT_BIG_HEAD);
    CHECK_EQ(game->big_hat_cheat, 0);
    CHECK_EQ(c->model.rest_pose_data[2], 1.0f);
    CHECK_EQ(std::string(stranger->model.model_name), std::string("stranger-hat.kfm"));

    // A set already scaled, as the flag says, is not scaled again.
    stand.scaled.clear();
    game->big_hat_cheat = 1;
    step(NOCTURNE_CHEAT_BIG_HEAD);
    CHECK(stand.scaled.empty());

    // With no set there is nothing to scale, but the hat still changes.
    game->big_hat_cheat = 1;
    g_CDemonSetPtr = nullptr;
    step(NOCTURNE_CHEAT_BIG_HEAD);
    CHECK_EQ(game->big_hat_cheat, 0);
    CHECK(stand.scaled.empty());
}

// The two hats share a slot: arming one disarms the other, and turning big
// head off that way scales the set back before the old hat goes on.
NOCTURNE_TEST(old_hat_and_big_head_exclude_each_other) {
    fresh();
    play_stranger();
    step(NOCTURNE_CHEAT_OLD_HAT);
    CHECK_EQ(std::string(stranger->model.model_name), std::string("oldhat.kfm"));

    step(NOCTURNE_CHEAT_BIG_HEAD);
    CHECK_EQ(nocturne_cheat_local(NOCTURNE_CHEAT_OLD_HAT), 0);
    CHECK_EQ(ini_support::values["Cheats/oldHat"], std::string("0"));
    CHECK_EQ(std::string(stranger->model.model_name), std::string("big-hat.kfm"));

    step(NOCTURNE_CHEAT_OLD_HAT);
    CHECK_EQ(nocturne_cheat_local(NOCTURNE_CHEAT_BIG_HEAD), 0);
    CHECK_EQ(ini_support::values["Cheats/bigHead"], std::string("0"));
    CHECK_EQ(game->big_hat_cheat, 0);
    CHECK_EQ(std::string(stranger->model.model_name), std::string("oldhat.kfm"));

    // Off with the other already off.
    step(NOCTURNE_CHEAT_OLD_HAT);
    step(NOCTURNE_CHEAT_BIG_HEAD);
    step(NOCTURNE_CHEAT_BIG_HEAD);
    CHECK_EQ(std::string(stranger->model.model_name), std::string("stranger-hat.kfm"));
}

// Only the Stranger has a hat to swap, and with no hero in a mission the hat
// lines are stored and applied to nothing.
NOCTURNE_TEST(hats_need_the_stranger_in_a_mission) {
    fresh();
    place_heroes(1);
    step(NOCTURNE_CHEAT_OLD_HAT);
    CHECK(stand.precached.empty());

    stand.reset();
    step(NOCTURNE_CHEAT_OLD_HAT);
    step(NOCTURNE_CHEAT_BIG_HEAD);
    CHECK_EQ(nocturne_cheat_local(NOCTURNE_CHEAT_BIG_HEAD), 1);
    CHECK_EQ(game->big_hat_cheat, 0);
    CHECK(stand.precached.empty());
}

// The armed grants go to every hero at mission start, once: a second start
// finds them already carried. Guns come loaded with 500 rounds and are picked
// up; the Baron's weapon comes as the pouch the dictionary names.
NOCTURNE_TEST(grants_reach_every_hero_once) {
    fresh();
    const int grants[] = {
        NOCTURNE_CHEAT_ALL_GUNS,       NOCTURNE_CHEAT_SHOTGUN,
        NOCTURNE_CHEAT_CROSSBOW,       NOCTURNE_CHEAT_DYNAMITE,
        NOCTURNE_CHEAT_FLAME_THROWER,  NOCTURNE_CHEAT_TOMMY_GUN,
        NOCTURNE_CHEAT_ELEPHANT_GUN,   NOCTURNE_CHEAT_LIGHT_GUN,
        NOCTURNE_CHEAT_SILVER_AMMO,    NOCTURNE_CHEAT_LITHIUM_AMMO,
        NOCTURNE_CHEAT_MERCURY_AMMO,   NOCTURNE_CHEAT_ITEM_BARON,
        NOCTURNE_CHEAT_ALL_MELEE,      NOCTURNE_CHEAT_ITEM_SKELETON_KEY,
        NOCTURNE_CHEAT_ITEM_GAS_MASK,  NOCTURNE_CHEAT_ITEM_TONIC,
        NOCTURNE_CHEAT_ITEM_DOCBAG,    NOCTURNE_CHEAT_ITEM_SCOTCH,
        NOCTURNE_CHEAT_ITEM_HIRAM_KIT, NOCTURNE_CHEAT_ITEM_CANDY,
    };
    for (int index : grants)
        step(index);
    for (int m = NOCTURNE_CHEAT_MELEE_WOODSMANS_AXE; m <= NOCTURNE_CHEAT_MELEE_RELIC; m++)
        step(m);

    place_heroes(2);
    nocturne_cheats_apply();
    for (int h = 0; h < 2; h++) {
        CHero *hero = heroes[h];
        const char *const guns[] = {"CShotgun",  "CCrossbow",    "CDynamite", "CFlameThrower",
                                    "CTommyGun", "CElephantGun", "CLightGun", "CBaronWeapon"};
        for (const char *gun : guns)
            CHECK_EQ_AT(count_class(hero, gun), 1, gun);
        CHECK_EQ(count_class(hero, "CAmmo"), 4);
        CHECK_EQ(count_class(hero, "CMelee"), 7);
        CHECK_EQ(count_class(hero, "CHealthItem"), 5);
        CHECK_EQ(count_class(hero, "CKeyActor"), 1);
        CHECK_EQ(count_class(hero, "CGasMask"), 1);
        CHECK_EQ(count_model(hero, "a2s2-pouch.kfm"), 1);
        CHECK_EQ(count_model(hero, "a2s3-gasmask.kfm"), 1);
    }
    CHECK_EQ(((CWeapon *)heroes[1]->inventory.items[4])->ammo_count, 500);

    const int carried = heroes[0]->inventory.item_count;
    nocturne_cheats_apply();
    CHECK_EQ(heroes[0]->inventory.item_count, carried);
    CHECK_EQ(heroes[1]->inventory.item_count, carried);

    // Each picked up by the hero it went to.
    int picked = 0;
    for (const std::pair<CDemonActor *, CDemonActor *> &p : stand.picked_up) {
        picked += p.second == &heroes[0]->base.base;
    }
    CHECK_EQ(picked, 8 + 7);
}

// The ammo is the four rounds the shipped cheats hand out, each a full load.
NOCTURNE_TEST(ammo_is_matched_by_weapon_and_type) {
    fresh();
    step(NOCTURNE_CHEAT_ALL_GUNS);
    place_heroes(1);
    CHero *hero = heroes[0];

    // Rounds already carried for another weapon, or of another type, are not a
    // match; neither is an empty slot or an item that is not ammunition.
    hero->inventory.items[hero->inventory.item_count++] = nullptr;
    carry(hero, &item_type, "box.kfm");
    CAmmo *other = (CAmmo *)carry(hero, &g_CAmmoClassInfo, "");
    std::strcpy(other->weapon_class_name, "CShotgun");
    other->ammo_type = AMMO_TYPE_SILVER;
    CAmmo *lithium = (CAmmo *)carry(hero, &g_CAmmoClassInfo, "");
    std::strcpy(lithium->weapon_class_name, "cgun");
    lithium->ammo_type = AMMO_TYPE_LITHIUM;

    nocturne_cheats_apply();
    std::vector<std::pair<std::string, int>> rounds;
    for (int i = 0; i < hero->inventory.item_count; i++) {
        CAmmo *ammo = (CAmmo *)hero->inventory.items[i];
        if (ammo == nullptr || class_support::actor_type(&ammo->base) != &g_CAmmoClassInfo)
            continue;
        if (ammo == other || ammo == lithium)
            continue;
        CHECK_EQ(ammo->ammo_count, 500);
        rounds.emplace_back(ammo->weapon_class_name, ammo->ammo_type);
    }
    CHECK(rounds == (std::vector<std::pair<std::string, int>>({{"CGun", AMMO_TYPE_SILVER},
                                                               {"CGun", AMMO_TYPE_MERCURY},
                                                               {"CCrossbow", AMMO_TYPE_HOLY}})));
}

// With nothing to allocate, no ammunition and no gas mask are made; a class
// the factory makes as something else is not handed over.
NOCTURNE_TEST(grants_that_cannot_be_built_hand_over_nothing) {
    fresh();
    step(NOCTURNE_CHEAT_SILVER_AMMO);
    step(NOCTURNE_CHEAT_ITEM_GAS_MASK);
    step(NOCTURNE_CHEAT_SHOTGUN);
    step(NOCTURNE_CHEAT_ITEM_TONIC);
    step(NOCTURNE_CHEAT_MELEE_AXE);
    place_heroes(1);
    stand.alloc_fails = 1;
    stand.not_items = {"CShotgun", "CHealthItem", "CMelee"};
    nocturne_cheats_apply();
    CHECK_EQ(heroes[0]->inventory.item_count, 0);
    CHECK_EQ(stand.created.size(), (size_t)3);
}

// Each melee line grants the weapon its row describes, with the set-file
// properties in place before it is set up, and always carriable.
NOCTURNE_TEST(each_melee_line_grants_its_own_weapon) {
    struct Case {
        int index;
        const char *model;
        int attack_types;
        float lo, hi, dismember;
        int damage_type;
        const char *thrust, *swing, *other;
    };
    const Case cases[] = {
        {NOCTURNE_CHEAT_MELEE_WOODSMANS_AXE, "AX.KFM", 2, 15, 30, 0.5f, 0, "shovel?.wav",
         "axe-meat?.wav", "axe-wood?.wav"},
        {NOCTURNE_CHEAT_MELEE_AXE, "AXE1.KFM", 2, 15, 50, 0.9f, 0, "shovel?.wav", "axe-meat?.wav",
         "axe-wood?.wav"},
        {NOCTURNE_CHEAT_MELEE_BLADED, "TORT1.KFM", 2, 10, 15, 0.5f, 0, "axe-meat?.wav",
         "axe-meat?.wav", "axe-wood?.wav"},
        {NOCTURNE_CHEAT_MELEE_SHOVEL, "SHOVEIT.KFM", 3, 60, 80, 0.5f, 0, "shovel?.wav",
         "shvl-f?.wav", "shvl-s?.wav"},
        {NOCTURNE_CHEAT_MELEE_SPEAR, "melee.kfm", 1, 10, 15, 0.5f, 0, "shovel?.wav", "shvl-f?.wav",
         "shvl-s?.wav"},
        {NOCTURNE_CHEAT_MELEE_STAKE, "STAKELONG.KFM", 1, 10, 15, 0.1f, 2, "shvl-s?.wav",
         "shvl-s?.wav", "shvl-s?.wav"},
        {NOCTURNE_CHEAT_MELEE_RELIC, "HOLYITEM.KFM", 1, 15, 50, 0.7f, 1, "shovel?.wav",
         "shvl-f?.wav", "shvl-s?.wav"},
    };
    for (const Case &c : cases) {
        fresh();
        place_heroes(1);
        step(c.index);
        const std::string note = c.model;
        CHECK_EQ_AT(heroes[0]->inventory.item_count, 1, note);
        CMelee *m = melee_with_model(heroes[0], c.model);
        CHECK_AT(m != nullptr, note);
        if (m == nullptr)
            continue;
        CHECK_EQ_AT(m->allowed_attack_types, c.attack_types, note);
        CHECK_EQ_AT(m->strength_lo, c.lo, note);
        CHECK_EQ_AT(m->strength_hi, c.hi, note);
        CHECK_EQ_AT(m->dismember_prob, c.dismember, note);
        CHECK_EQ_AT(m->ammo_type, c.damage_type, note);
        CHECK_EQ_AT(m->can_go_in_inventory, 1, note);
        CHECK_EQ_AT(std::string(m->thrust_hit_character_sound), std::string(c.thrust), note);
        CHECK_EQ_AT(std::string(m->swing_hit_character_sound), std::string(c.swing), note);
        CHECK_EQ_AT(std::string(m->hit_other_sound), std::string(c.other), note);
        CHECK_EQ_AT(m->base.ammo_count, 0, note);
        CHECK_EQ_AT(stand.set_up.size(), (size_t)1, note);
    }
}

// Each health line grants its own kind at its own tuning.
NOCTURNE_TEST(each_health_line_grants_its_own_kind) {
    struct Case {
        int index;
        const char *model;
        int uses;
        float hp;
    };
    const Case cases[] = {
        {NOCTURNE_CHEAT_ITEM_TONIC, "a1-bottle.kfm", 8, 40},
        {NOCTURNE_CHEAT_ITEM_DOCBAG, "a3-docbag.kfm", 10, 50},
        {NOCTURNE_CHEAT_ITEM_SCOTCH, "a3-bottle.kfm", 1, 100},
        {NOCTURNE_CHEAT_ITEM_HIRAM_KIT, "health_hirambag.kfm", 5, 40},
        {NOCTURNE_CHEAT_ITEM_CANDY, "candy.kfm", 1, 10},
    };
    for (const Case &c : cases) {
        fresh();
        place_heroes(1);
        step(c.index);
        const std::string note = c.model;
        CHECK_EQ_AT(heroes[0]->inventory.item_count, 1, note);
        if (heroes[0]->inventory.item_count != 1)
            continue;
        CHealthItem *item = (CHealthItem *)heroes[0]->inventory.items[0];
        CHECK_EQ_AT(std::string(item->model.model_name), std::string(c.model), note);
        CHECK_EQ_AT(item->use_count, c.uses, note);
        CHECK_EQ_AT(item->hp_restored, c.hp, note);
        CHECK_EQ_AT(stand.named, 1, note);
    }
}

// A carried model blocks its own grant under any case; an empty slot, or an
// item with no model, blocks nothing.
NOCTURNE_TEST(a_carried_model_blocks_its_grant) {
    fresh();
    place_heroes(1);
    CHero *hero = heroes[0];
    hero->inventory.items[hero->inventory.item_count++] = nullptr;
    stand.no_model.insert(carry(hero, &item_type, "candy.kfm"));
    carry(hero, &g_CMeleeClassInfo, "ax.kfm");
    step(NOCTURNE_CHEAT_ALL_MELEE);
    step(NOCTURNE_CHEAT_ITEM_CANDY);
    CHECK_EQ(count_model(hero, "AX.KFM"), 0);
    CHECK_EQ(count_class(hero, "CMelee"), 7);
    CHECK_EQ(count_class(hero, "CHealthItem"), 1);
}

// The skeleton key opens everything and goes by its own name, which is what
// keeps a second one out.
NOCTURNE_TEST(the_skeleton_key_goes_by_its_name) {
    fresh();
    place_heroes(1);
    step(NOCTURNE_CHEAT_ITEM_SKELETON_KEY);
    CHECK_EQ(heroes[0]->inventory.item_count, 1);
    CKeyActor *key = (CKeyActor *)heroes[0]->inventory.items[0];
    CHECK_EQ(key->key_mask, -1);
    CHECK_EQ(std::string(key->base.actor_name), std::string("Skeleton_key"));
    CHECK_EQ(stand.named, 0);

    step(NOCTURNE_CHEAT_ITEM_SKELETON_KEY);
    step(NOCTURNE_CHEAT_ITEM_SKELETON_KEY);
    CHECK_EQ(heroes[0]->inventory.item_count, 1);
}

// Each line asks whether the hero's class may hold what it hands over, and a
// hero refused, or an empty slot, is passed by.
NOCTURNE_TEST(a_hero_who_cannot_hold_it_is_passed_by) {
    struct Case {
        int index;
        EHeroItemKind kind;
    };
    const Case cases[] = {
        {NOCTURNE_CHEAT_GOD_MODE, HERO_ITEM_OTHER},
        {NOCTURNE_CHEAT_FLAMING_AMMO, HERO_ITEM_OTHER},
        {NOCTURNE_CHEAT_ITEM_SKELETON_KEY, HERO_ITEM_OTHER},
        {NOCTURNE_CHEAT_ITEM_GAS_MASK, HERO_ITEM_GAS_MASK},
        {NOCTURNE_CHEAT_ALL_GUNS, HERO_ITEM_GUN},
        {NOCTURNE_CHEAT_SHOTGUN, HERO_ITEM_GUN},
        {NOCTURNE_CHEAT_CROSSBOW, HERO_ITEM_GUN},
        {NOCTURNE_CHEAT_DYNAMITE, HERO_ITEM_GUN},
        {NOCTURNE_CHEAT_FLAME_THROWER, HERO_ITEM_GUN},
        {NOCTURNE_CHEAT_TOMMY_GUN, HERO_ITEM_GUN},
        {NOCTURNE_CHEAT_ELEPHANT_GUN, HERO_ITEM_GUN},
        {NOCTURNE_CHEAT_LIGHT_GUN, HERO_ITEM_GUN},
        {NOCTURNE_CHEAT_ITEM_BARON, HERO_ITEM_GUN},
        {NOCTURNE_CHEAT_SILVER_AMMO, HERO_ITEM_GUN},
        {NOCTURNE_CHEAT_LITHIUM_AMMO, HERO_ITEM_GUN},
        {NOCTURNE_CHEAT_MERCURY_AMMO, HERO_ITEM_GUN},
        {NOCTURNE_CHEAT_ALL_MELEE, HERO_ITEM_MELEE},
        {NOCTURNE_CHEAT_MELEE_WOODSMANS_AXE, HERO_ITEM_MELEE},
        {NOCTURNE_CHEAT_MELEE_AXE, HERO_ITEM_MELEE},
        {NOCTURNE_CHEAT_MELEE_BLADED, HERO_ITEM_MELEE},
        {NOCTURNE_CHEAT_MELEE_SHOVEL, HERO_ITEM_MELEE},
        {NOCTURNE_CHEAT_MELEE_SPEAR, HERO_ITEM_MELEE},
        {NOCTURNE_CHEAT_MELEE_STAKE, HERO_ITEM_MELEE},
        {NOCTURNE_CHEAT_MELEE_RELIC, HERO_ITEM_MELEE},
        {NOCTURNE_CHEAT_ITEM_TONIC, HERO_ITEM_HEALTH},
        {NOCTURNE_CHEAT_ITEM_DOCBAG, HERO_ITEM_HEALTH},
        {NOCTURNE_CHEAT_ITEM_SCOTCH, HERO_ITEM_HEALTH},
        {NOCTURNE_CHEAT_ITEM_HIRAM_KIT, HERO_ITEM_HEALTH},
        {NOCTURNE_CHEAT_ITEM_CANDY, HERO_ITEM_HEALTH},
    };
    for (const Case &c : cases) {
        fresh();
        place_heroes(3);
        g_HeroActors[1] = nullptr;
        heroes[0]->base.hit_points = 1.0f;
        stand.refused[heroes[0]] = {c.kind};
        step(c.index);
        const std::string note = std::to_string(c.index);
        CHECK_AT(stand.kinds == std::vector<int>({c.kind, c.kind}), note);
        CHECK_EQ_AT(heroes[0]->inventory.item_count, 0, note);
        CHECK_EQ_AT(heroes[0]->base.hit_points, 1.0f, note);

        // Off hands nothing over, to any hero.
        const int carried = heroes[2]->inventory.item_count;
        step(c.index);
        CHECK_EQ_AT(heroes[2]->inventory.item_count, carried, note);
    }
}

// Flaming ammo goes on every crossbow carried and comes off with the line;
// other items, empty slots and a crossbow that is no weapon are left alone.
NOCTURNE_TEST(flaming_ammo_follows_the_crossbow) {
    fresh();
    place_heroes(1);
    CHero *hero = heroes[0];
    CDemonActorType crossbow = class_support::make("CCrossbow", 0x2000, &g_CWeaponClassInfo);
    CDemonActorType fake = class_support::make("CCrossbow", 0x2001);
    hero->inventory.items[hero->inventory.item_count++] = nullptr;
    CWeapon *other = (CWeapon *)carry(hero, &g_CGunClassInfo, "gat.kfm");
    CWeapon *bow = (CWeapon *)carry(hero, &crossbow, "xbow.kfm");
    CWeapon *prop = (CWeapon *)carry(hero, &fake, "xbow.kfm");

    step(NOCTURNE_CHEAT_FLAMING_AMMO);
    CHECK_EQ(bow->ammo_type, (int)AMMO_TYPE_FLAMING);
    CHECK_EQ(other->ammo_type, 0);
    CHECK_EQ(prop->ammo_type, 0);
    step(NOCTURNE_CHEAT_FLAMING_AMMO);
    CHECK_EQ(bow->ammo_type, (int)AMMO_TYPE_GENERIC);
}

// Mission start applies only the armed lines, after clearing the big head
// flag the last set left; with no game or no hero it does nothing.
NOCTURNE_TEST(mission_start_applies_the_armed_lines) {
    fresh();
    step(NOCTURNE_CHEAT_FREEZE);
    step(NOCTURNE_CHEAT_WEATHER);
    step(NOCTURNE_CHEAT_WEATHER);
    stand.reset();
    place_heroes(1);
    game->big_hat_cheat = 1;
    nocturne_cheats_apply();
    CHECK_EQ(game->freeze_enemies_enabled, 1);
    CHECK_EQ(game->god_mode_enabled, 0);
    CHECK_EQ(game->big_hat_cheat, 0);
    CHECK(stand.weather == std::vector<EWeatherType>({WEATHER_TYPE_SNOW}));
    CHECK(stand.messages.empty());

    stand.reset();
    nocturne_cheats_apply();
    CHECK_EQ(game->freeze_enemies_enabled, 0);

    place_heroes(1);
    g_CGamePtr = nullptr;
    nocturne_cheats_apply();
    CHECK_EQ(game->freeze_enemies_enabled, 0);
}

// The local states go on the wire one byte a line, into a buffer large enough.
NOCTURNE_TEST(the_local_states_pack_for_the_wire) {
    fresh();
    step(NOCTURNE_CHEAT_GOD_MODE);
    step(NOCTURNE_CHEAT_WEATHER);
    step(NOCTURNE_CHEAT_WEATHER);
    unsigned char out[NOCTURNE_CHEAT_COUNT + 1] = {};
    CHECK_EQ(nocturne_cheats_pack(nullptr, sizeof(out)), 0);
    CHECK_EQ(nocturne_cheats_pack(out, NOCTURNE_CHEAT_COUNT - 1), 0);
    CHECK_EQ(nocturne_cheats_pack(out, sizeof(out)), NOCTURNE_CHEAT_COUNT);
    CHECK_EQ(out[NOCTURNE_CHEAT_GOD_MODE], 1);
    CHECK_EQ(out[NOCTURNE_CHEAT_WEATHER], NOCTURNE_CHEAT_WEATHER_SNOW);
    CHECK_EQ(out[NOCTURNE_CHEAT_FREEZE], 0);
}

// A host's set stands in for the local one in a session: it is what applies
// and what the menu shows, under a title that says so, and the lines will not
// move. The player is told once. A state out of range is read as off, and a
// set too short, or none, is refused.
NOCTURNE_TEST(a_hosts_set_stands_in_during_a_session) {
    fresh();
    stand.session = 1;
    unsigned char state[NOCTURNE_CHEAT_COUNT] = {};
    state[NOCTURNE_CHEAT_FREEZE] = 1;
    state[NOCTURNE_CHEAT_WEATHER] = 7;
    nocturne_cheats_set_override(nullptr, NOCTURNE_CHEAT_COUNT);
    nocturne_cheats_set_override(state, NOCTURNE_CHEAT_COUNT - 1);
    CHECK_EQ(nocturne_cheats_override_active(), 0);

    nocturne_cheats_set_override(state, NOCTURNE_CHEAT_COUNT);
    CHECK_EQ(nocturne_cheats_override_active(), 1);
    CHECK_EQ(nocturne_cheat_active(NOCTURNE_CHEAT_FREEZE), 1);
    CHECK_EQ(nocturne_cheat_local(NOCTURNE_CHEAT_FREEZE), 0);
    CHECK_EQ(nocturne_cheat_active(NOCTURNE_CHEAT_WEATHER), 0);

    step(NOCTURNE_CHEAT_GOD_MODE);
    CHECK_EQ(nocturne_cheat_local(NOCTURNE_CHEAT_GOD_MODE), 0);
    CHECK_EQ(stand.frames[0].title, std::string("Cheats (set by host)"));
    CHECK_EQ(stand.frames[1].title, std::string("Gameplay (set by host)"));
    CHECK_EQ(stand.frames[1].lines[1], std::string("Freeze enemies : On"));

    place_heroes(1);
    nocturne_cheats_apply();
    CHECK_EQ(game->freeze_enemies_enabled, 1);
    CHECK(stand.messages == std::vector<std::string>({"Cheats set by host"}));

    // A new set in the same session is not announced again.
    nocturne_cheats_set_override(state, NOCTURNE_CHEAT_COUNT);
    nocturne_cheats_apply();
    CHECK_EQ(stand.messages.size(), (size_t)1);
}

// The override ends with the session, noticed the next time a state is read,
// or when it is dropped; the local states then apply again.
NOCTURNE_TEST(the_override_ends_with_the_session) {
    fresh();
    unsigned char state[NOCTURNE_CHEAT_COUNT] = {};
    state[NOCTURNE_CHEAT_FREEZE] = 1;
    stand.session = 1;
    nocturne_cheats_set_override(state, NOCTURNE_CHEAT_COUNT);
    stand.session = 0;
    CHECK_EQ(nocturne_cheat_active(NOCTURNE_CHEAT_FREEZE), 0);
    CHECK_EQ(nocturne_cheats_override_active(), 0);

    // Ended before it was announced, it is not announced later.
    stand.session = 1;
    nocturne_cheats_set_override(state, NOCTURNE_CHEAT_COUNT);
    nocturne_cheats_clear_override();
    CHECK_EQ(nocturne_cheats_override_active(), 0);
    nocturne_cheats_set_override(state, NOCTURNE_CHEAT_COUNT);
    stand.session = 0;
    place_heroes(1);
    nocturne_cheats_apply();
    CHECK(stand.messages.empty());
    CHECK_EQ(game->freeze_enemies_enabled, 0);
}

NOCTURNE_TEST_MAIN()
