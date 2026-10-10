// =============================================================================
// NETPLAY — SESSION STATE — implementation
// =============================================================================

#include "net/net_session.h"
#include "nocturne.h"

extern "C" int nocturne_net_session_active(void)
{
    return (g_CNetGamePtr != (CNetGame *)0x0) &&
           (g_CNetGamePtr->connection_type != CONNECTION_NONE);
}

extern "C" int nocturne_net_session_playing(void)
{
    return (nocturne_net_session_active() != 0) &&
           (g_CNetGamePtr->network_mode == NET_MODE_PLAYING);
}

extern "C" int nocturne_net_session_is_host(void)
{
    return (g_CNetGamePtr != (CNetGame *)0x0) &&
           (g_CNetGamePtr->connection_type == CONNECTION_HOST);
}

extern "C" int nocturne_net_session_is_guest(void)
{
    return (g_CNetGamePtr != (CNetGame *)0x0) &&
           (g_CNetGamePtr->connection_type == CONNECTION_CLIENT) &&
           (g_CNetGamePtr->network_mode == NET_MODE_PLAYING);
}

extern "C" int nocturne_net_session_local_frame(void)
{
    return g_CNetGamePtr->players[g_CNetGamePtr->local_player_index].sim_frame_index;
}

extern "C" void nocturne_net_session_reset(void)
{
    nocturne_net_sync_reset();
    nocturne_rng_reset();
    nocturne_sim_trace_reset();
    nocturne_net_weapon_reset();
    nocturne_net_camera_reset();
    nocturne_net_skip_reset();
}

extern "C" void nocturne_net_session_broadcast(SNetPacketHeader *header)
{
    CNetGame *net_game = g_CNetGamePtr;
    int i;

    for (i = 0; i < net_game->player_count; i++) {
        if (i != net_game->local_player_index) {
            core_netgame_cpp_CNetGame_send_FUN_005411c0(net_game, i, header);
        }
    }
}
