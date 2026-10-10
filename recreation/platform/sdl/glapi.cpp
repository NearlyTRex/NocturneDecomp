#include "platform/sdl/glapi.h"

#include <SDL3/SDL_video.h>
#include <bit>
#include <stdexcept>
#include <string>

namespace nocturne::platform::sdl {
namespace {

template <typename Function>
void resolve(Function &function, const char *name) {
    function = std::bit_cast<Function>(SDL_GL_GetProcAddress(name));
    if (function == nullptr) {
        throw std::runtime_error(std::string("OpenGL entry point missing: ") + name);
    }
}

} // namespace

void SGlApi::load() {
    resolve(BindTexture, "glBindTexture");
    resolve(Clear, "glClear");
    resolve(ClearColor, "glClearColor");
    resolve(DeleteTextures, "glDeleteTextures");
    resolve(Disable, "glDisable");
    resolve(DrawArrays, "glDrawArrays");
    resolve(GenTextures, "glGenTextures");
    resolve(PixelStorei, "glPixelStorei");
    resolve(TexImage2D, "glTexImage2D");
    resolve(TexParameteri, "glTexParameteri");
    resolve(TexSubImage2D, "glTexSubImage2D");
    resolve(Viewport, "glViewport");
    resolve(ActiveTexture, "glActiveTexture");
    resolve(AttachShader, "glAttachShader");
    resolve(BindAttribLocation, "glBindAttribLocation");
    resolve(BindBuffer, "glBindBuffer");
    resolve(BindFramebuffer, "glBindFramebuffer");
    resolve(BindVertexArray, "glBindVertexArray");
    resolve(BufferData, "glBufferData");
    resolve(CompileShader, "glCompileShader");
    resolve(CreateProgram, "glCreateProgram");
    resolve(CreateShader, "glCreateShader");
    resolve(DeleteBuffers, "glDeleteBuffers");
    resolve(DeleteProgram, "glDeleteProgram");
    resolve(DeleteShader, "glDeleteShader");
    resolve(DeleteVertexArrays, "glDeleteVertexArrays");
    resolve(EnableVertexAttribArray, "glEnableVertexAttribArray");
    resolve(GenBuffers, "glGenBuffers");
    resolve(GenVertexArrays, "glGenVertexArrays");
    resolve(GetProgramInfoLog, "glGetProgramInfoLog");
    resolve(GetProgramiv, "glGetProgramiv");
    resolve(GetShaderInfoLog, "glGetShaderInfoLog");
    resolve(GetShaderiv, "glGetShaderiv");
    resolve(GetUniformLocation, "glGetUniformLocation");
    resolve(LinkProgram, "glLinkProgram");
    resolve(ShaderSource, "glShaderSource");
    resolve(Uniform1i, "glUniform1i");
    resolve(UseProgram, "glUseProgram");
    resolve(VertexAttribPointer, "glVertexAttribPointer");
}

} // namespace nocturne::platform::sdl
