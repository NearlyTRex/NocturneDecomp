#include "common/render/screenvertex.h"
#include "platform/gl/glvertexstream.h"
#include "tests/mocks/platform/glrecorder.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <cstring>
#include <optional>
#include <vector>

namespace nocturne::platform::gl {
namespace {

using ::testing::ElementsAre;

constexpr GLuint kVertexArray = 1;
constexpr GLuint kVertexBuffer = 2;
constexpr GLuint kIndexBuffer = 3;
constexpr double kStride = sizeof(SHardwareVertex);

common::SScreenVertex screenVertex(float rhw) {
    return {.x = 10.0F,
            .y = 20.0F,
            .z = 0.5F,
            .rhw = rhw,
            .diffuse = 0x80112233,
            .specular = 0x40AABBCC,
            .u = 0.25F,
            .v = 0.75F};
}

std::vector<SHardwareVertex> uploadedVertices(const SGlCall &call) {
    std::vector<SHardwareVertex> vertices(call.data.size() / sizeof(SHardwareVertex));
    std::memcpy(vertices.data(), call.data.data(), call.data.size());
    return vertices;
}

TEST(ToHardwareVertex, PremultipliesThePositionByW) {
    const SHardwareVertex vertex = toHardwareVertex(screenVertex(0.5F));
    EXPECT_EQ(vertex.position, (std::array{20.0F, 40.0F, 1.0F, 2.0F}));
    EXPECT_EQ(vertex.uv, (std::array{0.25F, 0.75F}));
}

TEST(ToHardwareVertex, ZeroRhwIsWOfOne) {
    EXPECT_EQ(toHardwareVertex(screenVertex(0.0F)).position,
              (std::array{10.0F, 20.0F, 0.5F, 1.0F}));
}

TEST(ToHardwareVertex, ColoursGoFromArgbWordsToRgbaBytes) {
    const SHardwareVertex vertex = toHardwareVertex(screenVertex(1.0F));
    EXPECT_EQ(vertex.diffuse, (std::array<std::uint8_t, 4>{0x11, 0x22, 0x33, 0x80}));
    EXPECT_EQ(vertex.specular, (std::array<std::uint8_t, 4>{0xAA, 0xBB, 0xCC, 0x40}));
}

TEST(CGlVertexStream, RecordsTheLayoutInItsVertexArray) {
    const CGlRecorder gl;
    const CGlVertexStream stream(gl.getApi());
    EXPECT_THAT(
        gl.getCalls(),
        ElementsAre(glCall("GenVertexArrays", 1, kVertexArray),
                    glCall("GenBuffers", 1, kVertexBuffer), glCall("GenBuffers", 1, kIndexBuffer),
                    glCall("BindVertexArray", kVertexArray),
                    glCall("BindBuffer", GL_ARRAY_BUFFER, kVertexBuffer),
                    glCall("BindBuffer", GL_ELEMENT_ARRAY_BUFFER, kIndexBuffer),
                    glCall("EnableVertexAttribArray", 0),
                    glCall("VertexAttribPointer", 0, 4, GL_FLOAT, GL_FALSE, kStride, 0),
                    glCall("EnableVertexAttribArray", 1),
                    glCall("VertexAttribPointer", 1, 4, GL_UNSIGNED_BYTE, GL_TRUE, kStride, 16),
                    glCall("EnableVertexAttribArray", 2),
                    glCall("VertexAttribPointer", 2, 4, GL_UNSIGNED_BYTE, GL_TRUE, kStride, 20),
                    glCall("EnableVertexAttribArray", 3),
                    glCall("VertexAttribPointer", 3, 2, GL_FLOAT, GL_FALSE, kStride, 24),
                    glCall("BindVertexArray", 0)));
}

TEST(CGlVertexStream, DrawsNothingWithoutIndices) {
    CGlRecorder gl;
    CGlVertexStream stream(gl.getApi());
    gl.clear();
    const std::array vertices = {screenVertex(1.0F)};
    stream.draw(vertices, {});
    EXPECT_TRUE(gl.getCalls().empty());
}

TEST(CGlVertexStream, FirstDrawAllocatesBothBuffersWithTheData) {
    CGlRecorder gl;
    CGlVertexStream stream(gl.getApi());
    gl.clear();
    const std::array vertices = {screenVertex(1.0F), screenVertex(0.5F), screenVertex(0.25F)};
    const std::array<std::uint16_t, 3> indices = {0, 1, 2};
    stream.draw(vertices, indices);
    EXPECT_THAT(gl.getCalls(),
                ElementsAre(glCall("BindVertexArray", kVertexArray),
                            glCall("BufferData", GL_ARRAY_BUFFER, 3 * kStride, GL_STREAM_DRAW),
                            glCall("BufferData", GL_ELEMENT_ARRAY_BUFFER, 6, GL_STREAM_DRAW),
                            glCall("DrawElements", GL_TRIANGLES, 3, GL_UNSIGNED_SHORT, 0),
                            glCall("BindVertexArray", 0)));
    const std::vector<SGlCall> uploads = gl.getCalls("BufferData");
    EXPECT_THAT(uploadedVertices(uploads[0]),
                ElementsAre(toHardwareVertex(vertices[0]), toHardwareVertex(vertices[1]),
                            toHardwareVertex(vertices[2])));
    EXPECT_EQ(uploads[1].data, std::vector(std::as_bytes(std::span(indices)).begin(),
                                           std::as_bytes(std::span(indices)).end()));
}

TEST(CGlVertexStream, ASmallerDrawOrphansTheBufferAndWritesIntoIt) {
    CGlRecorder gl;
    CGlVertexStream stream(gl.getApi());
    const std::array vertices = {screenVertex(1.0F), screenVertex(1.0F), screenVertex(1.0F)};
    const std::array<std::uint16_t, 6> indices = {0, 1, 2, 2, 1, 0};
    stream.draw(vertices, indices);
    gl.clear();
    stream.draw(std::span(vertices).first(2), std::span(indices).first(3));
    EXPECT_THAT(gl.getCalls(),
                ElementsAre(glCall("BindVertexArray", kVertexArray),
                            glCall("BufferData", GL_ARRAY_BUFFER, 3 * kStride, GL_STREAM_DRAW),
                            glCall("BufferSubData", GL_ARRAY_BUFFER, 0, 2 * kStride),
                            glCall("BufferData", GL_ELEMENT_ARRAY_BUFFER, 12, GL_STREAM_DRAW),
                            glCall("BufferSubData", GL_ELEMENT_ARRAY_BUFFER, 0, 6),
                            glCall("DrawElements", GL_TRIANGLES, 3, GL_UNSIGNED_SHORT, 0),
                            glCall("BindVertexArray", 0)));
    EXPECT_TRUE(gl.getCalls("BufferData")[0].data.empty());
    EXPECT_EQ(uploadedVertices(gl.getCalls("BufferSubData")[0]).size(), 2U);
}

TEST(CGlVertexStream, ALargerDrawGrowsTheBuffer) {
    CGlRecorder gl;
    CGlVertexStream stream(gl.getApi());
    const std::array vertices = {screenVertex(1.0F), screenVertex(1.0F), screenVertex(1.0F)};
    const std::array<std::uint16_t, 3> indices = {0, 1, 2};
    stream.draw(std::span(vertices).first(1), std::span(indices).first(1));
    gl.clear();
    stream.draw(vertices, indices);
    EXPECT_THAT(gl.getCalls("BufferData"),
                ElementsAre(glCall("BufferData", GL_ARRAY_BUFFER, 3 * kStride, GL_STREAM_DRAW),
                            glCall("BufferData", GL_ELEMENT_ARRAY_BUFFER, 6, GL_STREAM_DRAW)));
    EXPECT_EQ(gl.count("BufferSubData"), 0U);
}

TEST(CGlVertexStream, DeletesItsObjectsWhenDestroyed) {
    CGlRecorder gl;
    std::optional<CGlVertexStream> stream(std::in_place, gl.getApi());
    gl.clear();
    stream.reset();
    EXPECT_THAT(gl.getCalls(), ElementsAre(glCall("DeleteVertexArrays", 1, kVertexArray),
                                           glCall("DeleteBuffers", 1, kVertexBuffer),
                                           glCall("DeleteBuffers", 1, kIndexBuffer)));
}

} // namespace
} // namespace nocturne::platform::gl
