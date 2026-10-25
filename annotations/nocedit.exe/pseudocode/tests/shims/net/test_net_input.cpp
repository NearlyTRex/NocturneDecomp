// =============================================================================
// NET INPUT — one-shot presses carried as counts, so a held one fires once
// =============================================================================
//
// A guest counts its own use, light, draw and jump presses and sends the
// counts; each machine turns a count that moved on into one press for that
// player, a frame at a time.

#include "net/net_input.h"
#include "net_support.h"
#include "nocturne.h"
#include "nocturne_test.h"

#include <cstring>

namespace {

using net_support::stand;

SPlayerInput input_with(int use_item, int light, int draw, int jump) {
    SPlayerInput input;
    std::memset(&input, 0, sizeof(input));
    input.action_state.use_item = use_item;
    input.action_state.light = light;
    input.action_state.draw = draw;
    input.action_state.jump = jump;
    return input;
}

} // namespace

// Counted only for a guest in play.
NOCTURNE_TEST(a_guest_counts_its_presses) {
    stand.reset();
    nocturne_net_input_reset();
    SPlayerInput pressed = input_with(1, 0, 1, 0);
    nocturne_net_input_note_local(&pressed);
    nocturne_net_input_note_local(nullptr);
    net_support::start_session(CONNECTION_CLIENT, 2, 1);
    nocturne_net_input_note_local(&pressed);
    nocturne_net_input_note_local(&pressed);

    SPlayerInput outgoing = input_with(0, 0, 0, 0);
    nocturne_net_input_encode(&outgoing);
    CHECK_EQ(outgoing.action_state.use_item, 2);
    CHECK_EQ(outgoing.action_state.light, 0);
    CHECK_EQ(outgoing.action_state.draw, 2);
    CHECK_EQ(outgoing.action_state.jump, 0);
}

// A count ahead of what was delivered is one press now and the rest on later
// frames; one level with it is no press.
NOCTURNE_TEST(a_count_that_moved_on_is_one_press_a_frame) {
    nocturne_net_input_reset();
    SPlayerInput in = input_with(2, 0, 0, 1);
    nocturne_net_input_decode(1, &in);
    CHECK_EQ(in.action_state.use_item, 1);
    CHECK_EQ(in.action_state.jump, 1);
    CHECK_EQ(in.action_state.light, 0);
    in = input_with(2, 0, 0, 1);
    nocturne_net_input_decode(1, &in);
    CHECK_EQ(in.action_state.use_item, 1);
    CHECK_EQ(in.action_state.jump, 0);
    in = input_with(2, 0, 0, 1);
    nocturne_net_input_decode(1, &in);
    CHECK_EQ(in.action_state.use_item, 0);
}

// A count that went backwards, or jumped further than anyone presses, is a
// different player's after the table was reordered: adopted, not pressed.
NOCTURNE_TEST(a_count_from_someone_else_is_adopted_without_a_press) {
    nocturne_net_input_reset();
    SPlayerInput in = input_with(40, 0, 0, 0);
    nocturne_net_input_decode(0, &in);
    CHECK_EQ(in.action_state.use_item, 0);
    in = input_with(39, 0, 0, 0);
    nocturne_net_input_decode(0, &in);
    CHECK_EQ(in.action_state.use_item, 0);
    in = input_with(40, 0, 0, 0);
    nocturne_net_input_decode(0, &in);
    CHECK_EQ(in.action_state.use_item, 1);
}

// A player outside the slots is left as it came.
NOCTURNE_TEST(a_player_outside_the_slots_is_left_alone) {
    SPlayerInput in = input_with(5, 5, 5, 5);
    nocturne_net_input_decode(-1, &in);
    nocturne_net_input_decode(4, &in);
    CHECK_EQ(in.action_state.use_item, 5);
}

NOCTURNE_TEST_MAIN()
