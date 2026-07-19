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
//   1. Declare the decompiled entry points (or include their header).
//   2. Add a NOCTURNE_BUILTIN_EXPORT row per "APIDLL*" symbol to that
//      module's export array in builtin_dll.cpp.
//   3. Add one NOCTURNE_BUILTIN_MODULE row to g_BuiltinModules.
//
// Everything that asks "which renderers can this build actually use?" — the
// Graphics Options 3D-API selector included — goes through the queries below,
// so no call site names a specific DLL.

#ifdef __cplusplus
extern "C" {
#endif

// One exported symbol of a built-in module.
typedef struct NocturneBuiltinExport {
    const char *name;   // exported symbol name, e.g. "APIDLLinit"
    void       *proc;   // address of the compiled-in implementation
} NocturneBuiltinExport;

// One built-in module, keyed by the DLL name the game passes to LoadLibraryA.
typedef struct NocturneBuiltinModule {
    const char                  *dll_name;      // matched case-insensitively
    const NocturneBuiltinExport *exports;
    int                          export_count;
} NocturneBuiltinModule;

// Non-zero if `dll_name` has a compiled-in implementation registered.
//
// Registration is independent of how complete the export table is: a module
// with no exports yet still reports available, loads, and then fails its
// APIDLLInformation lookup exactly like a real DLL missing that entry point —
// which the game already handles by clearing g_UseDirect3D. That keeps a
// half-hooked renderer selectable (and visible in the menu) while it is being
// filled in.
int nocturne_builtin_dll_available(const char *dll_name);

// Next registered DLL name after `current`, wrapping around; used to drive the
// Graphics Options "3D API" cycle over exactly the renderers this build has.
// Returns the first registered module when `current` is null/empty/unknown, and
// null only when nothing at all is registered.
const char *nocturne_builtin_dll_next(const char *current);

// LoadLibraryA / GetProcAddress / FreeLibrary backing. `open` returns an opaque
// non-null handle (or null if unregistered); `is_handle` distinguishes it from
// a real dlopen handle so the shims know which path to take on teardown.
void *nocturne_builtin_dll_open(const char *dll_name);
int   nocturne_builtin_dll_is_handle(void *handle);
void *nocturne_builtin_dll_sym(void *handle, const char *proc_name);

#ifdef __cplusplus
}
#endif
