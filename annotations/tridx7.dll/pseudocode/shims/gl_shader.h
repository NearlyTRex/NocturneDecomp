#pragma once

// =============================================================================
// GL SHADER SUPPORT — compile/link helper for the shader renderer path
// =============================================================================
//
// Step 0 of research/17-shader_renderer_migration: the plumbing, with no
// behaviour change. The shader path exists so the per-pixel lightmap can be
// applied to hardware-drawn geometry, which fixed function cannot do — see
// research/12 (the chapel window renders ~2x too bright because hardware draws
// land after compositeLightmapToFramebuffer and never receive the grid).
//
// Everything here is optional at runtime. If the driver has no shader entry
// points, or a shader fails to compile, nocturne_gl_shader_active() reports 0
// and the renderer stays on the fixed-function path it uses today. That is why
// gl_api.cpp loads the shader entry points with NOCTURNE_GL_LOAD_OPT rather
// than NOCTURNE_GL_LOAD, and why gl_shader.cpp carries no compile-time guard:
// one runtime check covers GL-absent, driver-without-shaders and
// failed-to-compile alike, where a #if could only ever cover the first.
//
// The shader path is selected per RENDERER, not by a compile flag: it is
// registered as a second built-in module ("trigl.dll") alongside tridx7.dll, so
// it appears in the in-game Graphics Options 3D-API selector and can be
// switched at runtime with no rebuild. See shims/builtin_dll.h.
//
// A compatibility-profile context keeps the client-array attributes visible to
// GLSL as gl_Vertex / gl_Color / gl_MultiTexCoord0 / gl_SecondaryColor, so the
// existing DrawElements path in gl_ddraw.cpp needs no change to be shaded.

#ifdef __cplusplus
extern "C" {
#endif

// Where each attribute sits inside the caller's vertex, in bytes. Passed rather
// than shared as a struct so the vertex layout stays owned by gl_ddraw.cpp,
// which builds it, while the GL mechanics stay here.
typedef struct NocturneGLVertexLayout {
    int stride;
    int pos;        // 4 floats, already w-premultiplied for the perspective divide
    int color;      // 4 unsigned bytes, normalised
    int secondary;  // 3 unsigned bytes, normalised (the 4th is the fog factor)
    int uv;         // 2 floats
    int fog;        // 1 float, 0..1, 1 = unfogged
} NocturneGLVertexLayout;

// Upload `count` vertices into the streaming buffer and point the program's
// generic attributes at them. Returns 1 when it took the draw, 0 when the modern
// path is unavailable (no shader, or a driver without buffer objects / generic
// attributes) and the caller must set up client arrays as before.
//
// This is the step that actually leaves fixed function: until now the shader
// read gl_Vertex / gl_Color / gl_MultiTexCoord0, which are just the compatibility
// profile's names for the client arrays it was supposed to be replacing.
int nocturne_gl_shader_bind_vertices(const void *base, int count,
                                     const NocturneGLVertexLayout *layout);

// Release what bind_vertices set up. Safe to call when it returned 0.
void nocturne_gl_shader_unbind_vertices(void);

// The pixel-space projection, column major, replacing ftransform()'s dependence
// on the fixed-function matrix stack. Ignored unless the modern path is in use.
//
// MUST be called with the program already bound, i.e. AFTER begin_draw:
// glUniform* writes to the currently bound program, so calling it earlier
// silently leaves the matrix at zero and the draw produces no geometry at all.
void nocturne_gl_shader_set_projection(const float matrix[16]);

// 1 when the program was built against generic attributes rather than the
// compatibility aliases — i.e. when bind_vertices can succeed.
int nocturne_gl_shader_modern_path(void);

// Force the compatibility (client-array) vertex stage even where the modern one
// is available. Set it, call nocturne_gl_shader_rebuild(), and the next frame
// draws the old way — so one scene can be captured both ways and the question
// "did leaving client arrays change any pixels?" becomes a measurement rather
// than an argument from two captures of different scenes.
extern int nocturne_gl_shader_force_compat;

// Drop the program so the next draw rebuilds it, picking up force_compat.
// Requires a current GL context; call it from a debugger between frames.
void nocturne_gl_shader_rebuild(void);

// Enable or disable the shader path. Called by trigl.dll's APIDLLinit wrapper
// before delegating to tridx7's init; harmless to call when unsupported.
void nocturne_gl_shader_set_enabled(int enabled);

// Non-zero once the shader path is enabled AND the program has compiled and
// linked. Every call site must check this and fall back to fixed function.
int nocturne_gl_shader_active(void);

// Build the program if enabled and not built yet. Safe to call every frame;
// only the first call does work. Returns nocturne_gl_shader_active().
// Requires a current GL context.
int nocturne_gl_shader_ensure(void);

// Bind the draw program and push the per-draw state fixed function would have
// carried. `texture_enabled` mirrors D3DTSS_COLOROP (0 = DISABLE, else
// MODULATE); `alpha_ref` is 0..1 with `alpha_func_greater` selecting the
// D3DCMP_GREATER colorkey the engine uses.
//
// `lightmap` asks for the engine's per-pixel light/fog grid to be applied to
// this draw — pass the device's in_scene flag, so 3D geometry is lightmapped
// and anything drawn outside BeginScene/EndScene is not. It is honoured only
// while the engine is publishing a grid (shims/lighting_bridge.h); otherwise
// the draw comes out exactly as it does today.
//
// No-op when inactive.
void nocturne_gl_shader_begin_draw(int texture_enabled,
                                   int alpha_test_enabled,
                                   float alpha_ref,
                                   int alpha_func_greater,
                                   int lightmap);

// D3D7 per-vertex fog for this draw: the factor rides in each vertex's specular
// alpha, delivered as gl_FogCoord, and 0 means replace the colour with
// `fog_color` outright. Fixed function cannot express this at all — GL fog is
// distance-based — so it is dropped on the tridx7 path and honoured here.
// Call after begin_draw; no-op when inactive.
void nocturne_gl_shader_set_vertex_fog(int enabled, const float fog_color[3]);

// Unbind, restoring fixed function for anything drawn outside the DLL path
// (the present blit, the scene upload). No-op when inactive.
void nocturne_gl_shader_end_draw(void);

// Drop the program, e.g. on context teardown.
void nocturne_gl_shader_shutdown(void);

// Which debug view the lightmap block paints, so a live frame can be asked what
// the shader is reading rather than having it inferred from how dark the result
// looks. Settable from a debugger mid-run:
//   0 off   1 grid coordinate (r=u, g=v)   2 fog   3 gain (128 = unity)
// Initialised from NOCTURNE_GL_LIGHTMAP_DEBUG on first use. A change takes
// effect on the next frame, since the uniform is pushed once per composite.
extern int nocturne_gl_lightmap_debug;

// Whether per-vertex fog is actually applied, live-settable so it can be A/B'd
// on one frame rather than argued about: -1 resolve from NOCTURNE_GL_VERTEX_FOG,
// 0 off (the dropped-term behaviour the fixed-function path has), 1 on.
// The histogram says the engine sets this term on 94% of vertices at mean 126 of
// 255, but the accelerated image already matches software to 1.0076 whole-frame,
// and both cannot be true without qualification — so measure before defaulting.
extern int nocturne_gl_vertex_fog;

#ifdef __cplusplus
}
#endif
