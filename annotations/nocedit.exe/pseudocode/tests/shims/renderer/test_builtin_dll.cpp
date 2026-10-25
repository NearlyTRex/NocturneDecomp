// =============================================================================
// BUILT-IN DLL REGISTRY — the renderers this build has, by the names the game
// loads them by
// =============================================================================
//
// The game names its renderer in g_RendererDllPath, LoadLibraryA's it, and asks
// GetProcAddress for each APIDLL* entry point; the Graphics Options screen
// steps the name through the renderers there are. What matters is that the
// name the game or pod.ini gives finds the module however it is spelled, that
// a name this build cannot load is never left selected, and that a module's
// exports are found by their exact names.

#include "nocturne_test.h"
#include "renderer/builtin_dll.h"

#include <cstring>
#include <string>

extern "C" void *nocturne_test_trigl_init(void);
extern "C" void *nocturne_test_trigl_information(void);

namespace {

// g_RendererDllPath's size.
struct Path {
    char text[256];
    explicit Path(const char *initial) {
        strcpy(text, initial);
    }
};

} // namespace

// The game's name, in any case, with or without the directory pod.ini may give.
NOCTURNE_TEST(a_registered_name_opens_however_it_is_spelled) {
    void *handle = nocturne_builtin_dll_open("trigl.dll");
    CHECK(handle != nullptr);
    CHECK(nocturne_builtin_dll_open("TRIGL.DLL") == handle);
    CHECK(nocturne_builtin_dll_open("C:\\Nocturne\\trigl.dll") == handle);
    CHECK(nocturne_builtin_dll_open("renderers/Trigl.dll") == handle);
    CHECK(nocturne_builtin_dll_is_handle(handle));
}

// What the registry does not have does not open: a renderer this build lacks,
// another program's DLL, no name at all.
NOCTURNE_TEST(an_unregistered_name_does_not_open) {
    CHECK(nocturne_builtin_dll_open("tridx7.dll") == nullptr);
    CHECK(nocturne_builtin_dll_open("winmm.dll") == nullptr);
    CHECK(nocturne_builtin_dll_open("trigl.dll.bak") == nullptr);
    CHECK(nocturne_builtin_dll_open("") == nullptr);
    CHECK(nocturne_builtin_dll_open(nullptr) == nullptr);
}

// Only a handle open gave is one: not null, and not an address past the table.
NOCTURNE_TEST(only_a_handle_open_gave_is_a_handle) {
    void *handle = nocturne_builtin_dll_open("trigl.dll");
    CHECK(!nocturne_builtin_dll_is_handle(nullptr));
    CHECK(!nocturne_builtin_dll_is_handle((NocturneBuiltinModule *)handle + 1));
}

// Exports are found by their exact names, as in a PE export table.
NOCTURNE_TEST(exports_are_found_by_their_exact_names) {
    void *handle = nocturne_builtin_dll_open("trigl.dll");
    CHECK(nocturne_builtin_dll_sym(handle, "APIDLLinit") == nocturne_test_trigl_init());
    CHECK(nocturne_builtin_dll_sym(handle, "APIDLLInformation") ==
          nocturne_test_trigl_information());
    CHECK(nocturne_builtin_dll_sym(handle, "apidllinit") == nullptr);
    CHECK(nocturne_builtin_dll_sym(handle, "APIDLLshutdown") == nullptr);
    CHECK(nocturne_builtin_dll_sym(handle, nullptr) == nullptr);
}

// A renderer this build has stays selected; one it lacks is replaced by one it
// has, before the game tries to load it.
NOCTURNE_TEST(a_renderer_this_build_lacks_is_never_left_selected) {
    Path kept("TRIGL.DLL");
    nocturne_builtin_dll_snap(kept.text);
    CHECK_EQ(std::string(kept.text), std::string("TRIGL.DLL"));
    Path lacked("tridx7.dll");
    nocturne_builtin_dll_snap(lacked.text);
    CHECK_EQ(std::string(lacked.text), std::string("trigl.dll"));
}

// The 3D API option steps round the renderers there are, starting from the
// first when the current one is not among them.
NOCTURNE_TEST(the_3d_api_option_steps_round_the_renderers_there_are) {
    Path path("tri3dfx.dll");
    nocturne_builtin_dll_step(path.text);
    CHECK_EQ(std::string(path.text), std::string("trigl.dll"));
    nocturne_builtin_dll_step(path.text); // one renderer: round to itself
    CHECK_EQ(std::string(path.text), std::string("trigl.dll"));
}

NOCTURNE_TEST_MAIN()
