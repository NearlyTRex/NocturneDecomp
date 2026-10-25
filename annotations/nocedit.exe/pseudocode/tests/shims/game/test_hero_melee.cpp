// =============================================================================
// HERO MELEE — what a hero's blow can reach, and what it does
// =============================================================================

#include "behaviour_support.h"
#include "game/hero_melee.h"
#include "nocturne_test.h"

using namespace behaviour_support;

// In the set is in the set's character list.
NOCTURNE_TEST(in_the_set_is_in_its_list) {
    stand.reset();
    put_in_set(character(0));
    CHECK_EQ(nocturne_hero_in_set(character(0)), 1);
    CHECK_EQ(nocturne_hero_in_set(character(1)), 0);
}

// Something is throwable when its melee attacks include the throw.
NOCTURNE_TEST(throwable_is_a_melee_attack_type) {
    stand.reset();
    CDemonActor *crate = &character(0)->base;
    give_class(crate, &item_type);
    stand.melee_types[crate] = 4 | 1;
    CHECK_EQ(nocturne_hero_is_throwable(crate), 1);
    stand.melee_types[crate] = 1;
    CHECK_EQ(nocturne_hero_is_throwable(crate), 0);
}

// A target is a living enemy in the world that is not one of the players.
NOCTURNE_TEST(a_target_is_a_living_enemy) {
    stand.reset();
    place_heroes(1);
    CCharacter *enemy = character(0);
    give_class(&enemy->base, &g_CEnemyClassInfo);
    enemy->base.lifecycle_state = ACTOR_CREATED;
    enemy->hit_points = 10.0f;
    CHECK_EQ(nocturne_hero_melee_target(enemy), 1);

    CHECK_EQ(nocturne_hero_melee_target(nullptr), 0);
    enemy->base.lifecycle_state = ACTOR_DESTROYED;
    CHECK_EQ(nocturne_hero_melee_target(enemy), 0);
    enemy->base.lifecycle_state = ACTOR_CREATED;
    enemy->hit_points = 0.0f;
    CHECK_EQ(nocturne_hero_melee_target(enemy), 0);

    CCharacter *bystander = character(1);
    give_class(&bystander->base, &g_CCharacterClassInfo);
    bystander->base.lifecycle_state = ACTOR_CREATED;
    bystander->hit_points = 10.0f;
    CHECK_EQ(nocturne_hero_melee_target(bystander), 0);

    heroes[0]->base.base.lifecycle_state = ACTOR_CREATED;
    CHECK_EQ(nocturne_hero_melee_target(&heroes[0]->base), 0);
}

// The reach to a target is to the edge of its collision cylinder, across the
// floor, and the local point is handed back.
NOCTURNE_TEST(reach_is_to_the_edge_of_the_target) {
    stand.reset();
    CCharacter *target = character(0);
    target->base.location.position = CVector3f{3.0f, 9.0f, 4.0f};
    target->collision_cylinder_radius = 1.0f;
    CVector3f local;
    CHECK_NEAR(nocturne_hero_melee_edge_distance(&character(1)->base, target, &local), 4.0f, 1e-6f);
    CHECK_EQ(local.y, 9.0f);
}

// A bone is found by name and placed in the world; a missing one is not.
NOCTURNE_TEST(a_bone_is_placed_in_the_world) {
    stand.reset();
    CCharacter *self = character(0);
    self->base.location.position = CVector3f{10.0f, 0.0f, 0.0f};
    stand.bones["Bip01 R Hand"] = 12;
    stand.bone_point = CVector3f{1.0f, 2.0f, 3.0f};
    CVector3f world = {};
    CHECK_EQ(nocturne_hero_bone_world(self, "Bip01 R Hand", &world), 1);
    CHECK_EQ(world.x, 11.0f);
    CHECK_EQ(nocturne_hero_bone_world(self, "Bip01 Tail", &world), 0);
}

// A blow is melee damage from the hero, at the point it was struck from, and
// says what the target took.
NOCTURNE_TEST(a_blow_is_melee_damage_from_the_hero) {
    stand.reset();
    CCharacter *self = character(0);
    CCharacter *target = character(1);
    give_class(&target->base, &g_CEnemyClassInfo);
    target->hit_points = 50.0f;
    const CVector3f from = {1.0f, 2.0f, 3.0f};
    CHECK_EQ(nocturne_hero_melee_hit(self, target, &from, 20.0f), 20.0f);
    CHECK_EQ(target->hit_points, 30.0f);
    CHECK_EQ(stand.damage.size(), (size_t)1);
    if (!stand.damage.empty()) {
        const SDamageInfo &d = stand.damage[0].second;
        CHECK_EQ((int)d.damage_type, (int)DAMAGE_TYPE_MELEE);
        CHECK(d.attacker == &self->base);
        CHECK_EQ(d.impact_point.z, 3.0f);
    }
}

NOCTURNE_TEST_MAIN()
