// =============================================================================
// BUILT-IN DLL REGISTRY — table of compiled-in renderer DLL stand-ins
// =============================================================================
//
// See builtin_dll.h for how this is consumed. This file is the only place that
// names a renderer DLL; add a module row here to make it selectable.

#include "renderer/builtin_dll.h"

#include "core/ascii_case.h"
#include "core/debug_log.h"
#include "shim_config.h"
#include "watcom/path.h"

#include <stddef.h>
#include <stdio.h>
#include <string.h>

// -----------------------------------------------------------------------------
// Export-table providers
// -----------------------------------------------------------------------------
// Each built-in DLL builds its own "APIDLL*" table beside its own sources, where
// that program's prototypes are visible, and hands it over through one of these.
//
// trigl.dll — the renderer this build implements itself, in shims/renderer/. It
// talks to OpenGL directly rather than through a Direct3D interface.
extern "C" const NocturneBuiltinExport *nocturne_trigl_native_exports(int *count);

// -----------------------------------------------------------------------------
// Registry
// -----------------------------------------------------------------------------
// Order here is the order the Graphics Options 3D-API selector cycles through.
// Every row has a provider, and every provider a table of named exports.

static const NocturneBuiltinModule g_BuiltinModules[] = {
    {"trigl.dll", nocturne_trigl_native_exports},
    // { "tridx6.dll", nocturne_tridx6_exports },
    // { "trid3d.dll", nocturne_trid3d_exports },
    // { "tri3dfx.dll", nocturne_tri3dfx_exports },
};

static const int g_BuiltinModuleCount =
    (int)(sizeof(g_BuiltinModules) / sizeof(g_BuiltinModules[0]));

static const NocturneBuiltinModule *find_module(const char *dll_name) {
    int i;
    if (!dll_name) {
        return NULL;
    }
    // The game passes bare DLL names, but tolerate a path prefix so a value that
    // arrived via pod.ini's rendererDLLPath still matches.
    for (i = 0; i < g_BuiltinModuleCount; i++) {
        if (nocturne_ascii_iequals(watcom_path_leaf(dll_name), g_BuiltinModules[i].dll_name)) {
            return &g_BuiltinModules[i];
        }
    }
    return NULL;
}

#if !NOCTURNE_AUTHENTIC_RENDERER_DLL

// The registered DLL after `current`, wrapping round; the first for one that
// is not registered.
static const char *next_module(const char *current) {
    const NocturneBuiltinModule *module = find_module(current);
    if (module == NULL) {
        // Logged because the Graphics Options line shows a label, not the DLL
        // name, so there is otherwise no way to tell which renderer the
        // selector has landed on.
        DLOG("render", "builtin_dll: 3D API cycle \"%s\" (unknown) -> \"%s\"", current,
             g_BuiltinModules[0].dll_name);
        return g_BuiltinModules[0].dll_name;
    }
    const char *next =
        g_BuiltinModules[(int)(module - g_BuiltinModules + 1) % g_BuiltinModuleCount].dll_name;
    DLOG("render", "builtin_dll: 3D API cycle \"%s\" -> \"%s\"", module->dll_name, next);
    return next;
}

// The size of g_RendererDllPath, the buffer the game hands over.
static const size_t kRendererPathSize = 256;

#endif

extern "C" void nocturne_builtin_dll_step(char *path) {
#if !NOCTURNE_AUTHENTIC_RENDERER_DLL
    snprintf(path, kRendererPathSize, "%s", next_module(path));
#else
    (void)path;
#endif
}

extern "C" void nocturne_builtin_dll_snap(char *path) {
    if (find_module(path) == NULL) {
        nocturne_builtin_dll_step(path);
    }
}

extern "C" void *nocturne_builtin_dll_open(const char *dll_name) {
#if !NOCTURNE_AUTHENTIC_RENDERER_DLL
    // The module row's own address is the handle — stable, unique, non-null.
    {
        const NocturneBuiltinModule *module = find_module(dll_name);
        // This is the authoritative "which renderer is live" line: it fires on
        // the load the engine performs during loadExternalRenderer, so it
        // reflects what was actually loaded rather than what the menu label
        // suggests. GetModuleHandle asks the same question of the same registry
        // and lands here too, so the line names the module rather than the entry
        // point that asked — winmm.dll appearing here is the joystick asking
        // whether it is present, and being told no.
        DLOG("render", "builtin_dll: open(\"%s\") -> %s", (dll_name != NULL) ? dll_name : "(null)",
             (module != NULL) ? "built-in module" : "NOT REGISTERED");
        return (void *)module;
    }
#else
    (void)dll_name;
    return NULL;
#endif
}

extern "C" int nocturne_builtin_dll_is_handle(void *handle) {
    const NocturneBuiltinModule *module = (const NocturneBuiltinModule *)handle;
    return module >= g_BuiltinModules && module < g_BuiltinModules + g_BuiltinModuleCount;
}

extern "C" void *nocturne_builtin_dll_sym(void *handle, const char *proc_name) {
    const NocturneBuiltinModule *module = (const NocturneBuiltinModule *)handle;
    int count = 0;
    int i;
    if (!proc_name) {
        return NULL;
    }
    const NocturneBuiltinExport *exports = module->exports(&count);
    for (i = 0; i < count; i++) {
        // Export names are case-sensitive, as with a real PE export table.
        if (strcmp(exports[i].name, proc_name) == 0) {
            return exports[i].proc;
        }
    }
    return NULL;
}
