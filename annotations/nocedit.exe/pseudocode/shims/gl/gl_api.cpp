// =============================================================================
// GL API — dynamically loaded OpenGL entry points
// =============================================================================
//
// See gl_api.h for why these are loaded rather than linked.

#include "shim_config.h"

#if NOCTURNE_GL_PRESENT

#include "gl/gl_api.h"
#include "core/debug_log.h"

#include <SDL.h>

struct NocturneGLApi gl;

namespace {

bool g_loaded = false;
bool g_failed = false;

// Resolve one entry point, recording the first failure so the caller can report
// a specific missing symbol rather than a blanket "GL unavailable".
template <typename Fn>
void load_one(Fn *slot, const char *name, const char **first_missing) {
    *slot = reinterpret_cast<Fn>(SDL_GL_GetProcAddress(name));
    if (*slot == nullptr && *first_missing == nullptr) {
        *first_missing = name;
    }
}

// Resolve one OPTIONAL entry point. Unlike load_one this never records a
// missing symbol, because a null here must not take the whole GL path down —
// callers are required to null-check and fall back.
template <typename Fn>
void load_optional(Fn *slot, const char *name) {
    *slot = reinterpret_cast<Fn>(SDL_GL_GetProcAddress(name));
}

}  // namespace

#define NOCTURNE_GL_LOAD(field) load_one(&gl.field, "gl" #field, &missing)
#define NOCTURNE_GL_LOAD_OPT(field) load_optional(&gl.field, "gl" #field)

extern "C" int nocturne_gl_load_api(void) {
    if (g_loaded) return 1;
    if (g_failed) return 0;

    const char *missing = nullptr;

    NOCTURNE_GL_LOAD(GetString);
    NOCTURNE_GL_LOAD(GetError);
    NOCTURNE_GL_LOAD(GetIntegerv);

    NOCTURNE_GL_LOAD(Viewport);
    NOCTURNE_GL_LOAD(Scissor);
    NOCTURNE_GL_LOAD(ClearColor);
    NOCTURNE_GL_LOAD(ClearDepth);
    NOCTURNE_GL_LOAD(Clear);
    NOCTURNE_GL_LOAD(PixelStorei);
    NOCTURNE_GL_LOAD(ReadBuffer);
    NOCTURNE_GL_LOAD(ReadPixels);
    NOCTURNE_GL_LOAD_OPT(GetTexImage);

    NOCTURNE_GL_LOAD(Enable);
    NOCTURNE_GL_LOAD(Disable);
    NOCTURNE_GL_LOAD(BlendFunc);
    NOCTURNE_GL_LOAD(DepthFunc);
    NOCTURNE_GL_LOAD(DepthMask);
    NOCTURNE_GL_LOAD(DepthRange);
    NOCTURNE_GL_LOAD(CullFace);
    NOCTURNE_GL_LOAD(FrontFace);
    NOCTURNE_GL_LOAD(PolygonMode);

    NOCTURNE_GL_LOAD(GenFramebuffers);
    NOCTURNE_GL_LOAD(DeleteFramebuffers);
    NOCTURNE_GL_LOAD(BindFramebuffer);
    NOCTURNE_GL_LOAD(FramebufferTexture2D);
    NOCTURNE_GL_LOAD(CheckFramebufferStatus);
    NOCTURNE_GL_LOAD(GenRenderbuffers);
    NOCTURNE_GL_LOAD(DeleteRenderbuffers);
    NOCTURNE_GL_LOAD(BindRenderbuffer);
    NOCTURNE_GL_LOAD(RenderbufferStorage);
    NOCTURNE_GL_LOAD(FramebufferRenderbuffer);
    NOCTURNE_GL_LOAD(BlitFramebuffer);

    NOCTURNE_GL_LOAD(GenTextures);
    NOCTURNE_GL_LOAD(DeleteTextures);
    NOCTURNE_GL_LOAD(BindTexture);
    NOCTURNE_GL_LOAD(TexParameteri);
    NOCTURNE_GL_LOAD(TexImage2D);
    NOCTURNE_GL_LOAD(TexSubImage2D);

    NOCTURNE_GL_LOAD(DrawElements);

    // Shaders and buffers. Loaded with the OPTIONAL macro: a missing name under
    // NOCTURNE_GL_LOAD sets g_failed and takes the whole GL path down with one
    // line naming the first symbol it could not find, whereas the callers here
    // check for null and say which capability is missing and what it costs. On a
    // context that has none of this there is nothing to draw with either way; the
    // difference is whether the log explains that.
    NOCTURNE_GL_LOAD_OPT(CreateShader);
    NOCTURNE_GL_LOAD_OPT(ShaderSource);
    NOCTURNE_GL_LOAD_OPT(CompileShader);
    NOCTURNE_GL_LOAD_OPT(GetShaderiv);
    NOCTURNE_GL_LOAD_OPT(GetShaderInfoLog);
    NOCTURNE_GL_LOAD_OPT(DeleteShader);
    NOCTURNE_GL_LOAD_OPT(CreateProgram);
    NOCTURNE_GL_LOAD_OPT(AttachShader);
    NOCTURNE_GL_LOAD_OPT(LinkProgram);
    NOCTURNE_GL_LOAD_OPT(GetProgramiv);
    NOCTURNE_GL_LOAD_OPT(GetProgramInfoLog);
    NOCTURNE_GL_LOAD_OPT(DeleteProgram);
    NOCTURNE_GL_LOAD_OPT(UseProgram);
    NOCTURNE_GL_LOAD_OPT(GetUniformLocation);
    NOCTURNE_GL_LOAD_OPT(Uniform1i);
    NOCTURNE_GL_LOAD_OPT(Uniform1f);
    NOCTURNE_GL_LOAD_OPT(Uniform2f);
    NOCTURNE_GL_LOAD_OPT(Uniform3f);
    NOCTURNE_GL_LOAD_OPT(Uniform4f);
    NOCTURNE_GL_LOAD_OPT(ActiveTexture);

    NOCTURNE_GL_LOAD_OPT(GenBuffers);
    NOCTURNE_GL_LOAD_OPT(DeleteBuffers);
    NOCTURNE_GL_LOAD_OPT(BindBuffer);
    NOCTURNE_GL_LOAD_OPT(BufferData);
    NOCTURNE_GL_LOAD_OPT(BufferSubData);
    NOCTURNE_GL_LOAD_OPT(GetAttribLocation);
    NOCTURNE_GL_LOAD_OPT(BindAttribLocation);
    NOCTURNE_GL_LOAD_OPT(EnableVertexAttribArray);
    NOCTURNE_GL_LOAD_OPT(DisableVertexAttribArray);
    NOCTURNE_GL_LOAD_OPT(VertexAttribPointer);
    NOCTURNE_GL_LOAD_OPT(UniformMatrix4fv);
    NOCTURNE_GL_LOAD_OPT(DrawArrays);
    NOCTURNE_GL_LOAD_OPT(GenVertexArrays);
    NOCTURNE_GL_LOAD_OPT(DeleteVertexArrays);
    NOCTURNE_GL_LOAD_OPT(BindVertexArray);
    NOCTURNE_GL_LOAD_OPT(GenerateMipmap);

    if (missing != nullptr) {
        DLOG("render","gl_api: failed to resolve %s — GL path unavailable", missing);
        g_failed = true;
        return 0;
    }

    g_loaded = true;
    return 1;
}

#undef NOCTURNE_GL_LOAD
#undef NOCTURNE_GL_LOAD_OPT

#else  // !NOCTURNE_GL_PRESENT

#include "gl/gl_api.h"
struct NocturneGLApi gl;
extern "C" int nocturne_gl_load_api(void) { return 0; }

#endif  // NOCTURNE_GL_PRESENT
