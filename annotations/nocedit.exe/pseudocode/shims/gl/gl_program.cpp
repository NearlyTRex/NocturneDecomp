// =============================================================================
// GL — SHADER PROGRAMS — implementation
// =============================================================================
//
// See gl_program.h for why a_pos is pinned to attribute 0.

#include "gl/gl_program.h"
#include "core/debug_log.h"

namespace {

GLuint compile_stage(GLenum type, const char *source, const char *stage, const char *label) {
    GLuint shader = gl.CreateShader(type);
    if (shader == 0) {
        DLOG("render","%s: glCreateShader failed for %s", label, stage);
        return 0;
    }
    gl.ShaderSource(shader, 1, &source, nullptr);
    gl.CompileShader(shader);

    GLint ok = 0;
    gl.GetShaderiv(shader, GL_COMPILE_STATUS, &ok);
    if (!ok) {
        char log[1024];
        log[0] = '\0';
        if (gl.GetShaderInfoLog != nullptr) {
            gl.GetShaderInfoLog(shader, (GLsizei)sizeof(log), nullptr, log);
        }
        DLOG("render","%s: %s failed to compile: %s", label, stage, log);
        gl.DeleteShader(shader);
        return 0;
    }
    return shader;
}

void delete_program(GLuint program) {
    if (gl.DeleteProgram != nullptr) gl.DeleteProgram(program);
}

} // namespace

extern "C" GLuint nocturne_gl_build_program(const char *vertex_source,
                                            const char *fragment_source, const char *label) {
    GLuint vs = compile_stage(GL_VERTEX_SHADER, vertex_source, "vertex shader", label);
    if (vs == 0) return 0;

    GLuint fs = compile_stage(GL_FRAGMENT_SHADER, fragment_source, "fragment shader", label);
    if (fs == 0) {
        gl.DeleteShader(vs);
        return 0;
    }

    GLuint program = gl.CreateProgram();
    if (program == 0) {
        DLOG("render","%s: glCreateProgram failed", label);
        gl.DeleteShader(vs);
        gl.DeleteShader(fs);
        return 0;
    }

    gl.AttachShader(program, vs);
    gl.AttachShader(program, fs);
    if (gl.BindAttribLocation != nullptr) {
        gl.BindAttribLocation(program, 0, "a_pos");
    }
    gl.LinkProgram(program);

    // Reference-counted by the program now, whether or not the link succeeded.
    gl.DeleteShader(vs);
    gl.DeleteShader(fs);

    GLint linked = 0;
    gl.GetProgramiv(program, GL_LINK_STATUS, &linked);
    if (!linked) {
        char log[1024];
        log[0] = '\0';
        if (gl.GetProgramInfoLog != nullptr) {
            gl.GetProgramInfoLog(program, (GLsizei)sizeof(log), nullptr, log);
        }
        DLOG("render","%s: link failed: %s", label, log);
        delete_program(program);
        return 0;
    }

    GLint attr_pos = gl.GetAttribLocation(program, "a_pos");
    if (attr_pos != 0) {
        DLOG("render","%s: a_pos landed at %d, not 0 — refusing", label, (int)attr_pos);
        delete_program(program);
        return 0;
    }
    return program;
}
