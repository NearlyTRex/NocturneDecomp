// =============================================================================
// SIM TRACE — the per-frame simulation log both machines write, where built in
// =============================================================================
//
// Compiled in only where NOCTURNE_NETPLAY_SIM_TRACE is set, the dev preset's
// setting. Compiled out, every entry point does nothing and counts nothing.

#include "net/sim_trace.h"
#include "net_support.h"
#include "nocturne.h"
#include "nocturne_test.h"
#include "shim_config.h"

#if NOCTURNE_NETPLAY_SIM_TRACE

#include <fstream>
#include <sstream>
#include <string>

// In play, each frame, hit and body part is a line of the trace, which goes to
// the working directory with no game directories set.
NOCTURNE_TEST(in_play_the_frame_hits_and_parts_are_traced) {
    using net_support::heroes;
    net_support::stand.reset();
    nocturne_sim_trace_reset();
    net_support::place_heroes(2);
    nocturne_sim_trace_frame(1);
    net_support::start_session(CONNECTION_HOST, 2, 0);
    nocturne_sim_trace_note_process(0.02f);
    CHECK_EQ(nocturne_sim_trace_process_calls(), 1);

    SDamageInfo hit = {};
    hit.damage_amount = 5.0f;
    nocturne_sim_trace_damage(&heroes[0]->base, &hit);
    nocturne_sim_trace_bodypart(&heroes[1]->base.base, nullptr);
    nocturne_sim_trace_frame(2);
    nocturne_sim_trace_reset();

    std::ifstream in("nocturne_simtrace.log");
    std::stringstream text;
    text << in.rdbuf();
    CHECK(text.str().find(" D hero0") != std::string::npos);
    CHECK(text.str().find(" B hero1") != std::string::npos);
}

#else

NOCTURNE_TEST(compiled_out_the_trace_does_nothing) {
    net_support::stand.reset();
    nocturne_sim_trace_reset();
    nocturne_sim_trace_note_process(0.02f);
    nocturne_sim_trace_frame(1);
    nocturne_sim_trace_damage(nullptr, nullptr);
    nocturne_sim_trace_bodypart(nullptr, nullptr);
    CHECK_EQ(nocturne_sim_trace_process_calls(), 0);
}

#endif

NOCTURNE_TEST_MAIN()
