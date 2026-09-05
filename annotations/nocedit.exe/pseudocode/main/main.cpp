// =============================================================================
// NOCTURNE CUSTOM ENTRY POINT
// =============================================================================
//
// Replaces the decompiled entry.c / ProcessInitTermHandlers /
// InitializeWinAppRuntime stack-probe scaffolding. Those functions only
// exist to set up the Watcom runtime — we don't need any of it when linking
// against a modern C/C++ runtime.
//
// Responsibilities:
//   1. Initialize the cross-platform Win32 shim function pointers.
//   2. Synthesize the HINSTANCE/cmdline arguments the decompiled winMain
//      expects.
//   3. Hand control to the decompiled winMain and propagate its exit code.
//

#include "nocturne.h"
#include "core/shim_init.h"

// Entries 0..154 are game static initializers (actor registration, vtable
// setup, etc.). Entries 155..165 are Watcom CRT init handlers that we skip
// since we link against a modern C/C++ runtime.
static void runStaticInitializers(void)
{
    for (int i = 0; i < 155; i++) {
        if (g_InitHandlers[i].func != (RUNTIME_HANDLER_FUNC *)0) {
            g_InitHandlers[i].func();
            g_InitHandlers[i].status = 0x02;
        }
    }
}

int main(int argc, char** argv)
{
    shims_init_all();
    runStaticInitializers();

    HINSTANCE hInstance     = (*g_GetModuleHandleAFunc)((LPCSTR)0);
    HINSTANCE hPrevInstance = (HINSTANCE)0;
    LPSTR     lpCmdLine     = (LPSTR)(argc > 1 ? argv[1] : "");
    const int nCmdShow      = 10;  // SW_SHOWDEFAULT, mirroring entry.c

    return wincore_winrun_cpp_winMain_FUN_005f3680(
        hInstance, hPrevInstance, lpCmdLine, nCmdShow);
}
