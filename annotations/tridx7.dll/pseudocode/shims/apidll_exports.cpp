// =============================================================================
// APIDLL EXPORTS — tridx7.dll's export table for the built-in DLL registry
// =============================================================================
//
// The game loads its renderer with LoadLibraryA + GetProcAddress. Our
// LoadLibraryA shim resolves known DLL names against a compiled-in registry
// (shims/builtin_dll.h) instead of the filesystem, and this file is the entry
// tridx7.dll contributes to it: the same "APIDLL*" names a real tridx7.dll
// exports, each pointing at the decompiled implementation.
//
// It lives here, beside the DLL's own sources, rather than in the registry
// itself — taking the address of these functions needs their real prototypes,
// which come from tridx7's include tree, and that tree cannot be pulled into
// the exe's shims (the two system/ddraw.h headers collide). The registry only
// stores the name -> provider mapping.
//
// This is the whole hookup for a decompiled renderer: add its rows here, add
// one module row in builtin_dll.cpp, and the game's loader does the rest.
//
// 37 exports, matching the real DLL exactly. The engine probes 60 "APIDLL*"
// names; the 23 it does not find here are absent from the shipped tridx7.dll
// too, and loadExternalRenderer's validate pass handles that the same way it
// always did (setting g_DLLFunctionsMissing for the optional ones).

#include "nocturne.h"
#include "builtin_dll.h"
#include "render_probe.h"
#include "gl_shader.h"

#include <string.h>

// The engine's currently-selected texture. Used purely as a bucket key so the
// probe can separate character geometry from set geometry — both ride
// render_flags 0x2cd, so a flags-keyed mean cannot tell them apart.
extern uchar *g_CurrentTextureData;

// The four draw entries are exported through probe wrappers rather than
// directly. The wrapper records (render_flags, polygon count) and tail-calls
// the real decompiled export unchanged — the reconstruction stays untouched,
// and the engine cannot tell the difference. See render_probe.h.
static int __cdecl probe_drawPolygon(SRenderVertex *vertices, int vertex_count,
                                     int render_flags) {
    nocturne_render_probe_texture(g_CurrentTextureData);
    nocturne_render_probe_draw((unsigned)render_flags, 1, NOCTURNE_PROBE_DRAWPOLYGON);
    return dll_dx7_cpp_APIDLLdrawPolygon_FUN_10004380(vertices, vertex_count, render_flags);
}

static int __cdecl probe_drawPolygon2(SRenderVertex **vertex_array, int vertex_count,
                                      int render_flags) {
    nocturne_render_probe_texture(g_CurrentTextureData);
    nocturne_render_probe_draw((unsigned)render_flags, 1, NOCTURNE_PROBE_DRAWPOLYGON2);
    return dll_dx7_cpp_APIDLLdrawPolygon2_FUN_100043c0(vertex_array, vertex_count, render_flags);
}

static int __cdecl probe_drawPolyList(SRenderVertex *vertex_buffer,
                                      SMRGLPrimitiveQuad **polygons, int polygon_count,
                                      int render_flags) {
    nocturne_render_probe_texture(g_CurrentTextureData);
    nocturne_render_probe_draw((unsigned)render_flags, polygon_count,
                               NOCTURNE_PROBE_DRAWPOLYLIST);
    return dll_dx7_cpp_APIDLLdrawPolyList_FUN_10004f00(vertex_buffer, polygons,
                                                       polygon_count, render_flags);
}

static int __cdecl probe_drawPolyList2(SRenderVertex *vertex_buffer,
                                       SInputFace **polygons, int polygon_count,
                                       int render_flags) {
    nocturne_render_probe_texture(g_CurrentTextureData);
    nocturne_render_probe_draw((unsigned)render_flags, polygon_count,
                               NOCTURNE_PROBE_DRAWPOLYLIST2);
    return dll_dx7_cpp_APIDLLdrawPolyList2_FUN_10005130(vertex_buffer, polygons,
                                                        polygon_count, render_flags);
}

// trigl.dll — the same renderer with the shader path on.
//
// Not a second renderer implementation: every entry point below is tridx7's,
// and only APIDLLinit differs, enabling the shader path before delegating. It
// exists as its own module purely so it appears in the in-game Graphics Options
// 3D-API selector (shims/builtin_dll.h drives that list from the registry, and
// names nothing), which makes shader-vs-fixed-function a runtime choice with no
// rebuild, no ini edit and no restart. See research/17-shader_renderer_migration.
//
// If the driver has no shader entry points or the program fails to build, the
// shader layer reports inactive and this renderer behaves exactly as tridx7.
static int __cdecl trigl_init(HWND windowHandle, CExternalRendererBridge *interface) {
    nocturne_gl_shader_set_enabled(1);
    return dll_dx7_cpp_APIDLLinit_FUN_10001a80(windowHandle, interface);
}

static const NocturneBuiltinExport g_Tridx7Exports[] = {
    { "APIDLLGetDisplayContext",     (void *)dll_dx7_cpp_APIDLLGetDisplayContext_FUN_10004d30 },
    { "APIDLLInformation",           (void *)dll_dx7_cpp_APIDLLInformation_FUN_100019a0 },
    { "APIDLLReleaseDisplayContext", (void *)dll_dx7_cpp_APIDLLReleaseDisplayContext_FUN_10004da0 },
    { "APIDLLadd3dLine",             (void *)dll_dx7_cpp_APIDLLadd3dLine_FUN_10004820 },
    { "APIDLLaddParticle",           (void *)dll_dx7_cpp_APIDLLaddParticle_FUN_10004800 },
    { "APIDLLbeginScene",            (void *)dll_dx7_cpp_APIDLLbeginScene_FUN_10002ce0 },
    { "APIDLLbuildCardList",         (void *)dll_dx7_cpp_APIDLLbuildCardList_FUN_100052e0 },
    { "APIDLLclear",                 (void *)dll_dx7_cpp_APIDLLclear_FUN_10004840 },
    { "APIDLLclearZBox",             (void *)dll_dx7_cpp_APIDLLclearZBox_FUN_10004ac0 },
    { "APIDLLclearZBuffer",          (void *)dll_dx7_cpp_APIDLLclearZBuffer_FUN_10004a70 },
    { "APIDLLdrawPolyList",          (void *)probe_drawPolyList },
    { "APIDLLdrawPolyList2",         (void *)probe_drawPolyList2 },
    { "APIDLLdrawPolygon",           (void *)probe_drawPolygon },
    { "APIDLLdrawPolygon2",          (void *)probe_drawPolygon2 },
    { "APIDLLendScene",              (void *)dll_dx7_cpp_APIDLLendScene_FUN_10002d10 },
    { "APIDLLflushLineList",         (void *)dll_dx7_cpp_APIDLLflushLineList_FUN_10004830 },
    { "APIDLLflushParticleList",     (void *)dll_dx7_cpp_APIDLLflushParticleList_FUN_10004810 },
    { "APIDLLgetVideoMemory",        (void *)dll_dx7_cpp_APIDLLgetVideoMemory_FUN_10005280 },
    { "APIDLLinit",                  (void *)dll_dx7_cpp_APIDLLinit_FUN_10001a80 },
    { "APIDLLkill",                  (void *)dll_dx7_cpp_APIDLLkill_FUN_10002460 },
    { "APIDLLlockFrame",             (void *)dll_dx7_cpp_APIDLLlockFrame_FUN_10002d90 },
    { "APIDLLlockHoldBuffer",        (void *)dll_dx7_cpp_APIDLLlockHoldBuffer_FUN_10005350 },
    { "APIDLLmasterZBuffer",         (void *)dll_dx7_cpp_APIDLLmasterZBuffer_FUN_10004e10 },
    { "APIDLLrestoreVideoMode",      (void *)dll_dx7_cpp_APIDLLrestoreVideoMode_FUN_10002be0 },
    { "APIDLLrestoreZBuffer",        (void *)dll_dx7_cpp_APIDLLrestoreZBuffer_FUN_10004e90 },
    { "APIDLLselectCard",            (void *)dll_dx7_cpp_APIDLLselectCard_FUN_100052c0 },
    { "APIDLLselectTexture",         (void *)dll_dx7_cpp_APIDLLselectTexture_FUN_10003e90 },
    { "APIDLLsetColorTable16",       (void *)dll_dx7_cpp_APIDLLsetColorTable16_FUN_10004b30 },
    { "APIDLLsetFogColor",           (void *)dll_dx7_cpp_APIDLLsetFogColor_FUN_100049f0 },
    { "APIDLLsetMipMapLevel",        (void *)dll_dx7_cpp_APIDLLsetMipMapLevel_FUN_10003f00 },
    { "APIDLLsetVideoMode",          (void *)dll_dx7_cpp_APIDLLsetVideoMode_FUN_10002500 },
    { "APIDLLsetVideoMode2",         (void *)dll_dx7_cpp_APIDLLsetVideoMode2_FUN_10002bb0 },
    { "APIDLLsync",                  (void *)dll_dx7_cpp_APIDLLsync_FUN_10004a60 },
    { "APIDLLtoggle",                (void *)dll_dx7_cpp_APIDLLtoggle_FUN_100024b0 },
    { "APIDLLunlockFrame",           (void *)dll_dx7_cpp_APIDLLunlockFrame_FUN_10002e60 },
    { "APIDLLunlockHoldBuffer",      (void *)dll_dx7_cpp_APIDLLunlockHoldBuffer_FUN_100053a0 },
    { "APIDLLupdateTexture",         (void *)dll_dx7_cpp_APIDLLupdateTexture_FUN_10003ed0 },
};

extern "C" const NocturneBuiltinExport *nocturne_tridx7_exports(int *count) {
    if (count != nullptr) {
        *count = (int)(sizeof(g_Tridx7Exports) / sizeof(g_Tridx7Exports[0]));
    }
    return g_Tridx7Exports;
}

// trigl.dll's table: tridx7's rows verbatim, with APIDLLinit swapped for the
// wrapper above. Built at startup rather than duplicated as a literal so the
// two can never drift when a row is added to g_Tridx7Exports.
static NocturneBuiltinExport g_TriglExports[sizeof(g_Tridx7Exports) /
                                            sizeof(g_Tridx7Exports[0])];

extern "C" const NocturneBuiltinExport *nocturne_trigl_exports(int *count) {
    static bool built = false;
    const int   n     = (int)(sizeof(g_Tridx7Exports) / sizeof(g_Tridx7Exports[0]));

    if (!built) {
        for (int i = 0; i < n; ++i) {
            g_TriglExports[i] = g_Tridx7Exports[i];
            if (strcmp(g_TriglExports[i].name, "APIDLLinit") == 0) {
                g_TriglExports[i].proc = (void *)trigl_init;
            }
        }
        built = true;
    }
    if (count != nullptr) *count = n;
    return g_TriglExports;
}
