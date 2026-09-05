// =============================================================================
// NETPLAY — MISSION TRANSITIONS — implementation
// =============================================================================
//
// See net_mission.h for the sequence and why the shipped transition had none
// of it.

#include "net/net_mission.h"
#include "shim_config.h"

#include "nocturne.h"

#include "core/debug_log.h"

#include <cstring>

#if !NOCTURNE_AUTHENTIC_NETPLAY

#pragma pack(push, 1)
typedef struct SNetPacket_MissionChange {
    SNetPacketHeader header;                       // 0x0
    uint  seed;                                    // 0x5
    int   serial;                                  // 0x9  which transition
    char  mission[NOCTURNE_NET_MISSION_NAME_MAX];  // 0xd
} SNetPacket_MissionChange;                        // 0x4d
#pragma pack(pop)

static SNetPacket_MissionChange s_announced;
static int s_have_announced = 0;

// Counts transitions so a re-sent announcement for the mission just loaded is
// not mistaken for the next one. Compared, never trusted as an index.
static int s_serial = 0;
static int s_acted_serial = 0;

// A single send can be lost; six across the two points where the host has
// something to say cannot realistically all be.
#define MISSION_SEND_REPEATS 3

// How long a guest that reached the transition without an announcement waits
// for one before giving up on the session. Generous: the host is loading a
// mission over the same seconds.
#define MISSION_WAIT_SECONDS 10

// -----------------------------------------------------------------------------

static int mission_is_network_game(void)
{
    return ((g_CNetGamePtr != (CNetGame *)0x0) &&
            (g_CNetGamePtr->connection_type != CONNECTION_NONE));
}

static int mission_is_host(void)
{
    return (mission_is_network_game() &&
            (g_CNetGamePtr->connection_type == CONNECTION_HOST));
}

static void mission_broadcast(void)
{
    CNetGame *net_game = g_CNetGamePtr;
    int repeat;
    int i;

    for (repeat = 0; repeat < MISSION_SEND_REPEATS; repeat++) {
        for (i = 0; i < net_game->player_count; i++) {
            if (i != net_game->local_player_index) {
                core_netgame_cpp_CNetGame_send_FUN_005411c0(net_game, i, &s_announced.header);
            }
        }
    }
}

// Both halves of the sync table. syncPlayers only ever raises these, and the
// client short-circuits above stage 3, so a second mission has to start from
// zero. Each machine clears its own copy.
static void mission_reset_sync_stages(void)
{
    CNetGame *net_game = g_CNetGamePtr;
    int i;

    g_RemoteSyncStage = 0;
    for (i = 0; i < net_game->player_count; i++) {
        net_game->players[i].local_sync_stage = 0;
    }
}

static void mission_apply_seed(uint seed)
{
    srand(seed);
    core_actor_cpp_setRandomSeed_FUN_0040cb90(seed);
    DLOG_EX("netplay", "MISSION SEED %s random_seed=%u (0x%06x masked)",
            mission_is_host() ? "(host)" : "(guest)", seed, seed & 0xffffff);
}

// The guest's fallback: an announcement has not arrived yet, so pump the socket
// until one does. Drawn like syncPlayers' own wait, because it is the same
// wait — the host is off loading and this machine has nothing else to do.
static int mission_wait_for_announcement(void)
{
    int deadline;
    int now;
    int pressed;

    deadline = wincore_winrun_cpp_getTime_FUN_005f2dc0() + (MISSION_WAIT_SECONDS * 1000);
    while (s_have_announced == 0) {
        engine_special_cpp_clearScreen_FUN_005b3e70();
        engine_2d_c_drawText_FUN_00401fd0
            ((char *)"Waiting for the host to choose the next mission...", 0, 0xb);
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        core_netgame_cpp_CNetGame_receivePackets_FUN_005405b0(g_CNetGamePtr);

        pressed = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr, DIK_ESCAPE);
        if (pressed != 0) {
            engine_2d_c_clearInputAndWait_FUN_00403260();
            return 0;
        }
        now = wincore_winrun_cpp_getTime_FUN_005f2dc0();
        if (deadline < now) {
            DLOG_EX("netplay", "MISSION no announcement from the host after %d seconds",
                    MISSION_WAIT_SECONDS);
            return 0;
        }
    }
    return 1;
}

// -----------------------------------------------------------------------------

extern "C" int nocturne_net_mission_pending(void)
{
    if (mission_is_network_game() == 0) {
        return 0;
    }
    return ((s_have_announced != 0) && (s_acted_serial < s_announced.serial));
}

extern "C" void nocturne_net_mission_resolve(char *name, int name_size)
{
    if ((name == (char *)0x0) || (name_size < 1)) {
        return;
    }
    if (mission_is_network_game() == 0) {
        return;
    }

    if (mission_is_host()) {
        s_serial = s_serial + 1;

        std::memset(&s_announced, 0, sizeof(s_announced));
        s_announced.header.type = (ENetPacketType)NOCTURNE_NET_PACKET_MISSION;
        s_announced.header.size = sizeof(SNetPacket_MissionChange);
        s_announced.seed        = nocturne_rng_seed();
        s_announced.serial      = s_serial;
        strncpy(s_announced.mission, name, sizeof(s_announced.mission) - 1);
        s_have_announced = 1;

        mission_broadcast();
        // Alongside the mission and the seed, since the cheat list is the third
        // thing both machines have to agree on before they simulate — and this
        // re-covers a guest that missed the lobby's copy. See net_cheats.h.
        nocturne_net_cheats_announce();
        DLOG_EX("netplay", "MISSION announce #%d '%s' seed=%u",
                s_announced.serial, s_announced.mission, s_announced.seed);
        return;
    }

    // A guest takes the host's word for it. Its own script may have set the
    // same name a moment ago, or - if the trigger was one only the host's hero
    // reached - nothing at all.
    if (s_have_announced != 0) {
        strncpy(name, s_announced.mission, (size_t)name_size - 1);
        name[name_size - 1] = '\0';
        DLOG_EX("netplay", "MISSION follow #%d '%s'", s_announced.serial, name);
    }
}

extern "C" int nocturne_net_mission_begin(void)
{
    if (mission_is_network_game() == 0) {
        return 1;
    }

    if (mission_is_host()) {
        // Once more before the barrier: the guest spends the barrier pumping
        // the socket, so this is the copy it is most likely to catch.
        mission_broadcast();
        nocturne_net_cheats_announce();
    } else if (s_have_announced == 0) {
        if (mission_wait_for_announcement() == 0) {
            return 0;
        }
    }

    mission_reset_sync_stages();
    if (core_netgame_cpp_CNetGame_syncPlayers_FUN_005401e0(g_CNetGamePtr, 1) == 0) {
        return 0;
    }

    // Same two generators the lobby seeds, in the same order, for the same
    // reason: the mission load and everything startMission does run outside
    // CGame::process, where the RNG primitives fall back to libc rand (see
    // rng.h), and that stream has drifted per machine since the last seeding.
    mission_apply_seed(s_announced.seed);

    s_acted_serial = s_announced.serial;
    return 1;
}

extern "C" int nocturne_net_mission_finish(void)
{
    if (mission_is_network_game() == 0) {
        return 1;
    }
    return core_netgame_cpp_CNetGame_syncPlayers_FUN_005401e0(g_CNetGamePtr, 2);
}

extern "C" int nocturne_net_mission_skip_prompt(void)
{
    return mission_is_network_game();
}

extern "C" int nocturne_net_mission_on_packet(const void *packet, int packet_size)
{
    const SNetPacket_MissionChange *incoming = (const SNetPacket_MissionChange *)packet;

    if ((packet == (const void *)0x0) ||
        (packet_size < (int)sizeof(SNetPacket_MissionChange))) {
        return 0;
    }
    if (incoming->header.type != (ENetPacketType)NOCTURNE_NET_PACKET_MISSION) {
        return 0;
    }
    // Sent several times over, and again at the barrier, so all but the first
    // are duplicates of a transition already recorded.
    if ((s_have_announced != 0) && (incoming->serial <= s_announced.serial)) {
        return 1;
    }

    s_announced = *incoming;
    s_announced.mission[sizeof(s_announced.mission) - 1] = '\0';
    s_have_announced = 1;
    DLOG_EX("netplay", "MISSION announced #%d '%s' seed=%u",
            s_announced.serial, s_announced.mission, s_announced.seed);
    return 1;
}

#else /* NOCTURNE_AUTHENTIC_NETPLAY */

extern "C" int  nocturne_net_mission_pending(void) { return 0; }
extern "C" void nocturne_net_mission_resolve(char *, int) {}
extern "C" int  nocturne_net_mission_begin(void) { return 1; }
extern "C" int  nocturne_net_mission_finish(void) { return 1; }
extern "C" int  nocturne_net_mission_skip_prompt(void) { return 0; }
extern "C" int  nocturne_net_mission_on_packet(const void *, int) { return 0; }

#endif /* NOCTURNE_AUTHENTIC_NETPLAY */
