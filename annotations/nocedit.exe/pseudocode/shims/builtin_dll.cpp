// =============================================================================
// BUILT-IN DLL REGISTRY — table of compiled-in renderer DLL stand-ins
// =============================================================================
//
// See builtin_dll.h for how this is consumed. This file is the only place that
// names a renderer DLL; add a module row here to make it selectable.

#include "builtin_dll.h"
#include "shim_config.h"

#include <stddef.h>
#include <string.h>
#include <strings.h>

// -----------------------------------------------------------------------------
// Export-table providers
// -----------------------------------------------------------------------------
// Each built-in DLL builds its own "APIDLL*" table beside its own sources, where
// that program's prototypes are visible, and hands it over through one of these.
// See annotations/tridx7.dll/pseudocode/shims/apidll_exports.cpp.

extern "C" const NocturneBuiltinExport *nocturne_tridx7_exports(int *count);

// -----------------------------------------------------------------------------
// Registry
// -----------------------------------------------------------------------------
// Order here is the order the Graphics Options 3D-API selector cycles through.

static const NocturneBuiltinModule g_BuiltinModules[] = {
    { "tridx7.dll", nocturne_tridx7_exports },
    // { "tridx6.dll", nocturne_tridx6_exports },
    // { "trid3d.dll", nocturne_trid3d_exports },
    // { "tri3dfx.dll", nocturne_tri3dfx_exports },
};

static const int g_BuiltinModuleCount =
    (int)(sizeof(g_BuiltinModules) / sizeof(g_BuiltinModules[0]));

// The game passes bare DLL names, but tolerate a path prefix so a value that
// arrived via pod.ini's rendererDLLPath still matches.
static const char *basename_of(const char *path) {
    const char *base = path;
    const char *p;
    for (p = path; *p; p++) {
        if (*p == '/' || *p == '\\') {
            base = p + 1;
        }
    }
    return base;
}

static const NocturneBuiltinModule *find_module(const char *dll_name) {
    int i;
    if (!dll_name || !*dll_name) {
        return NULL;
    }
    for (i = 0; i < g_BuiltinModuleCount; i++) {
        if (strcasecmp(basename_of(dll_name), g_BuiltinModules[i].dll_name) == 0) {
            return &g_BuiltinModules[i];
        }
    }
    return NULL;
}

extern "C" int nocturne_builtin_dll_available(const char *dll_name) {
#if !NOCTURNE_AUTHENTIC_RENDERER_DLL
    return find_module(dll_name) != NULL;
#else
    (void)dll_name;
    return 0;
#endif
}

extern "C" const char *nocturne_builtin_dll_next(const char *current) {
#if !NOCTURNE_AUTHENTIC_RENDERER_DLL
    const NocturneBuiltinModule *module;
    if (g_BuiltinModuleCount == 0) {
        return NULL;
    }
    module = find_module(current);
    if (module == NULL) {
        return g_BuiltinModules[0].dll_name;
    }
    return g_BuiltinModules[(int)(module - g_BuiltinModules + 1) %
                            g_BuiltinModuleCount].dll_name;
#else
    (void)current;
    return NULL;
#endif
}

extern "C" void *nocturne_builtin_dll_open(const char *dll_name) {
#if !NOCTURNE_AUTHENTIC_RENDERER_DLL
    // The module row's own address is the handle — stable, unique, non-null.
    return (void *)find_module(dll_name);
#else
    (void)dll_name;
    return NULL;
#endif
}

extern "C" int nocturne_builtin_dll_is_handle(void *handle) {
    const NocturneBuiltinModule *module = (const NocturneBuiltinModule *)handle;
    return module >= g_BuiltinModules &&
           module < g_BuiltinModules + g_BuiltinModuleCount;
}

extern "C" void *nocturne_builtin_dll_sym(void *handle, const char *proc_name) {
    const NocturneBuiltinModule *module = (const NocturneBuiltinModule *)handle;
    const NocturneBuiltinExport *exports;
    int count = 0;
    int i;
    if (!nocturne_builtin_dll_is_handle(handle) || !proc_name ||
        module->exports == NULL) {
        return NULL;
    }
    exports = module->exports(&count);
    if (exports == NULL) {
        return NULL;
    }
    for (i = 0; i < count; i++) {
        // Export names are case-sensitive, as with a real PE export table.
        if (exports[i].name && strcmp(exports[i].name, proc_name) == 0) {
            return exports[i].proc;
        }
    }
    return NULL;
}
