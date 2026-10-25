// =============================================================================
// GOGGLE LOOK — the goggle view looks up and down for every hero
// =============================================================================

#include "behaviour_support.h"
#include "game/goggle_look.h"
#include "game/hero_motion.h"
#include "nocturne_test.h"

using namespace behaviour_support;

namespace {

// The local hero looking up at speed one, goggles on.
CHero *looking() {
    stand.reset();
    place_heroes(2);
    nocturne_goggle_look_reset();
    game->goggles_active = 1;
    heroes[0]->player_input.look_up_down_speed = -0.1f;
    heroes[1]->player_input.look_up_down_speed = 0.1f;
    return heroes[0];
}

} // namespace

// Under the goggles the local hero's pitch follows his look, within the
// Stranger's limits; another hero's view is level until he is the local one,
// and a dead hero's pitch stays where it was.
NOCTURNE_TEST(the_goggle_view_follows_the_look) {
    CHero *hero = looking();
    nocturne_goggle_look_tick(0.5f);
    const float pitch = nocturne_goggle_look_pitch(hero);
    CHECK_NEAR(pitch, -0.31415927f, 1e-6f);
    CHECK_EQ(nocturne_goggle_look_pitch(heroes[1]), 0.0f);
    for (int i = 0; i < 10; i++)
        nocturne_goggle_look_tick(0.5f);
    CHECK_EQ(nocturne_goggle_look_pitch(hero), NOCTURNE_STRANGER_PITCH_UP);

    death[hero] = DEATH_STATE_DEAD;
    nocturne_goggle_look_tick(0.5f);
    CHECK_EQ(nocturne_goggle_look_pitch(hero), NOCTURNE_STRANGER_PITCH_UP);

    // A new local hero starts level.
    g_LocalHeroIndex = 1;
    nocturne_goggle_look_tick(0.5f);
    CHECK_NEAR(nocturne_goggle_look_pitch(heroes[1]), 0.31415927f, 1e-6f);
    CHECK_EQ(nocturne_goggle_look_pitch(hero), 0.0f);

    nocturne_goggle_look_reset();
    CHECK_EQ(nocturne_goggle_look_pitch(heroes[1]), 0.0f);
}

// With the goggles off, or no local hero, nothing turns.
NOCTURNE_TEST(without_goggles_or_a_hero_nothing_turns) {
    CHero *hero = looking();
    game->goggles_active = 0;
    nocturne_goggle_look_tick(0.5f);
    CHECK_EQ(nocturne_goggle_look_pitch(hero), 0.0f);
    game->goggles_active = 1;
    g_HeroActors[0] = nullptr;
    nocturne_goggle_look_tick(0.5f);
    CHECK_EQ(nocturne_goggle_look_pitch(nullptr), 0.0f);
}

// The Stranger pitches his own view, except in netplay with empty hands, where
// his aim leaves it level: then, and only then, this one turns it.
NOCTURNE_TEST(the_stranger_turns_his_own_view_but_with_empty_hands_in_netplay) {
    struct Case {
        const char *name;
        void (*apply)(CStranger *);
        bool turns;
    };
    const Case cases[] = {
        {"single player", [](CStranger *) {}, false},
        {"empty hands", [](CStranger *) { stand.net_active = 1; }, true},
        {"a weapon",
         [](CStranger *s) {
             stand.net_active = 1;
             s->weapon = (CWeapon *)&character(0)->base;
         },
         false},
        {"a crate",
         [](CStranger *s) {
             stand.net_active = 1;
             CDemonActor *crate = &character(0)->base;
             give_class(crate, &item_type);
             stand.melee_types[crate] = 4;
             s->base.base.carry_hands[1].carry_actor = crate;
         },
         false},
        {"a lamp",
         [](CStranger *s) {
             stand.net_active = 1;
             CDemonActor *lamp = &character(0)->base;
             give_class(lamp, &item_type);
             s->base.base.carry_hands[1].carry_actor = lamp;
         },
         true},
    };
    for (const Case &c : cases) {
        looking();
        CHero *hero = &stranger->base;
        g_HeroActors[0] = hero;
        hero->player_input.look_up_down_speed = -0.1f;
        c.apply(stranger);
        nocturne_goggle_look_tick(0.5f);
        CHECK_AT((nocturne_goggle_look_pitch(hero) != 0.0f) == c.turns, c.name);
    }
}

// The head the goggle camera rides is held level for every hero but the
// Stranger, keeping its scale and position; the Stranger's, or none, is left.
NOCTURNE_TEST(the_head_is_held_level) {
    stand.reset();
    place_heroes(1);
    CMatrix3x4f head = {};
    head.m[0].w = 0.0f;
    head.m[1].w = 2.0f;
    head.m[2].w = 0.0f;
    head.m[0].x = 1.0f;
    head.m[2].z = 7.0f;
    CMatrix3x4f level = {};
    CMatrix3x4f *used = nocturne_goggle_head_matrix(heroes[0], &head, &level);
    CHECK(used == &level);
    CHECK_EQ(level.m[0].w, 2.0f);
    CHECK_EQ(level.m[1].x, 2.0f);
    CHECK_EQ(level.m[2].y, 2.0f);
    CHECK_EQ(level.m[0].x, 0.0f);
    CHECK_EQ(level.m[2].z, 7.0f);

    give_class(&heroes[0]->base.base, &g_CStrangerClassInfo);
    CHECK(nocturne_goggle_head_matrix(heroes[0], &head, &level) == &head);
    CHECK(nocturne_goggle_head_matrix(nullptr, &head, &level) == &head);
}

NOCTURNE_TEST_MAIN()
