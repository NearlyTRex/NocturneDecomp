#pragma once

#include <GL/glcorearb.h>
#include <bit>
#include <cstddef>
#include <cstdint>
#include <functional>

namespace nocturne::platform::gl {

// What a context's loader hands back for an entry point name; null when the driver lacks it.
using GlProc = void (*)();
using GlResolver = std::function<GlProc(const char *name)>;

// Every GL entry point the display and the renderer call. Nothing links libGL, so these
// pointers are the only way to GL, and tests fill them with recording stubs.
struct SGlApi {
    PFNGLACTIVETEXTUREPROC ActiveTexture = nullptr;
    PFNGLATTACHSHADERPROC AttachShader = nullptr;
    PFNGLBINDATTRIBLOCATIONPROC BindAttribLocation = nullptr;
    PFNGLBINDBUFFERPROC BindBuffer = nullptr;
    PFNGLBINDFRAMEBUFFERPROC BindFramebuffer = nullptr;
    PFNGLBINDRENDERBUFFERPROC BindRenderbuffer = nullptr;
    PFNGLBINDTEXTUREPROC BindTexture = nullptr;
    PFNGLBINDVERTEXARRAYPROC BindVertexArray = nullptr;
    PFNGLBLENDFUNCPROC BlendFunc = nullptr;
    PFNGLBLITFRAMEBUFFERPROC BlitFramebuffer = nullptr;
    PFNGLBUFFERDATAPROC BufferData = nullptr;
    PFNGLBUFFERSUBDATAPROC BufferSubData = nullptr;
    PFNGLCHECKFRAMEBUFFERSTATUSPROC CheckFramebufferStatus = nullptr;
    PFNGLCLEARPROC Clear = nullptr;
    PFNGLCLEARCOLORPROC ClearColor = nullptr;
    PFNGLCLEARDEPTHPROC ClearDepth = nullptr;
    PFNGLCOMPILESHADERPROC CompileShader = nullptr;
    PFNGLCREATEPROGRAMPROC CreateProgram = nullptr;
    PFNGLCREATESHADERPROC CreateShader = nullptr;
    PFNGLDELETEBUFFERSPROC DeleteBuffers = nullptr;
    PFNGLDELETEFRAMEBUFFERSPROC DeleteFramebuffers = nullptr;
    PFNGLDELETEPROGRAMPROC DeleteProgram = nullptr;
    PFNGLDELETERENDERBUFFERSPROC DeleteRenderbuffers = nullptr;
    PFNGLDELETESHADERPROC DeleteShader = nullptr;
    PFNGLDELETETEXTURESPROC DeleteTextures = nullptr;
    PFNGLDELETEVERTEXARRAYSPROC DeleteVertexArrays = nullptr;
    PFNGLDEPTHFUNCPROC DepthFunc = nullptr;
    PFNGLDEPTHMASKPROC DepthMask = nullptr;
    PFNGLDISABLEPROC Disable = nullptr;
    PFNGLDRAWBUFFERPROC DrawBuffer = nullptr;
    PFNGLDRAWARRAYSPROC DrawArrays = nullptr;
    PFNGLDRAWELEMENTSPROC DrawElements = nullptr;
    PFNGLENABLEPROC Enable = nullptr;
    PFNGLENABLEVERTEXATTRIBARRAYPROC EnableVertexAttribArray = nullptr;
    PFNGLFRAMEBUFFERRENDERBUFFERPROC FramebufferRenderbuffer = nullptr;
    PFNGLFRAMEBUFFERTEXTURE2DPROC FramebufferTexture2D = nullptr;
    PFNGLGENBUFFERSPROC GenBuffers = nullptr;
    PFNGLGENERATEMIPMAPPROC GenerateMipmap = nullptr;
    PFNGLGENFRAMEBUFFERSPROC GenFramebuffers = nullptr;
    PFNGLGENRENDERBUFFERSPROC GenRenderbuffers = nullptr;
    PFNGLGENTEXTURESPROC GenTextures = nullptr;
    PFNGLGENVERTEXARRAYSPROC GenVertexArrays = nullptr;
    PFNGLGETPROGRAMINFOLOGPROC GetProgramInfoLog = nullptr;
    PFNGLGETPROGRAMIVPROC GetProgramiv = nullptr;
    PFNGLGETSHADERINFOLOGPROC GetShaderInfoLog = nullptr;
    PFNGLGETSHADERIVPROC GetShaderiv = nullptr;
    PFNGLGETSTRINGPROC GetString = nullptr;
    PFNGLGETUNIFORMLOCATIONPROC GetUniformLocation = nullptr;
    PFNGLLINKPROGRAMPROC LinkProgram = nullptr;
    PFNGLPIXELSTOREIPROC PixelStorei = nullptr;
    PFNGLPOLYGONOFFSETPROC PolygonOffset = nullptr;
    PFNGLREADBUFFERPROC ReadBuffer = nullptr;
    PFNGLREADPIXELSPROC ReadPixels = nullptr;
    PFNGLRENDERBUFFERSTORAGEPROC RenderbufferStorage = nullptr;
    PFNGLSCISSORPROC Scissor = nullptr;
    PFNGLSHADERSOURCEPROC ShaderSource = nullptr;
    PFNGLTEXIMAGE2DPROC TexImage2D = nullptr;
    PFNGLTEXPARAMETERIPROC TexParameteri = nullptr;
    PFNGLTEXSUBIMAGE2DPROC TexSubImage2D = nullptr;
    PFNGLUNIFORM1IPROC Uniform1i = nullptr;
    PFNGLUNIFORM3FPROC Uniform3f = nullptr;
    PFNGLUNIFORMMATRIX4FVPROC UniformMatrix4fv = nullptr;
    PFNGLUSEPROGRAMPROC UseProgram = nullptr;
    PFNGLVERTEXATTRIBPOINTERPROC VertexAttribPointer = nullptr;
    PFNGLVIEWPORTPROC Viewport = nullptr;

    // Needs a current context; throws naming the first entry point the driver lacks.
    void load(const GlResolver &resolver);
};

// A byte offset into the bound buffer, in the pointer argument GL takes it as.
[[nodiscard]] inline const void *bufferOffset(std::size_t offset) {
    return std::bit_cast<const void *>(std::uintptr_t{offset});
}

} // namespace nocturne::platform::gl
