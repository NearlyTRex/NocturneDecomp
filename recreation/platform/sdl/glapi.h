#pragma once

#include <SDL3/SDL_opengl.h>

namespace nocturne::platform::sdl {

// Every GL entry point the adapters call, resolved through SDL from the current context.
// Nothing links libGL, so these pointers are the only way to GL.
struct SGlApi {
    decltype(&glBindTexture) BindTexture = nullptr;
    decltype(&glClear) Clear = nullptr;
    decltype(&glClearColor) ClearColor = nullptr;
    decltype(&glDeleteTextures) DeleteTextures = nullptr;
    decltype(&glDisable) Disable = nullptr;
    decltype(&glDrawArrays) DrawArrays = nullptr;
    decltype(&glGenTextures) GenTextures = nullptr;
    decltype(&glPixelStorei) PixelStorei = nullptr;
    decltype(&glTexImage2D) TexImage2D = nullptr;
    decltype(&glTexParameteri) TexParameteri = nullptr;
    decltype(&glTexSubImage2D) TexSubImage2D = nullptr;
    decltype(&glViewport) Viewport = nullptr;
    PFNGLACTIVETEXTUREPROC ActiveTexture = nullptr;
    PFNGLATTACHSHADERPROC AttachShader = nullptr;
    PFNGLBINDATTRIBLOCATIONPROC BindAttribLocation = nullptr;
    PFNGLBINDBUFFERPROC BindBuffer = nullptr;
    PFNGLBINDFRAMEBUFFERPROC BindFramebuffer = nullptr;
    PFNGLBINDVERTEXARRAYPROC BindVertexArray = nullptr;
    PFNGLBUFFERDATAPROC BufferData = nullptr;
    PFNGLCOMPILESHADERPROC CompileShader = nullptr;
    PFNGLCREATEPROGRAMPROC CreateProgram = nullptr;
    PFNGLCREATESHADERPROC CreateShader = nullptr;
    PFNGLDELETEBUFFERSPROC DeleteBuffers = nullptr;
    PFNGLDELETEPROGRAMPROC DeleteProgram = nullptr;
    PFNGLDELETESHADERPROC DeleteShader = nullptr;
    PFNGLDELETEVERTEXARRAYSPROC DeleteVertexArrays = nullptr;
    PFNGLENABLEVERTEXATTRIBARRAYPROC EnableVertexAttribArray = nullptr;
    PFNGLGENBUFFERSPROC GenBuffers = nullptr;
    PFNGLGENVERTEXARRAYSPROC GenVertexArrays = nullptr;
    PFNGLGETPROGRAMINFOLOGPROC GetProgramInfoLog = nullptr;
    PFNGLGETPROGRAMIVPROC GetProgramiv = nullptr;
    PFNGLGETSHADERINFOLOGPROC GetShaderInfoLog = nullptr;
    PFNGLGETSHADERIVPROC GetShaderiv = nullptr;
    PFNGLGETUNIFORMLOCATIONPROC GetUniformLocation = nullptr;
    PFNGLLINKPROGRAMPROC LinkProgram = nullptr;
    PFNGLSHADERSOURCEPROC ShaderSource = nullptr;
    PFNGLUNIFORM1IPROC Uniform1i = nullptr;
    PFNGLUSEPROGRAMPROC UseProgram = nullptr;
    PFNGLVERTEXATTRIBPOINTERPROC VertexAttribPointer = nullptr;

    // Needs a current context; throws naming the first entry point the driver lacks.
    void load();
};

} // namespace nocturne::platform::sdl
