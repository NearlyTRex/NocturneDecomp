// =============================================================================
// BUILT-IN DLL REGISTRY — table of compiled-in renderer DLL stand-ins
// =============================================================================
//
// See builtin_dll.h for how this is consumed. This file is the only place that
// names a renderer DLL; add a module row here to make it selectable.

#include "renderer/builtin_dll.h"
#include "shim_config.h"
#include "core/debug_log.h"
#include "core/ascii_case.h"

#include <stddef.h>
#include <string.h>

// -----------------------------------------------------------------------------
// Export-table providers
// -----------------------------------------------------------------------------
// Each built-in DLL builds its own "APIDLL*" table beside its own sources, where
// that program's prototypes are visible, and hands it over through one of these.
// See annotations/tridx7.dll/pseudocode/shims/apidll_exports.cpp.

extern "C" const NocturneBuiltinExport *nocturne_tridx7_exports(int *count);

// tridx7gl.dll — tridx7's entry points with the shader path enabled at init.
// Not a separate renderer implementation; registering it as its own module is
// what puts it in the Graphics Options 3D-API cycle, making shader-vs-fixed-
// function a runtime choice.
extern "C" const NocturneBuiltinExport *nocturne_tridx7gl_exports(int *count);

// trigl.dll — the renderer this build implements itself, in shims/renderer/.
// It talks to OpenGL directly rather than through a Direct3D interface, and
// shares no code with the two above.
extern "C" const NocturneBuiltinExport *nocturne_trigl_native_exports(int *count);

// -----------------------------------------------------------------------------
// Registry
// -----------------------------------------------------------------------------
// Order here is the order the Graphics Options 3D-API selector cycles through.

static const NocturneBuiltinModule g_BuiltinModules[] = {
    { "tridx7.dll",   nocturne_tridx7_exports },
    { "tridx7gl.dll", nocturne_tridx7gl_exports },
    { "trigl.dll",    nocturne_trigl_native_exports },
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
        if (nocturne_ascii_iequals(basename_of(dll_name), g_BuiltinModules[i].dll_name)) {
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
        // Logged because the Graphics Options line shows a label, not the DLL
        // name, so there is otherwise no way to tell which renderer the
        // selector has landed on.
        DLOG("render","builtin_dll: 3D API cycle \"%s\" (unknown) -> \"%s\"",
                  (current != NULL) ? current : "", g_BuiltinModules[0].dll_name);
        return g_BuiltinModules[0].dll_name;
    }
    {
        const char *next = g_BuiltinModules[(int)(module - g_BuiltinModules + 1) %
                                            g_BuiltinModuleCount].dll_name;
        DLOG("render","builtin_dll: 3D API cycle \"%s\" -> \"%s\"", module->dll_name, next);
        return next;
    }
#else
    (void)current;
    return NULL;
#endif
}

extern "C" void *nocturne_builtin_dll_open(const char *dll_name) {
#if !NOCTURNE_AUTHENTIC_RENDERER_DLL
    // The module row's own address is the handle — stable, unique, non-null.
    {
        const NocturneBuiltinModule *module = find_module(dll_name);
        // This is the authoritative "which renderer is live" line: it fires on
        // the LoadLibraryA the engine performs during loadExternalRenderer, so
        // it reflects what was actually loaded rather than what the menu label
        // suggests.
        DLOG("render","builtin_dll: LoadLibraryA(\"%s\") -> %s",
                  (dll_name != NULL) ? dll_name : "(null)",
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
