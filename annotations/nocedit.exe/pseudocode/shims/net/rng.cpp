// =============================================================================
// RANDOM NUMBER FUNNEL — implementation
// =============================================================================
//
// See rng.h for the two streams and why simulation may only use one of them.

#include "net/rng.h"
#include "shim_config.h"

#include "nocturne.h"

#include "core/debug_log.h"

#include <cstdio>

#if NOCTURNE_AUTHENTIC_RNG

// Authentic mode: every call site already compiles to a bare rand(), and these
// exist only so a site that has not been converted still behaves as shipped.

extern "C" unsigned int nocturne_rng_sim(void)      { return (unsigned int)rand(); }
extern "C" unsigned int nocturne_rng_fx(void)       { return (unsigned int)rand(); }
extern "C" unsigned int nocturne_rng_offframe(void) { return (unsigned int)rand(); }
extern "C" unsigned int nocturne_rng_seed(void)     { return (unsigned int)rand(); }

extern "C" unsigned int nocturne_rng_game(void *)
{
    return core_actor_cpp_generateRandomValue_FUN_0040cba0();
}

extern "C" float nocturne_rng_fx_range(float min_value, float max_value)
{
    return core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(min_value, max_value);
}

extern "C" int nocturne_rng_fx_chance(float probability_threshold)
{
    return core_actor_cpp_randomChance_FUN_0040cd10(probability_threshold);
}

extern "C" int nocturne_rng_fx_int(int min_value, int max_value)
{
    return core_actor_cpp_getRandomInt_FUN_0040cc70(min_value, max_value);
}

extern "C" unsigned int nocturne_rng_sim_draws(void)        { return 0; }
extern "C" unsigned int nocturne_rng_undeclared_draws(void) { return 0; }
extern "C" void         nocturne_rng_frame_reset(int)       {}
extern "C" void         nocturne_rng_reset(void)             {}
extern "C" void         nocturne_rng_note_raw_draw(void)     {}

#else

// Draws through nocturne_rng_sim in the current sim frame, latched by
// nocturne_rng_frame_reset. Only the count matters: two machines that agreed on
// the frame's seed and then made a different number of draws have diverged
// inside that frame, whatever the values were.
static unsigned int s_sim_draws = 0;

// Bare rand() calls made inside a sim frame without going through a door.
static unsigned int s_undeclared_draws = 0;

// Set while one of the doors is calling rand() on purpose, so the raw-draw
// audit can tell a marked site from an unmarked one. The game is
// single-threaded through all of this, so a flag is enough.
static int s_in_declared_draw = 0;

// One line each per session. A desync source that fires every frame would
// otherwise bury the report that named it.
static int s_reported_undeclared = 0;
static int s_reported_offframe   = 0;
static int s_reported_stray_sim  = 0;

// Per-draw attribution — a diagnostic, gated on NOCTURNE_NETPLAY_RNG_TRACE so
// it can be compiled out without touching the partition above, which is a fix.
// The frame fingerprint in sim_trace.h says which frame's draw sequence split;
// this says which call site did it.
//
// Every frame is logged, not a window. Each cause that gets fixed pushes the
// first divergence later, so any fixed window stops covering it as soon as it
// starts working. At roughly 30 draws a frame this is a few MB for a long
// session, against tens of MB for the sim trace beside it.

#if NOCTURNE_NETPLAY_RNG_TRACE

static FILE *s_draw_log     = (FILE *)0;
static int   s_draw_failed  = 0;
static int   s_frame        = -1;
static unsigned int s_draw_index = 0;

// Caller addresses are useless across two processes - ASLR puts the image
// somewhere different in each. Reported as a signed offset from a fixed
// function in the same image instead, which is identical in both because it is
// the same binary.
static long rng_caller_offset(void *caller)
{
    return (long)((const char *)caller -
                  (const char *)(const void *)&core_actor_cpp_generateRandomValue_FUN_0040cba0);
}

static FILE *rng_draw_log(void)
{
    if ((s_draw_log == (FILE *)0) && (s_draw_failed == 0)) {
        s_draw_log = std::fopen("nocturne_rngtrace.log", "w");
        if (s_draw_log == (FILE *)0) {
            s_draw_failed = 1;
        }
    }
    return s_draw_log;
}

static void rng_note_draw(void *caller)
{
    FILE *out;

    s_draw_index = s_draw_index + 1;

    if (s_frame < 0) {
        return;                 // before the first applied sim frame
    }
    out = rng_draw_log();
    if (out == (FILE *)0) {
        return;
    }
    std::fprintf(out, "%d %u %+ld\n", s_frame, s_draw_index, rng_caller_offset(caller));
}

static void rng_trace_frame(int sequence_number)
{
    s_draw_index = 0;
    s_frame      = sequence_number;
    if (s_draw_log != (FILE *)0) {
        std::fflush(s_draw_log);
    }
}

static void rng_trace_reset(void)
{
    s_draw_index = 0;
    s_frame      = -1;
    if (s_draw_log != (FILE *)0) {
        std::fclose(s_draw_log);
        s_draw_log = (FILE *)0;
    }
    s_draw_failed = 0;
}

#else  /* diagnostics off: no file, no attribution, no per-draw work */

static void rng_note_draw(void *)      {}
static void rng_trace_frame(int)       {}
static void rng_trace_reset(void)      {}

#endif

static int rng_is_network_game(void)
{
    return ((g_CNetGamePtr != (CNetGame *)0x0) &&
            (g_CNetGamePtr->connection_type != CONNECTION_NONE));
}

// Whether a sim frame is running. Everything that reaches simulation state
// happens between CGame::process setting this and clearing it again, and the
// seed the whole frame draws from is set immediately after it goes up.
static int rng_in_sim_frame(void)
{
    return ((g_CGamePtr != (CGame *)0x0) && (g_CGamePtr->is_processing != 0));
}

static unsigned int rng_declared_rand(void)
{
    unsigned int value;

    s_in_declared_draw = 1;
    value = (unsigned int)rand();
    s_in_declared_draw = 0;
    return value;
}

extern "C" unsigned int nocturne_rng_sim(void)
{
    if (rng_is_network_game() == 0) {
        return rng_declared_rand();
    }

    // A sim draw outside the sim frame is drawing off a seed nothing
    // re-established for this frame, so the two machines are not guaranteed to
    // be on the same number. Worth naming; the draw still happens, because
    // refusing it would change what the game does.
    if ((rng_in_sim_frame() == 0) && (s_reported_stray_sim == 0)) {
        s_reported_stray_sim = 1;
        DLOG_EX("netplay", "RNG: nocturne_rng_sim() called outside CGame::process - "
                           "the sim seed is not authoritative here, so this draw may "
                           "differ per machine");
    }

    s_sim_draws = s_sim_draws + 1;
    rng_note_draw(__builtin_return_address(0));

    // Masked to 15 bits so this is range-identical to the rand() it replaces:
    // shims/crt.cpp overrides rand() with Watcom's LCG, which returns 0..0x7FFF.
    return core_actor_cpp_generateRandomValue_FUN_0040cba0() & 0x7fffu;
}

extern "C" unsigned int nocturne_rng_game(void *caller)
{
    s_sim_draws = s_sim_draws + 1;
    rng_note_draw(caller);
    return core_actor_cpp_generateRandomValue_FUN_0040cba0();
}

extern "C" unsigned int nocturne_rng_fx(void)
{
    return rng_declared_rand();
}

extern "C" float nocturne_rng_fx_range(float min_value, float max_value)
{
    // getRandomFloatFromRange's own off-frame arithmetic, verbatim.
    float fVar1 = (float)(int)rng_declared_rand() * 3.051851e-05f;

    return fVar1 * (max_value - min_value) + min_value;
}

extern "C" int nocturne_rng_fx_chance(float probability_threshold)
{
    // randomChance's own off-frame arithmetic, verbatim.
    float fVar1 = (float)(int)rng_declared_rand() * 3.051851e-05f;

    return (int)(unsigned int)(fVar1 < probability_threshold);
}

extern "C" int nocturne_rng_fx_int(int min_value, int max_value)
{
    // getRandomInt's own off-frame arithmetic, including its out-of-range
    // fallback to max_value - reproduced rather than tidied, so the two modes
    // pick from the same distribution.
    double dVar1 = (double)(max_value - min_value) + 0.99999000000000005;
    float  fVar2 = (float)(int)rng_declared_rand() * 3.051851e-05f;
    int    iVar1 = (int)ROUND(ROUND((float)min_value + fVar2 * (float)dVar1));

    if ((min_value <= iVar1) && (min_value = max_value, iVar1 <= max_value)) {
        return iVar1;
    }
    return min_value;
}

extern "C" unsigned int nocturne_rng_offframe(void)
{
    if ((rng_is_network_game() != 0) && (s_reported_offframe == 0)) {
        s_reported_offframe = 1;
        DLOG_EX("netplay", "RNG: the game's RNG primitives took their "
                           "is_processing == 0 fallback during a network game - a "
                           "simulation decision made outside CGame::process draws "
                           "from the per-machine libc stream");
    }
    return rng_declared_rand();
}

extern "C" unsigned int nocturne_rng_seed(void)
{
    return rng_declared_rand();
}

extern "C" void nocturne_rng_note_raw_draw(void)
{
    if (s_in_declared_draw != 0) {
        return;
    }
    if (rng_in_sim_frame() == 0) {
        return;                 // outside the frame nothing lockstep depends on it
    }

    s_undeclared_draws = s_undeclared_draws + 1;

    if ((rng_is_network_game() != 0) && (s_reported_undeclared == 0)) {
        s_reported_undeclared = 1;
        DLOG_EX("netplay", "RNG: bare rand() called inside a sim frame - a call site "
                           "that has not been routed through rng.h. If its result "
                           "reaches simulation state it is a desync source");
    }
}

extern "C" unsigned int nocturne_rng_sim_draws(void)
{
    return s_sim_draws;
}

extern "C" unsigned int nocturne_rng_undeclared_draws(void)
{
    return s_undeclared_draws;
}

extern "C" void nocturne_rng_frame_reset(int sequence_number)
{
    s_sim_draws        = 0;
    s_undeclared_draws = 0;
    rng_trace_frame(sequence_number);
}

extern "C" void nocturne_rng_reset(void)
{
    s_sim_draws           = 0;
    s_undeclared_draws    = 0;
    s_in_declared_draw    = 0;
    s_reported_undeclared = 0;
    s_reported_offframe   = 0;
    s_reported_stray_sim  = 0;

    rng_trace_reset();
}

#endif
