#pragma once

// =============================================================================
// SHIM CONFIG — minimal stub for nocturne.exe
// =============================================================================
// nocturne.h unconditionally includes this header, but nocturne.exe currently
// has no shim/keep sources, so none of the NOCTURNE_* behavior toggles defined
// in nocedit.exe's shim_config.h are referenced by its generated headers or
// globals. This empty stub is all that is needed for the header/globals tree to
// compile. When nocturne.exe gains shim/keep code, port the relevant toggles
// from annotations/nocedit.exe/pseudocode/shims/shim_config.h as they are used.
