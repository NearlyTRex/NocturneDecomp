// =============================================================================
// GL API, MISSING — a driver without an entry point the GL path needs
// =============================================================================
//
// Then there is no GL path, and it is not asked for again. A run of its own:
// see test_gl_api.cpp.

#include "gl/gl_api.h"
#include "nocturne_test.h"
#include "proc_address_support.h"

NOCTURNE_TEST(without_a_needed_entry_point_there_is_no_gl) {
    proc_address::missing = {"glBlitFramebuffer", "glTexImage2D"};
    CHECK_EQ(nocturne_gl_load_api(), 0);
    proc_address::missing.clear();
    proc_address::asked.clear();
    CHECK_EQ(nocturne_gl_load_api(), 0); // the answer stands
    CHECK(proc_address::asked.empty());
}

NOCTURNE_TEST_MAIN()
