#include "platform/sdl/sdldisplay.h"

#include "platform/sdl/sdlwindow.h"

#include <SDL3/SDL.h>
#include <array>
#include <bit>
#include <cstdint>
#include <stdexcept>
#include <string>

namespace nocturne::platform::sdl {
namespace {

// Positions are already in clip space; the first texel row lands at the top of the viewport.
constexpr const char *kVertexSource = R"(#version 150 core
in vec2 a_pos;
in vec2 a_uv;
out vec2 v_uv;
void main() {
    gl_Position = vec4(a_pos, 0.0, 1.0);
    v_uv = a_uv;
}
)";

// The game leaves the fourth byte zero; on a compositor that honours window alpha it would show
// the desktop through the frame, so the presented pixel is always opaque.
constexpr const char *kFragmentSource = R"(#version 150 core
uniform sampler2D u_tex;
in vec2 v_uv;
out vec4 o_color;
void main() {
    o_color = vec4(texture(u_tex, v_uv).rgb, 1.0);
}
)";

// x, y, u, v as a triangle strip.
constexpr std::array<GLfloat, 16> kQuad = {
    -1.0F, 1.0F,  0.0F, 0.0F, 1.0F, 1.0F,  1.0F, 0.0F,
    -1.0F, -1.0F, 0.0F, 1.0F, 1.0F, -1.0F, 1.0F, 1.0F,
};

constexpr GLuint kPositionAttribute = 0;
constexpr GLuint kTexCoordAttribute = 1;

struct SGlFormat {
    GLenum format;
    GLenum type;
};

// Indexed by EPixelLayout; Indexed8 frames are expanded to Bgra8888 before upload.
constexpr std::array<SGlFormat, 3> kUploadFormats = {{
    {.format = GL_BGRA, .type = GL_UNSIGNED_BYTE},
    {.format = GL_RGB, .type = GL_UNSIGNED_SHORT_5_6_5},
    {.format = GL_BGRA, .type = GL_UNSIGNED_BYTE},
}};

// Indexed by whether the frame is a whole multiple of its size on screen: nearest stays even
// there, and makes pixels uneven anywhere else.
constexpr std::array<GLint, 2> kFilters = {GL_LINEAR, GL_NEAREST};

SGlFormat uploadFormat(common::EPixelLayout layout) {
    return kUploadFormats.at(static_cast<std::size_t>(layout));
}

GLuint compileStage(const SGlApi &gl, GLenum type, const char *source) {
    const GLuint shader = gl.CreateShader(type);
    gl.ShaderSource(shader, 1, &source, nullptr);
    gl.CompileShader(shader);
    GLint compiled = GL_FALSE;
    gl.GetShaderiv(shader, GL_COMPILE_STATUS, &compiled);
    if (compiled == GL_FALSE) {
        std::array<GLchar, 1024> log{};
        gl.GetShaderInfoLog(shader, static_cast<GLsizei>(log.size()), nullptr, log.data());
        gl.DeleteShader(shader);
        throw std::runtime_error(std::string("present shader: ") + log.data());
    }
    return shader;
}

GLuint linkProgram(const SGlApi &gl) {
    const GLuint vertex = compileStage(gl, GL_VERTEX_SHADER, kVertexSource);
    const GLuint fragment = compileStage(gl, GL_FRAGMENT_SHADER, kFragmentSource);
    const GLuint program = gl.CreateProgram();
    gl.AttachShader(program, vertex);
    gl.AttachShader(program, fragment);
    gl.BindAttribLocation(program, kPositionAttribute, "a_pos");
    gl.BindAttribLocation(program, kTexCoordAttribute, "a_uv");
    gl.LinkProgram(program);
    gl.DeleteShader(vertex);
    gl.DeleteShader(fragment);
    GLint linked = GL_FALSE;
    gl.GetProgramiv(program, GL_LINK_STATUS, &linked);
    if (linked == GL_FALSE) {
        std::array<GLchar, 1024> log{};
        gl.GetProgramInfoLog(program, static_cast<GLsizei>(log.size()), nullptr, log.data());
        gl.DeleteProgram(program);
        throw std::runtime_error(std::string("present program: ") + log.data());
    }
    return program;
}

} // namespace

void CSdlDisplay::SContextDeleter::operator()(SDL_GLContextState *context) const {
    SDL_GL_DestroyContext(context);
}

CSdlDisplay::CSdlDisplay(CSdlWindow &window) : window_(window) {
    // 3.3 core is the floor the hardware renderer needs, and asking for exactly it keeps the
    // driver from handing back anything older.
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
    SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);
    context_.reset(SDL_GL_CreateContext(window_.getSdlWindow()));
    if (!context_) {
        throw std::runtime_error(SDL_GetError());
    }
    gl_.load();
    // Adaptive vsync where the driver has it, plain vsync otherwise.
    if (!SDL_GL_SetSwapInterval(-1)) {
        SDL_GL_SetSwapInterval(1);
    }
    buildQuad();
    gl_.GenTextures(1, &texture_);
}

CSdlDisplay::~CSdlDisplay() {
    gl_.DeleteTextures(1, &texture_);
    gl_.DeleteVertexArrays(1, &vertex_array_);
    gl_.DeleteBuffers(1, &vertex_buffer_);
    gl_.DeleteProgram(program_);
}

bool CSdlDisplay::setDisplayMode(int width, int height, int bits_per_pixel) {
    const std::optional<common::EPixelLayout> layout = common::layoutForDepth(bits_per_pixel);
    if (!layout || width <= 0 || height <= 0) {
        return false;
    }
    layout_ = *layout;
    logical_ = {.width = width, .height = height};
    converter_.setMode(layout_, width, height);
    const SGlFormat format = uploadFormat(converter_.getUploadLayout());
    gl_.BindTexture(GL_TEXTURE_2D, texture_);
    gl_.TexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, width, height, 0, format.format, format.type,
                   nullptr);
    window_.setLogicalSize(logical_);
    if (window_size_ == common::SExtent{}) {
        window_size_ = logical_;
        applyWindowSize();
    }
    SDL_ShowWindow(window_.getSdlWindow());
    return true;
}

common::SPixelFormat CSdlDisplay::getPixelFormat() {
    return common::getPixelFormat(layout_);
}

void CSdlDisplay::setPalette(std::span<const std::uint8_t, 768> rgb) {
    converter_.setPalette(rgb);
}

void CSdlDisplay::present(std::span<const std::byte> pixels, int pitch) {
    const std::optional<common::SFrameUpload> upload = converter_.convert(pixels, pitch);
    if (!upload) {
        return;
    }
    const SGlFormat format = uploadFormat(upload->layout);
    gl_.PixelStorei(GL_UNPACK_ALIGNMENT, 1);
    gl_.PixelStorei(GL_UNPACK_ROW_LENGTH, upload->row_length);
    gl_.BindTexture(GL_TEXTURE_2D, texture_);
    gl_.TexSubImage2D(GL_TEXTURE_2D, 0, 0, 0, logical_.width, logical_.height, format.format,
                      format.type, upload->pixels.data());
    gl_.PixelStorei(GL_UNPACK_ROW_LENGTH, 0);
    drawFrame();
    SDL_GL_SwapWindow(window_.getSdlWindow());
}

void CSdlDisplay::setWindowMode(EWindowMode mode) {
    SDL_Window *const window = window_.getSdlWindow();
    window_mode_ = mode;
    // Leaving fullscreen first lets a change between the two kinds start from a window, which
    // not every video driver manages otherwise.
    SDL_SetWindowFullscreen(window, false);
    switch (mode) {
    case EWindowMode::Windowed:
        SDL_SetWindowBordered(window, true);
        applyWindowSize();
        return;
    case EWindowMode::Fullscreen: {
        // A size the display has no mode for falls back to the desktop; the letterbox scales
        // the frame into whatever it gets.
        SDL_DisplayMode closest{};
        const bool found =
            SDL_GetClosestFullscreenDisplayMode(SDL_GetDisplayForWindow(window), window_size_.width,
                                                window_size_.height, 0.0F, false, &closest);
        SDL_SetWindowFullscreenMode(window, found ? &closest : nullptr);
        break;
    }
    case EWindowMode::Borderless:
        SDL_SetWindowFullscreenMode(window, nullptr);
        break;
    }
    SDL_SetWindowFullscreen(window, true);
}

void CSdlDisplay::setWindowSize(int width, int height) {
    window_size_ = {.width = width, .height = height};
    if (window_mode_ == EWindowMode::Windowed) {
        applyWindowSize();
    }
}

void CSdlDisplay::buildQuad() {
    program_ = linkProgram(gl_);
    gl_.UseProgram(program_);
    gl_.Uniform1i(gl_.GetUniformLocation(program_, "u_tex"), 0);
    gl_.GenVertexArrays(1, &vertex_array_);
    gl_.GenBuffers(1, &vertex_buffer_);
    gl_.BindVertexArray(vertex_array_);
    gl_.BindBuffer(GL_ARRAY_BUFFER, vertex_buffer_);
    gl_.BufferData(GL_ARRAY_BUFFER, sizeof(kQuad), kQuad.data(), GL_STATIC_DRAW);
    constexpr GLsizei kStride = 4 * sizeof(GLfloat);
    gl_.EnableVertexAttribArray(kPositionAttribute);
    gl_.VertexAttribPointer(kPositionAttribute, 2, GL_FLOAT, GL_FALSE, kStride, nullptr);
    gl_.EnableVertexAttribArray(kTexCoordAttribute);
    gl_.VertexAttribPointer(kTexCoordAttribute, 2, GL_FLOAT, GL_FALSE, kStride,
                            std::bit_cast<const void *>(std::uintptr_t{2 * sizeof(GLfloat)}));
}

void CSdlDisplay::applyWindowSize() {
    SDL_Window *const window = window_.getSdlWindow();
    SDL_SetWindowSize(window, window_size_.width, window_size_.height);
    SDL_SetWindowPosition(window, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED);
}

void CSdlDisplay::drawFrame() {
    common::SExtent drawable;
    SDL_GetWindowSizeInPixels(window_.getSdlWindow(), &drawable.width, &drawable.height);
    const common::SViewport viewport = common::fitViewport(drawable, logical_);
    gl_.BindFramebuffer(GL_FRAMEBUFFER, 0);
    gl_.Disable(GL_SCISSOR_TEST);
    gl_.Disable(GL_DEPTH_TEST);
    gl_.Disable(GL_BLEND);
    gl_.Disable(GL_CULL_FACE);
    // The bars stay black; the quad covers the rest.
    gl_.Viewport(0, 0, drawable.width, drawable.height);
    gl_.ClearColor(0.0F, 0.0F, 0.0F, 1.0F);
    gl_.Clear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    // GL counts viewport rows from the bottom.
    gl_.Viewport(viewport.x, drawable.height - viewport.y - viewport.height, viewport.width,
                 viewport.height);
    // Sampling is restated every frame: a mipmap filter another texture user left behind would
    // make this texture incomplete, and the quad would draw white.
    const GLint filter = kFilters.at(common::isWholeMultiple(viewport, logical_) ? 1 : 0);
    gl_.ActiveTexture(GL_TEXTURE0);
    gl_.BindTexture(GL_TEXTURE_2D, texture_);
    gl_.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, filter);
    gl_.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, filter);
    gl_.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    gl_.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    gl_.UseProgram(program_);
    gl_.BindVertexArray(vertex_array_);
    gl_.DrawArrays(GL_TRIANGLE_STRIP, 0, 4);
}

} // namespace nocturne::platform::sdl
