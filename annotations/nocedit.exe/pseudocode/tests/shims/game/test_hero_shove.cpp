// =============================================================================
// HERO SHOVE — an enemy pushed away from the hero who hit it
// =============================================================================

#include "game/hero_shove.h"
#include "game_support.h"
#include "nocturne_test.h"

using namespace game_support;

namespace {

CCharacter *target(int i, float x, float z) {
    CCharacter *c = character(i);
    c->base.location.position = CVector3f{x, 0.0f, z};
    c->base.lifecycle_state = ACTOR_CREATED;
    stand.in_set.insert(c);
    return c;
}

float moved_x(CCharacter *c) {
    float x = 0.0f;
    for (const auto &move : stand.moved) {
        if (move.first == c)
            x += move.second.x;
    }
    return x;
}

// Plays out every shove a hero has, in steps past their length.
void finish(CHero *owner) {
    for (int i = 0; i < 6; i++)
        nocturne_hero_shove_step(owner, 0.05f);
}

} // namespace

// The target is moved straight away from the hero, fast at first and easing
// to a stop at the full distance; then nothing more.
NOCTURNE_TEST(a_shove_eases_the_target_to_the_distance) {
    stand.reset();
    place_heroes(1);
    CCharacter *enemy = target(0, 3.0f, 0.0f);
    nocturne_hero_shove_start(heroes[0], enemy, 2.0f);
    nocturne_hero_shove_step(heroes[0], 0.05f);
    const float first = moved_x(enemy);
    nocturne_hero_shove_step(heroes[0], 0.05f);
    CHECK(moved_x(enemy) - first < first);
    finish(heroes[0]);
    CHECK_NEAR(moved_x(enemy), 2.0f, 1e-4f);
    const size_t moves = stand.moved.size();
    nocturne_hero_shove_step(heroes[0], 0.05f);
    CHECK_EQ(stand.moved.size(), moves);
    for (const auto &move : stand.moved)
        CHECK_EQ(move.second.z, 0.0f);
}

// A target standing on the hero has no direction to go, and is not shoved.
NOCTURNE_TEST(a_target_on_the_hero_is_not_shoved) {
    stand.reset();
    place_heroes(1);
    nocturne_hero_shove_start(heroes[0], target(0, 0.0f, 0.0f), 2.0f);
    finish(heroes[0]);
    CHECK(stand.moved.empty());
}

// A target that has left the set, or been deleted, is let go; another hero's
// shoves are not his to step.
NOCTURNE_TEST(a_target_gone_is_let_go) {
    stand.reset();
    place_heroes(2);
    CCharacter *left = target(0, 3.0f, 0.0f);
    CCharacter *deleted = target(1, 0.0f, 3.0f);
    nocturne_hero_shove_start(heroes[0], left, 2.0f);
    nocturne_hero_shove_start(heroes[0], deleted, 2.0f);
    stand.in_set.erase(left);
    deleted->base.lifecycle_state = ACTOR_DESTROYED;
    nocturne_hero_shove_step(heroes[1], 0.05f);
    finish(heroes[0]);
    CHECK(stand.moved.empty());
}

// Sixteen shoves run at once; a seventeenth waits for a free slot, which a
// finished shove, or one whose hero is no longer playing, leaves.
NOCTURNE_TEST(a_full_table_takes_a_finished_or_orphaned_slot) {
    stand.reset();
    place_heroes(2);
    for (int i = 0; i < 16; i++) {
        CCharacter *c = (i < 3) ? target(i, 3.0f, (float)i) : target(3, 3.0f, 0.0f);
        nocturne_hero_shove_start(heroes[0], c, 1.0f);
    }
    nocturne_hero_shove_start(heroes[1], target(0, 3.0f, 0.0f), 1.0f);
    nocturne_hero_shove_step(heroes[1], 0.05f);
    CHECK(stand.moved.empty());

    // Its hero out of the party, a slot is free.
    g_HeroActors[0] = nullptr;
    nocturne_hero_shove_start(heroes[1], target(1, 3.0f, 1.0f), 1.0f);
    nocturne_hero_shove_step(heroes[1], 0.05f);
    CHECK_EQ(stand.moved.size(), (size_t)1);

    // Finished, every slot is.
    g_HeroActors[0] = heroes[0];
    finish(heroes[0]);
    finish(heroes[1]);
    stand.moved.clear();
    nocturne_hero_shove_start(heroes[1], target(2, 3.0f, 2.0f), 1.0f);
    nocturne_hero_shove_step(heroes[1], 0.05f);
    CHECK_EQ(stand.moved.size(), (size_t)1);
}

// A new mission drops every shove still running, so none carries on under a
// hero built at the same address.
NOCTURNE_TEST(a_reset_drops_every_shove) {
    stand.reset();
    place_heroes(1);
    nocturne_hero_shove_start(heroes[0], target(0, 3.0f, 0.0f), 2.0f);
    nocturne_hero_shove_reset();
    finish(heroes[0]);
    CHECK(stand.moved.empty());
}

NOCTURNE_TEST_MAIN()
