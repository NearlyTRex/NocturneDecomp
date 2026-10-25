// =============================================================================
// HERO INTERACT — the action button, in the melee classes' order
// =============================================================================

#include "behaviour_support.h"
#include "game/hero_interact.h"
#include "nocturne_test.h"

#include <string>
#include <vector>

using namespace behaviour_support;

namespace {

std::vector<std::string> interact_with(void (*setup)()) {
    stand.reset();
    setup();
    nocturne_hero_interact(heroes[0]);
    return stand.interactions;
}

} // namespace

// An interaction, then a door, then a talk, then a lever: the first that
// answers ends it. A door handled already needs nothing more; one waiting on
// a key is opened through its key test.
NOCTURNE_TEST(the_first_thing_that_answers_ends_it) {
    using V = std::vector<std::string>;
    CHECK(interact_with([] { stand.interact = 1; }) == V({"interact"}));
    CHECK(interact_with([] { stand.nearby_door = 1; }) == V({"interact", "nearby door"}));
    CHECK(interact_with([] { stand.nearby_door = 2; }) ==
          V({"interact", "nearby door", "open door"}));
    CHECK(interact_with([] { stand.talk = 1; }) == V({"interact", "nearby door", "talk"}));
    CHECK(interact_with([] { stand.lever = 1; }) ==
          V({"interact", "nearby door", "talk", "lever", "pull"}));
    CHECK(interact_with([] {}) == V({"interact", "nearby door", "talk", "lever"}));

    stand.reset();
    stand.interact = 1;
    CHECK_EQ(nocturne_hero_interact(heroes[0]), 1);
    stand.interact = 0;
    CHECK_EQ(nocturne_hero_interact(heroes[0]), 0);
    CHECK_EQ(nocturne_hero_interact(nullptr), 0);
}

// Fire that interacts is spent on it. Fire that does not, and a hero the AI
// drives, keep theirs.
NOCTURNE_TEST(fire_that_interacts_is_spent) {
    stand.reset();
    CHero *hero = heroes[0];
    hero->player_input.action_state.fire = 1;
    nocturne_hero_fire_interact(hero);
    CHECK_EQ(hero->player_input.action_state.fire, 1);

    stand.interact = 1;
    hero->control_type = HERO_CONTROL_AI;
    nocturne_hero_fire_interact(hero);
    CHECK_EQ(hero->player_input.action_state.fire, 1);

    hero->control_type = HERO_CONTROL_PLAYER;
    nocturne_hero_fire_interact(hero);
    CHECK_EQ(hero->player_input.action_state.fire, 0);

    stand.interactions.clear();
    nocturne_hero_fire_interact(hero);
    CHECK(stand.interactions.empty());
}

NOCTURNE_TEST_MAIN()
