// =============================================================================
// HERO MOLOCH — Moloch played: his blows, his health, his damage
// =============================================================================

#include "behaviour_support.h"
#include "game/hero_moloch.h"
#include "nocturne_test.h"

#include <cstring>
#include <memory>

using namespace behaviour_support;

namespace {

const int kStand = 0, kWalk = 1, kSmash = 10, kPunch = 11;

std::unique_ptr<CMoloch> s_moloch(new CMoloch());
SMotion s_standing, s_walking, s_punching;

// Moloch as the party's first player, standing, at full health, in a fresh
// mission.
CMoloch *moloch() {
    stand.reset();
    nocturne_moloch_reset();
    std::memset(s_moloch.get(), 0, sizeof(*s_moloch));
    CMoloch *m = s_moloch.get();
    CHero *hero = &m->base;
    give_class(&hero->base.base, &g_CMolochClassInfo);
    hero->base.hit_points = 100.0f;
    hero->base.max_hit_points = 100.0f;
    g_HeroActors[0] = hero;
    g_HeroCount = 1;
    s_standing = SMotion();
    s_standing.state_index = kStand;
    s_walking = SMotion();
    s_walking.state_index = kWalk;
    s_punching = SMotion();
    s_punching.state_index = kPunch;
    stand.motion[&hero->base.model.base] = &s_standing;
    return m;
}

CMotionController *controller(CMoloch *m) {
    return &m->base.base.model.base;
}

} // namespace

// Fire throws a punch, then a smash, then a punch, each player in turn, and a
// new mission starts him over at the punch; an NPC Moloch always punches.
NOCTURNE_TEST(fire_throws_punch_and_smash_in_turn) {
    CMoloch *m = moloch();
    m->base.player_input.action_state.fire = 1;
    CHECK_EQ(nocturne_moloch_fire(m, kWalk), (unsigned)kPunch);
    CHECK_EQ(nocturne_moloch_fire(m, kWalk), (unsigned)kSmash);
    CHECK_EQ(nocturne_moloch_fire(m, kWalk), (unsigned)kPunch);
    nocturne_moloch_reset();
    CHECK_EQ(nocturne_moloch_fire(m, kWalk), (unsigned)kPunch);

    g_HeroCount = 0;
    CHECK_EQ(nocturne_moloch_fire(m, kWalk), (unsigned)kPunch);
}

// A blow asked for is kept asked for until it arrives; walking, he settles to
// stand first.
NOCTURNE_TEST(an_attack_on_its_way_is_kept) {
    CMoloch *m = moloch();
    m->base.player_input.action_state.fire = 1;
    controller(m)->state_index = kSmash;
    CHECK_EQ(nocturne_moloch_fire(m, kWalk), (unsigned)kSmash);
    controller(m)->state_index = kWalk;
    stand.motion[controller(m)] = &s_walking;
    CHECK_EQ(nocturne_moloch_fire(m, kWalk), (unsigned)kStand);
}

// No fire, an AI Moloch, one held, one in human form or mid-morph: what he was
// going to do anyway.
NOCTURNE_TEST(without_a_free_players_fire_he_does_what_he_was_doing) {
    struct Case {
        const char *name;
        void (*apply)(CMoloch *);
    };
    const Case cases[] = {
        {"no fire", [](CMoloch *m) { m->base.player_input.action_state.fire = 0; }},
        {"AI", [](CMoloch *m) { m->base.control_type = HERO_CONTROL_AI; }},
        {"held", [](CMoloch *m) { m->base.base.grabbed_by = &character(0)->base; }},
        {"human", [](CMoloch *m) { m->in_human_form = 1; }},
        {"morphing", [](CMoloch *m) { m->morphing = 1; }},
    };
    for (const Case &c : cases) {
        CMoloch *m = moloch();
        m->base.player_input.action_state.fire = 1;
        c.apply(m);
        CHECK_AT(nocturne_moloch_fire(m, kWalk) == (unsigned)kWalk, c.name);
    }
    CHECK_EQ(nocturne_moloch_fire(nullptr, kWalk), (unsigned)kWalk);
}

// The blow lands as its frame goes by, on every character in the set but him,
// once each from whichever hand reaches.
NOCTURNE_TEST(a_blow_lands_from_whichever_hand_reaches) {
    CMoloch *m = moloch();
    stand.motion[controller(m)] = &s_punching;
    stand.bones["Bip01 R Hand"] = 1;
    stand.bones["Bip01 L Hand"] = 2;
    CCharacter *right = character(0);
    CCharacter *left = character(1);
    give_class(&right->base, &g_CEnemyClassInfo);
    give_class(&left->base, &g_CEnemyClassInfo);
    stand.cylinder_hits[right] = 1;
    put_in_set(right);
    put_in_set(left);
    put_in_set(nullptr);
    put_in_set(&m->base.base);

    controller(m)->current_frame_number = 15.0f;
    nocturne_moloch_attack_hit(m, kPunch, 14.0f);
    CHECK(stand.cylinder_points.empty());
    controller(m)->current_frame_number = 17.0f;
    nocturne_moloch_attack_hit(m, kPunch, 15.0f);
    CHECK_EQ(stand.cylinder_points.size(), (size_t)3); // right once, left twice

    // A smash lands on its own frame; with no hands to strike from, nothing.
    stand.cylinder_points.clear();
    s_punching.state_index = kSmash;
    nocturne_moloch_attack_hit(m, kSmash, 14.0f);
    CHECK_EQ(stand.cylinder_points.size(), (size_t)3);
    stand.bones.clear();
    stand.cylinder_points.clear();
    nocturne_moloch_attack_hit(m, kSmash, 14.0f);
    CHECK(stand.cylinder_points.empty());

    // Not in another motion, in human form, or with no Moloch.
    s_punching.state_index = kWalk;
    nocturne_moloch_attack_hit(m, kWalk, 14.0f);
    m->in_human_form = 1;
    nocturne_moloch_attack_hit(m, kPunch, 14.0f);
    nocturne_moloch_attack_hit(nullptr, kPunch, 14.0f);
    CHECK(stand.cylinder_points.empty());
}

// He is attacking while a blow is asked for or playing.
NOCTURNE_TEST(he_is_attacking_while_a_blow_is_asked_or_plays) {
    CMoloch *m = moloch();
    CHECK_EQ(nocturne_moloch_is_attacking(m), 0);
    controller(m)->state_index = kPunch;
    CHECK_EQ(nocturne_moloch_is_attacking(m), 1);
    controller(m)->state_index = kStand;
    stand.motion[controller(m)] = &s_punching;
    CHECK_EQ(nocturne_moloch_is_attacking(m), 1);
    CHECK_EQ(nocturne_moloch_is_attacking(nullptr), 0);
}

// A player Moloch regenerates up to full; an NPC, or one at full, does not.
NOCTURNE_TEST(a_player_moloch_regenerates_to_full) {
    CMoloch *m = moloch();
    m->base.base.hit_points = 50.0f;
    nocturne_moloch_regenerate(m, 2.0f);
    CHECK_EQ(m->base.base.hit_points, 50.0f + 2.0f * MOLOCH_REGEN_PER_SECOND);
    nocturne_moloch_regenerate(m, 100.0f);
    CHECK_EQ(m->base.base.hit_points, 100.0f);
    nocturne_moloch_regenerate(m, 1.0f);
    CHECK_EQ(m->base.base.hit_points, 100.0f);
    g_HeroCount = 0;
    m->base.base.hit_points = 50.0f;
    nocturne_moloch_regenerate(m, 1.0f);
    CHECK_EQ(m->base.base.hit_points, 50.0f);
}

// His damage, once his vtable is his own: a player Moloch never goes below his
// floor, is briefly invincible after a hit, and is never blown apart; the rest
// of the engine's damage still runs. An NPC Moloch takes it as shipped.
NOCTURNE_TEST(a_player_moloch_cannot_be_killed) {
    CMoloch *m = moloch();
    g_CMolochVTable._uc.getDeathState = vtable._uc.getDeathState;
    nocturne_moloch_install_vtable(m);
    nocturne_moloch_install_vtable(m);
    CCharacter *character = &m->base.base;
    CCharacter_processDamage *process = character->base.vtable._uc->_uc.processDamage;
    CHECK(process != vtable._uc.processDamage);

    SDamageInfo damage = {};
    damage.damage_type = DAMAGE_TYPE_EXPLODE;
    damage.damage_amount = 500.0f;
    process(character, &damage);
    CHECK_EQ(character->hit_points, MOLOCH_MIN_HIT_POINTS);
    CHECK_EQ((int)damage.damage_type, (int)DAMAGE_TYPE_GENERIC);
    CHECK_EQ(m->base.invincibility_timer, 0.5f);
    CHECK_EQ(stand.base_damage.size(), (size_t)1);

    // A lighter blow is taken off as it is.
    character->hit_points = 80.0f;
    m->base.invincibility_timer = 0.0f;
    damage.damage_amount = 30.0f;
    process(character, &damage);
    CHECK_EQ(character->hit_points, 50.0f);

    // Invincible, he takes nothing; so with god mode or damage off.
    character->hit_points = 80.0f;
    for (int i = 0; i < 3; i++) {
        m->base.invincibility_timer = (i == 0) ? 0.5f : 0.0f;
        game->god_mode_enabled = (i == 1);
        game->allow_damage_flag = (i != 2);
        damage.damage_amount = 10.0f;
        damage.damage_type = (EDamageType)(DAMAGE_TYPE_FALL_APART + i);
        process(character, &damage);
        CHECK_AT(character->hit_points == 80.0f, "protected");
    }
    damage.damage_type = DAMAGE_TYPE_CHOPPED;
    process(character, &damage);
    CHECK_EQ((int)damage.damage_type, (int)DAMAGE_TYPE_GENERIC);

    // A friend's shot is turned away before any of it.
    stand.friendly_block = 1;
    const size_t runs = stand.base_damage.size();
    process(character, &damage);
    CHECK_EQ(stand.base_damage.size(), runs);
    stand.friendly_block = 0;

    // An NPC Moloch goes straight to the engine's.
    g_HeroCount = 0;
    damage.damage_amount = 500.0f;
    process(character, &damage);
    CHECK_EQ(stand.base_damage.size(), runs + 1);
    CHECK_EQ(character->hit_points, 80.0f);
}

NOCTURNE_TEST_MAIN()
