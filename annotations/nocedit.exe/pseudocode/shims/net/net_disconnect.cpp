// =============================================================================
// NETPLAY — LEAVING A NETWORK GAME WITHOUT THE HANDSHAKE WAIT — implementation
// =============================================================================
//
// See net_disconnect.h.

#include "net/net_disconnect.h"
#include "shim_config.h"
#include "nocturne.h"

#if !NOCTURNE_AUTHENTIC_NETPLAY

// Copies of the notice sent to each peer, back to back. UDP gives no delivery
// guarantee and the receiver ignores repeats.
#define DISCONNECT_NOTICE_REPEATS 3

extern "C" void nocturne_net_disconnect_notify(CNetGame *net_game)
{
    if ((net_game == (CNetGame *)0x0) || (net_game->connection_type == CONNECTION_NONE)) {
        return;
    }
    for (int repeat = 0; repeat < DISCONNECT_NOTICE_REPEATS; repeat++) {
        for (int i = 0; i < net_game->player_count; i++) {
            if (i == net_game->local_player_index) {
                continue;
            }
            if ((net_game->connection_type == CONNECTION_CLIENT) &&
                (i != net_game->server_player_index)) {
                continue;
            }
            // 1 asks for an acknowledgement, as the shipped handshake does; the
            // reply arrives after this machine has gone and is dropped.
            core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_00543930(
                net_game, &net_game->players[i].addr, 1);
        }
    }
}

#else

extern "C" void nocturne_net_disconnect_notify(CNetGame *net_game) { (void)net_game; }

#endif
