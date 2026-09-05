// =============================================================================
// NETPLAY — KEEPING THE LINK ALIVE THROUGH A BLOCKING SCREEN — implementation
// =============================================================================
//
// See net_keepalive.h for what this is and which screens need it.

#include "net/net_keepalive.h"
#include "nocturne.h"

#include <chrono>

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

// How long a full-screen picture stays up in a network game, in seconds. Long
// enough to read a bulletin board, short enough that a player who has already
// read it is not left drumming their fingers - it cannot be dismissed early,
// because an early dismissal is per-machine and that is the behaviour being
// replaced.
const double k_hold_seconds = 10.0;

// Measured on the clock, not on frame deltas: the loop this bounds does not run
// the frame counter, and the menu countdown in attract.cpp had exactly that bug.
double s_hold_deadline = 0.0;

double now_seconds() {
    using namespace std::chrono;
    return duration<double>(steady_clock::now().time_since_epoch()).count();
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
    if (net == (CNetGame *)0x0 || net->connection_type == CONNECTION_NONE) {
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
    s_hold_deadline = now_seconds() + k_hold_seconds;
}

extern "C" int nocturne_net_hold_active(void)
{
    return now_seconds() < s_hold_deadline ? 1 : 0;
}
