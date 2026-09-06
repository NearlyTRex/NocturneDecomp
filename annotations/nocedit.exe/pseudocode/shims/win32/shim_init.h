#pragma once

// =============================================================================
// SHIM INITIALIZATION
// =============================================================================
//
// Initialization functions for each Win32 API shim module.
// Call shims_init_all() before the program's main entry point to wire up
// all global function pointers to their cross-platform implementations.
//

void shims_init_kernel32(void);
void shims_init_user32(void);
void shims_init_wingdi(void);
void shims_init_mmsystem(void);
void shims_init_advapi32(void);
void shims_init_winsock(void);
void shims_init_ddraw(void);
void shims_init_dsound(void);

void shims_init_all(void);
