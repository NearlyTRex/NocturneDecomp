#pragma once

// =============================================================================
// BUILT-IN DLL REGISTRY — compiled-in stand-ins for the game's renderer DLLs
// =============================================================================
//
// The game loads its 3D renderer as a plain Win32 DLL: LoadLibraryA on the
// name in g_RendererDllPath ("trid3d.dll" / "tridx6.dll" / "tridx7.dll" /
// "tri3dfx.dll"), then GetProcAddress for each "APIDLL*" entry point. See
// wincore/windll.cpp:loadExternalRenderer_FUN_005b6750.
//
// We own both of those shims (shims/kernel32.cpp), so a decompiled renderer
// does not need to be a real shared object on disk. Registering it here makes
// LoadLibraryA hand back a synthetic module handle and GetProcAddress resolve
// against a table of function pointers into our own compiled-in code — the
// game's loader path runs completely unmodified.
//
// Adding another renderer later is a table edit, not a code change:
//
//   1. Beside that renderer's sources, build its table of NocturneBuiltinExport
//      rows, one per "APIDLL*" symbol, and hand it over through a provider
//      (trigl_exports.cpp's nocturne_trigl_native_exports is one).
//   2. Add one row naming the DLL and its provider to g_BuiltinModules in
//      builtin_dll.cpp.
//
// Everything that asks "which renderers can this build actually use?" — the
// Graphics Options 3D-API selector included — goes through the queries below,
// so no call site names a specific DLL.

#ifdef __cplusplus
extern "C" {
#endif

// One exported symbol of a built-in module.
typedef struct NocturneBuiltinExport {
    const char *name; // exported symbol name, e.g. "APIDLLinit"
    void *proc;       // address of the compiled-in implementation
} NocturneBuiltinExport;

// Returns a module's export table and its length.
//
// Indirection rather than a plain array, because a renderer's export table has
// to be built where that program's headers are visible: taking the address of
// APIDLLinit needs its real prototype, and the renderer's type tree cannot be
// included here (its system/ddraw.h collides with the exe's). So each built-in
// DLL defines its own table next to its own sources and exposes it through one
// of these; this file just holds the name -> provider mapping.
typedef const NocturneBuiltinExport *(*NocturneBuiltinExportProvider)(int *count);

// One built-in module, keyed by the DLL name the game passes to LoadLibraryA.
typedef struct NocturneBuiltinModule {
    const char *dll_name; // matched case-insensitively
    NocturneBuiltinExportProvider exports;
} NocturneBuiltinModule;

// Registration is independent of how complete the export table is: a module
// with no exports yet still loads, and then fails its APIDLLInformation lookup
// exactly like a real DLL missing that entry point — which the game already
// handles by clearing g_UseDirect3D. That keeps a half-hooked renderer
// selectable (and visible in the menu) while it is being filled in.

// Writes into `path` (g_RendererDllPath) the registered DLL after it, wrapping
// round, or the first for one that is not registered: the Graphics Options
// "3D API" step, over exactly the renderers this build has. Unchanged in the
// authentic build, which has none.
void nocturne_builtin_dll_step(char *path);

// Leaves `path` alone when it names a registered DLL, and otherwise steps it to
// one: selecting a renderer this build cannot load would fail immediately.
void nocturne_builtin_dll_snap(char *path);

// LoadLibraryA / GetProcAddress / FreeLibrary backing. `open` returns an opaque
// non-null handle (or null if unregistered, or for no name); `is_handle` says
// whether a handle is one of these, the only kind there is. `sym` takes only
// such a handle, and answers null for a name it does not export or none.
void *nocturne_builtin_dll_open(const char *dll_name);
int nocturne_builtin_dll_is_handle(void *handle);
void *nocturne_builtin_dll_sym(void *handle, const char *proc_name);

#ifdef __cplusplus
}
#endif
