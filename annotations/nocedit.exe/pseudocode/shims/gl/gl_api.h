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
    void (APIENTRY *TexEnvi)(GLenum, GLenum, GLint);

    // Server/client state save+restore. The scene upload runs mid-frame, in
    // between the engine's CPU write and the renderer DLL's draws, so anything
    // it changes and does not put back corrupts those draws — the DLL sets some
    // state once at init rather than per draw. Bracketing with these is what
    // keeps the upload invisible to it.
    void (APIENTRY *PushAttrib)(GLbitfield);
    void (APIENTRY *PopAttrib)(void);
    void (APIENTRY *PushClientAttrib)(GLbitfield);
    void (APIENTRY *PopClientAttrib)(void);

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

    // --- shaders -------------------------------------------------------------
    // Every entry here is optional: the shader paths check for nulls and fall
    // back to fixed function, so a driver without them still renders.
    //
    // The compatibility profile keeps the client-array attributes visible to
    // GLSL as gl_Vertex / gl_Color / gl_MultiTexCoord0 / gl_SecondaryColor, so
    // a shader can be used over a client-array DrawElements path unchanged.
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

    // --- buffers and generic attributes (GL 1.5 / 2.0), all optional ---------
    //
    // What carries vertices without fixed function at all: a buffer object with
    // named attributes, and UniformMatrix4fv for a projection the shader owns.
    // The compatibility aliases above (gl_Vertex and friends) are only the
    // client arrays under another name, so a shader reading them is still
    // stapled to the fixed-function pipeline; these are not.
    //
    // Every one is allowed to be null: the draw path checks once and keeps using
    // client arrays if any are missing, so a driver that cannot do this still
    // renders.
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

// D3D's second (specular) vertex color. GL 1.4 / EXT_secondary_color, so unlike
// the table above it is allowed to be null — callers must check before use and
// fall back to dropping the specular term.
extern void (APIENTRY *nocturne_glSecondaryColorPointer)(GLint, GLenum, GLsizei, const void *);

// GL 1.4, optional. Carries D3D7's per-vertex fog factor, which buildTLVertex
// packs into the specular ALPHA byte — the one component glSecondaryColorPointer
// has no room for. Consumed only by the shader path, as gl_FogCoord.
extern void (APIENTRY *nocturne_glFogCoordPointer)(GLenum, GLsizei, const void *);

// The loaded table. Valid only after nocturne_gl_load_api() returns 1.
extern struct NocturneGLApi gl;

// Resolve every entry point above against the current GL context. Returns 1 if
// all of them resolved, 0 otherwise (and logs which one failed). Must be called
// with a context current; safe to call repeatedly.
int nocturne_gl_load_api(void);

#ifdef __cplusplus
}
#endif
