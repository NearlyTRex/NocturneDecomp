// =============================================================================
// NETPLAY — KEEPING THE LINK ALIVE THROUGH A BLOCKING SCREEN — implementation
// =============================================================================
//
// See net_keepalive.h for what this is and which screens need it.

#include "net/net_keepalive.h"
#include "nocturne.h"

#include "core/clock.h"

#include <cstring>

namespace {

// How stale a ping may be before another is sent, in seconds. Comfortably
// inside NOCTURNE_NETPLAY_TIMEOUT_SECONDS so a blocked machine is never the
// reason a peer is dropped; CNetGame::processServerFrame uses 10.0 here, which
// is fine while frames are flowing and far too slack when they are not.
const float k_keepalive_ping_seconds = 1.0f;

// receivePackets dispatches through CNetGame::processPacket, which can put a
// message on screen - and every such screen waits for a key through one of the
// loops this is called from. Without a guard that is unbounded recursion
// through the socket. A nested call does nothing; the outer one is already
// draining.
int s_in_keepalive = 0;

struct ReentryGuard {
    ReentryGuard()  { s_in_keepalive = 1; }
    ~ReentryGuard() { s_in_keepalive = 0; }
};

// How long a held screen stays up in a network game, in seconds. Long enough to
// read a bulletin board. It cannot be dismissed early, because an early
// dismissal is per-machine and that is the behaviour being replaced.
const double k_hold_seconds = 10.0;

// Measured on the clock, not on frame deltas: the loop this bounds does not run
// the frame counter, and the menu countdown in attract.cpp had exactly that bug.
double s_hold_deadline = 0.0;

// The sim frame built before the held screen went up and not yet simulated, whose
// inputs nocturne_net_hold_end discards. -1 when none is pending.
int s_stale_sequence = -1;

void clear_hero_inputs() {
    for (int i = 0; i < g_HeroCount; i++) {
        if (g_HeroActors[i] != (CHero *)0x0) {
            std::memset(&g_HeroActors[i]->player_input, 0, sizeof(SPlayerInput));
        }
    }
}

} // namespace

extern "C" void nocturne_net_keepalive(void)
{
    CNetGame *net;
    int i;

    if (s_in_keepalive != 0) {
        return;
    }

    net = g_CNetGamePtr;
    if (nocturne_net_session_active() == 0) {
        return;
    }

    // updatePing quits the process on an out-of-range index, and it is the
    // local player's own slot that would be wrong outside a live session.
    if (net->local_player_index < 0 || net->player_count <= net->local_player_index) {
        return;
    }

    ReentryGuard guard;

    for (i = 0; i < net->player_count; i++) {
        if (i != net->local_player_index) {
            core_netgame_cpp_CNetGame_updatePing_FUN_00541c80(net, i, k_keepalive_ping_seconds);
        }
    }

    // Drains the socket, which is also what advances g_CurrentGameTime and the
    // senders' last_arrival_time - the two values the timeout is a difference
    // of. Without this the arithmetic keeps running against a clock nobody is
    // updating.
    core_netgame_cpp_CNetGame_receivePackets_FUN_005405b0(net);
}

extern "C" void nocturne_net_hold_begin(void)
{
    s_hold_deadline = nocturne_now_seconds() + k_hold_seconds;
}

extern "C" int nocturne_net_hold_active(void)
{
    return nocturne_now_seconds() < s_hold_deadline ? 1 : 0;
}

extern "C" void nocturne_net_hold_end(void)
{
    CNetGame *net = g_CNetGamePtr;
    int own_index;
    int i;

    if (nocturne_net_session_active() == 0) {
        return;
    }
    if (net->local_player_index < 0 || net->player_count <= net->local_player_index) {
        return;
    }
    own_index = nocturne_net_session_local_frame();

    if (nocturne_net_session_is_host() == 0) {
        s_stale_sequence = own_index;
        return;
    }

    // The host applied the frame before the screen went up; clear it where it
    // landed and in the history a guest may still be fed from.
    s_stale_sequence = own_index - 1;
    clear_hero_inputs();
    for (i = 0; i < g_SimFrameCount; i++) {
        if (g_SimFrameHistory[i].sequence_number == s_stale_sequence) {
            std::memset(g_SimFrameHistory[i].player_input, 0,
                        sizeof(g_SimFrameHistory[i].player_input));
        }
    }
}

extern "C" void nocturne_net_hold_apply_if_due(int sequence_number)
{
    if (sequence_number != s_stale_sequence) {
        return;
    }
    s_stale_sequence = -1;
    clear_hero_inputs();
}
