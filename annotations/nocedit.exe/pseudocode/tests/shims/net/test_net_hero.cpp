// =============================================================================
// NET HERO — the lobby's hero names, the guests' roster, and whose hero is whose
// =============================================================================

#include "net/net_hero.h"
#include "net_support.h"
#include "nocturne.h"
#include "nocturne_test.h"

#include <string>

namespace {

using net_support::heroes;
using net_support::net;
using net_support::stand;

} // namespace

NOCTURNE_TEST(each_hero_has_a_name_and_anything_else_is_a_question_mark) {
    CHECK_EQ(std::string(nocturne_net_hero_name(HERO_TYPE_GABRIELLA)), std::string("Gabriella"));
    CHECK_EQ(std::string(nocturne_net_hero_name(HERO_TYPE_MOLOCH)), std::string("Moloch"));
    CHECK_EQ(std::string(nocturne_net_hero_name(-1)), std::string("?"));
    CHECK_EQ(std::string(nocturne_net_hero_name(HERO_TYPE_MOLOCH + 1)), std::string("?"));
}

// Single player has one hero, the game's; in a session each slot is its
// player's pick, and a slot past the players has none.
NOCTURNE_TEST(a_heros_type_is_its_players_pick) {
    stand.reset();
    net_support::place_heroes(3);
    net_support::game.hero_number = HERO_TYPE_SCAT;
    CHECK_EQ(nocturne_net_hero_type_of(nullptr), -1);
    CHECK_EQ(nocturne_net_hero_type_of(heroes[1]), (int)HERO_TYPE_SCAT);

    net_support::start_session(CONNECTION_HOST, 2, 0);
    net.players[1].hero_number = HERO_TYPE_COLONEL;
    CHECK_EQ(nocturne_net_hero_type_of(heroes[1]), (int)HERO_TYPE_COLONEL);
    CHECK_EQ(nocturne_net_hero_type_of(heroes[2]), -1);
}

// The host's view is remembered once it is a hero, until forgotten.
NOCTURNE_TEST(the_hosts_view_is_kept_until_forgotten) {
    nocturne_net_hero_forget_host_view();
    CHECK_EQ(nocturne_net_hero_host_view(), -1);
    nocturne_net_hero_note_host_view(-1);
    nocturne_net_hero_note_host_view(HERO_TYPE_MOLOCH + 1);
    CHECK_EQ(nocturne_net_hero_host_view(), -1);
    nocturne_net_hero_note_host_view(HERO_TYPE_BARON);
    CHECK_EQ(nocturne_net_hero_host_view(), (int)HERO_TYPE_BARON);
    nocturne_net_hero_forget_host_view();
    CHECK_EQ(nocturne_net_hero_host_view(), -1);
}

// The guests' roster leaves out the Stranger and Baron, wraps at both ends,
// and starts from Gabriella when the hero given is none.
NOCTURNE_TEST(cycling_steps_over_the_heroes_a_guest_cannot_take) {
    CHECK_EQ(nocturne_net_hero_cycle(HERO_TYPE_SVETLANA, 1), (int)HERO_TYPE_SCAT);
    CHECK_EQ(nocturne_net_hero_cycle(HERO_TYPE_ICEPICK, -1), (int)HERO_TYPE_SCAT);
    CHECK_EQ(nocturne_net_hero_cycle(HERO_TYPE_MOLOCH, 1), (int)HERO_TYPE_GABRIELLA);
    CHECK_EQ(nocturne_net_hero_cycle(HERO_TYPE_GABRIELLA, -5), (int)HERO_TYPE_MOLOCH);
    CHECK_EQ(nocturne_net_hero_cycle(-3, 1), (int)HERO_TYPE_SVETLANA);
    CHECK_EQ(nocturne_net_hero_cycle(HERO_TYPE_MOLOCH + 1, 1), (int)HERO_TYPE_SVETLANA);
}

// A guest keeps a hero it may take, and otherwise gets the first one.
NOCTURNE_TEST(a_guest_defaults_to_a_hero_it_may_take) {
    CHECK_EQ(nocturne_net_hero_guest_default(HERO_TYPE_HAYSTACK), (int)HERO_TYPE_HAYSTACK);
    CHECK_EQ(nocturne_net_hero_guest_default(HERO_TYPE_STRANGER), (int)HERO_TYPE_GABRIELLA);
    CHECK_EQ(nocturne_net_hero_guest_default(-1), (int)HERO_TYPE_GABRIELLA);
    CHECK_EQ(nocturne_net_hero_guest_default(HERO_TYPE_MOLOCH + 1), (int)HERO_TYPE_GABRIELLA);
}

NOCTURNE_TEST_MAIN()
