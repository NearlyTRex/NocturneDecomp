#pragma once

#include "common/fwd.h"
#include "platform/gl/glapi.h"
#include "platform/gl/glprogram.h"

#include <array>
#include <cstddef>
#include <cstdint>
#include <span>
#include <vector>

namespace nocturne::platform::gl {

// What the hardware reads per vertex: position premultiplied by w, the two colours as R, G, B,
// A bytes, and one texture coordinate pair.
struct SHardwareVertex {
    std::array<float, 4> position{};
    std::array<std::uint8_t, 4> diffuse{};
    std::array<std::uint8_t, 4> specular{};
    std::array<float, 2> uv{};

    bool operator==(const SHardwareVertex &) const = default;
};

// The locations a program drawing from the stream binds its inputs to.
inline constexpr std::array<SAttributeBinding, 4> kVertexAttributes = {{
    {.location = 0, .name = "a_pos"},
    {.location = 1, .name = "a_color"},
    {.location = 2, .name = "a_specular"},
    {.location = 3, .name = "a_uv"},
}};

// Premultiplying by w lets the perspective divide reproduce the engine's own projection while
// texture coordinates stay perspective correct. A zero rhw is taken as w = 1.
[[nodiscard]] SHardwareVertex toHardwareVertex(const common::SScreenVertex &vertex);

// Indexed triangles streamed through one vertex array, its buffers reused from draw to draw.
class CGlVertexStream {
public:
    explicit CGlVertexStream(const SGlApi &gl);
    ~CGlVertexStream();
    CGlVertexStream(const CGlVertexStream &) = delete;
    CGlVertexStream &operator=(const CGlVertexStream &) = delete;

    // Draws with whatever program is current. Nothing is drawn without indices.
    void draw(std::span<const common::SScreenVertex> vertices,
              std::span<const std::uint16_t> indices);

private:
    void stream(GLenum target, std::span<const std::byte> bytes, std::size_t &capacity) const;

    const SGlApi &gl_;
    GLuint vertex_array_ = 0;
    GLuint vertex_buffer_ = 0;
    GLuint index_buffer_ = 0;
    std::size_t vertex_capacity_ = 0;
    std::size_t index_capacity_ = 0;
    std::vector<SHardwareVertex> scratch_;
};

} // namespace nocturne::platform::gl
