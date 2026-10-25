// =============================================================================
// HELPER DEATH — a helper's death ends the mission
// =============================================================================

#include "game/helper_death.h"
#include "game_support.h"
#include "nocturne_test.h"

#include <memory>

using namespace game_support;

// The mission's end is noted for the game over, and a new mission forgets it.
NOCTURNE_TEST(an_ended_mission_is_a_game_over_until_reset) {
    nocturne_helper_death_reset();
    CHECK_EQ(nocturne_helper_death_game_over(), 0);
    nocturne_helper_death_note_end();
    CHECK_EQ(nocturne_helper_death_game_over(), 1);
    nocturne_helper_death_reset();
    CHECK_EQ(nocturne_helper_death_game_over(), 0);
}

// The hero is held while the script's focus is a helper who is dead: a
// character, not one of the players, past dying.
NOCTURNE_TEST(the_hero_is_held_over_a_dead_helper) {
    stand.reset();
    place_heroes(1);
    CHECK_EQ(nocturne_helper_death_hold_hero(), 0);
    std::unique_ptr<CScript> script(new CScript());
    g_CScriptPtr = script.get();
    CHECK_EQ(nocturne_helper_death_hold_hero(), 0);

    CDemonActor *helper = &character(0)->base;
    script->focus_actor = &character(1)->base;
    give_class(script->focus_actor, &item_type);
    CHECK_EQ(nocturne_helper_death_hold_hero(), 0);

    script->focus_actor = &heroes[0]->base.base;
    death[heroes[0]] = DEATH_STATE_DEAD;
    CHECK_EQ(nocturne_helper_death_hold_hero(), 0);

    script->focus_actor = helper;
    give_class(helper, &g_CScatClassInfo);
    death[helper] = DEATH_STATE_DYING;
    CHECK_EQ(nocturne_helper_death_hold_hero(), 0);
    death[helper] = DEATH_STATE_DEAD;
    CHECK_EQ(nocturne_helper_death_hold_hero(), 1);
}

NOCTURNE_TEST_MAIN()
