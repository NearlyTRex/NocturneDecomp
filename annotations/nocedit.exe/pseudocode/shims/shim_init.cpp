// =============================================================================
// SHIM INITIALIZATION - Master init for all Win32 API shims
// =============================================================================
//
// Wires up all global function pointers to their cross-platform shim
// implementations. Must be called before the program's WinMain entry point.
//

#include "shim_init.h"

void shims_init_all(void) {
    shims_init_kernel32();
    shims_init_user32();
    shims_init_wingdi();
    shims_init_mmsystem();
    shims_init_advapi32();
    shims_init_winsock();
    shims_init_ddraw();
    shims_init_dsound();
}
