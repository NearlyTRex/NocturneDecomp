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
    void (APIENTRY *GetTexImage)(GLenum, GLint, GLenum, GLenum, void *);

    // --- state ---------------------------------------------------------------
    void (APIENTRY *Enable)(GLenum);
    void (APIENTRY *Disable)(GLenum);
    void (APIENTRY *BlendFunc)(GLenum, GLenum);
    void (APIENTRY *DepthFunc)(GLenum);
    void (APIENTRY *DepthMask)(GLboolean);
    void (APIENTRY *DepthRange)(GLclampd, GLclampd);
    void (APIENTRY *CullFace)(GLenum);
    void (APIENTRY *FrontFace)(GLenum);
    void (APIENTRY *PolygonMode)(GLenum, GLenum);

    // --- framebuffer objects -------------------------------------------------
    // A DirectDraw back buffer is persistent memory; GL's default framebuffer
    // is not (colour and depth are undefined after SwapWindow). Rendering into
    // an FBO restores the semantics the renderer DLL is written against.
    void      (APIENTRY *GenFramebuffers)(GLsizei, GLuint *);
    void      (APIENTRY *DeleteFramebuffers)(GLsizei, const GLuint *);
    void      (APIENTRY *BindFramebuffer)(GLenum, GLuint);
    void      (APIENTRY *FramebufferTexture2D)(GLenum, GLenum, GLenum, GLuint, GLint);
    GLenum    (APIENTRY *CheckFramebufferStatus)(GLenum);
    void      (APIENTRY *GenRenderbuffers)(GLsizei, GLuint *);
    void      (APIENTRY *DeleteRenderbuffers)(GLsizei, const GLuint *);
    void      (APIENTRY *BindRenderbuffer)(GLenum, GLuint);
    void      (APIENTRY *RenderbufferStorage)(GLenum, GLenum, GLsizei, GLsizei);
    void      (APIENTRY *FramebufferRenderbuffer)(GLenum, GLenum, GLenum, GLuint);
    // Depth copies between framebuffers. The renderer DLL saves a "master" Z
    // buffer for the static world and restores it each frame instead of
    // clearing (see APIDLLmasterZBuffer / APIDLLrestoreZBuffer).
    void      (APIENTRY *BlitFramebuffer)(GLint, GLint, GLint, GLint,
                                          GLint, GLint, GLint, GLint,
                                          GLbitfield, GLenum);

    // --- textures ------------------------------------------------------------
    void (APIENTRY *GenTextures)(GLsizei, GLuint *);
    void (APIENTRY *DeleteTextures)(GLsizei, const GLuint *);
    void (APIENTRY *BindTexture)(GLenum, GLuint);
    void (APIENTRY *TexParameteri)(GLenum, GLenum, GLint);
    void (APIENTRY *TexImage2D)(GLenum, GLint, GLint, GLsizei, GLsizei, GLint,
                                GLenum, GLenum, const void *);
    void (APIENTRY *TexSubImage2D)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei,
                                   GLenum, GLenum, const void *);

    // --- drawing -------------------------------------------------------------
    void (APIENTRY *DrawElements)(GLenum, GLsizei, GLenum, const void *);

    // --- shaders -------------------------------------------------------------
    // Every draw goes through a program, so a context without these draws
    // nothing. They load through the optional path all the same, so a driver
    // that lacks them is named in the log rather than failing anonymously.
    GLuint (APIENTRY *CreateShader)(GLenum);
    void   (APIENTRY *ShaderSource)(GLuint, GLsizei, const GLchar *const *, const GLint *);
    void   (APIENTRY *CompileShader)(GLuint);
    void   (APIENTRY *GetShaderiv)(GLuint, GLenum, GLint *);
    void   (APIENTRY *GetShaderInfoLog)(GLuint, GLsizei, GLsizei *, GLchar *);
    void   (APIENTRY *DeleteShader)(GLuint);
    GLuint (APIENTRY *CreateProgram)(void);
    void   (APIENTRY *AttachShader)(GLuint, GLuint);
    void   (APIENTRY *LinkProgram)(GLuint);
    void   (APIENTRY *GetProgramiv)(GLuint, GLenum, GLint *);
    void   (APIENTRY *GetProgramInfoLog)(GLuint, GLsizei, GLsizei *, GLchar *);
    void   (APIENTRY *DeleteProgram)(GLuint);
    void   (APIENTRY *UseProgram)(GLuint);
    GLint  (APIENTRY *GetUniformLocation)(GLuint, const GLchar *);
    void   (APIENTRY *Uniform1i)(GLint, GLint);
    void   (APIENTRY *Uniform1f)(GLint, GLfloat);
    void   (APIENTRY *Uniform2f)(GLint, GLfloat, GLfloat);
    void   (APIENTRY *Uniform3f)(GLint, GLfloat, GLfloat, GLfloat);
    void   (APIENTRY *Uniform4f)(GLint, GLfloat, GLfloat, GLfloat, GLfloat);
    void   (APIENTRY *ActiveTexture)(GLenum);

    // --- buffers and generic attributes --------------------------------------
    //
    // What carries vertices: a buffer object with named attributes, a vertex
    // array object recording how to read it, and UniformMatrix4fv for a
    // projection the shader owns.
    void   (APIENTRY *GenBuffers)(GLsizei, GLuint *);
    void   (APIENTRY *DeleteBuffers)(GLsizei, const GLuint *);
    void   (APIENTRY *BindBuffer)(GLenum, GLuint);
    void   (APIENTRY *BufferData)(GLenum, GLsizeiptr, const void *, GLenum);
    void   (APIENTRY *BufferSubData)(GLenum, GLintptr, GLsizeiptr, const void *);
    GLint  (APIENTRY *GetAttribLocation)(GLuint, const GLchar *);
    // Must be called BEFORE linking. Position has to land on location 0: in a
    // compatibility context generic attribute 0 aliases gl_Vertex, and a draw
    // with neither attribute 0 nor the fixed-function vertex array enabled
    // renders nothing at all on several drivers. Letting the linker choose is a
    // coin flip.
    void   (APIENTRY *BindAttribLocation)(GLuint, GLuint, const GLchar *);
    void   (APIENTRY *EnableVertexAttribArray)(GLuint);
    void   (APIENTRY *DisableVertexAttribArray)(GLuint);
    void   (APIENTRY *VertexAttribPointer)(GLuint, GLint, GLenum, GLboolean,
                                           GLsizei, const void *);
    void   (APIENTRY *UniformMatrix4fv)(GLint, GLsizei, GLboolean, const GLfloat *);
    // GL 1.1, but loaded optionally with the block above because only the
    // shader blit uses it (gl_blit.cpp) — a null here must cost that path and
    // nothing else, exactly as a missing glCreateShader does.
    void   (APIENTRY *DrawArrays)(GLenum, GLint, GLsizei);

    // --- vertex array objects (GL 3.0), optional -----------------------------
    // A core profile requires a non-zero vertex array object bound for any
    // draw; a compatibility one supplies a default at zero and never needs
    // these. Loaded optionally so a driver without them keeps the compatibility
    // behaviour rather than losing the renderer.
    void   (APIENTRY *GenVertexArrays)(GLsizei, GLuint *);
    void   (APIENTRY *DeleteVertexArrays)(GLsizei, const GLuint *);
    void   (APIENTRY *BindVertexArray)(GLuint);

    // GL 3.0. Builds a texture's mip chain from its base level, replacing a
    // hand-filtered chain uploaded level by level.
    void   (APIENTRY *GenerateMipmap)(GLenum);
};

// The loaded table. Valid only after nocturne_gl_load_api() returns 1.
extern struct NocturneGLApi gl;

// Resolve every entry point above against the current GL context. Returns 1 if
// all of them resolved, 0 otherwise (and logs which one failed). Must be called
// with a context current; safe to call repeatedly.
int nocturne_gl_load_api(void);

#ifdef __cplusplus
}
#endif
