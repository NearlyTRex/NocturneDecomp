// =============================================================================
// GL API — the entry points the presenter and the renderer draw through
// =============================================================================
//
// They are fetched from the driver once a context is up. What matters is that
// every one the GL path cannot do without is there before it is used, that the
// shader and buffer ones are only fetched, for their callers to check, and that
// a second call does not ask the driver again. The first load in a process is
// the one that counts, so the driver missing a name is test_gl_api_missing.cpp.

#include "gl/gl_api.h"
#include "nocturne_test.h"
#include "proc_address_support.h"

// Loaded with the shader entry points absent: the GL path still comes up, and
// those slots are left for their callers to find empty. Asked again, the table
// stands as it is.
NOCTURNE_TEST(the_api_loads_without_the_optional_entry_points) {
    proc_address::missing = {"glCreateShader", "glGetTexImage", "glDrawArrays"};
    CHECK_EQ(nocturne_gl_load_api(), 1);
    CHECK(gl.Clear != nullptr);
    CHECK(gl.BlitFramebuffer != nullptr);
    CHECK(gl.UseProgram != nullptr);
    CHECK(gl.CreateShader == nullptr);
    CHECK(gl.GetTexImage == nullptr);
    CHECK(gl.DrawArrays == nullptr);
    CHECK(proc_address::asked.count("glGenerateMipmap") == 1);

    proc_address::asked.clear();
    CHECK_EQ(nocturne_gl_load_api(), 1);
    CHECK(proc_address::asked.empty());
}

NOCTURNE_TEST_MAIN()
