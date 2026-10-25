// =============================================================================
// HERO GABRIELLA — her pickup, strafes, turns, ladder, kick, throws, weapon
// switch, pump action and gas mask as a player hero
// =============================================================================

#include "behaviour_support.h"
#include "class_support.h"
#include "game/hero_gabriella.h"
#include "nocturne_test.h"

#include <cmath>
#include <cstring>
#include <deque>
#include <map>
#include <memory>
#include <string>
#include <vector>

using namespace behaviour_support;

namespace {

// GABRIELA.SKL's states.
const int kStand = 0x00;
const int kWalk = 0x01;
const int kRun = 0x02;
const int kPickupCarry = 0x04;
const int kPutDown = 0x05;
const int kTurnLeft = 0x10;
const int kTurnRight = 0x11;
const int kKickDoor = 0x13;
const int kStrafeL = 0x14;
const int kStrafeR = 0x15;
const int kLadder = 0x16;

// Her turn step: 11 frames at 30 fps, leaving forward from frame 11.
std::unique_ptr<CMotionList> s_list(new CMotionList());
std::map<int, SMotion> s_states;

// Never freed: the shove table knows its owners by address.
std::deque<std::unique_ptr<CGabriella>> s_gabriellas;
std::deque<std::unique_ptr<CLadder>> s_ladders;
std::deque<std::unique_ptr<CGasMask>> s_masks;
std::deque<std::unique_ptr<CDemonActor>> s_actors;

CMotionController *controller(CGabriella *g) {
    return &g->base.base.model.base;
}

void play(CGabriella *g, int state) {
    s_states[state].state_index = state;
    stand.motion[controller(g)] = &s_states[state];
}

void blank(CGabriella *g) {
    std::memset(g, 0, sizeof(*g));
    give_class(&g->base.base.base, &g_CGabriellaClassInfo);
    g->base.base.hit_points = 100.0f;
    g->base.base.is_on_ground = 1;
    g->base.base.model.base.motion_list_ptr = s_list.get();
    g->base.base.model.base.tween_progress = -1.0f;
    for (int i = 0; i < 3; i++)
        (&g->base.base.base.orient_matrix.m[i].x)[i] = 1.0f;
}

// A fresh mission: no heroes, every slot at rest.
void start() {
    nocturne_hero_gabriella_reset();
    for (int i = 0; i < 4; i++)
        g_HeroActors[i] = nullptr;
    g_HeroCount = 0;
    stand.reset();
    std::memset(s_list.get(), 0, sizeof(*s_list));
    s_list->motion_count = 1;
    s_list->motions[0].fps = 30.0f;
    s_list->motions[0].exit_forward_from_frame = 11;
    s_list->motions[0].state_index = kTurnLeft;
    s_states.clear();
}

// A Gabriella at the origin facing +z, standing, in hero slot `slot`, or no
// player when `slot` is -1.
CGabriella *gabriella(int slot = 0) {
    s_gabriellas.emplace_back(new CGabriella());
    CGabriella *g = s_gabriellas.back().get();
    blank(g);
    play(g, kStand);
    if (slot >= 0) {
        g_HeroActors[slot] = &g->base;
        if (g_HeroCount <= slot)
            g_HeroCount = slot + 1;
    }
    return g;
}

SPlayerActionState &press(CGabriella *g) {
    return g->base.player_input.action_state;
}

// A live enemy at (x, y, z), its cylinder `radius` wide, in the set.
CCharacter *enemy(int i, float x, float y, float z, float radius = 0.5f) {
    CCharacter *e = character(i);
    give_class(&e->base, &g_CEnemyClassInfo);
    e->base.lifecycle_state = ACTOR_CREATED;
    e->hit_points = 10.0f;
    e->collision_cylinder_radius = radius;
    e->base.location.position = CVector3f{x, y, z};
    put_in_set(e);
    return e;
}

// An actor of class `type` at (x, y, z), in the set's actors.
CDemonActor *actor(CDemonActorType *type, float x = 0.0f, float y = 0.0f, float z = 0.0f) {
    s_actors.emplace_back(new CDemonActor());
    CDemonActor *a = s_actors.back().get();
    std::memset(a, 0, sizeof(*a));
    give_class(a, type);
    a->location.position = CVector3f{x, y, z};
    set->actors[set->actor_count++] = a;
    return a;
}

// A ladder at (x, y, z), its axes the world's, or turned to face -z.
CLadder *ladder(float x, float y, float z, bool turned = false) {
    s_ladders.emplace_back(new CLadder());
    CLadder *l = s_ladders.back().get();
    std::memset(l, 0, sizeof(*l));
    give_class(&l->base, &g_CLadderClassInfo);
    l->base.location.position = CVector3f{x, y, z};
    l->base.orient_matrix.m[0].x = turned ? -1.0f : 1.0f;
    l->base.orient_matrix.m[1].y = 1.0f;
    l->base.orient_matrix.m[2].z = turned ? -1.0f : 1.0f;
    set->actors[set->actor_count++] = &l->base;
    return l;
}

// Something in her left hand that she may throw.
CDemonActor *carry(CGabriella *g, int throwable = 1) {
    s_actors.emplace_back(new CDemonActor());
    CDemonActor *a = s_actors.back().get();
    std::memset(a, 0, sizeof(*a));
    give_class(a, &item_type);
    stand.melee_types[a] = throwable ? 4 : 0;
    g->base.base.carry_hands[0].carry_actor = a;
    return a;
}

// Dynamite in her hand, drawn, with `sticks` left.
CDynamite *with_dynamite(CGabriella *g, int sticks = 3) {
    CDynamite *d = dynamite();
    d->base.ammo_count = sticks;
    g->base.inventory.selected_weapon = &d->base;
    g->weapon_state_flags = 2;
    g->draw_blend = 1.0f;
    return d;
}

// A weapon of a class named `name`, under CGun.
CDemonActorType s_named;
CWeapon *gun_named(const char *name, int fire_mode) {
    s_named = class_support::make(name, 0x900, &g_CGunClassInfo);
    CWeapon *w = weapon(&s_named);
    w->fire_mode = fire_mode;
    return w;
}

// A gas mask in the inventory, wanted or put away.
CGasMask *gas_mask(CGabriella *g, bool wanted) {
    s_masks.emplace_back(new CGasMask());
    CGasMask *m = s_masks.back().get();
    std::memset(m, 0, sizeof(*m));
    give_class(&m->base, &g_CGasMaskClassInfo);
    m->carrier = wanted ? &g->base.base.base : nullptr;
    g->base.inventory.light_gun_ptr = (CLightGun *)m;
    return m;
}

float last_delta() {
    return stand.motion_deltas.empty() ? -1.0f : stand.motion_deltas.back();
}

} // namespace

// Every entry point leaves a missing Gabriella alone and answers as the
// shipped code would carry on.
NOCTURNE_TEST(a_missing_gabriella_is_left_alone) {
    start();
    float weight = 0.0f, marker = 0.0f;
    CHECK_EQ(nocturne_hero_gabriella_pickup(nullptr), 0);
    CHECK_EQ(nocturne_hero_gabriella_pickup_reach(nullptr), 2.0f);
    CHECK_EQ(nocturne_hero_gabriella_locomotion_state(nullptr, kRun), kRun);
    CHECK_EQ(nocturne_hero_gabriella_climb(nullptr), 0);
    CHECK_EQ(nocturne_hero_gabriella_ladder_tick(nullptr, 0.1f), 1);
    CHECK_EQ(nocturne_hero_gabriella_kick(nullptr), 0);
    nocturne_hero_gabriella_process_motion(nullptr, 0.1f);
    nocturne_hero_gabriella_charge_dynamite(nullptr, dynamite());
    nocturne_hero_gabriella_dynamite_tick(nullptr, 0.1f);
    CHECK_EQ(nocturne_hero_gabriella_holds_dynamite(nullptr), 0);
    CHECK_EQ(nocturne_hero_gabriella_dynamite_aim(nullptr, 0.1f, 0), 0);
    CHECK_EQ(nocturne_hero_gabriella_throw_ready(nullptr), 1);
    nocturne_hero_gabriella_pose_throw(nullptr);
    CHECK_EQ(nocturne_hero_gabriella_refetch_dynamite(nullptr, 0.1f), 0);
    CHECK_EQ(nocturne_hero_gabriella_refetch_pose(nullptr, &weight, &marker), 0);
    CHECK_EQ(nocturne_hero_gabriella_weapon_hidden(nullptr), 0);
    nocturne_hero_gabriella_render_throw_arc(nullptr, dynamite());
    nocturne_hero_gabriella_hold_weapon(nullptr);
    nocturne_hero_gabriella_release_weapon(nullptr);
    nocturne_hero_gabriella_switch_weapon(nullptr);
    nocturne_hero_gabriella_fired(nullptr);
    CHECK_EQ(nocturne_hero_gabriella_keep_pending_shot(nullptr), 1);
    CHECK_EQ(nocturne_hero_gabriella_pumping(nullptr), 0);
    nocturne_hero_gabriella_fire_tick(nullptr, 0.1f);
    CHECK_EQ(nocturne_hero_gabriella_throw_carried(nullptr), 0);
    CHECK_EQ(nocturne_hero_gabriella_put_down(nullptr), 0);
    nocturne_hero_gabriella_pose_arms(nullptr);
    nocturne_hero_gabriella_use_item(nullptr);
    nocturne_hero_gabriella_mask_tick(nullptr, 0.1f);
    nocturne_hero_gabriella_render_mask(nullptr);
    nocturne_hero_gabriella_render_carry_arc(nullptr);

    // Nor a stick that is not there.
    CGabriella *g = gabriella();
    nocturne_hero_gabriella_charge_dynamite(g, nullptr);
    nocturne_hero_gabriella_render_throw_arc(g, nullptr);
    CHECK_EQ(stand.fuses_lit, 0);
    CHECK(stand.arcs.empty());
    CHECK(stand.motion_deltas.empty());
    CHECK_EQ(stand.pickups, 0);
}

// The action button picks up from STAND, on the ground and free, and uses the
// press; a player reaches 5 units above or below, anyone else 2.
NOCTURNE_TEST(the_action_button_picks_up_from_stand) {
    start();
    CGabriella *g = gabriella();
    stand.pickup_found = 1;
    press(g).fire = 1;
    CHECK_EQ(nocturne_hero_gabriella_pickup(g), 1);
    CHECK_EQ(press(g).fire, 0);
    CHECK_EQ(nocturne_hero_gabriella_pickup_reach(g), 5.0f);

    // The press, still held, reads as released until it is let go.
    press(g).fire = 1;
    nocturne_hero_gabriella_process_motion(g, 0.1f);
    CHECK_EQ(press(g).fire, 0);
    nocturne_hero_gabriella_process_motion(g, 0.1f);
    press(g).fire = 1;
    nocturne_hero_gabriella_process_motion(g, 0.1f);
    CHECK_EQ(press(g).fire, 1);

    stand.pickup_found = 0;
    CHECK_EQ(nocturne_hero_gabriella_pickup(g), 0);
    stand.pickup_found = 1;
    play(g, kWalk);
    CHECK_EQ(nocturne_hero_gabriella_pickup(g), 0);
    CHECK_EQ(stand.pickups, 2);
    play(g, kStand);
    g->base.base.is_on_ground = 0;
    CHECK_EQ(nocturne_hero_gabriella_pickup(g), 0);
    g->base.base.is_on_ground = 1;
    g->base.base.grabbed_by = &character(0)->base;
    CHECK_EQ(nocturne_hero_gabriella_pickup(g), 0);

    CGabriella *npc = gabriella(-1);
    press(npc).fire = 1;
    CHECK_EQ(nocturne_hero_gabriella_pickup(npc), 1);
    CHECK_EQ(press(npc).fire, 0);
    CHECK_EQ(nocturne_hero_gabriella_pickup_reach(npc), 2.0f);
}

// A player's use_item uses the selected item while she can act; anyone else
// picks up, or puts down when there is nothing to pick up.
NOCTURNE_TEST(use_item_uses_the_selected_item) {
    start();
    CGabriella *g = gabriella();
    nocturne_hero_gabriella_use_item(g);
    CHECK_EQ(stand.items_used, 0);
    press(g).use_item = 1;
    nocturne_hero_gabriella_use_item(g);
    CHECK_EQ(stand.items_used, 1);
    g->base.base.grabbed_by = &character(0)->base;
    nocturne_hero_gabriella_use_item(g);
    g->base.base.grabbed_by = nullptr;
    g->base.base.hit_points = 0.0f;
    nocturne_hero_gabriella_use_item(g);
    CHECK_EQ(stand.items_used, 1);
    CHECK_EQ(stand.pickups, 0);

    CGabriella *npc = gabriella(-1);
    press(npc).use_item = 1;
    nocturne_hero_gabriella_use_item(npc);
    CHECK_EQ(stand.pickups, 1);
    CHECK_EQ(stand.put_downs, 1);
    stand.pickup_found = 1;
    nocturne_hero_gabriella_use_item(npc);
    CHECK_EQ(stand.put_downs, 1);
}

// Strafe input asks for the strafe from STAND or a walk, or the strafe already
// playing, and STAND from anything else; with none, the state chosen stands.
NOCTURNE_TEST(strafes_are_asked_for_where_they_route) {
    start();
    CGabriella *g = gabriella();
    CHECK_EQ(nocturne_hero_gabriella_locomotion_state(g, kRun), kRun);
    g->base.player_input.strafe_speed = -1.0f;
    CHECK_EQ(nocturne_hero_gabriella_locomotion_state(g, 0), kStrafeL);
    play(g, kStrafeL);
    CHECK_EQ(nocturne_hero_gabriella_locomotion_state(g, 0), kStrafeL);
    g->base.player_input.strafe_speed = 1.0f;
    CHECK_EQ(nocturne_hero_gabriella_locomotion_state(g, 0), kStand);
    play(g, kWalk);
    CHECK_EQ(nocturne_hero_gabriella_locomotion_state(g, 0), kStrafeR);
    play(g, kRun);
    CHECK_EQ(nocturne_hero_gabriella_locomotion_state(g, 0), kStand);

    // No strafe, away from STAND or a turn: nothing to add.
    g->base.player_input.strafe_speed = 0.0f;
    CHECK_EQ(nocturne_hero_gabriella_locomotion_state(g, 0), 0);
}

// Turn input alone, held 0.15 s with fire up, asks for the turn of its sign
// from STAND or a turn; a tap, a press or another Gabriella asks for STAND. A
// request waits out a crossfade out of a step.
NOCTURNE_TEST(a_held_turn_steps_in_place) {
    start();
    CGabriella *g = gabriella();
    g->base.player_input.turn_speed = -1.0f;
    nocturne_hero_gabriella_process_motion(g, 0.1f);
    CHECK_EQ(nocturne_hero_gabriella_locomotion_state(g, 0), kStand);
    nocturne_hero_gabriella_process_motion(g, 0.1f);
    CHECK_EQ(nocturne_hero_gabriella_locomotion_state(g, 0), kTurnLeft);
    g->base.player_input.turn_speed = 1.0f;
    play(g, kTurnLeft);
    CHECK_EQ(nocturne_hero_gabriella_locomotion_state(g, 0), kTurnRight);
    press(g).fire = 1;
    CHECK_EQ(nocturne_hero_gabriella_locomotion_state(g, 0), kStand);
    press(g).fire = 0;

    controller(g)->tween_progress = 0.5f;
    CHECK_EQ(nocturne_hero_gabriella_locomotion_state(g, kWalk), kTurnLeft);
    play(g, kTurnRight);
    CHECK_EQ(nocturne_hero_gabriella_locomotion_state(g, kWalk), kTurnRight);
    controller(g)->tween_progress = -1.0f;

    // Barely turning is not turning, and once let go, the hold starts again.
    g->base.player_input.turn_speed = 0.005f;
    CHECK_EQ(nocturne_hero_gabriella_locomotion_state(g, 0), kStand);
    nocturne_hero_gabriella_process_motion(g, 0.2f);
    CHECK_EQ(nocturne_hero_gabriella_locomotion_state(g, 0), kStand);

    CGabriella *npc = gabriella(-1);
    npc->base.player_input.turn_speed = 1.0f;
    nocturne_hero_gabriella_process_motion(npc, 1.0f);
    CHECK_EQ(nocturne_hero_gabriella_locomotion_state(npc, 0), kStand);
}

// Her motion plays faster through a strafe or the ladder, slower through a
// turn step, and at its own rate in a crossfade or anything else.
NOCTURNE_TEST(the_motion_rate_follows_the_state) {
    struct Case {
        int state;
        float tween;
        float rate;
    };
    const Case cases[] = {
        {kStrafeL, -1.0f, NOCTURNE_GABRIELLA_STRAFE_RATE},
        {kStrafeR, -1.0f, NOCTURNE_GABRIELLA_STRAFE_RATE},
        {kStrafeL, 0.0f, 1.0f},
        {kLadder, -1.0f, NOCTURNE_GABRIELLA_LADDER_RATE},
        {kTurnLeft, -1.0f, NOCTURNE_GABRIELLA_TURN_RATE},
        {kTurnRight, -1.0f, NOCTURNE_GABRIELLA_TURN_RATE},
        {kWalk, -1.0f, 1.0f},
    };
    for (const Case &c : cases) {
        start();
        CGabriella *g = gabriella();
        play(g, c.state);
        controller(g)->tween_progress = c.tween;
        nocturne_hero_gabriella_process_motion(g, 0.1f);
        CHECK_NEAR(last_delta(), 0.1f * c.rate, 1e-6f);
    }
}

// While the turn is held, a step nearing its exit crossfades into its own
// start; not earlier, not for another turn, and not in a crossfade.
NOCTURNE_TEST(a_held_turn_chains_its_steps) {
    start();
    CGabriella *g = gabriella();
    g->base.player_input.turn_speed = -1.0f;
    nocturne_hero_gabriella_process_motion(g, 0.2f);
    play(g, kTurnLeft);
    nocturne_hero_gabriella_process_motion(g, 0.1f);
    CHECK(stand.transitions.empty());

    controller(g)->current_frame_number = 9.0f;
    nocturne_hero_gabriella_process_motion(g, 0.1f);
    CHECK_EQ(stand.transitions.size(), (size_t)1);
    if (!stand.transitions.empty()) {
        const SMotionTransition &t = stand.transitions[0];
        CHECK_EQ(t.desired_state, kTurnLeft);
        CHECK_EQ(t.cmd, MOTION_CMD_TWEEN);
        CHECK_EQ(t.to_motion_number, 0);
        CHECK_EQ(t.to_frame_number, 0.0f);
        CHECK_NEAR(t.tween_time, 0.2f, 1e-6f);
        CHECK_EQ(t.set_new_state_as_desired, 0);
    }

    controller(g)->tween_progress = 0.0f;
    nocturne_hero_gabriella_process_motion(g, 0.1f);
    controller(g)->tween_progress = -1.0f;
    play(g, kTurnRight);
    nocturne_hero_gabriella_process_motion(g, 0.1f);
    CHECK_EQ(stand.transitions.size(), (size_t)1);
}

// The kick starts from STAND with an enemy in reach in front, and uses the
// press; from anything else a player's press is held until she stands.
NOCTURNE_TEST(the_kick_needs_an_enemy_in_reach) {
    start();
    CGabriella *g = gabriella();
    CHECK_EQ(nocturne_hero_gabriella_kick(g), 0);

    // Out of reach: behind, to the side, above, too far, dead, or one of the
    // party.
    enemy(0, 0.0f, 0.0f, -1.0f);
    enemy(1, 3.0f, 0.0f, 1.0f);
    enemy(2, 0.0f, 3.0f, 1.0f);
    enemy(3, 0.0f, 0.0f, 3.0f);
    enemy(4, 0.0f, 0.0f, 1.0f)->hit_points = 0.0f;
    CHECK_EQ(nocturne_hero_gabriella_kick(g), 0);

    CCharacter *target = enemy(5, 0.0f, 0.0f, 1.0f);
    press(g).fire = 1;
    CHECK_EQ(nocturne_hero_gabriella_kick(g), 1);
    CHECK_EQ(press(g).fire, 0);
    CHECK_EQ(stand.desired.size(), (size_t)1);
    if (!stand.desired.empty())
        CHECK_EQ(stand.desired[0].index, kKickDoor);

    // Walking, the press waits; with her weapon out it is not taken, and once
    // she stands it is.
    play(g, kWalk);
    CHECK_EQ(nocturne_hero_gabriella_kick(g), 1);
    CHECK_EQ(stand.desired.size(), (size_t)1);
    CHECK_EQ(nocturne_hero_gabriella_locomotion_state(g, 0), 0);
    nocturne_hero_gabriella_process_motion(g, 0.1f);
    play(g, kStand);
    g->weapon_state_flags = 2;
    nocturne_hero_gabriella_process_motion(g, 0.1f);
    g->weapon_state_flags = 0;
    g->draw_blend = 0.5f;
    nocturne_hero_gabriella_process_motion(g, 0.1f);
    g->draw_blend = 0.0f;
    CHECK_EQ(stand.desired.size(), (size_t)1);
    nocturne_hero_gabriella_process_motion(g, 0.1f);
    CHECK_EQ(stand.desired.size(), (size_t)2);

    // Off the ground or held, she does not kick but the press waits.
    g->base.base.is_on_ground = 0;
    CHECK_EQ(nocturne_hero_gabriella_kick(g), 1);
    g->base.base.is_on_ground = 1;
    g->base.base.grabbed_by = &character(6)->base;
    CHECK_EQ(nocturne_hero_gabriella_kick(g), 1);
    CHECK_EQ(stand.desired.size(), (size_t)2);

    // Let go after the enemy has died, the waiting press finds no one.
    g->base.base.grabbed_by = nullptr;
    const float hit_points = target->hit_points;
    target->hit_points = 0.0f;
    nocturne_hero_gabriella_process_motion(g, 0.1f);
    CHECK_EQ(stand.desired.size(), (size_t)2);
    target->hit_points = hit_points;

    // Another Gabriella kicks when she can and otherwise lets it go.
    CGabriella *npc = gabriella(-1);
    CHECK_EQ(nocturne_hero_gabriella_kick(npc), 1);
    play(npc, kWalk);
    CHECK_EQ(nocturne_hero_gabriella_kick(npc), 0);
}

// The kick lands as its motion crosses frame 22, from her left foot, on every
// enemy in reach: the blow, blood, the sound and the shove. A blow that deals
// nothing does none of the rest; with no foot there is no blow.
NOCTURNE_TEST(the_kick_lands_on_its_hit_frame) {
    start();
    CGabriella *g = gabriella();
    CCharacter *near = enemy(0, 0.0f, 0.0f, 1.0f);
    CCharacter *far = enemy(1, 0.0f, 0.0f, 4.0f);
    near->hit_points = 100.0f;
    stand.bones["Bip01 L Foot"] = 5;
    stand.bone_point = CVector3f{0.0f, 0.0f, 0.5f};
    play(g, kKickDoor);
    controller(g)->current_frame_number = 20.0f;
    stand.on_motion_events = [](CGabriella *gab, float) {
        controller(gab)->current_frame_number += 3.0f;
    };
    nocturne_hero_gabriella_process_motion(g, 0.1f);
    CHECK_EQ(stand.damage.size(), (size_t)1);
    if (!stand.damage.empty()) {
        CHECK(stand.damage[0].first == near);
        CHECK_EQ(stand.damage[0].second.damage_amount, NOCTURNE_HERO_ESCAPE_KICK_MIN);
        CHECK_EQ(stand.damage[0].second.impact_point.z, 0.5f);
    }
    CHECK_EQ(stand.blood, 1);
    CHECK_EQ(stand.sounds.size(), (size_t)1);
    if (!stand.sounds.empty())
        CHECK_EQ(stand.sounds[0].second, std::string("kick1.wav"));
    CHECK_EQ(far->hit_points, 10.0f);

    // Pushed away from her over the next frames.
    const float z = near->base.location.position.z;
    nocturne_hero_gabriella_process_motion(g, 0.05f);
    CHECK(near->base.location.position.z > z);

    // Past the hit frame there is no second blow.
    nocturne_hero_gabriella_process_motion(g, 0.1f);
    CHECK_EQ(stand.damage.size(), (size_t)1);

    // Back in reach, a blow that deals nothing.
    near->base.location.position.z = 1.0f;
    controller(g)->current_frame_number = 20.0f;
    stand.random = -1.0f;
    nocturne_hero_gabriella_process_motion(g, 0.1f);
    CHECK_EQ(stand.damage.size(), (size_t)2);
    CHECK_EQ(stand.blood, 1);

    near->base.location.position.z = 1.0f;
    controller(g)->current_frame_number = 20.0f;
    stand.bones.clear();
    nocturne_hero_gabriella_process_motion(g, 0.1f);
    CHECK_EQ(stand.damage.size(), (size_t)2);
}

// The ladder in front is climbed from STAND with her weapon away: she asks for
// LADDER and is eased onto its centre line, 2 units out, facing it, over half
// a second. Either face of a ladder will do.
NOCTURNE_TEST(a_ladder_in_front_is_climbed_from_stand) {
    start();
    CGabriella *g = gabriella();
    g->base.base.base.location.position.x = 0.5f;
    g->base.base.base.orient.vec.y = 0.4f;
    CLadder *l = ladder(0.0f, 0.0f, 2.0f, true);
    press(g).fire = 1;
    CHECK_EQ(nocturne_hero_gabriella_climb(g), 1);
    CHECK_EQ(press(g).fire, 0);
    CHECK(g->base.ladder_to_climb == l);
    CHECK_EQ(stand.desired.size(), (size_t)1);
    if (!stand.desired.empty())
        CHECK_EQ(stand.desired[0].index, kLadder);

    stand.weights[kLadder] = 1.0f;
    CHECK_EQ(nocturne_hero_gabriella_ladder_tick(g, 0.25f), 1);
    CHECK_NEAR(g->base.base.base.location.position.x, 0.25f, 1e-6f);
    CHECK_NEAR(g->base.base.turn_angle_accumulator, -0.2f, 1e-6f);
    CHECK_EQ(nocturne_hero_gabriella_ladder_tick(g, 0.3f), 1);
    CHECK_NEAR(g->base.base.base.location.position.x, 0.0f, 1e-6f);
    CHECK_EQ(nocturne_hero_gabriella_ladder_tick(g, 0.1f), 1);

    // Off the ladder's motion she lets go of it.
    stand.weights.clear();
    CHECK_EQ(nocturne_hero_gabriella_ladder_tick(g, 0.1f), 0);
    CHECK(g->base.ladder_to_climb == nullptr);

    // From its other face, she stands 2 units behind it.
    start();
    g = gabriella();
    ladder(0.0f, 0.0f, 2.0f);
    CHECK_EQ(nocturne_hero_gabriella_climb(g), 1);
    stand.weights[kLadder] = 1.0f;
    nocturne_hero_gabriella_ladder_tick(g, 1.0f);
    CHECK_NEAR(g->base.base.base.location.position.z, 0.0f, 1e-6f);
}

// Only a ladder in her window is taken: of class CLadder, within 5 units of her
// height, 4 of its plane and 1 past its sides, along her facing, in front.
NOCTURNE_TEST(only_a_ladder_in_her_window_is_taken) {
    struct Case {
        const char *name;
        void (*place)(CGabriella *);
    };
    const Case cases[] = {
        {"not a ladder", [](CGabriella *) { actor(&item_type, 0.0f, 0.0f, 2.0f); }},
        {"above", [](CGabriella *) { ladder(0.0f, 6.0f, 2.0f); }},
        {"far", [](CGabriella *) { ladder(0.0f, 0.0f, 5.0f); }},
        {"right", [](CGabriella *) { ladder(-2.0f, 0.0f, 2.0f); }},
        {"left", [](CGabriella *) { ladder(2.0f, 0.0f, 2.0f); }},
        {"behind", [](CGabriella *) { ladder(0.0f, 0.0f, -2.0f); }},
        {"across",
         [](CGabriella *gab) {
             CMatrix3x3f &m = gab->base.base.base.orient_matrix;
             m = CMatrix3x3f{};
             m.m[0].z = 1.0f;
             m.m[1].y = 1.0f;
             m.m[2].x = -1.0f;
             ladder(0.0f, 0.0f, 2.0f);
         }},
    };
    for (const Case &c : cases) {
        start();
        CGabriella *g = gabriella();
        c.place(g);
        CHECK_EQ_AT(nocturne_hero_gabriella_climb(g), 0, c.name);
    }
}

// From anything but STAND, or with her weapon out, a press with a ladder in
// reach is held: she is asked to stand, and climbs once she does. Off the
// ground, or already climbing, nothing happens. Another Gabriella climbs as
// shipped.
NOCTURNE_TEST(a_climb_press_waits_for_stand) {
    start();
    CGabriella *g = gabriella();
    ladder(0.0f, 0.0f, 2.0f);
    play(g, kWalk);
    CHECK_EQ(nocturne_hero_gabriella_climb(g), 1);
    CHECK(stand.desired.empty());
    CHECK_EQ(nocturne_hero_gabriella_locomotion_state(g, kWalk), kStand);
    nocturne_hero_gabriella_process_motion(g, 0.1f);
    CHECK(stand.desired.empty());
    play(g, kStand);
    nocturne_hero_gabriella_process_motion(g, 0.1f);
    CHECK_EQ(stand.desired.size(), (size_t)1);
    CHECK_EQ(nocturne_hero_gabriella_climb(g), 0);

    g->base.ladder_to_climb = nullptr;
    g->weapon_state_flags = 2;
    CHECK_EQ(nocturne_hero_gabriella_climb(g), 1);
    g->weapon_state_flags = 0;
    g->draw_blend = 0.5f;
    CHECK_EQ(nocturne_hero_gabriella_climb(g), 1);
    g->draw_blend = 0.0f;
    g->base.base.grabbed_by = &character(0)->base;
    CHECK_EQ(nocturne_hero_gabriella_climb(g), 1);
    g->base.base.grabbed_by = nullptr;
    g->base.base.is_on_ground = 0;
    CHECK_EQ(nocturne_hero_gabriella_climb(g), 0);
    CHECK_EQ(stand.desired.size(), (size_t)1);

    // A press that waits in vain runs out.
    start();
    g = gabriella();
    play(g, kWalk);
    ladder(0.0f, 0.0f, 2.0f);
    CHECK_EQ(nocturne_hero_gabriella_climb(g), 1);
    nocturne_hero_gabriella_process_motion(g, 1.0f);
    CHECK_EQ(nocturne_hero_gabriella_locomotion_state(g, kWalk), kWalk);

    CGabriella *npc = gabriella(-1);
    stand.shipped_climb = 1;
    CHECK_EQ(nocturne_hero_gabriella_climb(npc), 1);
    CHECK_EQ(stand.shipped_climbs, 1);
}

// The climb lasts while LADDER plays or is being crossfaded into; another
// Gabriella's is hers to manage.
NOCTURNE_TEST(the_climb_lasts_while_the_ladder_motion_does) {
    start();
    CGabriella *g = gabriella();
    SMotionTransition into = {};
    controller(g)->in_transition = &into;
    into.desired_state = kLadder;
    CHECK_EQ(nocturne_hero_gabriella_ladder_tick(g, 0.1f), 1);
    into.desired_state = kWalk;
    CHECK_EQ(nocturne_hero_gabriella_ladder_tick(g, 0.1f), 0);

    CGabriella *npc = gabriella(-1);
    CHECK_EQ(nocturne_hero_gabriella_ladder_tick(npc, 0.1f), 0);
    stand.weights[kLadder] = 1.0f;
    CHECK_EQ(nocturne_hero_gabriella_ladder_tick(npc, 0.1f), 1);
}

// Dynamite's fuse is lit on the first frame of the charge, once, and never on
// an empty stick.
NOCTURNE_TEST(the_charge_lights_the_fuse) {
    start();
    CGabriella *g = gabriella();
    CDynamite *d = with_dynamite(g);
    CHECK_EQ(nocturne_hero_gabriella_holds_dynamite(g), 1);
    nocturne_hero_gabriella_charge_dynamite(g, d);
    nocturne_hero_gabriella_charge_dynamite(g, d);
    CHECK_EQ(stand.fuses_lit, 1);
    CHECK_EQ(d->fuse_timer, 3.5f);

    CDynamite *empty = with_dynamite(g, 0);
    nocturne_hero_gabriella_charge_dynamite(g, empty);
    CHECK_EQ(stand.fuses_lit, 1);

    g->base.inventory.selected_weapon = weapon(&g_CGunClassInfo);
    CHECK_EQ(nocturne_hero_gabriella_holds_dynamite(g), 0);
}

// The charge raises her arm, the release swings it, and the stick goes as the
// arm passes the release point. The arm then fades back to her pose, and she
// reaches to her hip for the next stick.
NOCTURNE_TEST(a_throw_winds_up_swings_and_fetches_the_next_stick) {
    start();
    CGabriella *g = gabriella();
    with_dynamite(g);
    g->fire_state = 3;
    nocturne_hero_gabriella_dynamite_tick(g, 0.1f);
    nocturne_hero_gabriella_pose_throw(g);
    CHECK_NEAR(stand.arm_blends.back(), 0.6f, 1e-5f);

    g->fire_state = 2;
    nocturne_hero_gabriella_dynamite_tick(g, 0.1f);
    nocturne_hero_gabriella_pose_throw(g);
    CHECK_NEAR(stand.arm_blends.back(), 0.6f, 1e-5f);
    CHECK_EQ(nocturne_hero_gabriella_throw_ready(g), 0);
    CHECK_EQ(nocturne_hero_gabriella_throw_ready(g), 0);
    nocturne_hero_gabriella_dynamite_tick(g, 0.05f);
    nocturne_hero_gabriella_pose_throw(g);
    CHECK_NEAR(stand.arm_blends.back(), 1.0f, 1e-5f);
    nocturne_hero_gabriella_dynamite_tick(g, 0.1f);
    CHECK_EQ(nocturne_hero_gabriella_throw_ready(g), 1);
    CHECK_EQ(nocturne_hero_gabriella_weapon_hidden(g), 1);
    CHECK_EQ(nocturne_hero_gabriella_throw_ready(g), 0);

    // Thrown: a press reads as released until a stick is in hand.
    press(g).fire = 1;
    nocturne_hero_gabriella_process_motion(g, 0.0f);
    CHECK_EQ(press(g).fire, 0);

    // The arm fades out over the end of the swing.
    g->fire_state = 0;
    nocturne_hero_gabriella_dynamite_tick(g, 0.05f);
    nocturne_hero_gabriella_pose_throw(g);
    CHECK_NEAR(stand.arm_blends.back(), 1.0f - 0.025f / 0.075f, 1e-4f);
    const size_t poses = stand.arm_blends.size();
    nocturne_hero_gabriella_dynamite_tick(g, 0.1f);
    nocturne_hero_gabriella_pose_throw(g);
    CHECK_EQ(stand.arm_blends.size(), poses);

    // The fetch: down past her hip, the stick shown again below it, then up.
    // Until it is back in hand a press still reads as released.
    float weight = 0.0f, marker = 0.0f;
    CHECK_EQ(nocturne_hero_gabriella_weapon_hidden(g), 1);
    press(g).fire = 1;
    nocturne_hero_gabriella_process_motion(g, 0.0f);
    CHECK_EQ(press(g).fire, 0);
    CHECK_EQ(nocturne_hero_gabriella_refetch_dynamite(g, 0.24f), 1);
    CHECK_NEAR(g->draw_blend, 0.8f, 1e-5f);
    CHECK_EQ(nocturne_hero_gabriella_refetch_pose(g, &weight, &marker), 1);
    CHECK_NEAR(weight, 0.2f / 0.36f, 1e-5f);
    CHECK_NEAR(marker, 0.44f / 0.8f, 1e-5f);
    nocturne_hero_gabriella_refetch_dynamite(g, 0.216f);
    CHECK_NEAR(g->draw_blend, 0.62f, 1e-5f);
    CHECK_EQ(nocturne_hero_gabriella_weapon_hidden(g), 0);
    nocturne_hero_gabriella_refetch_dynamite(g, 0.1f);
    CHECK_EQ(g->draw_blend, 0.6f);
    CHECK_EQ(nocturne_hero_gabriella_weapon_hidden(g), 0);
    nocturne_hero_gabriella_refetch_dynamite(g, 0.1f);
    CHECK(g->draw_blend > 0.6f);
    nocturne_hero_gabriella_refetch_dynamite(g, 1.0f);
    CHECK_EQ(g->draw_blend, 1.0f);
    CHECK_EQ(nocturne_hero_gabriella_refetch_dynamite(g, 0.1f), 0);
    CHECK_EQ(nocturne_hero_gabriella_refetch_pose(g, &weight, &marker), 0);
    CHECK_EQ(nocturne_hero_gabriella_weapon_hidden(g), 0);

    // A stick in hand: a new press acts, and so it does with the stick put away.
    press(g).fire = 0;
    nocturne_hero_gabriella_process_motion(g, 0.0f);
    press(g).fire = 1;
    nocturne_hero_gabriella_process_motion(g, 0.0f);
    CHECK_EQ(press(g).fire, 1);
    nocturne_hero_gabriella_process_motion(g, 0.0f);
    press(g).fire = 0;
    nocturne_hero_gabriella_process_motion(g, 0.0f);
    g->weapon_state_flags = 0;
    g->draw_blend = 0.0f;
    press(g).fire = 1;
    nocturne_hero_gabriella_process_motion(g, 0.0f);
    CHECK_EQ(press(g).fire, 1);

    // A swing from no wind-up comes in from nothing.
    g->weapon_state_flags = 2;
    g->draw_blend = 1.0f;
    g->fire_state = 2;
    nocturne_hero_gabriella_throw_ready(g);
    nocturne_hero_gabriella_pose_throw(g);
    CHECK_EQ(stand.arm_blends.back(), 0.0f);
}

// A mission that ends mid-throw leaves nothing for the next: the reset puts
// her hand back and a press acts again.
NOCTURNE_TEST(a_reset_ends_a_throw_in_progress) {
    start();
    CGabriella *g = gabriella();
    with_dynamite(g);
    g->fire_state = 2;
    nocturne_hero_gabriella_throw_ready(g);
    nocturne_hero_gabriella_dynamite_tick(g, 0.15f);
    CHECK_EQ(nocturne_hero_gabriella_throw_ready(g), 1);
    CHECK_EQ(nocturne_hero_gabriella_weapon_hidden(g), 1);

    nocturne_hero_gabriella_reset();
    g->fire_state = 0;
    CHECK_EQ(nocturne_hero_gabriella_weapon_hidden(g), 0);
    CHECK_EQ(nocturne_hero_gabriella_refetch_dynamite(g, 0.1f), 0);
    press(g).fire = 1;
    nocturne_hero_gabriella_process_motion(g, 0.0f);
    CHECK_EQ(press(g).fire, 1);
}

// The last stick thrown, there is none to fetch and the hand stays empty.
NOCTURNE_TEST(with_no_stick_left_the_hand_stays_empty) {
    start();
    CGabriella *g = gabriella();
    CDynamite *d = with_dynamite(g, 1);
    g->fire_state = 2;
    nocturne_hero_gabriella_throw_ready(g);
    nocturne_hero_gabriella_dynamite_tick(g, 0.15f);
    CHECK_EQ(nocturne_hero_gabriella_throw_ready(g), 1);
    d->base.ammo_count = 0;
    g->fire_state = 0;
    nocturne_hero_gabriella_dynamite_tick(g, 0.2f);
    CHECK_EQ(nocturne_hero_gabriella_refetch_dynamite(g, 0.1f), 0);
    CHECK_EQ(nocturne_hero_gabriella_weapon_hidden(g), 1);
    press(g).fire = 1;
    nocturne_hero_gabriella_process_motion(g, 0.0f);
    CHECK_EQ(press(g).fire, 0);
}

// Holstering cancels the wind-up, the swing and the fetch; a new charge cuts a
// swing short; waiting on anything else lets the wind-up fall.
NOCTURNE_TEST(holstering_or_a_new_charge_cancels_the_throw) {
    start();
    CGabriella *g = gabriella();
    with_dynamite(g);
    g->fire_state = 3;
    nocturne_hero_gabriella_dynamite_tick(g, 0.1f);
    g->fire_state = 2;
    nocturne_hero_gabriella_throw_ready(g);
    g->fire_state = 3;
    nocturne_hero_gabriella_dynamite_tick(g, 0.1f);
    CHECK_EQ(nocturne_hero_gabriella_throw_ready(g), 0); // a fresh swing
    g->fire_state = 1;
    nocturne_hero_gabriella_dynamite_tick(g, 0.0f);
    g->fire_state = 0;
    nocturne_hero_gabriella_dynamite_tick(g, 1.0f);
    nocturne_hero_gabriella_dynamite_tick(g, 1.0f);
    size_t poses = stand.arm_blends.size();
    nocturne_hero_gabriella_pose_throw(g);
    CHECK_EQ(stand.arm_blends.size(), poses);

    // Wound up, then holstered.
    g->fire_state = 3;
    nocturne_hero_gabriella_dynamite_tick(g, 0.1f);
    g->weapon_state_flags = 0;
    nocturne_hero_gabriella_dynamite_tick(g, 0.05f);
    nocturne_hero_gabriella_pose_throw(g);
    CHECK_NEAR(stand.arm_blends.back(), 0.3f, 1e-5f);

    // A fetch holstered gives way.
    g->weapon_state_flags = 2;
    g->fire_state = 2;
    nocturne_hero_gabriella_throw_ready(g);
    nocturne_hero_gabriella_dynamite_tick(g, 0.15f);
    nocturne_hero_gabriella_throw_ready(g);
    g->fire_state = 0;
    nocturne_hero_gabriella_dynamite_tick(g, 0.2f);
    g->weapon_state_flags = 0;
    CHECK_EQ(nocturne_hero_gabriella_refetch_dynamite(g, 0.1f), 0);
    g->weapon_state_flags = 2;
    CHECK_EQ(nocturne_hero_gabriella_refetch_dynamite(g, 0.1f), 0);

    // Another weapon selected: the throw is forgotten.
    g->fire_state = 3;
    nocturne_hero_gabriella_dynamite_tick(g, 0.1f);
    g->base.inventory.selected_weapon = weapon(&g_CGunClassInfo);
    nocturne_hero_gabriella_dynamite_tick(g, 0.1f);
    with_dynamite(g);
    g->fire_state = 0;
    poses = stand.arm_blends.size();
    nocturne_hero_gabriella_pose_throw(g);
    CHECK_EQ(stand.arm_blends.size(), poses);
}

// A fuse that burns out in her hand drops the stick where she stands.
NOCTURNE_TEST(a_fuse_that_burns_out_drops_the_stick) {
    start();
    CGabriella *g = gabriella();
    CDynamite *d = with_dynamite(g);
    d->toss_velocity = CVector3f{1.0f, 2.0f, 3.0f};
    d->fuse_timer = 0.5f;
    g->fire_state = 3;
    g->dynamite_charge_power = 40.0f;
    nocturne_hero_gabriella_dynamite_tick(g, 0.1f);
    CHECK_EQ(stand.shots, 0);
    stand.burned_out.insert(d);
    nocturne_hero_gabriella_dynamite_tick(g, 0.1f);
    CHECK_EQ(stand.shots, 1);
    CHECK_EQ(d->toss_velocity.z, 0.0f);
    CHECK_EQ(d->fuse_timer, -1.0f);
    CHECK_EQ(g->fire_state, 0);
    CHECK_EQ(g->dynamite_charge_power, 10.0f);
    nocturne_hero_gabriella_pose_throw(g);
    CHECK(stand.arm_blends.empty());

    // Another Gabriella drops hers the same way.
    CGabriella *npc = gabriella(-1);
    CDynamite *other = with_dynamite(npc);
    stand.burned_out.insert(other);
    nocturne_hero_gabriella_dynamite_tick(npc, 0.1f);
    CHECK_EQ(stand.shots, 2);
}

// Another Gabriella throws at once, with no swing and no fetch.
NOCTURNE_TEST(another_gabriella_throws_at_once) {
    start();
    CGabriella *npc = gabriella(-1);
    float weight = 0.0f, marker = 0.0f;
    with_dynamite(npc);
    npc->fire_state = 2;
    CHECK_EQ(nocturne_hero_gabriella_throw_ready(npc), 1);
    nocturne_hero_gabriella_pose_throw(npc);
    CHECK(stand.arm_blends.empty());
    CHECK_EQ(nocturne_hero_gabriella_refetch_dynamite(npc, 0.1f), 0);
    CHECK_EQ(nocturne_hero_gabriella_refetch_pose(npc, &weight, &marker), 0);
    CHECK_EQ(nocturne_hero_gabriella_weapon_hidden(npc), 0);

    // Nor does any other weapon wait.
    CGabriella *g = gabriella();
    g->base.inventory.selected_weapon = weapon(&g_CGunClassInfo);
    CHECK_EQ(nocturne_hero_gabriella_throw_ready(g), 1);
    nocturne_hero_gabriella_pose_throw(g);
    CHECK_EQ(nocturne_hero_gabriella_refetch_dynamite(g, 0.1f), 0);
    CHECK_EQ(nocturne_hero_gabriella_refetch_pose(g, &weight, &marker), 0);
    CHECK_EQ(nocturne_hero_gabriella_weapon_hidden(g), 0);
    CHECK_EQ(nocturne_hero_gabriella_dynamite_aim(g, 0.1f, 0), 0);
}

// With dynamite she aims as the Stranger throws: no target and no yaw, look
// input moving the pitch within his limits, which the throw eases after; her
// aim rises only through the charge and the throw.
NOCTURNE_TEST(dynamite_aims_as_the_stranger_throws) {
    start();
    CGabriella *g = gabriella();
    with_dynamite(g);
    g->aim_target = &character(0)->base;
    g->target_aim_yaw = 1.0f;
    g->aim_yaw = 0.5f;
    g->base.player_input.look_up_down_speed = 1.0f;
    CHECK_EQ(nocturne_hero_gabriella_dynamite_aim(g, 0.1f, 0), 1);
    CHECK(g->aim_target == nullptr);
    CHECK_EQ(g->target_aim_yaw, 0.0f);
    CHECK_NEAR(g->target_aim_pitch, 0.2f * 3.1415927f, 1e-5f);
    CHECK_NEAR(g->aim_pitch, 0.05f * 3.1415927f, 1e-5f);
    CHECK_NEAR(g->aim_yaw, 0.5f - 0.05f * 3.1415927f, 1e-5f);
    CHECK_EQ(g->aim_weight, 0.0f);

    nocturne_hero_gabriella_dynamite_aim(g, 1.0f, 0);
    CHECK_NEAR(g->target_aim_pitch, NOCTURNE_STRANGER_PITCH_DOWN, 1e-6f);

    struct Case {
        const char *name;
        int flags, holstering, fire_state;
        bool swinging;
        bool raised;
    };
    const Case cases[] = {
        {"charging", 2, 0, 3, false, true},    {"released", 2, 0, 2, false, true},
        {"swinging", 2, 0, 0, true, true},     {"idle", 2, 0, 0, false, false},
        {"holstering", 2, 1, 3, false, false}, {"away", 0, 0, 3, false, false},
    };
    for (const Case &c : cases) {
        start();
        g = gabriella();
        with_dynamite(g);
        if (c.swinging) {
            g->fire_state = 2;
            nocturne_hero_gabriella_throw_ready(g);
        }
        g->weapon_state_flags = c.flags;
        g->fire_state = c.fire_state;
        g->aim_weight = 0.5f;
        nocturne_hero_gabriella_dynamite_aim(g, 0.03f, c.holstering);
        CHECK_AT((g->aim_weight > 0.5f) == c.raised, c.name);
    }

    // Another Gabriella aims the same way.
    start();
    CGabriella *npc = gabriella(-1);
    with_dynamite(npc);
    npc->fire_state = 3;
    nocturne_hero_gabriella_dynamite_aim(npc, 0.03f, 0);
    CHECK_NEAR(npc->aim_weight, 0.1f, 1e-5f);
    npc->fire_state = 0;
    nocturne_hero_gabriella_dynamite_aim(npc, 0.03f, 0);
    CHECK_NEAR(npc->aim_weight, 0.0f, 1e-5f);
}

// The arc is drawn only while she charges, from the stick along its toss, to
// the first hit or ten seconds out.
NOCTURNE_TEST(the_throw_arc_is_drawn_while_charging) {
    start();
    CGabriella *g = gabriella();
    CDynamite *d = with_dynamite(g);
    nocturne_hero_gabriella_render_throw_arc(g, d);
    CHECK(stand.arcs.empty());
    g->fire_state = 3;
    nocturne_hero_gabriella_render_throw_arc(g, d);
    stand.arc_hit = 2.5f;
    nocturne_hero_gabriella_render_throw_arc(g, d);
    CHECK(stand.arcs == std::vector<float>({10.0f, 2.5f}));
}

// A new selection is swapped in at her hip: drawn, she holsters the weapon in
// hand first, and draws the new one; holstered, it is swapped at once. Her
// own code sees the weapon in her hand, everything else the selection.
NOCTURNE_TEST(a_switch_swaps_the_weapon_at_her_hip) {
    start();
    CGabriella *g = gabriella();
    CInventory &inventory = g->base.inventory;
    CWeapon *first = weapon(&g_CGunClassInfo);
    CWeapon *second = weapon(&g_CGunClassInfo);
    inventory.items[inventory.item_count++] = &first->base;
    inventory.items[inventory.item_count++] = &second->base;
    inventory.selected_weapon = first;
    nocturne_hero_gabriella_hold_weapon(g);
    nocturne_hero_gabriella_switch_weapon(g);
    nocturne_hero_gabriella_release_weapon(g);
    CHECK(inventory.selected_weapon == first);

    // With no switch under way, holding leaves the selection alone.
    nocturne_hero_gabriella_hold_weapon(g);
    CHECK(inventory.selected_weapon == first);
    nocturne_hero_gabriella_release_weapon(g);

    g->weapon_state_flags = 3;
    g->draw_blend = 1.0f;
    inventory.selected_weapon = second;
    nocturne_hero_gabriella_hold_weapon(g);
    nocturne_hero_gabriella_hold_weapon(g);
    CHECK(inventory.selected_weapon == first);
    nocturne_hero_gabriella_switch_weapon(g);
    CHECK_EQ(g->weapon_state_flags, 0);
    nocturne_hero_gabriella_release_weapon(g);
    CHECK(inventory.selected_weapon == second);

    nocturne_hero_gabriella_hold_weapon(g);
    g->draw_blend = 0.6f;
    nocturne_hero_gabriella_switch_weapon(g);
    CHECK(inventory.selected_weapon == first);
    g->draw_blend = 0.4f;
    nocturne_hero_gabriella_switch_weapon(g);
    CHECK(inventory.selected_weapon == second);
    CHECK_EQ(g->weapon_state_flags, 2);
    nocturne_hero_gabriella_release_weapon(g);
    CHECK(inventory.selected_weapon == second);
    nocturne_hero_gabriella_switch_weapon(g);

    // Holstered with her hand still out: swapped at the hip, not drawn.
    g->weapon_state_flags = 0;
    g->draw_blend = 0.5f;
    inventory.selected_weapon = first;
    nocturne_hero_gabriella_hold_weapon(g);
    nocturne_hero_gabriella_switch_weapon(g);
    nocturne_hero_gabriella_release_weapon(g);
    g->draw_blend = 0.0f;
    nocturne_hero_gabriella_hold_weapon(g);
    nocturne_hero_gabriella_switch_weapon(g);
    nocturne_hero_gabriella_release_weapon(g);
    CHECK(inventory.selected_weapon == first);
    CHECK_EQ(g->weapon_state_flags, 0);

    // The weapon in her hand gone from her inventory, she is not held to it.
    inventory.items[0] = &second->base;
    inventory.item_count = 1;
    inventory.selected_weapon = second;
    nocturne_hero_gabriella_hold_weapon(g);
    CHECK(inventory.selected_weapon == second);
    nocturne_hero_gabriella_release_weapon(g);

    // Another Gabriella swaps at once.
    CGabriella *npc = gabriella(-1);
    npc->base.inventory.selected_weapon = first;
    nocturne_hero_gabriella_hold_weapon(npc);
    nocturne_hero_gabriella_switch_weapon(npc);
    nocturne_hero_gabriella_release_weapon(npc);
    CHECK(npc->base.inventory.selected_weapon == first);
}

// A pump-action shot takes her long-gun recoil and a pump in which no shot
// starts, ejecting a shotgun's shell at 0.6 of it; a switch away abandons it.
NOCTURNE_TEST(a_pump_action_shot_pumps) {
    start();
    CGabriella *g = gabriella();
    CInventory &inventory = g->base.inventory;
    nocturne_hero_gabriella_fired(g);
    inventory.selected_weapon = gun_named("CGun", 1);
    nocturne_hero_gabriella_fired(g);
    CHECK_EQ(nocturne_hero_gabriella_pumping(g), 0);
    CHECK_EQ(g->fire_cooldown_timer, 0.0f);

    CWeapon *shotgun = gun_named("CShotgun", 2);
    inventory.selected_weapon = shotgun;
    nocturne_hero_gabriella_fired(g);
    CHECK_EQ(g->fire_cooldown_timer, 1.0f);
    CHECK_EQ(nocturne_hero_gabriella_pumping(g), 1);
    nocturne_hero_gabriella_fire_tick(g, 0.1f);
    CHECK_EQ(stand.ejected, 0);
    nocturne_hero_gabriella_fire_tick(g, 0.4f);
    CHECK_EQ(stand.ejected, 1);
    nocturne_hero_gabriella_fire_tick(g, 0.1f);
    CHECK_EQ(stand.ejected, 1);
    CHECK_EQ(nocturne_hero_gabriella_pumping(g), 1);
    nocturne_hero_gabriella_fire_tick(g, 0.3f);
    CHECK_EQ(nocturne_hero_gabriella_pumping(g), 0);
    nocturne_hero_gabriella_fire_tick(g, 0.1f);

    // A pump action with no shell to eject.
    inventory.selected_weapon = gun_named("CRifle", 2);
    nocturne_hero_gabriella_fired(g);
    nocturne_hero_gabriella_fire_tick(g, 0.5f);
    CHECK_EQ(stand.ejected, 1);

    // Switched away mid-pump.
    inventory.selected_weapon = shotgun;
    CHECK_EQ(nocturne_hero_gabriella_pumping(g), 0);
    nocturne_hero_gabriella_fire_tick(g, 0.1f);
    inventory.selected_weapon = shotgun;
    nocturne_hero_gabriella_fire_tick(g, 0.5f);
    CHECK_EQ(stand.ejected, 1);

    CGabriella *npc = gabriella(-1);
    npc->base.inventory.selected_weapon = shotgun;
    nocturne_hero_gabriella_fired(npc);
    nocturne_hero_gabriella_fire_tick(npc, 1.0f);
    CHECK_EQ(nocturne_hero_gabriella_pumping(npc), 0);
    CHECK_EQ(npc->fire_cooldown_timer, 0.0f);
}

// A shot refused because the weapon's own refire is not ready is dropped;
// waiting on her draw or aim, on a throw, or for another Gabriella, it is kept.
NOCTURNE_TEST(a_shot_waiting_on_the_weapons_refire_is_dropped) {
    start();
    CGabriella *g = gabriella();
    CHECK_EQ(nocturne_hero_gabriella_keep_pending_shot(g), 1);
    g->base.inventory.selected_weapon = weapon(&g_CGunClassInfo);
    CHECK_EQ(nocturne_hero_gabriella_keep_pending_shot(g), 1);
    stand.ready_to_fire = 0;
    CHECK_EQ(nocturne_hero_gabriella_keep_pending_shot(g), 0);
    with_dynamite(g);
    CHECK_EQ(nocturne_hero_gabriella_keep_pending_shot(g), 1);
    CHECK_EQ(nocturne_hero_gabriella_keep_pending_shot(gabriella(-1)), 1);
}

// A press held through a draw reads as released, so it does not shoot the
// moment the draw completes.
NOCTURNE_TEST(a_press_held_through_a_draw_is_released) {
    start();
    CGabriella *g = gabriella();
    press(g).fire = 1;
    press(g).draw = 1;
    nocturne_hero_gabriella_process_motion(g, 0.1f);
    CHECK_EQ(press(g).fire, 0);

    start();
    g = gabriella();
    press(g).fire = 1;
    g->draw_blend = 0.3f;
    nocturne_hero_gabriella_process_motion(g, 0.1f);
    CHECK_EQ(press(g).fire, 0);

    // Drawn already, it fires.
    start();
    g = gabriella();
    press(g).fire = 1;
    g->weapon_state_flags = 2;
    g->draw_blend = 1.0f;
    nocturne_hero_gabriella_process_motion(g, 0.1f);
    CHECK_EQ(press(g).fire, 1);
}

// A carried object she may throw charges from 10 while the button is held, to
// at most 70, and goes on release as her left arm swings through, along the
// pitch her look input set.
NOCTURNE_TEST(a_carried_object_is_charged_and_thrown) {
    start();
    CGabriella *g = gabriella();
    CDemonActor *object = carry(g);
    CHECK_EQ(nocturne_hero_gabriella_throw_carried(g), 1);
    press(g).fire = 1;
    nocturne_hero_gabriella_process_motion(g, 0.1f);
    CHECK_EQ(nocturne_hero_gabriella_throw_carried(g), 1);
    nocturne_hero_gabriella_pose_arms(g);
    CHECK_NEAR(stand.arm_blends.back(), 0.6f, 1e-5f);
    nocturne_hero_gabriella_render_carry_arc(g);
    CHECK(stand.arcs.empty());
    nocturne_hero_gabriella_process_motion(g, 0.1f);
    nocturne_hero_gabriella_render_carry_arc(g);
    CHECK_EQ(stand.arcs.size(), (size_t)1);
    g->base.base.carry_hands[0].carry_actor = nullptr;
    nocturne_hero_gabriella_render_carry_arc(g);
    CHECK_EQ(stand.arcs.size(), (size_t)1);
    g->base.base.carry_hands[0].carry_actor = object;
    nocturne_hero_gabriella_process_motion(g, 3.0f);

    press(g).fire = 0;
    nocturne_hero_gabriella_process_motion(g, 0.01f);
    CHECK_EQ(nocturne_hero_gabriella_throw_carried(g), 1);
    nocturne_hero_gabriella_render_carry_arc(g);
    CHECK_EQ(stand.arcs.size(), (size_t)1);
    nocturne_hero_gabriella_pose_arms(g);
    nocturne_hero_gabriella_process_motion(g, 0.1f);
    CHECK(stand.drops.empty());
    nocturne_hero_gabriella_process_motion(g, 0.01f);
    CHECK_EQ(stand.drops.size(), (size_t)1);
    if (!stand.drops.empty()) {
        CHECK_NEAR(stand.drops[0].y, 0.0f, 1e-5f);
        CHECK_NEAR(stand.drops[0].z, 70.0f, 1e-4f);
    }

    // Released, it is no longer held; the swing ends, then the arm settles.
    g->base.base.carry_hands[0].carry_actor = nullptr;
    CHECK_EQ(nocturne_hero_gabriella_throw_carried(g), 0);
    nocturne_hero_gabriella_process_motion(g, 0.2f);
    nocturne_hero_gabriella_process_motion(g, 1.0f);
    const size_t poses = stand.arm_blends.size();
    nocturne_hero_gabriella_pose_arms(g);
    CHECK_EQ(stand.arm_blends.size(), poses);
}

// Look input aims the carried throw while it charges.
NOCTURNE_TEST(look_input_aims_a_carried_throw) {
    start();
    CGabriella *g = gabriella();
    carry(g);
    nocturne_hero_gabriella_throw_carried(g);
    press(g).fire = 1;
    g->base.player_input.look_up_down_speed = -0.1f;
    for (int i = 0; i < 10; i++)
        nocturne_hero_gabriella_process_motion(g, 0.1f);
    press(g).fire = 0;
    g->base.player_input.look_up_down_speed = 0.0f;
    for (int i = 0; i < 4; i++)
        nocturne_hero_gabriella_process_motion(g, 0.05f);
    CHECK_EQ(stand.drops.size(), (size_t)1);
    if (!stand.drops.empty())
        CHECK(stand.drops[0].y < 0.0f);
}

// A throw whose object is gone, or whose thrower is held, at the release
// lets go of nothing; losing the object mid-charge ends the charge.
NOCTURNE_TEST(a_throw_without_its_object_lets_go_of_nothing) {
    start();
    CGabriella *g = gabriella();
    carry(g);
    nocturne_hero_gabriella_throw_carried(g);
    press(g).fire = 1;
    nocturne_hero_gabriella_process_motion(g, 0.1f);
    g->base.base.carry_hands[0].carry_actor = nullptr;
    nocturne_hero_gabriella_process_motion(g, 0.1f);
    CHECK_EQ(nocturne_hero_gabriella_throw_carried(g), 0);

    carry(g);
    nocturne_hero_gabriella_throw_carried(g);
    press(g).fire = 0;
    nocturne_hero_gabriella_process_motion(g, 0.0f);
    g->base.base.carry_hands[0].carry_actor = nullptr;
    nocturne_hero_gabriella_process_motion(g, 0.2f);
    CHECK(stand.drops.empty());

    start();
    g = gabriella();
    carry(g);
    nocturne_hero_gabriella_throw_carried(g);
    nocturne_hero_gabriella_process_motion(g, 0.0f);
    g->base.base.grabbed_by = &character(0)->base;
    nocturne_hero_gabriella_process_motion(g, 0.2f);
    CHECK(stand.drops.empty());

    // Held while charging ends the charge.
    g->base.base.grabbed_by = nullptr;
    nocturne_hero_gabriella_process_motion(g, 1.0f);
    nocturne_hero_gabriella_throw_carried(g);
    g->base.base.grabbed_by = &character(0)->base;
    nocturne_hero_gabriella_process_motion(g, 0.1f);
    g->base.base.grabbed_by = nullptr;
    press(g).fire = 0;
    nocturne_hero_gabriella_process_motion(g, 1.0f);
    CHECK(stand.drops.empty());
}

// Only something she may throw, held and free to act, outside a pickup or
// put-down, starts a throw; her flashlight and another Gabriella's load never.
NOCTURNE_TEST(only_a_throwable_load_starts_a_throw) {
    struct Case {
        const char *name;
        void (*apply)(CGabriella *);
    };
    const Case cases[] = {
        {"nothing", [](CGabriella *gab) { gab->base.base.carry_hands[0].carry_actor = nullptr; }},
        {"flashlight",
         [](CGabriella *gab) {
             give_class(gab->base.base.carry_hands[0].carry_actor, &g_CLightActorClassInfo);
         }},
        {"heavy", [](CGabriella *gab) { carry(gab, 0); }},
        {"dead", [](CGabriella *gab) { gab->base.base.hit_points = 0.0f; }},
        {"picking up", [](CGabriella *gab) { play(gab, kPickupCarry); }},
        {"putting down", [](CGabriella *gab) { play(gab, kPutDown); }},
    };
    for (const Case &c : cases) {
        start();
        CGabriella *g = gabriella();
        carry(g);
        c.apply(g);
        CHECK_EQ_AT(nocturne_hero_gabriella_throw_carried(g), 0, c.name);
    }
    start();
    CGabriella *npc = gabriella(-1);
    carry(npc);
    CHECK_EQ(nocturne_hero_gabriella_throw_carried(npc), 0);
    nocturne_hero_gabriella_render_carry_arc(npc);
    nocturne_hero_gabriella_pose_arms(npc);
    CHECK(stand.arcs.empty());
    CHECK(stand.arm_blends.empty());
}

// From STAND a carried object is put down where the floor takes it, using the
// press; walking, the press waits for her to stand.
NOCTURNE_TEST(a_carried_object_is_put_down_on_free_floor) {
    start();
    CGabriella *g = gabriella();
    CHECK_EQ(nocturne_hero_gabriella_put_down(g), 0);
    carry(g);
    actor(&item_type, 0.0f, 0.0f, 1.0f);
    actor(&g_CCrateClassInfo, 0.0f, 0.0f, 5.0f);
    press(g).fire = 1;
    CHECK_EQ(nocturne_hero_gabriella_put_down(g), 1);
    CHECK_EQ(press(g).fire, 0);
    CHECK_EQ(stand.desired.size(), (size_t)1);
    if (!stand.desired.empty())
        CHECK_EQ(stand.desired[0].index, kPutDown);

    play(g, kWalk);
    CHECK_EQ(nocturne_hero_gabriella_put_down(g), 1);
    CHECK_EQ(nocturne_hero_gabriella_locomotion_state(g, kWalk), kStand);
    nocturne_hero_gabriella_process_motion(g, 0.1f);
    CHECK_EQ(stand.desired.size(), (size_t)1);
    play(g, kStand);
    nocturne_hero_gabriella_process_motion(g, 0.1f);
    CHECK_EQ(stand.desired.size(), (size_t)2);

    // Already putting it down, there is nothing more to do; off the ground or
    // held, neither.
    play(g, kPutDown);
    CHECK_EQ(nocturne_hero_gabriella_put_down(g), 0);
    play(g, kStand);
    g->base.base.is_on_ground = 0;
    CHECK_EQ(nocturne_hero_gabriella_put_down(g), 0);
    g->base.base.is_on_ground = 1;
    g->base.base.hit_points = 0.0f;
    CHECK_EQ(nocturne_hero_gabriella_put_down(g), 0);

    // The press waits, then the object is gone.
    start();
    g = gabriella();
    carry(g);
    play(g, kWalk);
    nocturne_hero_gabriella_put_down(g);
    g->base.base.carry_hands[0].carry_actor = nullptr;
    nocturne_hero_gabriella_process_motion(g, 0.1f);
    CHECK_EQ(nocturne_hero_gabriella_locomotion_state(g, kWalk), kWalk);

    CGabriella *npc = gabriella(-1);
    carry(npc);
    CHECK_EQ(nocturne_hero_gabriella_put_down(npc), 0);
}

// The floor does not take it with something in the way ahead, ground too far
// from her feet, or a crate within 2.
NOCTURNE_TEST(the_floor_must_take_what_is_put_down) {
    struct Case {
        const char *name;
        void (*apply)();
    };
    const Case cases[] = {
        {"blocked", [] { stand.clear_ahead = 0.5f; }},
        {"drop", [] { stand.ground = -1.5f; }},
        {"crate", [] { actor(&g_CCrateClassInfo, 0.0f, 0.0f, 1.5f); }},
    };
    for (const Case &c : cases) {
        start();
        CGabriella *g = gabriella();
        carry(g);
        c.apply();
        CHECK_EQ_AT(nocturne_hero_gabriella_put_down(g), 0, c.name);
        play(g, kWalk);
        CHECK_EQ_AT(nocturne_hero_gabriella_put_down(g), 0, c.name);
    }
}

// The gas mask: wanted with her weapon away, her arm rises to her face, where
// the mask goes on, and comes down; unwanted, it rises to take it off and
// lowers it to her side. Her draw is held while the arm moves.
NOCTURNE_TEST(the_gas_mask_goes_on_and_comes_off) {
    start();
    CGabriella *g = gabriella();
    int &wearing = g->base.is_wearing_gas_mask;
    CGasMask *mask = gas_mask(g, true);
    g->weapon_state_flags = 2;
    nocturne_hero_gabriella_mask_tick(g, 0.1f);
    CHECK_EQ(wearing, 0);
    g->weapon_state_flags = 0;
    g->draw_blend = 0.2f;
    nocturne_hero_gabriella_mask_tick(g, 0.1f);
    CHECK_EQ(wearing, 0);
    g->draw_blend = 0.0f;

    press(g).draw = 1;
    nocturne_hero_gabriella_mask_tick(g, 0.1f);
    CHECK_EQ(wearing, 1);
    CHECK_EQ(press(g).draw, 0);
    nocturne_hero_gabriella_mask_tick(g, 0.25f);
    nocturne_hero_gabriella_pose_arms(g);
    CHECK_EQ(stand.arm_blends.size(), (size_t)2);
    CHECK_NEAR(stand.arm_blends.back(), 0.5f, 1e-5f);
    nocturne_hero_gabriella_mask_tick(g, 0.25f);
    CHECK_EQ(wearing, 2);
    nocturne_hero_gabriella_mask_tick(g, 0.4f);
    CHECK_EQ(wearing, 2);
    press(g).draw = 1;
    nocturne_hero_gabriella_mask_tick(g, 0.1f);
    CHECK_EQ(press(g).draw, 1);
    nocturne_hero_gabriella_pose_arms(g);
    CHECK_EQ(stand.arm_blends.size(), (size_t)2);

    // Off: the arm takes it off at her face and lowers it, partway, then to
    // her side, where it is put away.
    mask->carrier = nullptr;
    nocturne_hero_gabriella_mask_tick(g, 0.1f);
    nocturne_hero_gabriella_mask_tick(g, 0.5f);
    CHECK_EQ(wearing, 1);
    nocturne_hero_gabriella_mask_tick(g, 0.2f);
    CHECK_EQ(wearing, 1);
    nocturne_hero_gabriella_mask_tick(g, 0.2f);
    CHECK_EQ(wearing, 0);
    nocturne_hero_gabriella_mask_tick(g, 0.1f);
    CHECK_EQ(wearing, 0);

    // Wanted again on the way down, it stays in her hand at her side.
    mask->carrier = &g->base.base.base;
    nocturne_hero_gabriella_mask_tick(g, 0.1f);
    mask->carrier = nullptr;
    nocturne_hero_gabriella_mask_tick(g, 0.5f);
    CHECK_EQ(wearing, 1);
    mask->carrier = &g->base.base.base;
    nocturne_hero_gabriella_mask_tick(g, 0.4f);
    CHECK_EQ(wearing, 1);
    mask->carrier = nullptr;
    for (int i = 0; i < 3; i++)
        nocturne_hero_gabriella_mask_tick(g, 0.5f);
    CHECK_EQ(wearing, 0);

    // With no mask in the inventory there is nothing to want.
    g->base.inventory.light_gun_ptr = nullptr;
    nocturne_hero_gabriella_mask_tick(g, 0.1f);
    CHECK_EQ(wearing, 0);

    CGabriella *npc = gabriella(-1);
    gas_mask(npc, true);
    nocturne_hero_gabriella_mask_tick(npc, 0.1f);
    CHECK_EQ(npc->base.is_wearing_gas_mask, 0);
}

// The mask is drawn on her head when worn and in her right hand when held,
// and not at all when away or missing.
NOCTURNE_TEST(the_gas_mask_is_drawn_on_her_head_or_in_her_hand) {
    start();
    CGabriella *g = gabriella();
    nocturne_hero_gabriella_render_mask(g);
    g->base.is_wearing_gas_mask = 2;
    nocturne_hero_gabriella_render_mask(g);
    CHECK_EQ(stand.models_drawn, 0);

    gas_mask(g, true);
    nocturne_hero_gabriella_render_mask(g);
    g->base.is_wearing_gas_mask = 1;
    nocturne_hero_gabriella_render_mask(g);
    CHECK_EQ(stand.models_drawn, 2);
    CHECK_EQ(stand.render_states, 0);
    CHECK_EQ(stand.mask_placed.size(), (size_t)2);
    if (stand.mask_placed.size() == 2) {
        CHECK_NEAR(stand.mask_placed[0].y, 0.283614f * 0.8f, 1e-5f);
        CHECK_NEAR(stand.mask_placed[1].x, 0.512623f, 1e-5f);
    }
}

NOCTURNE_TEST_MAIN()
