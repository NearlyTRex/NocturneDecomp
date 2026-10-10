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
    int   end_frame;                               // 0xd  host's sim_frame_index on leaving
    char  mission[NOCTURNE_NET_MISSION_NAME_MAX];  // 0x11
} SNetPacket_MissionChange;                        // 0x51
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

// getTime's unit: g_CurrentGameTime advances by getTime() / 0x12 and runs at
// 65536 per second.
#define MISSION_GETTIME_PER_SECOND (0x12 * 65536)

// -----------------------------------------------------------------------------


// The frames a guest still needs to reach end_frame. processServerFrame
// re-sends unacknowledged frames on every pass, but the host stops calling it
// once its script ends the mission, so a guest that lost one of the last few
// would never catch up.
static void mission_send_final_frames(int player)
{
    CNetGame *net_game = g_CNetGamePtr;
    SNetPacket_SimFrame packet;
    int i;

    for (i = 0; i < g_SimFrameCount; i++) {
        if ((g_SimFrameHistory[i].sequence_number < net_game->players[player].sim_frame_index) ||
            (s_announced.end_frame <= g_SimFrameHistory[i].sequence_number)) {
            continue;
        }
        nocturne_net_packet_init(&packet, (int)sizeof(packet), PACKET_SIM_FRAME);
        packet.frame       = g_SimFrameHistory[i];
        core_netgame_cpp_CNetGame_send_FUN_005411c0(net_game, player, &packet.header);
    }
}

// Removes every history entry from `first` on.
static void mission_drop_frames_from(int first)
{
    int i = 0;

    while (i < g_SimFrameCount) {
        if (g_SimFrameHistory[i].sequence_number < first) {
            i = i + 1;
            continue;
        }
        g_SimFrameCount = g_SimFrameCount - 1;
        memmove(&g_SimFrameHistory[i], &g_SimFrameHistory[i + 1],
                (g_SimFrameCount - i) * sizeof(*g_SimFrameHistory));
    }
}

// CGame::processFrame runs CGame::process for frame N and then, on the host,
// processServerFrame, which applies N+1 for the next pass. runGameSession
// checks mission_ended between passes, so the host leaves with N+1 applied and
// never simulated; a guest applies and simulates in the same pass and leaves
// with nothing extra. Unwinding that frame starts both machines' next mission
// on the same sequence number.
static void mission_unwind_unsimulated_frame(void)
{
    CNetGame *net_game = g_CNetGamePtr;
    SNetPlayer *own = &net_game->players[net_game->local_player_index];

    own->sim_frame_index = own->sim_frame_index - 1;
    mission_drop_frames_from(own->sim_frame_index);
}

static void mission_broadcast(void)
{
    CNetGame *net_game = g_CNetGamePtr;
    int repeat;
    int i;

    for (repeat = 0; repeat < MISSION_SEND_REPEATS; repeat++) {
        for (i = 0; i < net_game->player_count; i++) {
            if (i != net_game->local_player_index) {
                mission_send_final_frames(i);
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
    DLOG("netplay", "MISSION SEED %s random_seed=%u (0x%06x masked)",
            nocturne_net_session_is_host() ? "(host)" : "(guest)", seed, seed & 0xffffff);
}

// The guest's fallback: an announcement has not arrived yet, so pump the socket
// until one does. Drawn like syncPlayers' own wait, because it is the same
// wait — the host is off loading and this machine has nothing else to do.
static int mission_wait_for_announcement(void)
{
    int start;
    uint elapsed;
    int pressed;

    start = wincore_winrun_cpp_getTime_FUN_005f2dc0();
    while (s_have_announced == 0) {
        engine_special_cpp_clearScreen_FUN_005b3e70();
        engine_2d_c_drawText_FUN_00401fd0
            ((char *)"Waiting for the host to choose the next mission...", 0, 0xb);
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        core_netgame_cpp_CNetGame_receivePackets_FUN_005405b0(g_CNetGamePtr);
        if (s_have_announced != 0) {
            break;
        }

        pressed = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr, DIK_ESCAPE);
        if (pressed != 0) {
            engine_2d_c_clearInputAndWait_FUN_00403260();
            return 0;
        }
        elapsed = (uint)wincore_winrun_cpp_getTime_FUN_005f2dc0() - (uint)start;
        if ((uint)(MISSION_WAIT_SECONDS * MISSION_GETTIME_PER_SECOND) < elapsed) {
            DLOG("netplay", "MISSION no announcement from the host after %d seconds",
                    MISSION_WAIT_SECONDS);
            return 0;
        }
    }
    return 1;
}

// -----------------------------------------------------------------------------

// A guest runs behind the host, so the announcement can arrive before the guest
// has simulated the frame that ended the host's mission. Leaving then would
// skip it and start the next mission behind the host.
extern "C" int nocturne_net_mission_pending(void)
{
    if (nocturne_net_session_active() == 0) {
        return 0;
    }
    if ((s_have_announced == 0) || (s_announced.serial <= s_acted_serial)) {
        return 0;
    }
    return (s_announced.end_frame <= nocturne_net_session_local_frame());
}

extern "C" void nocturne_net_mission_resolve(char *name, int name_size)
{
    if ((name == (char *)0x0) || (name_size < 1)) {
        return;
    }
    if (nocturne_net_session_active() == 0) {
        return;
    }

    if (nocturne_net_session_is_host()) {
        mission_unwind_unsimulated_frame();
        s_serial = s_serial + 1;

        nocturne_net_packet_init(&s_announced, (int)sizeof(s_announced),
                                 NOCTURNE_NET_PACKET_MISSION);
        s_announced.seed        = nocturne_rng_seed();
        s_announced.serial      = s_serial;
        s_announced.end_frame   = nocturne_net_session_local_frame();
        strncpy(s_announced.mission, name, sizeof(s_announced.mission) - 1);
        s_have_announced = 1;

        mission_broadcast();
        // Alongside the mission and the seed, since the cheat list is the third
        // thing both machines have to agree on before they simulate — and this
        // re-covers a guest that missed the lobby's copy. See net_cheats.h.
        nocturne_net_cheats_announce();
        DLOG("netplay", "MISSION announce #%d '%s' seed=%u end_frame=%d",
                s_announced.serial, s_announced.mission, s_announced.seed,
                s_announced.end_frame);
        return;
    }

    // A guest takes the host's word for it. Its own script may have set the
    // same name a moment ago, or - if the trigger was one only the host's hero
    // reached - nothing at all.
    if (s_have_announced != 0) {
        strncpy(name, s_announced.mission, (size_t)name_size - 1);
        name[name_size - 1] = '\0';
        DLOG("netplay", "MISSION follow #%d '%s'", s_announced.serial, name);
    }
}

extern "C" int nocturne_net_mission_begin(void)
{
    if (nocturne_net_session_active() == 0) {
        return 1;
    }

    if (nocturne_net_session_is_host()) {
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
    DLOG("netplay", "MISSION begin %s sim_idx=%d end_frame=%d",
            nocturne_net_session_is_host() ? "(host)" : "(guest)",
            nocturne_net_session_local_frame(), s_announced.end_frame);

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
    if (nocturne_net_session_active() == 0) {
        return 1;
    }
    if (core_netgame_cpp_CNetGame_syncPlayers_FUN_005401e0(g_CNetGamePtr, 2) == 0) {
        return 0;
    }
    // The host sent its unsimulated frame before unwinding it, and would send
    // a fresh frame under the same sequence number once play starts. Drop the
    // stale copy so a guest cannot apply it first.
    if (nocturne_net_session_is_host() == 0) {
        mission_drop_frames_from(nocturne_net_session_local_frame());
    }
    return 1;
}

extern "C" int nocturne_net_mission_skip_prompt(void)
{
    return nocturne_net_session_active();
}

extern "C" int nocturne_net_mission_on_packet(const void *packet, int packet_size)
{
    const SNetPacket_MissionChange *incoming = (const SNetPacket_MissionChange *)packet;

    if (nocturne_net_packet_is(packet, packet_size, NOCTURNE_NET_PACKET_MISSION,
                               (int)sizeof(SNetPacket_MissionChange)) == 0) {
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
    // The guest keeps simulating up to end_frame while the host already waits
    // at syncPlayers(1), and answers each stage request with its own
    // local_sync_stage - still 4 from the mission it is finishing, which would
    // carry the host through every barrier without it.
    mission_reset_sync_stages();
    DLOG("netplay", "MISSION announced #%d '%s' seed=%u end_frame=%d",
            s_announced.serial, s_announced.mission, s_announced.seed,
            s_announced.end_frame);
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
