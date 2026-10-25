// =============================================================================
// HERO FALL — a long fall hurts, and falling out of the world kills
// =============================================================================

#include "behaviour_support.h"
#include "game/hero_fall.h"
#include "nocturne_test.h"

#include <string>

using namespace behaviour_support;

namespace {

// A player in the air above a floor at 0, falling at `speed` and landing on the
// next step.
CHero *falling(float speed) {
    stand.reset();
    place_heroes(1);
    CHero *hero = heroes[0];
    hero->base.base.location.position.y = 5.0f;
    hero->base.velocity.y = -speed;
    hero->invincibility_timer = 1.0f;
    stand.on_move = [](CCharacter *c, CVector3f *) { c->base.location.position.y = 0.0f; };
    return hero;
}

CVector3f s_step = {0.0f, -5.0f, 0.0f};

} // namespace

// A landing past the safe speed hurts in proportion, through any invincibility,
// and plays a footstep as heavy as the fall.
NOCTURNE_TEST(a_hard_landing_hurts) {
    CHero *hero = falling(30.0f);
    nocturne_hero_fall_move(hero, &s_step);
    CHECK_EQ(stand.moves.size(), (size_t)1);
    CHECK_EQ(stand.damage.size(), (size_t)1);
    if (!stand.damage.empty()) {
        CHECK_EQ(stand.damage[0].second.damage_amount, 50.0f);
        CHECK_EQ((int)stand.damage[0].second.damage_type, (int)DAMAGE_TYPE_GENERIC);
    }
    CHECK_EQ(hero->invincibility_timer, 0.0f);
    CHECK_EQ(stand.footsteps.size(), (size_t)1);
    if (!stand.footsteps.empty())
        CHECK_NEAR(stand.footsteps[0], 1.75f, 1e-6f);
}

// One past the fatal figure kills, as a fall, and plays no footstep.
NOCTURNE_TEST(a_long_enough_fall_kills) {
    CHero *hero = falling(60.0f);
    nocturne_hero_fall_move(hero, &s_step);
    CHECK_EQ(stand.damage.size(), (size_t)1);
    if (!stand.damage.empty()) {
        CHECK_EQ(stand.damage[0].second.damage_amount, 9999.0f);
        CHECK_EQ((int)stand.damage[0].second.damage_type, (int)DAMAGE_TYPE_FALL);
    }
    CHECK(stand.footsteps.empty());
}

// No harm from a step that starts on the ground, a slow one, one that does not
// land, a hero already dead or no player, or with damage off.
NOCTURNE_TEST(a_gentle_or_no_landing_is_harmless) {
    struct Case {
        const char *name;
        void (*apply)(CHero *);
    };
    const Case cases[] = {
        {"on the ground", [](CHero *h) { h->base.base.location.position.y = 0.0f; }},
        {"slow", [](CHero *h) { h->base.velocity.y = -10.0f; }},
        {"still falling", [](CHero *) { stand.on_move = [](CCharacter *, CVector3f *) {}; }},
        {"dead", [](CHero *h) { h->base.hit_points = 0.0f; }},
        {"no player", [](CHero *) { g_HeroCount = 0; }},
        {"god mode", [](CHero *) { game->god_mode_enabled = 1; }},
        {"no damage", [](CHero *) { game->allow_damage_flag = 0; }},
    };
    for (const Case &c : cases) {
        CHero *hero = falling(30.0f);
        c.apply(hero);
        nocturne_hero_fall_move(hero, &s_step);
        CHECK_AT(stand.damage.empty(), c.name);
        CHECK_AT(stand.moves.size() == 1, c.name);
    }
}

// Below the bottom of the level, a living character dies of the fall; a hero
// through any invincibility. The Stranger dies in his own splat, with its sound.
NOCTURNE_TEST(below_the_world_a_character_dies) {
    stand.reset();
    place_heroes(1);
    CDemonCube cube = {};
    g_CDemonRaytraceInstance.cube_data = &cube;
    g_CDemonRaytraceInstance.bbox_min.y = 0.0f;
    g_CDemonRaytraceInstance.bbox_max.y = 50.0f;

    CCharacter *mobster = character(0);
    give_class(&mobster->base, &g_CEnemyClassInfo);
    mobster->hit_points = 100.0f;
    mobster->base.location.position.y = -40.0f;
    nocturne_fall_out_of_world(mobster);
    CHECK_EQ(stand.damage.size(), (size_t)1);
    CHECK(stand.desired.empty());

    CHero *stranger = heroes[0];
    give_class(&stranger->base.base, &g_CStrangerClassInfo);
    stranger->invincibility_timer = 1.0f;
    stranger->base.base.location.position.y = -40.0f;
    nocturne_fall_out_of_world(&stranger->base);
    CHECK_EQ(stranger->invincibility_timer, 0.0f);
    CHECK_EQ(stand.desired.size(), (size_t)1);
    if (!stand.desired.empty())
        CHECK_EQ(stand.desired[0].index, 0x12);
    CHECK_EQ(stand.sounds.size(), (size_t)1);
    if (!stand.sounds.empty())
        CHECK_EQ(stand.sounds[0].second, std::string("fall-?.wav"));

    // One the blow leaves standing is not made to splat.
    stranger->base.hit_points = 99999.0f;
    nocturne_fall_out_of_world(&stranger->base);
    CHECK_EQ(stand.desired.size(), (size_t)1);
}

// Not above the bottom, already dead, or with no level, or a flat one.
NOCTURNE_TEST(above_the_world_or_without_one_nothing_happens) {
    stand.reset();
    CCharacter *c = character(0);
    give_class(&c->base, &g_CEnemyClassInfo);
    c->hit_points = 100.0f;
    c->base.location.position.y = -40.0f;
    nocturne_fall_out_of_world(c);
    CDemonCube cube = {};
    g_CDemonRaytraceInstance.cube_data = &cube;
    nocturne_fall_out_of_world(c);
    g_CDemonRaytraceInstance.bbox_max.y = 50.0f;
    c->base.location.position.y = -10.0f;
    nocturne_fall_out_of_world(c);
    c->base.location.position.y = -40.0f;
    c->hit_points = 0.0f;
    nocturne_fall_out_of_world(c);
    CHECK(stand.damage.empty());
}

NOCTURNE_TEST_MAIN()
