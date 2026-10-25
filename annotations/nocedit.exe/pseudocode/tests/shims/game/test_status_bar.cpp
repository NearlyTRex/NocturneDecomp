// =============================================================================
// STATUS BARS — a hero's bar sized by his maximum health
// =============================================================================

#include "game/status_bar.h"
#include "game_support.h"
#include "nocturne_test.h"

#include <cstdio>

using namespace game_support;

namespace {

CCharacter *named(CCharacter *c, const char *name, float max_health) {
    std::snprintf(c->descriptive_name, sizeof(c->descriptive_name), "%s", name);
    c->max_hit_points = max_health;
    return c;
}

} // namespace

// A hero's bar is as long as his maximum health against the hundred the
// shipped bar stands for, found under any case of his name.
NOCTURNE_TEST(a_heros_bar_is_as_long_as_his_health) {
    stand.reset();
    place_heroes(1);
    nocturne_status_bar_note(named(&heroes[0]->base, "Svetlana", 150.0f));
    CHECK_EQ(nocturne_status_bar_right((char *)"SVETLANA", 10, 110), 160);
    nocturne_status_bar_note(named(&heroes[0]->base, "Svetlana", 50.0f));
    CHECK_EQ(nocturne_status_bar_right((char *)"Svetlana", 10, 110), 60);
    CHECK_EQ(nocturne_status_bar_right((char *)"Stranger", 10, 110), 110);
}

// A long bar stops short of the one at the right margin, and a short one is
// never less than a pixel.
NOCTURNE_TEST(a_bar_keeps_within_the_screen_and_is_never_nothing) {
    stand.reset();
    place_heroes(1);
    nocturne_status_bar_note(named(&heroes[0]->base, "Moloch", 2000.0f));
    CHECK_EQ(nocturne_status_bar_right((char *)"Moloch", 10, 110), 639 - 10);
    nocturne_status_bar_note(named(&heroes[0]->base, "Moloch", 0.1f));
    CHECK_EQ(nocturne_status_bar_right((char *)"Moloch", 10, 110), 11);
}

// No name, no health, or not a hero: nothing noted.
NOCTURNE_TEST(only_a_named_hero_with_health_is_noted) {
    stand.reset();
    place_heroes(1);
    give_class(&character(0)->base, &g_CCharacterClassInfo);
    nocturne_status_bar_note(named(&heroes[0]->base, "", 150.0f));
    nocturne_status_bar_note(named(&heroes[0]->base, "Baron", 0.0f));
    nocturne_status_bar_note(named(character(0), "Mobster", 150.0f));
    CHECK_EQ(nocturne_status_bar_right((char *)"Baron", 10, 110), 110);
    CHECK_EQ(nocturne_status_bar_right((char *)"Mobster", 10, 110), 110);
}

// Past eight names the oldest is the one written over.
NOCTURNE_TEST(a_full_table_writes_over_the_oldest) {
    stand.reset();
    place_heroes(1);
    char name[16];
    for (int i = 0; i < 9; i++) {
        std::snprintf(name, sizeof(name), "hero%d", i);
        nocturne_status_bar_note(named(&heroes[0]->base, name, 200.0f));
    }
    CHECK_EQ(nocturne_status_bar_right((char *)"hero8", 10, 110), 210);
    CHECK_EQ(nocturne_status_bar_right((char *)"hero1", 10, 110), 210);
    CHECK_EQ(nocturne_status_bar_right((char *)"hero0", 10, 110), 110);
}

NOCTURNE_TEST_MAIN()
