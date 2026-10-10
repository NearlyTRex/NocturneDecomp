#include "platform/gl/glquad.h"

#include <array>
#include <cstddef>

namespace nocturne::platform::gl {
namespace {

// Positions are already in clip space.
constexpr const char *kVertexSource = R"(#version 150 core
in vec2 a_pos;
in vec2 a_uv;
out vec2 v_uv;
void main() {
    gl_Position = vec4(a_pos, 0.0, 1.0);
    v_uv = a_uv;
}
)";

// The game leaves the fourth byte of a pixel zero; on a compositor that honours window alpha
// that would show the desktop through the frame, so every quad is opaque.
constexpr const char *kFragmentSource = R"(#version 150 core
uniform sampler2D u_tex;
in vec2 v_uv;
out vec4 o_color;
void main() {
    o_color = vec4(texture(u_tex, v_uv).rgb, 1.0);
}
)";

constexpr GLuint kPositionAttribute = 0;
constexpr GLuint kTexCoordAttribute = 1;
constexpr std::array<SAttributeBinding, 2> kAttributes = {{
    {.location = kPositionAttribute, .name = "a_pos"},
    {.location = kTexCoordAttribute, .name = "a_uv"},
}};

struct SQuadVertex {
    GLfloat x;
    GLfloat y;
    GLfloat u;
    GLfloat v;
};

// Two triangle strips: TopFirst, then BottomFirst.
constexpr std::array<SQuadVertex, 8> kQuads = {{
    {.x = -1.0F, .y = 1.0F, .u = 0.0F, .v = 0.0F},
    {.x = 1.0F, .y = 1.0F, .u = 1.0F, .v = 0.0F},
    {.x = -1.0F, .y = -1.0F, .u = 0.0F, .v = 1.0F},
    {.x = 1.0F, .y = -1.0F, .u = 1.0F, .v = 1.0F},
    {.x = -1.0F, .y = 1.0F, .u = 0.0F, .v = 1.0F},
    {.x = 1.0F, .y = 1.0F, .u = 1.0F, .v = 1.0F},
    {.x = -1.0F, .y = -1.0F, .u = 0.0F, .v = 0.0F},
    {.x = 1.0F, .y = -1.0F, .u = 1.0F, .v = 0.0F},
}};
constexpr GLsizei kQuadVertices = 4;

} // namespace

CGlQuad::CGlQuad(const SGlApi &gl)
    : gl_(gl), program_(gl, kVertexSource, kFragmentSource, kAttributes) {
    program_.use();
    gl_.Uniform1i(program_.getUniformLocation("u_tex"), 0);
    gl_.GenVertexArrays(1, &vertex_array_);
    gl_.GenBuffers(1, &vertex_buffer_);
    gl_.BindVertexArray(vertex_array_);
    gl_.BindBuffer(GL_ARRAY_BUFFER, vertex_buffer_);
    gl_.BufferData(GL_ARRAY_BUFFER, sizeof(kQuads), kQuads.data(), GL_STATIC_DRAW);
    constexpr GLsizei kStride = sizeof(SQuadVertex);
    gl_.EnableVertexAttribArray(kPositionAttribute);
    gl_.VertexAttribPointer(kPositionAttribute, 2, GL_FLOAT, GL_FALSE, kStride,
                            bufferOffset(offsetof(SQuadVertex, x)));
    gl_.EnableVertexAttribArray(kTexCoordAttribute);
    gl_.VertexAttribPointer(kTexCoordAttribute, 2, GL_FLOAT, GL_FALSE, kStride,
                            bufferOffset(offsetof(SQuadVertex, u)));
    gl_.BindVertexArray(0);
}

CGlQuad::~CGlQuad() {
    gl_.DeleteVertexArrays(1, &vertex_array_);
    gl_.DeleteBuffers(1, &vertex_buffer_);
}

void CGlQuad::draw(GLuint texture, EQuadRows rows) const {
    const GLint first = rows == EQuadRows::TopFirst ? 0 : kQuadVertices;
    gl_.ActiveTexture(GL_TEXTURE0);
    gl_.BindTexture(GL_TEXTURE_2D, texture);
    program_.use();
    gl_.BindVertexArray(vertex_array_);
    gl_.DrawArrays(GL_TRIANGLE_STRIP, first, kQuadVertices);
    gl_.BindVertexArray(0);
}

} // namespace nocturne::platform::gl
