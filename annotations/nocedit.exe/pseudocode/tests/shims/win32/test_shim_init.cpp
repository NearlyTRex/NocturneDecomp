// =============================================================================
// SHIM INIT — every API the game imports, wired up before WinMain
// =============================================================================
//
// shims_init_all fills the function pointers the game calls Windows and
// DirectX through, each module's own init in turn, and tells SDL not to have
// the window manager ask whether a busy game is responding.

#include "globals/globals_610000.h"
#include "nocturne_test.h"
#include "win32/shim_init.h"

// The test's own main(), which SDL would otherwise rename on Windows.
#define SDL_MAIN_HANDLED
#include <SDL.h>
#include <string>

NOCTURNE_TEST(every_module_is_wired_up) {
    shims_init_all();
    CHECK(g_CloseHandleFunc != nullptr);         // kernel32
    CHECK(g_BringWindowToTopFunc != nullptr);    // user32
    CHECK(g_CreateBrushIndirectFunc != nullptr); // wingdi
    CHECK(g_joyGetDevCapsAFunc != nullptr);      // mmsystem
    CHECK(g_GetUserNameAFunc != nullptr);        // advapi32
    CHECK(g_acceptFunc != nullptr);              // winsock
    CHECK(g_DirectDrawCreateFunc != nullptr);    // ddraw
    CHECK(g_DirectSoundCreateFunc != nullptr);   // dsound
    CHECK_EQ(std::string(SDL_GetHint(SDL_HINT_VIDEO_X11_NET_WM_PING)), std::string("0"));
}

NOCTURNE_TEST_MAIN()
