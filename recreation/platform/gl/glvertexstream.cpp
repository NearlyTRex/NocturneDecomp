#include "platform/gl/glvertexstream.h"

#include "common/render/screenvertex.h"

#include <algorithm>
#include <cstddef>

namespace nocturne::platform::gl {
namespace {

// 0xAARRGGBB as R, G, B, A.
std::array<std::uint8_t, 4> toBytes(std::uint32_t argb) {
    return {static_cast<std::uint8_t>(argb >> 16), static_cast<std::uint8_t>(argb >> 8),
            static_cast<std::uint8_t>(argb), static_cast<std::uint8_t>(argb >> 24)};
}

void setAttribute(const SGlApi &gl, const SAttributeBinding &attribute, GLint size, GLenum type,
                  std::size_t offset) {
    const GLboolean normalized = type == GL_UNSIGNED_BYTE ? GL_TRUE : GL_FALSE;
    gl.EnableVertexAttribArray(attribute.location);
    gl.VertexAttribPointer(attribute.location, size, type, normalized, sizeof(SHardwareVertex),
                           bufferOffset(offset));
}

} // namespace

SHardwareVertex toHardwareVertex(const common::SScreenVertex &vertex) {
    const float w = vertex.rhw != 0.0F ? 1.0F / vertex.rhw : 1.0F;
    return {
        .position = {vertex.x * w, vertex.y * w, vertex.z * w, w},
        .diffuse = toBytes(vertex.diffuse),
        .specular = toBytes(vertex.specular),
        .uv = {vertex.u, vertex.v},
    };
}

CGlVertexStream::CGlVertexStream(const SGlApi &gl) : gl_(gl) {
    gl_.GenVertexArrays(1, &vertex_array_);
    gl_.GenBuffers(1, &vertex_buffer_);
    gl_.GenBuffers(1, &index_buffer_);
    gl_.BindVertexArray(vertex_array_);
    gl_.BindBuffer(GL_ARRAY_BUFFER, vertex_buffer_);
    gl_.BindBuffer(GL_ELEMENT_ARRAY_BUFFER, index_buffer_);
    setAttribute(gl_, kVertexAttributes[0], 4, GL_FLOAT, offsetof(SHardwareVertex, position));
    setAttribute(gl_, kVertexAttributes[1], 4, GL_UNSIGNED_BYTE,
                 offsetof(SHardwareVertex, diffuse));
    setAttribute(gl_, kVertexAttributes[2], 4, GL_UNSIGNED_BYTE,
                 offsetof(SHardwareVertex, specular));
    setAttribute(gl_, kVertexAttributes[3], 2, GL_FLOAT, offsetof(SHardwareVertex, uv));
    gl_.BindVertexArray(0);
}

CGlVertexStream::~CGlVertexStream() {
    gl_.DeleteVertexArrays(1, &vertex_array_);
    gl_.DeleteBuffers(1, &vertex_buffer_);
    gl_.DeleteBuffers(1, &index_buffer_);
}

void CGlVertexStream::draw(std::span<const common::SScreenVertex> vertices,
                           std::span<const std::uint16_t> indices) {
    if (indices.empty()) {
        return;
    }
    scratch_.resize(vertices.size());
    std::ranges::transform(vertices, scratch_.begin(), toHardwareVertex);
    gl_.BindVertexArray(vertex_array_);
    stream(GL_ARRAY_BUFFER, std::as_bytes(std::span(scratch_)), vertex_capacity_);
    stream(GL_ELEMENT_ARRAY_BUFFER, std::as_bytes(indices), index_capacity_);
    gl_.DrawElements(GL_TRIANGLES, static_cast<GLsizei>(indices.size()), GL_UNSIGNED_SHORT,
                     bufferOffset(0));
    gl_.BindVertexArray(0);
}

void CGlVertexStream::stream(GLenum target, std::span<const std::byte> bytes,
                             std::size_t &capacity) const {
    const auto size = static_cast<GLsizeiptr>(bytes.size());
    if (bytes.size() > capacity) {
        gl_.BufferData(target, size, bytes.data(), GL_STREAM_DRAW);
        capacity = bytes.size();
        return;
    }
    // Orphaning first gives the driver fresh storage to write while the previous draw still
    // reads the old.
    gl_.BufferData(target, static_cast<GLsizeiptr>(capacity), nullptr, GL_STREAM_DRAW);
    gl_.BufferSubData(target, 0, size, bytes.data());
}

} // namespace nocturne::platform::gl
