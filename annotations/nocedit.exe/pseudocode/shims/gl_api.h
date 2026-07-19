#pragma once

// =============================================================================
// GL API — dynamically loaded OpenGL entry points
// =============================================================================
//
// We deliberately do NOT link against libGL. The 32-bit (-m32) build lane has
// libGL.so.1 at runtime but no libGL.so development symlink, and installing the
// i386 dev package is a known way to break the amd64 desktop on this machine.
// SDL has already dlopen'd the GL driver by the time a context exists, so every
// entry point is fetched through SDL_GL_GetProcAddress instead. That keeps both
// build lanes linking identically and adds no dependency to CMake.
//
// Usage:  nocturne_gl_load_api() once a context is current, then  gl.Clear(...)
//
// The set below is the compatibility-profile subset the shims need: the 2D
// present blit (gl_present.cpp) and the fixed-function state machine a
// DX6-era renderer DLL drives.

#include <SDL_opengl.h>

#ifdef __cplusplus
extern "C" {
#endif

struct NocturneGLApi {
    // --- queries -------------------------------------------------------------
    const GLubyte* (APIENTRY *GetString)(GLenum);
    GLenum         (APIENTRY *GetError)(void);
    void           (APIENTRY *GetIntegerv)(GLenum, GLint *);

    // --- framebuffer / raster ------------------------------------------------
    void (APIENTRY *Viewport)(GLint, GLint, GLsizei, GLsizei);
    void (APIENTRY *Scissor)(GLint, GLint, GLsizei, GLsizei);
    void (APIENTRY *ClearColor)(GLclampf, GLclampf, GLclampf, GLclampf);
    void (APIENTRY *ClearDepth)(GLclampd);
    void (APIENTRY *Clear)(GLbitfield);
    void (APIENTRY *PixelStorei)(GLenum, GLint);
    void (APIENTRY *ReadBuffer)(GLenum);
    void (APIENTRY *ReadPixels)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, void *);

    // --- state ---------------------------------------------------------------
    void (APIENTRY *Enable)(GLenum);
    void (APIENTRY *Disable)(GLenum);
    void (APIENTRY *BlendFunc)(GLenum, GLenum);
    void (APIENTRY *AlphaFunc)(GLenum, GLclampf);
    void (APIENTRY *DepthFunc)(GLenum);
    void (APIENTRY *DepthMask)(GLboolean);
    void (APIENTRY *DepthRange)(GLclampd, GLclampd);
    void (APIENTRY *ShadeModel)(GLenum);
    void (APIENTRY *CullFace)(GLenum);
    void (APIENTRY *FrontFace)(GLenum);
    void (APIENTRY *PolygonMode)(GLenum, GLenum);
    void (APIENTRY *Fogi)(GLenum, GLint);
    void (APIENTRY *Fogf)(GLenum, GLfloat);
    void (APIENTRY *Fogfv)(GLenum, const GLfloat *);

    // --- matrices ------------------------------------------------------------
    void (APIENTRY *MatrixMode)(GLenum);
    void (APIENTRY *LoadIdentity)(void);
    void (APIENTRY *PushMatrix)(void);
    void (APIENTRY *PopMatrix)(void);
    void (APIENTRY *Ortho)(GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble);
    // Screen-space D3D vertices need an exact pixel->NDC projection; building
    // the matrix directly beats composing it out of Ortho calls.
    void (APIENTRY *LoadMatrixf)(const GLfloat *);

    // --- textures ------------------------------------------------------------
    void (APIENTRY *GenTextures)(GLsizei, GLuint *);
    void (APIENTRY *DeleteTextures)(GLsizei, const GLuint *);
    void (APIENTRY *BindTexture)(GLenum, GLuint);
    void (APIENTRY *TexParameteri)(GLenum, GLenum, GLint);
    void (APIENTRY *TexImage2D)(GLenum, GLint, GLint, GLsizei, GLsizei, GLint,
                                GLenum, GLenum, const void *);
    void (APIENTRY *TexSubImage2D)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei,
                                   GLenum, GLenum, const void *);
    void (APIENTRY *TexEnvi)(GLenum, GLenum, GLint);

    // --- immediate mode (2D blit only; geometry uses arrays) -----------------
    void (APIENTRY *Begin)(GLenum);
    void (APIENTRY *End)(void);
    void (APIENTRY *Color4f)(GLfloat, GLfloat, GLfloat, GLfloat);
    void (APIENTRY *TexCoord2f)(GLfloat, GLfloat);
    void (APIENTRY *Vertex2f)(GLfloat, GLfloat);

    // --- vertex arrays (the renderer DLL's DrawIndexedPrimitive path) --------
    void (APIENTRY *EnableClientState)(GLenum);
    void (APIENTRY *DisableClientState)(GLenum);
    void (APIENTRY *VertexPointer)(GLint, GLenum, GLsizei, const void *);
    void (APIENTRY *ColorPointer)(GLint, GLenum, GLsizei, const void *);
    void (APIENTRY *TexCoordPointer)(GLint, GLenum, GLsizei, const void *);
    void (APIENTRY *DrawElements)(GLenum, GLsizei, GLenum, const void *);
};

// D3D's second (specular) vertex color. GL 1.4 / EXT_secondary_color, so unlike
// the table above it is allowed to be null — callers must check before use and
// fall back to dropping the specular term.
extern void (APIENTRY *nocturne_glSecondaryColorPointer)(GLint, GLenum, GLsizei, const void *);

// The loaded table. Valid only after nocturne_gl_load_api() returns 1.
extern struct NocturneGLApi gl;

// Resolve every entry point above against the current GL context. Returns 1 if
// all of them resolved, 0 otherwise (and logs which one failed). Must be called
// with a context current; safe to call repeatedly.
int nocturne_gl_load_api(void);

#ifdef __cplusplus
}
#endif
