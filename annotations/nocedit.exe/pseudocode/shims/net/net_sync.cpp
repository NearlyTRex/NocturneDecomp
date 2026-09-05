// =============================================================================
// NETPLAY — DESYNC DETECTOR — implementation
// =============================================================================
//
// See net_sync.h for what this is and why it reports rather than corrects.

#include "net/net_sync.h"
#include "shim_config.h"

#include "nocturne.h"

#include "core/debug_log.h"

#include <cstdio>
#include <cstring>

#if !NOCTURNE_AUTHENTIC_NETPLAY && NOCTURNE_NETPLAY_SYNC_CHECK

#define SYNC_MAX_HEROES 4

// Host reports arrive before the guest reaches that frame — the host computes
// at its own apply, and a guest is always behind — so what has to be buffered
// is the incoming report, looked up when the guest catches up. 128 frames is
// far more than the 5-frame lead processServerFrame will let a client fall
// behind, and costs 9KB.
#define SYNC_RING 128

// A desync is not one event: once the worlds part they stay parted, so every
// following frame mismatches too. Report the first few in full, then one in
// this many, so the log keeps a heartbeat without burying the first report —
// which is the only one that says when it started.
#define SYNC_LOG_FULL    3
#define SYNC_LOG_EVERY 300

// A single whole-world hash says "something differs" and nothing more, which is
// where the first version left off. Splitting it into buckets narrows a
// mismatch to a handful of actors the guest can then name from its own list.
//
// Bucketed by a hash of the actor's NAME, not by index: the two machines can
// disagree about how many actors exist, and index buckets would then shift
// every actor after the insertion into a different bucket, so everything would
// mismatch and nothing would be localised. Keyed by name, an actor that exists
// on only one side disturbs only its own bucket.
#define SYNC_BUCKETS 32

#pragma pack(push, 1)
typedef struct SNetPacket_SyncCheck {
    SNetPacketHeader header;                  // 0x00
    int    sequence_number;                   // 0x05
    int    hero_count;                        // 0x09
    float  hero_position[SYNC_MAX_HEROES][3]; // 0x0d
    int    hero_area[SYNC_MAX_HEROES];        // 0x3d
    uint   actor_hash;                        // 0x4d
    int    actor_count;                       // 0x51
    uint   bucket_hash[SYNC_BUCKETS];         // 0x55
    ushort bucket_count[SYNC_BUCKETS];        // 0xd5
    // Sim-stream draws during the frame just simulated (rng.h). Two machines
    // that agreed on the frame's seed and then drew a different number of times
    // have diverged inside that frame - and this says so with a count, which
    // localises far faster than a hash that only says "something differs".
    uint   sim_rng_draws;                     // 0x115
} SNetPacket_SyncCheck;                       // 0x119
#pragma pack(pop)

static SNetPacket_SyncCheck s_ring[SYNC_RING];
static int  s_ring_seq[SYNC_RING];
static int  s_ring_used = 0;
static int  s_mismatches = 0;

// =============================================================================
// State capture
// =============================================================================

// FNV-1a over the raw bytes. The comparison is bit-exact on purpose: both
// machines run the same binary on the same architecture, so a deterministic
// simulation produces identical floats down to the last bit. A tolerance here
// would only hide the very drift this exists to catch.
static uint sync_hash_bytes(uint hash, const void *data, int length)
{
    const unsigned char *p = (const unsigned char *)data;
    int i;

    for (i = 0; i < length; i++) {
        hash = (hash ^ (uint)p[i]) * 16777619u;
    }
    return hash;
}

// Actors that are allowed to differ, and must therefore stay out of the hash.
//
// The partition in rng.h says decoration may draw from the cosmetic stream and
// disagree between machines. CFlies is the case that forced it: its flight is
// gated on `is_visible`, which each machine's own camera decides, so the two
// sides deliberately draw different numbers for the swarm. But a CFlies is a
// real CDemonActor with a position, and this hash walks every actor - so the
// fix that stopped the flies desyncing the *simulation* made them desync the
// *check* instead. Left in, the first reported desync is always a fly, and it
// masks the real one for as long as the session runs.
//
// Flies collide with nothing and nothing reads their positions back, which is
// what made them safe to move to the cosmetic stream in the first place; the
// same fact is what makes them meaningless to hash. Anything else moved to that
// stream later belongs here too.
//
// Memoised by vtable, because the obvious version is too slow to ship: the
// answer comes from castToClassHash, which is a virtual getActorType() call plus
// a walk up the class chain, and this runs for every actor - 500-odd of them -
// every frame inside the hash loop. On the ASan build that cost is enough to
// drop the host below its guests and trip its own "player is ahead of the
// server" guard, which kills the session. The vtable pointer identifies the
// class exactly and a mission holds only a few dozen actor classes, so ask once
// per class. Vtables live at fixed addresses in the image, so the cache never
// needs invalidating.
#define SYNC_CLASS_CACHE 128

static void *s_class_vtable[SYNC_CLASS_CACHE];
static char  s_class_cosmetic[SYNC_CLASS_CACHE];
static int   s_class_count = 0;

static int sync_is_cosmetic(CDemonActor *actor)
{
    void *vtable = (void *)actor->vtable._ub;
    int   cosmetic;
    int   i;

    for (i = 0; i < s_class_count; i++) {
        if (s_class_vtable[i] == vtable) {
            return (int)s_class_cosmetic[i];
        }
    }

    cosmetic = (core_actor_cpp_castToClassHash_FUN_0040c790(
                    actor, g_CFliesClassInfo.name_hash) != (CDemonActor *)0x0);
    if (s_class_count < SYNC_CLASS_CACHE) {
        s_class_vtable[s_class_count]   = vtable;
        s_class_cosmetic[s_class_count] = (char)cosmetic;
        s_class_count++;
    }
    return cosmetic;
}

// Which bucket an actor belongs to, from its name. Stable across machines and
// independent of position in the list.
static uint sync_name_bucket(CDemonActor *actor)
{
    uint hash = 2166136261u;
    int  i;

    for (i = 0; (i < 32) && (actor->actor_name[i] != '\0'); i++) {
        hash = (hash ^ (uint)(unsigned char)actor->actor_name[i]) * 16777619u;
    }
    return hash % SYNC_BUCKETS;
}

static void sync_capture(SNetPacket_SyncCheck *out, int sequence_number)
{
    uint hash = 2166136261u;
    int  count;
    int  i;

    std::memset(out, 0, sizeof(*out));
    out->header.size       = sizeof(SNetPacket_SyncCheck);
    out->header.type       = (ENetPacketType)NOCTURNE_NET_PACKET_SYNC_CHECK;
    out->sequence_number   = sequence_number;

    count = g_HeroCount;
    if (SYNC_MAX_HEROES < count) {
        count = SYNC_MAX_HEROES;
    }
    out->hero_count = count;
    for (i = 0; i < count; i++) {
        CHero *hero = g_HeroActors[i];
        if (hero == (CHero *)0x0) {
            out->hero_area[i] = -2;         // distinct from the held-hero -1
            continue;
        }
        out->hero_position[i][0] = (hero->base).base.location.position.x;
        out->hero_position[i][1] = (hero->base).base.location.position.y;
        out->hero_position[i][2] = (hero->base).base.location.position.z;
        out->hero_area[i]        = (hero->base).base.location.area_id;
    }

    // The active set, which is where a diverging enemy shows up. The count on
    // its own is often the loudest signal: two machines disagreeing about how
    // many things exist in the room.
    out->actor_count = g_CDemonSetPtr->actor_count;
    for (i = 0; i < SYNC_BUCKETS; i++) {
        out->bucket_hash[i] = 2166136261u;
    }
    for (i = 0; i < g_CDemonSetPtr->actor_count; i++) {
        CDemonActor *actor = g_CDemonSetPtr->actors[i];
        uint bucket;
        if (actor == (CDemonActor *)0x0) {
            continue;
        }
        if (sync_is_cosmetic(actor)) {
            continue;
        }
        hash = sync_hash_bytes(hash, &actor->location.position, sizeof(actor->location.position));
        hash = sync_hash_bytes(hash, &actor->location.area_id, sizeof(actor->location.area_id));

        bucket = sync_name_bucket(actor);
        out->bucket_hash[bucket] = sync_hash_bytes(
            out->bucket_hash[bucket], &actor->location.position,
            sizeof(actor->location.position));
        out->bucket_hash[bucket] = sync_hash_bytes(
            out->bucket_hash[bucket], &actor->location.area_id,
            sizeof(actor->location.area_id));
        out->bucket_count[bucket] = (ushort)(out->bucket_count[bucket] + 1);
    }
    out->actor_hash    = hash;
    out->sim_rng_draws = nocturne_rng_sim_draws();
}

// =============================================================================
// Comparison
// =============================================================================

#if NOCTURNE_NETPLAY_SYNC_FATAL
// The game's own error box, raised on the first mismatch. Called after the
// full report has gone to nocturne_netplay.log — DLOG_EX is line-buffered and
// the trace files flush per frame, so everything written up to here is on disk
// before displayErrorAndQuit tears the process down.
//
// The message is built here and passed through a "%s" rather than used as the
// format itself: displayErrorAndQuit is variadic and vsprintf's whatever it is
// given, so a stray %s in anything interpolated would read a pointer that was
// never passed.
static void sync_fatal(const SNetPacket_SyncCheck *host_state,
                       const SNetPacket_SyncCheck *own,
                       int heroes_differ, int actors_differ,
                       int draws_differ)
{
    char message[1024];
    int  used;
    int  i;

    used = std::snprintf(
        message, sizeof(message),
        "Netplay desync at sim frame %d.\n\n"
        "%s, %s\n"
        "actors: host %d hash=%08x | ours %d hash=%08x\n"
        "sim RNG draws: host %u | ours %u%s\n",
        own->sequence_number,
        (heroes_differ != 0) ? "heroes differ" : "heroes match",
        (actors_differ != 0) ? "actors differ" : "actors match",
        host_state->actor_count, host_state->actor_hash,
        own->actor_count, own->actor_hash,
        host_state->sim_rng_draws, own->sim_rng_draws,
        (draws_differ != 0) ? "  <- diverged inside this frame" : "");

    for (i = 0; (i < own->hero_count) && (used > 0) && (used < (int)sizeof(message)); i++) {
        if ((own->hero_area[i] == host_state->hero_area[i]) &&
            (std::memcmp(own->hero_position[i], host_state->hero_position[i],
                         sizeof(own->hero_position[i])) == 0)) {
            continue;
        }
        used = used + std::snprintf(
            message + used, sizeof(message) - (size_t)used,
            "\nhero %d  host (%.3f, %.3f, %.3f) area %d\n"
            "        ours (%.3f, %.3f, %.3f) area %d\n",
            i,
            (double)host_state->hero_position[i][0],
            (double)host_state->hero_position[i][1],
            (double)host_state->hero_position[i][2],
            host_state->hero_area[i],
            (double)own->hero_position[i][0],
            (double)own->hero_position[i][1],
            (double)own->hero_position[i][2],
            own->hero_area[i]);
    }

    if ((used > 0) && (used < (int)sizeof(message))) {
        std::snprintf(message + used, sizeof(message) - (size_t)used,
                      "\nWhich actors differ is in nocturne_netplay.log; the frame "
                      "itself is in nocturne_simtrace.log on both machines.");
    }

    g_CurrentFilename   = (char *)"..\\shims\\net_sync.cpp";
    g_CurrentLineNumber = __LINE__;
    core_main_c_displayErrorAndQuit_FUN_00506f10((char *)"%s", message);
}
#endif /* NOCTURNE_NETPLAY_SYNC_FATAL */

static void sync_report(const SNetPacket_SyncCheck *host_state,
                        const SNetPacket_SyncCheck *own,
                        int heroes_differ, int actors_differ,
                        int draws_differ)
{
    int i;

    s_mismatches = s_mismatches + 1;
    if ((SYNC_LOG_FULL < s_mismatches) && ((s_mismatches % SYNC_LOG_EVERY) != 0)) {
        return;
    }

    DLOG_EX("netplay",
            "DESYNC #%d at sim frame %d - %s%s(host actors=%d hash=%08x / ours=%d hash=%08x)",
            s_mismatches, own->sequence_number,
            (heroes_differ != 0) ? "heroes differ " : "heroes match ",
            (actors_differ != 0) ? "actors differ " : "actors match ",
            host_state->actor_count, host_state->actor_hash,
            own->actor_count, own->actor_hash);

    // Printed whenever it differs, including on a frame whose state still
    // matches: a draw-count split is the earliest visible sign of divergence,
    // since it shows up on the frame the extra draw happened rather than after
    // the resulting position has had time to separate.
    if (draws_differ != 0) {
        DLOG_EX("netplay",
                "  sim RNG draws differ: host %u | ours %u - simulation code is "
                "drawing a different number of times, which is a determinism "
                "break in the frame just simulated (see rng.h)",
                host_state->sim_rng_draws, own->sim_rng_draws);
    }

    for (i = 0; i < own->hero_count; i++) {
        if ((own->hero_area[i] != host_state->hero_area[i]) ||
            (std::memcmp(own->hero_position[i], host_state->hero_position[i],
                         sizeof(own->hero_position[i])) != 0)) {
            DLOG_EX("netplay",
                    "  hero %d  host (%.3f, %.3f, %.3f) area %d  |  ours (%.3f, %.3f, %.3f) area %d",
                    i,
                    (double)host_state->hero_position[i][0],
                    (double)host_state->hero_position[i][1],
                    (double)host_state->hero_position[i][2],
                    host_state->hero_area[i],
                    (double)own->hero_position[i][0],
                    (double)own->hero_position[i][1],
                    (double)own->hero_position[i][2],
                    own->hero_area[i]);
        }
    }

    // Name the actors behind an "actors differ". Only the first differing
    // bucket is expanded — once the worlds part, later buckets follow, and the
    // first one is the one that says what started it.
    for (i = 0; i < SYNC_BUCKETS; i++) {
        int listed = 0;
        int j;

        if ((own->bucket_hash[i] == host_state->bucket_hash[i]) &&
            (own->bucket_count[i] == host_state->bucket_count[i])) {
            continue;
        }
        DLOG_EX("netplay", "  bucket %d differs: host %d actors hash=%08x | "
                           "ours %d actors hash=%08x",
                i, host_state->bucket_count[i], host_state->bucket_hash[i],
                own->bucket_count[i], own->bucket_hash[i]);

        for (j = 0; (j < g_CDemonSetPtr->actor_count) && (listed < 8); j++) {
            CDemonActor *actor = g_CDemonSetPtr->actors[j];
            if ((actor == (CDemonActor *)0x0) ||
                ((int)sync_name_bucket(actor) != i)) {
                continue;
            }
            listed = listed + 1;
            DLOG_EX("netplay", "    ours: %-24s (%.3f, %.3f, %.3f) area %d",
                    actor->actor_name,
                    (double)actor->location.position.x,
                    (double)actor->location.position.y,
                    (double)actor->location.position.z,
                    actor->location.area_id);
        }
        break;
    }

#if NOCTURNE_NETPLAY_SYNC_FATAL
    // The first one only. Everything after it is the same divergence still
    // being true, and this call does not return.
    if (s_mismatches == 1) {
        sync_fatal(host_state, own, heroes_differ, actors_differ, draws_differ);
    }
#endif
}

// =============================================================================
// Entry points
// =============================================================================

extern "C" void nocturne_net_sync_reset(void)
{
    s_ring_used  = 0;
    s_mismatches = 0;
    std::memset(s_ring_seq, 0, sizeof(s_ring_seq));
    nocturne_rng_reset();
    nocturne_sim_trace_reset();
    nocturne_net_weapon_reset();
}

extern "C" void nocturne_net_sync_check(int sequence_number)
{
    CNetGame            *net_game = g_CNetGamePtr;
    SNetPacket_SyncCheck own;
    int                  slot;
    int                  heroes_differ;
    int                  actors_differ;
    int                  draws_differ;
    int                  i;

    if ((net_game == (CNetGame *)0x0) || (net_game->network_mode != NET_MODE_PLAYING)) {
        return;
    }
    if (g_CDemonSetPtr == (CDemonSet *)0x0) {
        return;
    }

    sync_capture(&own, sequence_number);

    // Same frame, same point, same order on every machine - so the two logs
    // line up line-for-line and the first difference is the desync's origin.
    nocturne_sim_trace_frame(sequence_number);

    // Latched here, before the host/guest split, so both sides measure the same
    // window: draws made since the previous applied sim frame. This is the one
    // point every machine agrees on a frame number.
    nocturne_rng_frame_reset(sequence_number);

    if (net_game->connection_type == CONNECTION_HOST) {
        for (i = 0; i < net_game->player_count; i++) {
            if (i != net_game->local_player_index) {
                core_netgame_cpp_CNetGame_send_FUN_005411c0(net_game, i, &own.header);
            }
        }
        return;
    }
    if (net_game->connection_type != CONNECTION_CLIENT) {
        return;
    }

    slot = sequence_number & (SYNC_RING - 1);
    if ((s_ring_used == 0) || (s_ring_seq[slot] != sequence_number)) {
        return;                 // no report for this frame (lost, or not yet here)
    }

    heroes_differ = 0;
    for (i = 0; i < own.hero_count; i++) {
        if ((own.hero_area[i] != s_ring[slot].hero_area[i]) ||
            (std::memcmp(own.hero_position[i], s_ring[slot].hero_position[i],
                         sizeof(own.hero_position[i])) != 0)) {
            heroes_differ = 1;
        }
    }
    actors_differ = ((own.actor_hash != s_ring[slot].actor_hash) ||
                     (own.actor_count != s_ring[slot].actor_count));
    draws_differ  = (own.sim_rng_draws != s_ring[slot].sim_rng_draws);

    if ((heroes_differ != 0) || (actors_differ != 0) || (draws_differ != 0)) {
        sync_report(&s_ring[slot], &own, heroes_differ, actors_differ, draws_differ);
    }
}

extern "C" int nocturne_net_sync_on_packet(const void *packet, int packet_size)
{
    const SNetPacket_SyncCheck *incoming = (const SNetPacket_SyncCheck *)packet;
    int slot;

    if ((packet == (const void *)0x0) || (packet_size < (int)sizeof(SNetPacket_SyncCheck))) {
        return 0;
    }
    if (incoming->header.type != (ENetPacketType)NOCTURNE_NET_PACKET_SYNC_CHECK) {
        return 0;
    }

    slot              = incoming->sequence_number & (SYNC_RING - 1);
    s_ring[slot]      = *incoming;
    s_ring_seq[slot]  = incoming->sequence_number;
    s_ring_used       = 1;
    return 1;
}

#else  /* disabled */

extern "C" void nocturne_net_sync_check(int) {}
extern "C" int  nocturne_net_sync_on_packet(const void *, int) { return 0; }
extern "C" void nocturne_net_sync_reset(void) {}

#endif
