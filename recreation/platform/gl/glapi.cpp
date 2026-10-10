#include "platform/gl/glapi.h"

#include <stdexcept>
#include <string>

namespace nocturne::platform::gl {
namespace {

template <typename Function>
void resolve(const GlResolver &resolver, Function &function, const char *name) {
    const GlProc proc = resolver(name);
    if (proc == nullptr) {
        throw std::runtime_error(std::string("OpenGL entry point missing: ") + name);
    }
    function = std::bit_cast<Function>(proc);
}

} // namespace

void SGlApi::load(const GlResolver &resolver) {
    resolve(resolver, ActiveTexture, "glActiveTexture");
    resolve(resolver, AttachShader, "glAttachShader");
    resolve(resolver, BindAttribLocation, "glBindAttribLocation");
    resolve(resolver, BindBuffer, "glBindBuffer");
    resolve(resolver, BindFramebuffer, "glBindFramebuffer");
    resolve(resolver, BindRenderbuffer, "glBindRenderbuffer");
    resolve(resolver, BindTexture, "glBindTexture");
    resolve(resolver, BindVertexArray, "glBindVertexArray");
    resolve(resolver, BlendFunc, "glBlendFunc");
    resolve(resolver, BlitFramebuffer, "glBlitFramebuffer");
    resolve(resolver, BufferData, "glBufferData");
    resolve(resolver, BufferSubData, "glBufferSubData");
    resolve(resolver, CheckFramebufferStatus, "glCheckFramebufferStatus");
    resolve(resolver, Clear, "glClear");
    resolve(resolver, ClearColor, "glClearColor");
    resolve(resolver, ClearDepth, "glClearDepth");
    resolve(resolver, CompileShader, "glCompileShader");
    resolve(resolver, CreateProgram, "glCreateProgram");
    resolve(resolver, CreateShader, "glCreateShader");
    resolve(resolver, DeleteBuffers, "glDeleteBuffers");
    resolve(resolver, DeleteFramebuffers, "glDeleteFramebuffers");
    resolve(resolver, DeleteProgram, "glDeleteProgram");
    resolve(resolver, DeleteRenderbuffers, "glDeleteRenderbuffers");
    resolve(resolver, DeleteShader, "glDeleteShader");
    resolve(resolver, DeleteTextures, "glDeleteTextures");
    resolve(resolver, DeleteVertexArrays, "glDeleteVertexArrays");
    resolve(resolver, DepthFunc, "glDepthFunc");
    resolve(resolver, DepthMask, "glDepthMask");
    resolve(resolver, Disable, "glDisable");
    resolve(resolver, DrawBuffer, "glDrawBuffer");
    resolve(resolver, DrawArrays, "glDrawArrays");
    resolve(resolver, DrawElements, "glDrawElements");
    resolve(resolver, Enable, "glEnable");
    resolve(resolver, EnableVertexAttribArray, "glEnableVertexAttribArray");
    resolve(resolver, FramebufferRenderbuffer, "glFramebufferRenderbuffer");
    resolve(resolver, FramebufferTexture2D, "glFramebufferTexture2D");
    resolve(resolver, GenBuffers, "glGenBuffers");
    resolve(resolver, GenerateMipmap, "glGenerateMipmap");
    resolve(resolver, GenFramebuffers, "glGenFramebuffers");
    resolve(resolver, GenRenderbuffers, "glGenRenderbuffers");
    resolve(resolver, GenTextures, "glGenTextures");
    resolve(resolver, GenVertexArrays, "glGenVertexArrays");
    resolve(resolver, GetProgramInfoLog, "glGetProgramInfoLog");
    resolve(resolver, GetProgramiv, "glGetProgramiv");
    resolve(resolver, GetShaderInfoLog, "glGetShaderInfoLog");
    resolve(resolver, GetShaderiv, "glGetShaderiv");
    resolve(resolver, GetUniformLocation, "glGetUniformLocation");
    resolve(resolver, LinkProgram, "glLinkProgram");
    resolve(resolver, PixelStorei, "glPixelStorei");
    resolve(resolver, PolygonOffset, "glPolygonOffset");
    resolve(resolver, ReadBuffer, "glReadBuffer");
    resolve(resolver, ReadPixels, "glReadPixels");
    resolve(resolver, RenderbufferStorage, "glRenderbufferStorage");
    resolve(resolver, Scissor, "glScissor");
    resolve(resolver, ShaderSource, "glShaderSource");
    resolve(resolver, TexImage2D, "glTexImage2D");
    resolve(resolver, TexParameteri, "glTexParameteri");
    resolve(resolver, TexSubImage2D, "glTexSubImage2D");
    resolve(resolver, Uniform1i, "glUniform1i");
    resolve(resolver, Uniform3f, "glUniform3f");
    resolve(resolver, UniformMatrix4fv, "glUniformMatrix4fv");
    resolve(resolver, UseProgram, "glUseProgram");
    resolve(resolver, VertexAttribPointer, "glVertexAttribPointer");
    resolve(resolver, Viewport, "glViewport");
}

} // namespace nocturne::platform::gl
