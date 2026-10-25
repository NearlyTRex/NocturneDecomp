// =============================================================================
// NET KEEPALIVE — the link kept up through a screen that blocks the frame loop
// =============================================================================
//
// A blocking screen pings each peer and drains the socket so neither side
// times the other out, and is not entered again from inside that drain. A
// held screen stays up for a fixed time, and the input frame built before it
// went up is dropped on every machine.

#include "net/net_keepalive.h"
#include "net_support.h"
#include "nocturne.h"
#include "nocturne_test.h"

namespace {

using net_support::heroes;
using net_support::net;
using net_support::stand;

} // namespace

// Before any held screen, none is up; once one starts, it is.
NOCTURNE_TEST(a_held_screen_is_up_once_begun) {
    CHECK_EQ(nocturne_net_hold_active(), 0);
    nocturne_net_hold_begin();
    CHECK_EQ(nocturne_net_hold_active(), 1);
}

// Every other player is pinged and the socket drained once, even when what
// it delivers comes back here.
NOCTURNE_TEST(a_blocking_screen_pings_each_peer_and_drains_once) {
    stand.reset();
    nocturne_net_keepalive();
    CHECK_EQ(stand.receives, 0);

    net_support::start_session(CONNECTION_HOST, 2, 0);
    stand.on_receive = [] { nocturne_net_keepalive(); };
    nocturne_net_keepalive();
    CHECK_EQ(stand.receives, 1);
    CHECK_EQ(stand.pings.size(), (size_t)1);
    CHECK_EQ(stand.pings[0], 1);

    // Outside a live session the local slot can be anything.
    net.local_player_index = -1;
    nocturne_net_keepalive();
    net.local_player_index = 2;
    nocturne_net_keepalive();
    CHECK_EQ(stand.receives, 1);
}

// The host has applied the frame before the screen; its inputs are cleared
// now, from the heroes and from the history a guest may still be sent.
NOCTURNE_TEST(the_host_drops_the_frame_it_already_applied) {
    stand.reset();
    net_support::place_heroes(2);
    g_HeroActors[1] = nullptr;
    net_support::start_session(CONNECTION_HOST, 2, 0);
    net.players[0].sim_frame_index = 10;
    heroes[0]->player_input.action_state.jump = 1;
    g_SimFrameCount = 2;
    g_SimFrameHistory[0].sequence_number = 9;
    g_SimFrameHistory[0].player_input[1].action_state.jump = 1;
    g_SimFrameHistory[1].sequence_number = 10;
    g_SimFrameHistory[1].player_input[1].action_state.jump = 1;

    nocturne_net_hold_end();
    CHECK_EQ(heroes[0]->player_input.action_state.jump, 0);
    CHECK_EQ(g_SimFrameHistory[0].player_input[1].action_state.jump, 0);
    CHECK_EQ(g_SimFrameHistory[1].player_input[1].action_state.jump, 1);

    // Frame 9 is spent: arriving there now clears the heroes again.
    heroes[0]->player_input.action_state.jump = 1;
    nocturne_net_hold_apply_if_due(9);
    CHECK_EQ(heroes[0]->player_input.action_state.jump, 0);
    heroes[0]->player_input.action_state.jump = 1;
    nocturne_net_hold_apply_if_due(9);
    CHECK_EQ(heroes[0]->player_input.action_state.jump, 1);
}

// A guest has not applied it yet: it drops the inputs when the frame arrives.
NOCTURNE_TEST(a_guest_drops_the_frame_when_it_arrives) {
    stand.reset();
    net_support::place_heroes(1);
    net_support::start_session(CONNECTION_CLIENT, 2, 1);
    net.players[1].sim_frame_index = 20;
    heroes[0]->player_input.action_state.draw = 1;
    nocturne_net_hold_end();
    CHECK_EQ(heroes[0]->player_input.action_state.draw, 1);
    nocturne_net_hold_apply_if_due(19);
    CHECK_EQ(heroes[0]->player_input.action_state.draw, 1);
    nocturne_net_hold_apply_if_due(20);
    CHECK_EQ(heroes[0]->player_input.action_state.draw, 0);
}

// Outside a session, or with no slot of its own, there is no frame to drop.
NOCTURNE_TEST(with_no_session_there_is_no_frame_to_drop) {
    stand.reset();
    net_support::place_heroes(1);
    heroes[0]->player_input.action_state.draw = 1;
    nocturne_net_hold_end();
    net_support::start_session(CONNECTION_HOST, 2, -1);
    nocturne_net_hold_end();
    net.local_player_index = 2;
    nocturne_net_hold_end();
    CHECK_EQ(heroes[0]->player_input.action_state.draw, 1);
}

NOCTURNE_TEST_MAIN()
