// =============================================================================
// NETPLAY — SIM STATE TRACE — implementation
// =============================================================================
//
// See sim_trace.h for why this writes two files to diff rather than widening
// the desync packet.

#include "sim_trace.h"
#include "shim_config.h"

#include "nocturne.h"

#include "debug_log.h"

#include <cstdio>
#include <cstring>

#if !NOCTURNE_AUTHENTIC_NETPLAY && NOCTURNE_NETPLAY_SIM_TRACE

static FILE *s_trace = (FILE *)0;
static int   s_open_failed = 0;
static int   s_reported_bad_victim = 0;

// Last position/area emitted for each actor slot, so the actor pass below can
// print only what moved. See the "A" lines in sim_trace.h: the character pass
// covers g_CDemonSetPtr->characters, but the desync hash covers
// g_CDemonSetPtr->actors, and the two are not the same list - a desync living
// entirely in non-character actors is invisible to the character pass.
#define TRACE_MAX_ACTORS 4096

static float s_last_pos[TRACE_MAX_ACTORS][3];
static int   s_last_area[TRACE_MAX_ACTORS];
static char  s_seen[TRACE_MAX_ACTORS];

// Previous frame's game-flag and timer name sets, so the event pass can print
// transitions rather than the whole list every frame. Sized to the blocks in
// CEventList (names[100][32] and names[10][32]).
#define TRACE_MAX_FLAGS  100
#define TRACE_MAX_TIMERS 10

static char s_last_flags[TRACE_MAX_FLAGS][32];
static int  s_last_flag_count = 0;
static char s_last_timers[TRACE_MAX_TIMERS][32];
static int  s_last_timer_count = 0;
static unsigned int s_last_flag_fingerprint = 0;

// How many times CGame::process has run, and the delta time it last ran with.
// A machine that simulates a frame it never applied shows up as this pulling
// ahead of the sequence number.
static int   s_process_calls = 0;
static float s_last_delta_time = 0.0f;

static FILE *trace_file(void)
{
    if ((s_trace == (FILE *)0) && (s_open_failed == 0)) {
        s_trace = std::fopen("nocturne_simtrace.log", "w");
        if (s_trace == (FILE *)0) {
            s_open_failed = 1;
        }
    }
    return s_trace;
}

// Which slot of the set's character list a victim pointer refers to, WITHOUT
// dereferencing it.
//
// The obvious version printed victim->actor_name and crashed the host: an
// enemy's victim field can hold 0xffffffff — a 32-bit -1 sentinel sitting in a
// 64-bit pointer slot — and strlen walked into it from inside fprintf. Nothing
// may deref one of these until it has been matched against a pointer the set
// itself holds.
//
// An index is also the better thing to print. Every machine walks
// g_CDemonSetPtr->characters in the same order, so the index is directly
// comparable between the two logs, where a raw pointer would differ on every
// line and a name can repeat.
//
//   >= 0  slot in the character list
//   -1    null (no victim)
//   -3    g_ScriptSentinelActor — 0xFFFFFFFF, the cookie a script sets to mean
//         "no victim". Not a pointer and never dereferenced by the game:
//         CEnemy::updateVictim compares against it, and CDemonMission::saveActor
//         round-trips 0xff000000..0xffffffff through the file as raw hex rather
//         than as an actor name precisely so cookies like this survive a save.
//   -2    anything else that is not a character the set knows about
static int trace_victim_slot(CCharacter *victim)
{
    int i;

    if (victim == (CCharacter *)0x0) {
        return -1;
    }
    if (victim == (CCharacter *)g_ScriptSentinelActor) {
        return -3;
    }
    for (i = 0; i < g_CDemonSetPtr->character_count; i++) {
        if (g_CDemonSetPtr->characters[i] == victim) {
            return i;
        }
    }
    return -2;
}

// Safe only for a slot that trace_victim_slot resolved (>= 0).
static const char *trace_slot_name(int slot)
{
    CCharacter *character;

    if (slot == -1) {
        return "-";
    }
    if (slot == -3) {
        return "script-none";
    }
    if (slot < 0) {
        return "<bad>";
    }
    character = g_CDemonSetPtr->characters[slot];
    if (character == (CCharacter *)0x0) {
        return "<null>";
    }
    return character->base.actor_name;
}

extern "C" void nocturne_sim_trace_reset(void)
{
    if (s_trace != (FILE *)0) {
        std::fclose(s_trace);
        s_trace = (FILE *)0;
    }
    s_open_failed = 0;
    s_reported_bad_victim = 0;
    s_process_calls = 0;
    s_last_delta_time = 0.0f;
    std::memset(s_seen, 0, sizeof(s_seen));
    s_last_flag_count = 0;
    s_last_timer_count = 0;
    s_last_flag_fingerprint = 0;
}

static int trace_name_present(const char (*list)[32], int count, const char *name)
{
    int i;

    for (i = 0; i < count; i++) {
        if (std::strcmp(list[i], name) == 0) {
            return 1;
        }
    }
    return 0;
}

// The event list: raised events, game-flag transitions, and timer lifetimes.
//
// This is the subsystem that decides *when* a scripted thing happens, and the
// last one to get trace coverage, so a divergence could sit in it undetected: a
// scripted actor can spawn on both machines a few sim frames apart while every
// other input to that decision - hero positions, dt, the RNG stream, the
// CGame::process count - stays bit-identical.
//
// `events` and `current_events` are one-frame by construction -
// CEventList::process moves one into the other and clears the source each frame
// - so they are printed in full whenever non-empty, which is rare. Game flags
// are sticky, so only transitions are printed. Timers count down every frame, so
// only their arrival and departure is printed, with the duration they arrived
// with; a timer that starts at a different value on the two machines is the kind
// of thing being hunted.
static void trace_event_changes(FILE *out, int sequence_number)
{
    CEventList *event_list = g_CEventListPtr;
    int         count;
    int         flags_moved;
    int         i;

    if (event_list == (CEventList *)0x0) {
        return;
    }

    count = (event_list->current_events).count;
    if (TRACE_MAX_FLAGS < count) {
        count = TRACE_MAX_FLAGS;
    }
    for (i = 0; i < count; i++) {
        std::fprintf(out, "%d E cur   %s\n", sequence_number,
                     (event_list->current_events).names[i]);
    }

    count = (event_list->events).count;
    if (TRACE_MAX_FLAGS < count) {
        count = TRACE_MAX_FLAGS;
    }
    for (i = 0; i < count; i++) {
        std::fprintf(out, "%d E pend  %s\n", sequence_number,
                     (event_list->events).names[i]);
    }

    count = (event_list->game_flags).count;
    if (TRACE_MAX_FLAGS < count) {
        count = TRACE_MAX_FLAGS;
    }

    // Flags change a handful of times a mission, but the transition diff below
    // is O(flags^2) strcmp and this runs every frame - and every one of those
    // strcmps is intercepted on the ASan build. Fingerprint the block first and
    // do the quadratic work only when it actually moved. (The same per-frame
    // cost in net_sync.cpp's class test is what tripped the host's "player is
    // ahead of the server" guard, so it is worth paying attention to here.)
    flags_moved = 0;
    {
        unsigned int fingerprint = 2166136261u;
        const char  *bytes       = (const char *)(event_list->game_flags).names;
        int          n           = count * 32;

        for (i = 0; i < n; i++) {
            fingerprint = (fingerprint ^ (unsigned int)(unsigned char)bytes[i]) * 16777619u;
        }
        fingerprint = fingerprint ^ (unsigned int)count;
        if (fingerprint != s_last_flag_fingerprint) {
            s_last_flag_fingerprint = fingerprint;
            flags_moved = 1;
        }
    }

    if (flags_moved) {
        for (i = 0; i < count; i++) {
            if (!trace_name_present(s_last_flags, s_last_flag_count,
                                    (event_list->game_flags).names[i])) {
                std::fprintf(out, "%d E flag+ %s\n", sequence_number,
                             (event_list->game_flags).names[i]);
            }
        }
        for (i = 0; i < s_last_flag_count; i++) {
            if (!trace_name_present((event_list->game_flags).names, count, s_last_flags[i])) {
                std::fprintf(out, "%d E flag- %s\n", sequence_number, s_last_flags[i]);
            }
        }
        for (i = 0; i < count; i++) {
            std::strcpy(s_last_flags[i], (event_list->game_flags).names[i]);
        }
        s_last_flag_count = count;
    }

    count = (event_list->timers).count;
    if (TRACE_MAX_TIMERS < count) {
        count = TRACE_MAX_TIMERS;
    }
    for (i = 0; i < count; i++) {
        if (!trace_name_present(s_last_timers, s_last_timer_count,
                                (event_list->timers).names[i])) {
            std::fprintf(out, "%d E timer+ %s %.9g\n", sequence_number,
                         (event_list->timers).names[i],
                         (double)(event_list->timers).durations[i]);
        }
    }
    for (i = 0; i < s_last_timer_count; i++) {
        if (!trace_name_present((event_list->timers).names, count, s_last_timers[i])) {
            std::fprintf(out, "%d E timer- %s\n", sequence_number, s_last_timers[i]);
        }
    }
    for (i = 0; i < count; i++) {
        std::strcpy(s_last_timers[i], (event_list->timers).names[i]);
    }
    s_last_timer_count = count;
}

// Every actor whose position or area changed since this machine last printed it.
//
// Change-filtered rather than full, because the actor list is an order of
// magnitude larger than the character list and most of it is scenery that never
// moves: printing all of it every frame costs ~450MB a session, printing the
// deltas costs a couple of MB. The filter is safe for the offline diff because
// the diff reconstructs each machine's per-actor timeline by replaying the
// changes rather than comparing lines positionally - so an actor that moves on
// one machine and not the other still shows up, which is what is being looked
// for.
//
// Keyed by index into g_CDemonSetPtr->actors, the same key the whole-actor hash
// in net_sync.cpp walks, so the two agree on what "the same actor" means. An
// actor being created or destroyed mid-list shifts every index after it and
// makes this re-print the tail once; that is noise, not a false divergence.
static void trace_actor_changes(FILE *out, int sequence_number)
{
    int count = g_CDemonSetPtr->actor_count;
    int i;

    if (TRACE_MAX_ACTORS < count) {
        count = TRACE_MAX_ACTORS;
    }
    for (i = 0; i < count; i++) {
        CDemonActor *actor = g_CDemonSetPtr->actors[i];
        float        x, y, z;
        int          area;

        if (actor == (CDemonActor *)0x0) {
            continue;
        }
        x    = actor->location.position.x;
        y    = actor->location.position.y;
        z    = actor->location.position.z;
        area = actor->location.area_id;

        if ((s_seen[i] != 0) && (s_last_pos[i][0] == x) && (s_last_pos[i][1] == y) &&
            (s_last_pos[i][2] == z) && (s_last_area[i] == area)) {
            continue;
        }
        s_seen[i]       = 1;
        s_last_pos[i][0] = x;
        s_last_pos[i][1] = y;
        s_last_pos[i][2] = z;
        s_last_area[i]  = area;

        std::fprintf(out, "%d A %04d %-24s pos=%.9g,%.9g,%.9g area=%d\n",
                     sequence_number, i, actor->actor_name,
                     (double)x, (double)y, (double)z, area);
    }
}

extern "C" void nocturne_sim_trace_note_process(float delta_time)
{
    s_process_calls   = s_process_calls + 1;
    s_last_delta_time = delta_time;
}

extern "C" void nocturne_sim_trace_frame(int sequence_number)
{
    CNetGame *net_game = g_CNetGamePtr;
    FILE     *out;
    int       i;

    if ((net_game == (CNetGame *)0x0) || (net_game->network_mode != NET_MODE_PLAYING)) {
        return;
    }
    if (g_CDemonSetPtr == (CDemonSet *)0x0) {
        return;
    }

    out = trace_file();
    if (out == (FILE *)0) {
        return;
    }

    // Written before CGame::process re-seeds, so g_RandomSeedValue here is the
    // residue of the previous frame's sim draws — the fingerprint that says
    // whether the two machines drew the same things, not merely the same
    // number of things. See sim_trace.h.
    std::fprintf(out, "%d F seed=%u netseed=%u draws=%u process=%d dt=%.9g\n",
                 sequence_number,
                 g_RandomSeedValue,
                 (unsigned int)net_game->random_seed,
                 nocturne_rng_sim_draws(),
                 s_process_calls,
                 (double)s_last_delta_time);

    // Characters rather than the whole actor list: enemies and heroes are what
    // simulate, and the static scenery that fills most of the actor list cannot
    // diverge. Same order on every machine - the set's own list order, which is
    // itself part of what the sync hash checks.
    for (i = 0; i < g_CDemonSetPtr->character_count; i++) {
        CCharacter  *character = g_CDemonSetPtr->characters[i];
        CEnemy      *enemy;
        int          victim_slot    = -1;
        int          script_slot    = -1;
        int          in_combat      = -1;
        float        search_timer   = 0.0f;

        if (character == (CCharacter *)0x0) {
            std::fprintf(out, "%d %04d (null)\n", sequence_number, i);
            continue;
        }

        // The AI fields live on CEnemy; heroes and neutral characters are not
        // one, so ask rather than assume.
        enemy = (CEnemy *)core_actor_cpp_castToClassHash_FUN_0040c790(
                              &character->base, g_CEnemyClassInfo.name_hash);
        if (enemy != (CEnemy *)0x0) {
            victim_slot  = trace_victim_slot(enemy->victim);
            script_slot  = trace_victim_slot(enemy->script_victim);
            in_combat    = enemy->is_in_combat;
            search_timer = enemy->victim_search_timer;

            // -3 (the script sentinel) is normal and expected. -2 is not: a
            // victim field holding something that is neither null, nor the
            // sentinel, nor a live character is a stale pointer worth chasing.
            // Name it once with the raw value - never dereference it, which is
            // what crashed the host the first time this trace ran.
            if (((victim_slot == -2) || (script_slot == -2)) && (s_reported_bad_victim == 0)) {
                s_reported_bad_victim = 1;
                DLOG_EX("netplay",
                        "SIMTRACE: %s has a victim field that is neither null, the script "
                        "sentinel, nor a live character - victim=%p script_victim=%p "
                        "(a stale pointer, not a desync)",
                        character->base.actor_name,
                        (void *)enemy->victim, (void *)enemy->script_victim);
            }
        }

        // The slot numbers are what the diff keys on; the names ride along so a
        // differing line is readable without cross-referencing. A -2 slot means
        // the field held something that is not a live character - printed, not
        // dereferenced, and worth chasing separately from any desync.
        std::fprintf(out,
                     "%d %04d %-24s pos=%.9g,%.9g,%.9g area=%d hp=%.9g "
                     "mstate=%d victim=%d(%s) svictim=%d(%s) combat=%d vtimer=%.9g\n",
                     sequence_number, i, character->base.actor_name,
                     (double)character->base.location.position.x,
                     (double)character->base.location.position.y,
                     (double)character->base.location.position.z,
                     character->base.location.area_id,
                     (double)character->hit_points,
                     character->model.motion_controller.state_index,
                     victim_slot, trace_slot_name(victim_slot),
                     script_slot, trace_slot_name(script_slot),
                     in_combat, (double)search_timer);
    }

    trace_actor_changes(out, sequence_number);
    trace_event_changes(out, sequence_number);

    std::fflush(out);
}

#else  /* disabled */

extern "C" void nocturne_sim_trace_frame(int) {}
extern "C" void nocturne_sim_trace_reset(void) {}
extern "C" void nocturne_sim_trace_note_process(float) {}

#endif
