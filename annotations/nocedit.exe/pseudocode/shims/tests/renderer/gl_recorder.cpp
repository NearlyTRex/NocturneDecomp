// =============================================================================
// GL RECORDER — implementation
// =============================================================================
//
// See gl_recorder.h for what this is for. The stubs are uniform: record the
// call, update the little state the renderer can read back, return something
// plausible. The only ones with real behaviour are the name allocators and the
// binding queries.

#include "gl_recorder.h"

#include <cstdlib>

namespace gl_recorder {
namespace {

State g_state;

void note(const char *name, unsigned a = 0, unsigned b = 0, unsigned c = 0,
          unsigned d = 0) {
    Call call;
    call.name = name;
    call.a = a;
    call.b = b;
    call.c = c;
    call.d = d;
    g_state.calls.push_back(call);
}

// --- the stubs ---------------------------------------------------------------

void APIENTRY r_ActiveTexture(GLenum unit) {
    const unsigned index = (unsigned)(unit - GL_TEXTURE0);
    if (index < 8) g_state.active_unit = index;
    note("ActiveTexture", index);
}

void APIENTRY r_BindTexture(GLenum, GLuint texture) {
    g_state.bound_texture[g_state.active_unit] = texture;
    note("BindTexture", texture, g_state.active_unit);
}

void APIENTRY r_GenTextures(GLsizei n, GLuint *out) {
    for (GLsizei i = 0; i < n; ++i) out[i] = g_state.next_texture++;
    note("GenTextures", (unsigned)n, out[0]);
}

void APIENTRY r_DeleteTextures(GLsizei n, const GLuint *names) {
    note("DeleteTextures", (unsigned)n, (n > 0) ? names[0] : 0u);
}

void APIENTRY r_TexImage2D(GLenum, GLint, GLint, GLsizei w, GLsizei h, GLint,
                           GLenum, GLenum, const void *) {
    note("TexImage2D", g_state.bound_texture[g_state.active_unit], (unsigned)w,
         (unsigned)h);
}

void APIENTRY r_TexSubImage2D(GLenum, GLint, GLint, GLint, GLsizei, GLsizei,
                              GLenum, GLenum, const void *) {
    note("TexSubImage2D", g_state.bound_texture[g_state.active_unit]);
}

void APIENTRY r_TexParameteri(GLenum, GLenum name, GLint value) {
    note("TexParameteri", (unsigned)name, (unsigned)value);
}

void APIENTRY r_GetIntegerv(GLenum name, GLint *out) {
    // The renderer reads the binding back so it can restore it. A fake that
    // always said 0 would let a broken restore pass.
    if (name == GL_TEXTURE_BINDING_2D) {
        *out = (GLint)g_state.bound_texture[g_state.active_unit];
    } else if (name == GL_CURRENT_PROGRAM) {
        *out = (GLint)g_state.bound_program;
    } else {
        *out = 0;
    }
}

void APIENTRY r_DrawElements(GLenum, GLsizei count, GLenum, const void *) {
    // Recorded with what the pipeline holds, so a draw can be asked afterwards
    // what image it actually went out with.
    note("DrawElements", g_state.bound_texture[0], (unsigned)count,
         g_state.bound_program, g_state.bound_vao);
}

GLuint APIENTRY r_CreateShader(GLenum) {
    const unsigned id = g_state.next_shader++;
    note("CreateShader", id);
    return id;
}
void APIENTRY r_ShaderSource(GLuint s, GLsizei, const GLchar *const *, const GLint *) {
    note("ShaderSource", s);
}
void APIENTRY r_CompileShader(GLuint s) { note("CompileShader", s); }
void APIENTRY r_GetShaderiv(GLuint, GLenum, GLint *out) { *out = GL_TRUE; }
void APIENTRY r_GetShaderInfoLog(GLuint, GLsizei n, GLsizei *len, GLchar *log) {
    if (n > 0) log[0] = '\0';
    if (len != nullptr) *len = 0;
}
void APIENTRY r_DeleteShader(GLuint s) { note("DeleteShader", s); }

GLuint APIENTRY r_CreateProgram(void) {
    const unsigned id = g_state.next_program++;
    note("CreateProgram", id);
    return id;
}
void APIENTRY r_AttachShader(GLuint p, GLuint s) { note("AttachShader", p, s); }
void APIENTRY r_LinkProgram(GLuint p) { note("LinkProgram", p); }
void APIENTRY r_GetProgramiv(GLuint, GLenum, GLint *out) { *out = GL_TRUE; }
void APIENTRY r_GetProgramInfoLog(GLuint, GLsizei n, GLsizei *len, GLchar *log) {
    if (n > 0) log[0] = '\0';
    if (len != nullptr) *len = 0;
}
void APIENTRY r_DeleteProgram(GLuint p) { note("DeleteProgram", p); }
void APIENTRY r_UseProgram(GLuint p) {
    g_state.bound_program = p;
    note("UseProgram", p);
}

// Distinct, stable, non-negative locations. -1 would mean "no such uniform",
// which would silently switch off every uniform the renderer sets.
GLint APIENTRY r_GetUniformLocation(GLuint, const GLchar *name) {
    static const char *known[] = {
        "u_projection", "u_tex", "u_tex_enabled", "u_modulate_alpha",
        "u_alpha_test", "u_fog_enabled", "u_fog_color", "u_debug",
    };
    for (int i = 0; i < (int)(sizeof(known) / sizeof(known[0])); ++i) {
        if (strcmp(known[i], name) == 0) return i;
    }
    return 100;
}
GLint APIENTRY r_GetAttribLocation(GLuint, const GLchar *name) {
    if (strcmp(name, "a_pos") == 0) return 0;
    if (strcmp(name, "a_color") == 0) return 1;
    if (strcmp(name, "a_specular") == 0) return 2;
    if (strcmp(name, "a_uv") == 0) return 3;
    return 4;
}
void APIENTRY r_BindAttribLocation(GLuint, GLuint index, const GLchar *) {
    note("BindAttribLocation", index);
}

void APIENTRY r_Uniform1i(GLint loc, GLint v) { note("Uniform1i", (unsigned)loc, (unsigned)v); }
void APIENTRY r_Uniform1f(GLint loc, GLfloat) { note("Uniform1f", (unsigned)loc); }
void APIENTRY r_Uniform3f(GLint loc, GLfloat, GLfloat, GLfloat) {
    note("Uniform3f", (unsigned)loc);
}
void APIENTRY r_Uniform4f(GLint loc, GLfloat, GLfloat, GLfloat, GLfloat) {
    note("Uniform4f", (unsigned)loc);
}
void APIENTRY r_UniformMatrix4fv(GLint loc, GLsizei, GLboolean, const GLfloat *) {
    note("UniformMatrix4fv", (unsigned)loc);
}

void APIENTRY r_GenBuffers(GLsizei n, GLuint *out) {
    for (GLsizei i = 0; i < n; ++i) out[i] = g_state.next_buffer++;
    note("GenBuffers", (unsigned)n, out[0]);
}
void APIENTRY r_DeleteBuffers(GLsizei n, const GLuint *) { note("DeleteBuffers", (unsigned)n); }
void APIENTRY r_BindBuffer(GLenum target, GLuint buffer) {
    note("BindBuffer", buffer, (unsigned)target);
}
void APIENTRY r_BufferData(GLenum, GLsizeiptr size, const void *, GLenum) {
    note("BufferData", (unsigned)size);
}
void APIENTRY r_BufferSubData(GLenum, GLintptr, GLsizeiptr size, const void *) {
    note("BufferSubData", (unsigned)size);
}

void APIENTRY r_GenVertexArrays(GLsizei n, GLuint *out) {
    for (GLsizei i = 0; i < n; ++i) out[i] = g_state.next_vao++;
    note("GenVertexArrays", (unsigned)n, out[0]);
}
void APIENTRY r_DeleteVertexArrays(GLsizei n, const GLuint *) {
    note("DeleteVertexArrays", (unsigned)n);
}
void APIENTRY r_BindVertexArray(GLuint vao) {
    g_state.bound_vao = vao;
    note("BindVertexArray", vao);
}
void APIENTRY r_EnableVertexAttribArray(GLuint index) {
    note("EnableVertexAttribArray", index);
}
void APIENTRY r_DisableVertexAttribArray(GLuint index) {
    note("DisableVertexAttribArray", index);
}
void APIENTRY r_VertexAttribPointer(GLuint index, GLint, GLenum, GLboolean, GLsizei,
                                    const void *) {
    note("VertexAttribPointer", index);
}

void APIENTRY r_Enable(GLenum cap) { note("Enable", (unsigned)cap); }
void APIENTRY r_Disable(GLenum cap) { note("Disable", (unsigned)cap); }
void APIENTRY r_BlendFunc(GLenum s, GLenum d) { note("BlendFunc", (unsigned)s, (unsigned)d); }
void APIENTRY r_DepthFunc(GLenum f) { note("DepthFunc", (unsigned)f); }
void APIENTRY r_DepthMask(GLboolean on) { note("DepthMask", (unsigned)on); }
void APIENTRY r_CullFace(GLenum f) { note("CullFace", (unsigned)f); }
void APIENTRY r_FrontFace(GLenum f) { note("FrontFace", (unsigned)f); }
void APIENTRY r_Viewport(GLint, GLint, GLsizei w, GLsizei h) {
    note("Viewport", (unsigned)w, (unsigned)h);
}
void APIENTRY r_Scissor(GLint, GLint, GLsizei, GLsizei) { note("Scissor"); }
void APIENTRY r_PixelStorei(GLenum, GLint) { note("PixelStorei"); }
void APIENTRY r_GenerateMipmap(GLenum) {
    note("GenerateMipmap", g_state.bound_texture[g_state.active_unit]);
}
GLenum APIENTRY r_GetError(void) { return GL_NO_ERROR; }
void APIENTRY r_BindFramebuffer(GLenum, GLuint fbo) { note("BindFramebuffer", fbo); }

}  // namespace

State &state() { return g_state; }

void install() {
    memset(&gl, 0, sizeof(gl));
    g_state.reset();

    gl.ActiveTexture = r_ActiveTexture;
    gl.BindTexture = r_BindTexture;
    gl.GenTextures = r_GenTextures;
    gl.DeleteTextures = r_DeleteTextures;
    gl.TexImage2D = r_TexImage2D;
    gl.TexSubImage2D = r_TexSubImage2D;
    gl.TexParameteri = r_TexParameteri;
    gl.GenerateMipmap = r_GenerateMipmap;

    gl.GetIntegerv = r_GetIntegerv;
    gl.GetError = r_GetError;
    gl.DrawElements = r_DrawElements;

    gl.CreateShader = r_CreateShader;
    gl.ShaderSource = r_ShaderSource;
    gl.CompileShader = r_CompileShader;
    gl.GetShaderiv = r_GetShaderiv;
    gl.GetShaderInfoLog = r_GetShaderInfoLog;
    gl.DeleteShader = r_DeleteShader;
    gl.CreateProgram = r_CreateProgram;
    gl.AttachShader = r_AttachShader;
    gl.LinkProgram = r_LinkProgram;
    gl.GetProgramiv = r_GetProgramiv;
    gl.GetProgramInfoLog = r_GetProgramInfoLog;
    gl.DeleteProgram = r_DeleteProgram;
    gl.UseProgram = r_UseProgram;
    gl.GetUniformLocation = r_GetUniformLocation;
    gl.GetAttribLocation = r_GetAttribLocation;
    gl.BindAttribLocation = r_BindAttribLocation;
    gl.Uniform1i = r_Uniform1i;
    gl.Uniform1f = r_Uniform1f;
    gl.Uniform3f = r_Uniform3f;
    gl.Uniform4f = r_Uniform4f;
    gl.UniformMatrix4fv = r_UniformMatrix4fv;

    gl.GenBuffers = r_GenBuffers;
    gl.DeleteBuffers = r_DeleteBuffers;
    gl.BindBuffer = r_BindBuffer;
    gl.BufferData = r_BufferData;
    gl.BufferSubData = r_BufferSubData;
    gl.GenVertexArrays = r_GenVertexArrays;
    gl.DeleteVertexArrays = r_DeleteVertexArrays;
    gl.BindVertexArray = r_BindVertexArray;
    gl.EnableVertexAttribArray = r_EnableVertexAttribArray;
    gl.DisableVertexAttribArray = r_DisableVertexAttribArray;
    gl.VertexAttribPointer = r_VertexAttribPointer;

    gl.Enable = r_Enable;
    gl.Disable = r_Disable;
    gl.BlendFunc = r_BlendFunc;
    gl.DepthFunc = r_DepthFunc;
    gl.DepthMask = r_DepthMask;
    gl.CullFace = r_CullFace;
    gl.FrontFace = r_FrontFace;
    gl.Viewport = r_Viewport;
    gl.Scissor = r_Scissor;
    gl.PixelStorei = r_PixelStorei;
    gl.BindFramebuffer = r_BindFramebuffer;
}

}  // namespace gl_recorder

// The renderer draws into the scene framebuffer when there is one. There is no
// framebuffer here, and 0 is the answer that means exactly that.
extern "C" unsigned nocturne_gl_scene_fbo(void) { return 0; }

// The table the renderer reaches GL through. Owned by the recorder in a test
// build, so gl_api.cpp — which would pull in SDL — stays out of the link.
struct NocturneGLApi gl;
