// =============================================================================
// NETPLAY — HOST-AUTHORITATIVE CHEATS — implementation
// =============================================================================
//
// See net_cheats.h for why a lockstep session cannot carry two cheat lists, and
// why the host's wins rather than the join being refused.

#include "net/net_cheats.h"
#include "game/cheats.h"
#include "shim_config.h"

#include "nocturne.h"

#include "core/debug_log.h"

#include <cstring>

#if !NOCTURNE_AUTHENTIC_NETPLAY

#pragma pack(push, 1)
typedef struct SNetPacket_Cheats {
    SNetPacketHeader header;                    // 0x0
    int   count;                                // 0x5  how many bytes are real
    unsigned char state[NOCTURNE_CHEAT_COUNT];  // 0x9  one per cheat
} SNetPacket_Cheats;
#pragma pack(pop)

// Same reasoning as the mission announcement: one datagram can be lost, three
// at each of two points cannot realistically all be.
#define CHEATS_SEND_REPEATS 3

static int cheats_is_network_game(void)
{
    return ((g_CNetGamePtr != (CNetGame *)0x0) &&
            (g_CNetGamePtr->connection_type != CONNECTION_NONE));
}

static int cheats_is_host(void)
{
    return (cheats_is_network_game() &&
            (g_CNetGamePtr->connection_type == CONNECTION_HOST));
}

extern "C" void nocturne_net_cheats_announce(void)
{
    SNetPacket_Cheats packet;
    CNetGame         *net_game = g_CNetGamePtr;
    int               repeat;
    int               i;

    if (cheats_is_host() == 0) {
        return;
    }

    std::memset(&packet, 0, sizeof(packet));
    packet.header.type = (ENetPacketType)NOCTURNE_NET_PACKET_CHEATS;
    packet.header.size = sizeof(SNetPacket_Cheats);
    packet.count       = nocturne_cheats_pack(packet.state, (int)sizeof(packet.state));

    for (repeat = 0; repeat < CHEATS_SEND_REPEATS; repeat++) {
        for (i = 0; i < net_game->player_count; i++) {
            if (i != net_game->local_player_index) {
                core_netgame_cpp_CNetGame_send_FUN_005411c0(net_game, i, &packet.header);
            }
        }
    }
    DLOG("netplay", "CHEATS announce count=%d", packet.count);
}

extern "C" void nocturne_net_cheats_reset(void)
{
    if (nocturne_cheats_override_active() != 0) {
        DLOG("netplay", "CHEATS override dropped");
    }
    nocturne_cheats_clear_override();
}

extern "C" int nocturne_net_cheats_on_packet(const void *packet, int packet_size)
{
    const SNetPacket_Cheats *in = (const SNetPacket_Cheats *)packet;

    if ((packet == (const void *)0) || (packet_size < (int)sizeof(SNetPacket_Cheats))) {
        return 0;
    }
    if (in->header.type != (ENetPacketType)NOCTURNE_NET_PACKET_CHEATS) {
        return 0;
    }
    // A host built against a different cheat table would send a different
    // count. Applying a short list would silently arm the wrong lines, so the
    // guest keeps its own and lets the desync detector speak instead.
    if (in->count != NOCTURNE_CHEAT_COUNT) {
        DLOG("netplay", "CHEATS ignored: host sent %d entries, this build has %d",
                in->count, NOCTURNE_CHEAT_COUNT);
        return 1;
    }

    nocturne_cheats_set_override(in->state, in->count);
    DLOG("netplay", "CHEATS adopted from host");
    return 1;
}

#else

extern "C" void nocturne_net_cheats_announce(void)
{
}

extern "C" void nocturne_net_cheats_reset(void)
{
}

extern "C" int nocturne_net_cheats_on_packet(const void *packet, int packet_size)
{
    (void)packet;
    (void)packet_size;
    return 0;
}

#endif
