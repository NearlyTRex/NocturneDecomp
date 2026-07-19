// =============================================================================
// GL API — dynamically loaded OpenGL entry points
// =============================================================================
//
// See gl_api.h for why these are loaded rather than linked.

#include "shim_config.h"

#if NOCTURNE_GL_PRESENT

#include "gl_api.h"
#include "debug_log.h"

#include <SDL.h>

struct NocturneGLApi gl;
void (APIENTRY *nocturne_glSecondaryColorPointer)(GLint, GLenum, GLsizei, const void *) = nullptr;

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

}  // namespace

#define NOCTURNE_GL_LOAD(field) load_one(&gl.field, "gl" #field, &missing)

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

    NOCTURNE_GL_LOAD(Enable);
    NOCTURNE_GL_LOAD(Disable);
    NOCTURNE_GL_LOAD(BlendFunc);
    NOCTURNE_GL_LOAD(AlphaFunc);
    NOCTURNE_GL_LOAD(DepthFunc);
    NOCTURNE_GL_LOAD(DepthMask);
    NOCTURNE_GL_LOAD(DepthRange);
    NOCTURNE_GL_LOAD(ShadeModel);
    NOCTURNE_GL_LOAD(CullFace);
    NOCTURNE_GL_LOAD(FrontFace);
    NOCTURNE_GL_LOAD(PolygonMode);
    NOCTURNE_GL_LOAD(Fogi);
    NOCTURNE_GL_LOAD(Fogf);
    NOCTURNE_GL_LOAD(Fogfv);

    NOCTURNE_GL_LOAD(MatrixMode);
    NOCTURNE_GL_LOAD(LoadIdentity);
    NOCTURNE_GL_LOAD(PushMatrix);
    NOCTURNE_GL_LOAD(PopMatrix);
    NOCTURNE_GL_LOAD(Ortho);
    NOCTURNE_GL_LOAD(LoadMatrixf);

    NOCTURNE_GL_LOAD(GenTextures);
    NOCTURNE_GL_LOAD(DeleteTextures);
    NOCTURNE_GL_LOAD(BindTexture);
    NOCTURNE_GL_LOAD(TexParameteri);
    NOCTURNE_GL_LOAD(TexImage2D);
    NOCTURNE_GL_LOAD(TexSubImage2D);
    NOCTURNE_GL_LOAD(TexEnvi);

    NOCTURNE_GL_LOAD(Begin);
    NOCTURNE_GL_LOAD(End);
    NOCTURNE_GL_LOAD(Color4f);
    NOCTURNE_GL_LOAD(TexCoord2f);
    NOCTURNE_GL_LOAD(Vertex2f);

    NOCTURNE_GL_LOAD(EnableClientState);
    NOCTURNE_GL_LOAD(DisableClientState);
    NOCTURNE_GL_LOAD(VertexPointer);
    NOCTURNE_GL_LOAD(ColorPointer);
    NOCTURNE_GL_LOAD(TexCoordPointer);
    NOCTURNE_GL_LOAD(DrawElements);

    // Optional — absence just costs the specular term, not the GL path.
    nocturne_glSecondaryColorPointer =
        reinterpret_cast<void (APIENTRY *)(GLint, GLenum, GLsizei, const void *)>(
            SDL_GL_GetProcAddress("glSecondaryColorPointer"));
    if (nocturne_glSecondaryColorPointer == nullptr) {
        nocturne_glSecondaryColorPointer =
            reinterpret_cast<void (APIENTRY *)(GLint, GLenum, GLsizei, const void *)>(
                SDL_GL_GetProcAddress("glSecondaryColorPointerEXT"));
    }
    if (nocturne_glSecondaryColorPointer == nullptr) {
        DDRAW_LOG("gl_api: no glSecondaryColorPointer — specular term dropped");
    }

    if (missing != nullptr) {
        DDRAW_LOG("gl_api: failed to resolve %s — GL path unavailable", missing);
        g_failed = true;
        return 0;
    }

    g_loaded = true;
    return 1;
}

#undef NOCTURNE_GL_LOAD

#else  // !NOCTURNE_GL_PRESENT

#include "gl_api.h"
struct NocturneGLApi gl;
void (APIENTRY *nocturne_glSecondaryColorPointer)(GLint, GLenum, GLsizei, const void *) = nullptr;
extern "C" int nocturne_gl_load_api(void) { return 0; }

#endif  // NOCTURNE_GL_PRESENT
