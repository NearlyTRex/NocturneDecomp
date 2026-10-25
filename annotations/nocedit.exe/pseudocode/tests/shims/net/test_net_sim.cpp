// =============================================================================
// NET SIM — which hero the simulation means, decided the same on every machine
// =============================================================================
//
// Single player always means the player's hero. In a session an enemy chases
// the nearest hero in the world, a script names the hero that set it off, and
// the gas room's choke is about the first unmasked hero inside it, all from
// state every machine shares.

#include "net/net_sim.h"
#include "net_support.h"
#include "nocturne.h"
#include "nocturne_test.h"

#include <cstring>

namespace {

using net_support::events;
using net_support::heroes;
using net_support::stand;

CTrigger gas;

// A session of `count` heroes, the gas room a 4 x 4 x 4 box at the origin.
void session(int count) {
    stand.reset();
    nocturne_net_sim_forget_trigger_hero();
    net_support::place_heroes(count);
    net_support::start_session(CONNECTION_HOST, 2, 0);
    std::memset(&gas, 0, sizeof(gas));
    net_support::give_vtable(&gas.base);
    stand.gas_room = &gas.base;
    stand.classes[&gas].insert(g_CTriggerClassInfo.name_hash);
    net_support::box.min = {-2.0f, -2.0f, -2.0f};
    net_support::box.max = {2.0f, 2.0f, 2.0f};
}

void at(CHero *hero, float x, float y, float z) {
    hero->base.base.location.position = {x, y, z};
}

void raise_event(SEventNameBlock &block, const char *name) {
    std::strcpy(block.names[block.count], name);
    block.count++;
}

} // namespace

// The leader is the first hero in the world, else this machine's own.
NOCTURNE_TEST(the_leader_is_the_first_hero_in_the_world) {
    session(3);
    g_LocalHeroIndex = 2;
    g_HeroActors[0] = nullptr;
    heroes[1]->base.base.location.area_id = -1;
    CHECK(nocturne_net_sim_leader_hero() == heroes[2]);
    CHECK(nocturne_net_sim_mimic_hero() == heroes[2]);
    heroes[1]->base.base.location.area_id = 3;
    CHECK(nocturne_net_sim_leader_hero() == heroes[1]);
    heroes[1]->base.base.location.area_id = -1;
    heroes[2]->base.base.location.area_id = -1;
    CHECK(nocturne_net_sim_leader_hero() == heroes[2]);

    g_CNetGamePtr = nullptr;
    CHECK(nocturne_net_sim_leader_hero() == heroes[2]);
    CHECK(nocturne_net_sim_mimic_hero() == heroes[2]);
}

// An enemy goes for the nearest hero in the world, the lower slot on a tie.
NOCTURNE_TEST(an_enemy_targets_the_nearest_hero) {
    session(3);
    at(heroes[0], 10, 0, 0);
    at(heroes[1], 0, 0, 3);
    at(heroes[2], 0, 0, -3);
    static CDemonActor enemy = {};
    enemy.location.position = {0, 0, 1};
    CHECK(nocturne_net_sim_target_for(&enemy) == heroes[1]);
    enemy.location.position = {0, 0, 0};
    CHECK(nocturne_net_sim_target_for(&enemy) == heroes[1]);
    CHECK(nocturne_net_sim_target_for(nullptr) == heroes[0]);
    CHECK(nocturne_net_sim_target_hero(nullptr) == heroes[0]);

    // Nobody in the world: this machine's own.
    for (int i = 0; i < 3; i++)
        heroes[i]->base.base.location.area_id = -1;
    CHECK(nocturne_net_sim_target_for(&enemy) == heroes[0]);

    g_CNetGamePtr = nullptr;
    g_LocalHeroIndex = 1;
    CHECK(nocturne_net_sim_target_for(&enemy) == heroes[1]);
}

// A hero's setup runs as if it were the player; afterwards the index is back.
NOCTURNE_TEST(a_heros_setup_runs_as_that_hero) {
    session(2);
    static CDemonActor enemy = {};
    int saved = nocturne_net_sim_begin_hero_setup(&heroes[1]->base.base);
    CHECK_EQ(saved, 0);
    CHECK_EQ(g_LocalHeroIndex, 1);
    nocturne_net_sim_end_hero_setup(saved);
    CHECK_EQ(g_LocalHeroIndex, 0);
    nocturne_net_sim_begin_hero_setup(&enemy);
    CHECK_EQ(g_LocalHeroIndex, 0);
    g_CNetGamePtr = nullptr;
    nocturne_net_sim_begin_hero_setup(&heroes[1]->base.base);
    CHECK_EQ(g_LocalHeroIndex, 0);
}

// The hero a trigger was set off by is remembered by slot, until forgotten.
NOCTURNE_TEST(the_hero_that_set_off_a_trigger_is_remembered) {
    session(2);
    static CDemonActor enemy = {};
    CHECK(nocturne_net_sim_trigger_hero() == nullptr);
    nocturne_net_sim_note_trigger_hero(&enemy);
    CHECK(nocturne_net_sim_trigger_hero() == nullptr);
    nocturne_net_sim_note_trigger_hero(&heroes[1]->base.base);
    CHECK(nocturne_net_sim_trigger_hero() == heroes[1]);
    g_HeroCount = 1;
    CHECK(nocturne_net_sim_trigger_hero() == nullptr);
    g_HeroCount = 2;
    g_CNetGamePtr = nullptr;
    nocturne_net_sim_note_trigger_hero(&heroes[0]->base.base);
    CHECK(nocturne_net_sim_trigger_hero() == heroes[1]);
    nocturne_net_sim_forget_trigger_hero();
    CHECK(nocturne_net_sim_trigger_hero() == nullptr);
}

// The script's hero is the first unmasked, living one in the gas room, kept
// while the choke or the escape lasts, and the first hero otherwise.
NOCTURNE_TEST(the_gas_rooms_hero_is_the_one_breathing_it) {
    session(3);
    stand.in_gas_room = {heroes[1], heroes[2]};
    heroes[1]->is_wearing_gas_mask = 2;
    CHECK(nocturne_net_sim_script_hero() == heroes[2]);

    // Choking: kept even once it has left.
    stand.choking = 1;
    stand.in_gas_room.clear();
    CHECK(nocturne_net_sim_script_hero() == heroes[2]);
    // Not while its slot is past the heroes there are.
    g_HeroCount = 2;
    CHECK(nocturne_net_sim_script_hero() == heroes[0]);
    g_HeroCount = 3;
    // Escaping, in either block of events: still kept.
    stand.choking = 0;
    raise_event(events.current_events, "ESCAPE");
    CHECK(nocturne_net_sim_script_hero() == heroes[2]);
    events.current_events.count = 0;
    raise_event(events.events, "other");
    raise_event(events.events, "escape");
    CHECK(nocturne_net_sim_script_hero() == heroes[2]);
    events.events.count = 0;

    // Neither: forgotten, and the first hero answers.
    CHECK(nocturne_net_sim_script_hero() == heroes[0]);
    stand.choking = 1;
    CHECK(nocturne_net_sim_script_hero() == heroes[0]);

    // A dead hero, an empty slot, or no gas room, breathes nothing.
    stand.in_gas_room = {heroes[0]};
    heroes[0]->base.hit_points = 0.0f;
    g_HeroActors[1] = nullptr;
    CHECK(nocturne_net_sim_script_hero() == heroes[0]);
    heroes[0]->base.hit_points = 100.0f;
    stand.gas_room = nullptr;
    CHECK(nocturne_net_sim_script_hero() == heroes[0]);
    stand.gas_room = &gas.base;
    stand.classes.erase(&gas);
    CHECK(nocturne_net_sim_script_hero() == heroes[0]);

    g_CNetGamePtr = nullptr;
    g_LocalHeroIndex = 2;
    CHECK(nocturne_net_sim_script_hero() == heroes[2]);
}

// More heroes than slots stops at the slots.
NOCTURNE_TEST(the_gas_room_looks_at_the_slots_only) {
    session(4);
    g_HeroCount = 6;
    stand.choking = 1;
    CHECK(nocturne_net_sim_script_hero() == heroes[0]);
}

// The gas spares a dead hero, and anyone while no choke is on and it is not
// breathing the gas; never anyone outside a session.
NOCTURNE_TEST(the_gas_spares_whoever_is_not_choking) {
    session(2);
    CHECK_EQ(nocturne_net_sim_gas_spares(heroes[0]), 1);
    stand.in_gas_room = {heroes[0]};
    CHECK_EQ(nocturne_net_sim_gas_spares(heroes[0]), 0);
    stand.in_gas_room.clear();
    stand.choking = 1;
    CHECK_EQ(nocturne_net_sim_gas_spares(heroes[0]), 0);
    heroes[0]->base.hit_points = -1.0f;
    CHECK_EQ(nocturne_net_sim_gas_spares(heroes[0]), 1);
    CHECK_EQ(nocturne_net_sim_gas_spares(nullptr), 0);
    g_CNetGamePtr = nullptr;
    CHECK_EQ(nocturne_net_sim_gas_spares(heroes[0]), 0);
}

// A spot is in the gas when its waist height is inside the room: the box, or
// for a round room the circle.
NOCTURNE_TEST(a_spot_is_in_the_gas_inside_the_room) {
    session(1);
    CVector3f feet = {0.0f, -2.0f, 0.0f};
    CHECK_EQ(nocturne_net_sim_spot_in_gas(&feet), 1);
    CHECK_EQ(nocturne_net_sim_spot_in_gas(nullptr), 0);
    feet = {0.0f, -4.0f, 0.0f};
    CHECK_EQ(nocturne_net_sim_spot_in_gas(&feet), 0);
    feet = {0.0f, 1.0f, 0.0f};
    CHECK_EQ(nocturne_net_sim_spot_in_gas(&feet), 0);
    feet = {-3.0f, 0.0f, 0.0f};
    CHECK_EQ(nocturne_net_sim_spot_in_gas(&feet), 0);
    feet = {3.0f, 0.0f, 0.0f};
    CHECK_EQ(nocturne_net_sim_spot_in_gas(&feet), 0);
    feet = {0.0f, 0.0f, -3.0f};
    CHECK_EQ(nocturne_net_sim_spot_in_gas(&feet), 0);
    feet = {0.0f, 0.0f, 3.0f};
    CHECK_EQ(nocturne_net_sim_spot_in_gas(&feet), 0);

    // Round, its size the diameter: (1.5, 1.5) is outside a size-4 circle.
    gas.shape = 1;
    gas.trigger_size = {4.0f, 4.0f, 4.0f};
    stand.world_to_local_elsewhere = 1;
    feet = {1.0f, 0.0f, 1.0f};
    CHECK_EQ(nocturne_net_sim_spot_in_gas(&feet), 1);
    feet = {1.5f, 0.0f, 1.5f};
    CHECK_EQ(nocturne_net_sim_spot_in_gas(&feet), 0);

    stand.gas_room = nullptr;
    CHECK_EQ(nocturne_net_sim_spot_in_gas(&feet), 0);
}

// The script's own escape is raised for the choking hero once it is out of the
// room alive; not while it is still in, dead, or gone, nor without a choke.
NOCTURNE_TEST(leaving_the_gas_alive_raises_the_escape) {
    session(2);
    stand.in_gas_room = {heroes[1]};
    stand.choking = 1;
    nocturne_net_sim_script_hero();
    nocturne_net_sim_gas_tick();
    CHECK(stand.commands.empty());
    stand.in_gas_room.clear();
    heroes[1]->base.hit_points = 0.0f;
    nocturne_net_sim_gas_tick();
    CHECK(stand.commands.empty());
    heroes[1]->base.hit_points = 50.0f;
    nocturne_net_sim_gas_tick();
    CHECK_EQ(stand.commands.size(), (size_t)1);
    CHECK_EQ(stand.commands[0], std::string("Escape"));

    g_HeroActors[1] = nullptr;
    nocturne_net_sim_gas_tick();
    g_HeroCount = 1;
    nocturne_net_sim_gas_tick();
    g_HeroCount = 2;
    stand.choking = 0;
    nocturne_net_sim_gas_tick();
    g_CEventListPtr = nullptr;
    nocturne_net_sim_gas_tick();
    g_CNetGamePtr = nullptr;
    nocturne_net_sim_gas_tick();
    nocturne_net_sim_forget_trigger_hero();
    g_CEventListPtr = &events;
    net_support::start_session(CONNECTION_HOST, 2, 0);
    stand.choking = 1;
    nocturne_net_sim_gas_tick();
    CHECK_EQ(stand.commands.size(), (size_t)1);
}

NOCTURNE_TEST_MAIN()
