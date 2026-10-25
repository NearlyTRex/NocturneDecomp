// =============================================================================
// FOCUS TRACE, OFF — without NOCTURNE_FOCUS_TRACE, or with nowhere to write
// =============================================================================
//
// A gain arms nothing and nothing is written. Read at the first gain, as
// test_focus_trace.cpp says, so a run of its own.

#include "debug/focus_trace.h"
#include "debug_support.h"
#include "nocturne_test.h"

#include <cstdlib>

NOCTURNE_TEST(without_a_directory_a_focus_gain_traces_nothing) {
    using debug_support::stand;
    stand.reset();
#if defined(_WIN32)
    _putenv_s("NOCTURNE_FOCUS_TRACE", "");
#else
    unsetenv("NOCTURNE_FOCUS_TRACE");
#endif
    nocturne_focus_trace_arm();
    nocturne_focus_trace_arm();
    CHECK_EQ(g_nocturne_focus_trace_active, 0);
    nocturne_focus_trace_event("beginScene");
    nocturne_focus_trace_presented();
    CHECK(stand.dumps.empty());
}

NOCTURNE_TEST_MAIN()
