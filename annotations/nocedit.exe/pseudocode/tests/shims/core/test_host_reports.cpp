// =============================================================================
// HOST REPORTS — the heap figures, the FPU trap and the crash handler
// =============================================================================
//
// What each answers depends on the host: the allocator in use, whether glibc
// can trap floating-point exceptions, and whether the platform has a crash
// filter to install.

#include "core/crash_report.h"
#include "core/fpu_trap.h"
#include "core/heap_report.h"
#include "nocturne_test.h"
#include "shim_config.h"

#include <cstring>
#include <string>

#if NOCTURNE_FPU_TRAP && defined(__linux__)
#include <fenv.h>
#endif

// The allocator's own figures, or a sentence saying there are none; nothing
// written with nowhere to write it.
NOCTURNE_TEST(the_heap_report_is_the_allocators_or_says_why_not) {
    char line[128];
    std::strcpy(line, "untouched");
    nocturne_heap_report(nullptr, 128);
    nocturne_heap_report(line, 0);
    CHECK_EQ(std::string(line), std::string("untouched"));

    nocturne_heap_report(line, (int)sizeof(line));
#if defined(__GLIBC__) || defined(__SANITIZE_ADDRESS__)
    CHECK_EQ(std::string(line).rfind("Used: ", 0), (size_t)0);
#else
    CHECK_EQ(std::string(line), std::string("Heap figures unavailable on this host."));
#endif
}

// Where glibc can trap them, the exceptions asked for are armed, and turning
// the trap off says which they were; elsewhere nothing is armed. Many Arm
// cores have no traps, and there what is armed is nothing.
NOCTURNE_TEST(the_fpu_trap_arms_what_it_is_asked) {
    nocturne_fpu_trap_off();
    CHECK_EQ(nocturne_fpu_trap_on(NOCTURNE_FPU_TRAP_ALL), 0);
#if NOCTURNE_FPU_TRAP && defined(__linux__)
    const int armed = fegetexcept();
    CHECK_EQ(nocturne_fpu_trap_off(), armed);
#if defined(__x86_64__)
    CHECK(armed != 0);
#endif
#else
    CHECK_EQ(nocturne_fpu_trap_off(), 0);
#endif
    CHECK_EQ(nocturne_fpu_trap_on(0), 0);
    CHECK_EQ(nocturne_fpu_trap_off(), 0);
}

// Installing the crash handler, and naming where it writes, is quiet; it only
// speaks when the process faults.
NOCTURNE_TEST(installing_the_crash_handler_is_quiet) {
    nocturne_install_crash_handler("test");
    nocturne_install_crash_handler(nullptr);
    nocturne_crash_report_set_dir("somewhere");
    nocturne_crash_report_set_dir(nullptr);
    CHECK(true);
}

NOCTURNE_TEST_MAIN()
