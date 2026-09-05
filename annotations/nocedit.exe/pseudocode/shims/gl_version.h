#pragma once

// =============================================================================
// GL VERSION QUERY — the live context's version, for display
// =============================================================================
//
// Forward-declaration only, reached by decompiled TUs through nocturne.h like
// the other shim queries in shim_config.h. Kept separate from gl_present.h
// because that header names SDL types, and this has to be includable from a
// decompiled TU that knows nothing about SDL.
//
// Exists so the Graphics Options "3D API" line can name the shader renderer by
// the version actually running ("OpenGL 4.6") rather than a build-time guess.
// The shipped label is a hardcoded stricmp chain over the four original DLLs
// (DirectX 5/6/7, Voodoo Blit Emulation) with a "Custom" catch-all, which is
// where any renderer this build adds would otherwise land.

#ifdef __cplusplus
extern "C" {
#endif

// "4.6", "3.3", … from GL_VERSION's leading major.minor, or "" when there is no
// current context (acceleration off, or the GL path unavailable). Never null,
// so callers can print it unconditionally. Points at static storage.
const char *nocturne_gl_version_short(void);

#ifdef __cplusplus
}
#endif
