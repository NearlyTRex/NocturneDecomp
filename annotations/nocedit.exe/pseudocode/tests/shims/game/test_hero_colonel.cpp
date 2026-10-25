// =============================================================================
// HERO COLONEL — his pistol, his death and his push-off
// =============================================================================

#include "behaviour_support.h"
#include "class_support.h"
#include "game/hero_colonel.h"
#include "game/hero_shove.h"
#include "game/hero_weapon.h"
#include "nocturne_test.h"

#include <cmath>
#include <cstdio>
#include <cstring>
#include <deque>
#include <memory>
#include <string>
#include <vector>

using namespace behaviour_support;

namespace {

// COLONEL.SKL's layers, at 10 fps: "draw" over frames 0-16, "shoot" 0-21.
const int kDraw = 1;
const int kShoot = 2;

std::unique_ptr<CMotionList> s_list(new CMotionList());

// Never freed: the shim's aim table knows a Colonel by address, so no two may
// share one.
std::deque<std::unique_ptr<CColonel>> s_colonels;

// A fresh mission: no Colonel has an aim yet.
void start() {
    stand.reset();
    nocturne_colonel_reset();
    std::memset(s_list.get(), 0, sizeof(*s_list));
    s_list->motion_count = 3;
    s_list->motions[kDraw].fps = 10.0f;
    s_list->motions[kDraw].frame_count = 17;
    s_list->motions[kShoot].fps = 10.0f;
    s_list->motions[kShoot].frame_count = 22;
    stand.motion_indices["draw"] = kDraw;
    stand.motion_indices["shoot"] = kShoot;
    g_HeroCount = 0;
}

// A Colonel at the origin facing +z, holding his sidearm, or a plain gun when
// not `armed`.
CColonel *colonel(bool armed = true) {
    s_colonels.emplace_back(new CColonel());
    CColonel *c = s_colonels.back().get();
    std::memset(c, 0, sizeof(*c));
    give_class(&c->base.base.base, &g_CColonelClassInfo);
    c->base.base.hit_points = 100.0f;
    c->base.base.model.base.motion_list_ptr = s_list.get();
    CWeapon *gun = weapon(&g_CGunClassInfo);
    std::snprintf(gun->base.actor_name, sizeof(gun->base.actor_name), "%s",
                  armed ? NOCTURNE_COLONEL_SIDEARM_NAME : "Your_weapon");
    gun->ammo_count = 100;
    c->base.inventory.selected_weapon = gun;
    return c;
}

void as_player(CColonel *c) {
    g_HeroActors[0] = &c->base;
    g_HeroCount = 1;
}

// A player Colonel with the pistol out and "draw" played through.
CColonel *ready() {
    CColonel *c = colonel();
    as_player(c);
    c->guns_drawn = 1;
    nocturne_colonel_draw(c);
    nocturne_colonel_update_gun(c, 2.0f);
    return c;
}

CWeapon *gun_of(CColonel *c) {
    return c->base.inventory.selected_weapon;
}

// A live enemy at (x, y, z) with a target point, in the set.
CCharacter *enemy(int i, float x, float y, float z) {
    CCharacter *e = character(i);
    give_class(&e->base, &g_CEnemyClassInfo);
    e->base.lifecycle_state = ACTOR_CREATED;
    e->hit_points = 10.0f;
    e->base.location.position = CVector3f{x, y, z};
    stand.target_points[e] = 1;
    put_in_set(e);
    return e;
}

// The yaw the arm turns to over one second, which is far enough to reach it.
float aimed_yaw(CColonel *c) {
    nocturne_colonel_update_gun(c, 1.0f);
    return stand.placed.back().second.y;
}

} // namespace

// Without his sidearm, the Colonel is left as shipped.
NOCTURNE_TEST(without_the_sidearm_nothing_happens) {
    start();
    CColonel *c = colonel(false);
    c->guns_drawn = 1;
    CHECK_EQ(nocturne_colonel_draw(c), 0);
    CHECK_EQ(nocturne_colonel_fire(c), 0);
    nocturne_colonel_update_gun(c, 0.1f);
    CHECK_EQ(stand.processed, 0);
    nocturne_colonel_render_gun(c);
    CHECK_EQ(stand.renders, 0);

    // Armed but never drawn: no aim to render from, nothing to fire.
    c = colonel();
    nocturne_colonel_render_gun(c);
    CHECK_EQ(stand.renders, 0);
    CHECK_EQ(nocturne_colonel_fire(c), 0);
}

// Drawing puts the pistol in hand and plays "draw" over the upper body; drawing
// again plays it back, and the pistol is drawn until it reaches the start.
NOCTURNE_TEST(draw_plays_forward_and_holstering_plays_back) {
    start();
    CColonel *c = colonel();
    c->guns_drawn = 1;
    CHECK_EQ(nocturne_colonel_draw(c), 1);
    CHECK_EQ(stand.weapon_states.size(), (size_t)1);
    if (!stand.weapon_states.empty())
        CHECK_EQ(stand.weapon_states[0].second, (int)WEAPON_STATE_IN_HAND);
    for (float frame : {0.0f, 5.0f, 10.0f, 15.0f}) {
        nocturne_colonel_update_gun(c, 0.5f);
        CHECK_EQ(stand.layered.back().first, kDraw);
        CHECK_NEAR(stand.layered.back().second, frame, 1e-4f);
    }
    size_t layered = stand.layered.size();
    nocturne_colonel_update_gun(c, 0.5f);
    CHECK_EQ(stand.layered.size(), layered);

    c->guns_drawn = 0;
    CHECK_EQ(nocturne_colonel_draw(c), 1);
    for (float frame : {16.0f, 11.0f, 6.0f, 1.0f}) {
        nocturne_colonel_update_gun(c, 0.5f);
        CHECK_NEAR(stand.layered.back().second, frame, 1e-4f);
        nocturne_colonel_render_gun(c);
    }
    // Shown from 16 back to 6; the step from 1 runs off the start.
    CHECK_EQ(stand.renders, 3);
    CHECK_EQ(stand.beams, 0);
}

// A draw that interrupts a holster picks up where it got to, and the other way
// about.
NOCTURNE_TEST(draw_and_holster_interrupt_each_other) {
    start();
    CColonel *c = colonel();
    nocturne_colonel_draw(c);
    nocturne_colonel_update_gun(c, 0.5f);
    c->guns_drawn = 1;
    nocturne_colonel_draw(c);
    nocturne_colonel_update_gun(c, 0.5f);
    CHECK_NEAR(stand.layered.back().second, 11.0f, 1e-4f);
    nocturne_colonel_update_gun(c, 0.5f);
    CHECK_NEAR(stand.layered.back().second, 16.0f, 1e-4f);

    c = colonel();
    c->guns_drawn = 1;
    nocturne_colonel_draw(c);
    nocturne_colonel_update_gun(c, 0.5f);
    c->guns_drawn = 0;
    nocturne_colonel_draw(c);
    nocturne_colonel_update_gun(c, 0.5f);
    CHECK_NEAR(stand.layered.back().second, 5.0f, 1e-4f);
    nocturne_colonel_update_gun(c, 0.5f);
    CHECK_NEAR(stand.layered.back().second, 0.0f, 1e-4f);
}

// A "draw" with no frames is over as soon as it starts: the holster ends at
// once, and a draw after it starts from the beginning.
NOCTURNE_TEST(a_draw_with_no_frames_ends_at_once) {
    start();
    s_list->motions[kDraw].frame_count = 0;
    CColonel *c = colonel();
    nocturne_colonel_draw(c);
    nocturne_colonel_render_gun(c);
    CHECK_EQ(stand.renders, 1);
    c->guns_drawn = 1;
    nocturne_colonel_draw(c);
    nocturne_colonel_update_gun(c, 0.1f);
    CHECK_NEAR(stand.layered.back().second, 0.0f, 1e-4f);
    size_t layered = stand.layered.size();
    nocturne_colonel_update_gun(c, 0.1f);
    CHECK_EQ(stand.layered.size(), layered);
}

// One shot per "shoot", none during "draw" or before the gun is ready, and the
// reserve put back after each.
NOCTURNE_TEST(one_shot_per_shoot) {
    start();
    CColonel *c = colonel();
    as_player(c);
    c->guns_drawn = 1;
    nocturne_colonel_draw(c);
    CHECK_EQ(nocturne_colonel_fire(c), 0);
    nocturne_colonel_update_gun(c, 2.0f);

    CHECK_EQ(nocturne_colonel_fire(c), 1);
    CHECK_EQ(stand.shots, 1);
    CHECK_EQ(gun_of(c)->ammo_count, 100);
    CHECK_EQ(nocturne_colonel_fire(c), 0);
    nocturne_colonel_update_gun(c, 2.0f);
    CHECK_EQ(stand.layered.back().first, kShoot);
    CHECK_EQ(nocturne_colonel_fire(c), 0);
    nocturne_colonel_update_gun(c, 2.0f);

    stand.ready_to_fire = 0;
    CHECK_EQ(nocturne_colonel_fire(c), 0);
    stand.ready_to_fire = 1;
    CHECK_EQ(nocturne_colonel_fire(c), 1);
    CHECK_EQ(stand.shots, 2);
}

// The shot leaves the right hand toward the target, or along the aim when
// there is none.
NOCTURNE_TEST(the_shot_goes_at_the_target) {
    start();
    CColonel *c = ready();
    c->base.base.base.orient.vec.y = 0.5f;
    nocturne_colonel_update_gun(c, 1.0f);
    CHECK_EQ(nocturne_colonel_fire(c), 1);
    CHECK(stand.placed.back().first == &gun_of(c)->base);
    CHECK_NEAR(stand.placed.back().second.y, 0.5f, 1e-4f);
    CHECK_NEAR(gun_of(c)->base.location.position.x, 0.390807f, 1e-4f);

    c = ready();
    enemy(0, 5.0f, 0.0f, 10.0f);
    CHECK_EQ(nocturne_colonel_fire(c), 1);
    CHECK(stand.placed.back().second.y > 0.3f);
}

// The arm comes up while the pistol is out and he is on his feet, and the beam
// shows once it is on the aim; a grab or a death drops it and plays whole.
NOCTURNE_TEST(the_arm_rises_on_locomotion_only) {
    start();
    CColonel *c = ready();
    CHECK_EQ(stand.arm_blends.size(), (size_t)1);
    if (!stand.arm_blends.empty())
        CHECK_NEAR(stand.arm_blends[0], 1.0f, 1e-4f);
    nocturne_colonel_render_gun(c);
    CHECK_EQ(stand.renders, 1);
    CHECK_EQ(stand.beams, 1);
    CHECK_EQ(stand.processed, 1);

    SMotion grabbed = {};
    grabbed.state_index = 5;
    stand.motion[&c->base.base.model.base] = &grabbed;
    CHECK_EQ(nocturne_colonel_fire(c), 1);
    size_t layered = stand.layered.size();
    nocturne_colonel_update_gun(c, 0.1f);
    CHECK_EQ(stand.layered.size(), layered);
    CHECK_NEAR(stand.arm_blends.back(), 0.6f, 1e-4f);
    CHECK_NEAR(stand.placed.back().second.y, 0.0f, 1e-4f);
    nocturne_colonel_render_gun(c);
    CHECK_EQ(stand.beams, 1);
    c->guns_drawn = 0;
    nocturne_colonel_draw(c);
    nocturne_colonel_update_gun(c, 0.1f);
    CHECK_EQ(stand.layered.size(), layered);

    // Put away, the arm stays down.
    c = colonel();
    nocturne_colonel_update_gun(c, 0.1f);
    size_t blends = stand.arm_blends.size();
    nocturne_colonel_update_gun(c, 0.1f);
    CHECK_EQ(stand.arm_blends.size(), blends);
}

// With no target, look up and down tilts the aim.
NOCTURNE_TEST(look_tilts_an_aim_with_no_target) {
    start();
    CColonel *c = ready();
    c->base.player_input.look_up_down_speed = 0.1f;
    nocturne_colonel_update_gun(c, 0.5f);
    CHECK_NEAR(stand.placed.back().second.x, 0.1f * 3.1415927f, 1e-4f);
    c->base.player_input.look_up_down_speed = 1.0f;
    nocturne_colonel_update_gun(c, 1.0f);
    CHECK_NEAR(stand.placed.back().second.x, 0.7853982f, 1e-4f);
}

// A target is a live enemy offering a target point, in front within 30 and the
// cone, and in sight.
NOCTURNE_TEST(a_target_must_be_a_live_enemy_in_front_in_reach_and_sight) {
    start();
    CColonel *c = ready();
    put_in_set(nullptr);
    CCharacter *e = enemy(0, 3.0f, 0.0f, 10.0f);
    CHECK(aimed_yaw(c) > 0.2f);

    e->base.lifecycle_state = ACTOR_DESTROYED;
    CHECK_NEAR(aimed_yaw(c), 0.0f, 1e-4f);
    e->base.lifecycle_state = ACTOR_CREATED;
    give_class(&e->base, &g_CCharacterClassInfo);
    CHECK_NEAR(aimed_yaw(c), 0.0f, 1e-4f);
    give_class(&e->base, &g_CEnemyClassInfo);
    hero_support::death[e] = DEATH_STATE_DYING;
    CHECK_NEAR(aimed_yaw(c), 0.0f, 1e-4f);
    hero_support::death.clear();
    stand.target_points[e] = 0;
    CHECK_NEAR(aimed_yaw(c), 0.0f, 1e-4f);
    stand.target_points[e] = 1;

    // Behind, outside the cone, out of reach.
    for (CVector3f at : {CVector3f{3.0f, 0.0f, -10.0f}, CVector3f{10.0f, 0.0f, 10.0f},
                         CVector3f{3.0f, 0.0f, 31.0f}}) {
        e->base.location.position = at;
        CHECK_AT(std::fabs(aimed_yaw(c)) < 1e-4f,
                 std::to_string(at.x) + "," + std::to_string(at.z));
    }
    e->base.location.position = CVector3f{3.0f, 0.0f, 10.0f};

    stand.ray_actor = &character(1)->base;
    CHECK_NEAR(aimed_yaw(c), 0.0f, 1e-4f);
    stand.ray_actor = nullptr;
    stand.ray_hit = 1.5f;
    CHECK_NEAR(aimed_yaw(c), 0.0f, 1e-4f);
}

// The current target is kept out to 35 and a wider cone, which a new one must
// be inside 30 and 30 degrees of.
NOCTURNE_TEST(the_current_target_is_kept_further_out) {
    for (CVector3f at : {CVector3f{3.0f, 0.0f, 32.0f}, CVector3f{14.0f, 0.0f, 22.0f}}) {
        start();
        CColonel *c = ready();
        CCharacter *e = enemy(0, 3.0f, 0.0f, 20.0f);
        CHECK(aimed_yaw(c) > 0.1f);
        e->base.location.position = at;
        CHECK_AT(aimed_yaw(c) > 0.05f, std::to_string(at.z));

        c = ready();
        CHECK_AT(std::fabs(aimed_yaw(c)) < 1e-4f, std::to_string(at.z));
    }
}

// The nearest target wins, whichever order the set holds them in.
NOCTURNE_TEST(the_nearest_target_wins) {
    for (int nearer_first : {0, 1}) {
        start();
        CColonel *c = ready();
        if (nearer_first)
            enemy(1, -2.0f, 0.0f, 5.0f);
        enemy(0, 3.0f, 0.0f, 10.0f);
        if (!nearer_first)
            enemy(1, -2.0f, 0.0f, 5.0f);
        CHECK_AT(aimed_yaw(c) < -0.2f, nearer_first ? "nearer first" : "nearer last");
    }
}

// A player's Colonel dies through DIE and DEAD; an NPC is left as shipped.
NOCTURNE_TEST(a_players_colonel_dies) {
    start();
    stand.states["DIE"] = 7;
    stand.states["DEAD"] = 8;
    CColonel *c = colonel();
    CHECK_EQ(nocturne_colonel_death_state(c, 5), 5);
    as_player(c);
    CHECK_EQ(nocturne_colonel_death_state(c, 5), 7);
    CHECK_EQ(nocturne_colonel_death_state(c, 6), 8);
}

// Breaking free kicks and shoves every enemy within reach of him, all the way
// round; an NPC's push-off does nothing.
NOCTURNE_TEST(the_push_off_kicks_everyone_in_reach) {
    start();
    CColonel *c = colonel();
    CCharacter *near = enemy(0, 0.0f, 0.0f, -1.5f);
    nocturne_colonel_push_off(c);
    CHECK(stand.damage.empty());

    as_player(c);
    put_in_set(nullptr);
    enemy(1, 0.0f, 0.0f, 5.0f);
    enemy(2, 0.0f, 3.0f, 1.0f);
    stand.random = 12.0f;
    nocturne_colonel_push_off(c);
    CHECK_EQ(stand.damage.size(), (size_t)1);
    if (!stand.damage.empty()) {
        CHECK(stand.damage[0].first == near);
        CHECK_NEAR(stand.damage[0].second.damage_amount, 12.0f, 1e-4f);
    }
    nocturne_hero_shove_step(&c->base, 1.0f);
    CHECK_NEAR(near->base.location.position.z, -4.5f, 1e-4f);
}

// The aim table reuses its slots in turn once it is full.
NOCTURNE_TEST(a_full_aim_table_reuses_the_oldest) {
    start();
    std::vector<CColonel *> drawn;
    for (int i = 0; i < 16; i++) {
        drawn.push_back(colonel());
        drawn.back()->guns_drawn = 1;
        nocturne_colonel_draw(drawn.back());
    }
    CColonel *late = colonel();
    late->guns_drawn = 1;
    nocturne_colonel_draw(late);

    nocturne_colonel_render_gun(drawn[8]);
    CHECK_EQ(stand.renders, 0);
    nocturne_colonel_render_gun(drawn[9]);
    CHECK_EQ(stand.renders, 1);
    nocturne_colonel_render_gun(late);
    CHECK_EQ(stand.renders, 2);
}

// A new mission forgets every aim: a Colonel mid-holster is no longer drawn
// with his gun.
NOCTURNE_TEST(a_reset_forgets_every_aim) {
    start();
    CColonel *c = ready();
    c->guns_drawn = 0;
    nocturne_colonel_draw(c);
    nocturne_colonel_render_gun(c);
    CHECK_EQ(stand.renders, 1);

    nocturne_colonel_reset();
    nocturne_colonel_render_gun(c);
    CHECK_EQ(stand.renders, 1);
}

NOCTURNE_TEST_MAIN()
