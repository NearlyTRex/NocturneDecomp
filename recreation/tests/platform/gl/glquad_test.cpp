#include "platform/gl/glquad.h"
#include "tests/mocks/platform/glrecorder.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <cstring>
#include <memory>
#include <optional>
#include <stdexcept>

namespace nocturne::platform::gl {
namespace {

using ::testing::ElementsAre;

// Program 3 from shaders 1 and 2, then the vertex array and buffer.
constexpr GLuint kProgram = 3;
constexpr GLuint kVertexArray = 4;
constexpr GLuint kBuffer = 5;

std::array<GLfloat, 32> uploadedQuads(const CGlRecorder &gl) {
    std::array<GLfloat, 32> quads{};
    const std::vector<std::byte> data = gl.getCalls("BufferData").at(0).data;
    EXPECT_EQ(data.size(), sizeof(quads));
    std::memcpy(quads.data(), data.data(), sizeof(quads));
    return quads;
}

TEST(CGlQuad, BuildsItsProgramAndVertexLayout) {
    const CGlRecorder gl;
    const CGlQuad quad(gl.getApi());
    EXPECT_THAT(gl.getCalls("BindAttribLocation"),
                ElementsAre(glCall("BindAttribLocation", kProgram, 0),
                            glCall("BindAttribLocation", kProgram, 1)));
    EXPECT_THAT(gl.getCalls("Uniform1i"), ElementsAre(glCall("Uniform1i", 0, 0)));
    EXPECT_THAT(gl.getCalls("BindVertexArray"),
                ElementsAre(glCall("BindVertexArray", kVertexArray), glCall("BindVertexArray", 0)));
    EXPECT_THAT(gl.getCalls("BufferData"),
                ElementsAre(glCall("BufferData", GL_ARRAY_BUFFER, 128, GL_STATIC_DRAW)));
    EXPECT_THAT(gl.getCalls("VertexAttribPointer"),
                ElementsAre(glCall("VertexAttribPointer", 0, 2, GL_FLOAT, GL_FALSE, 16, 0),
                            glCall("VertexAttribPointer", 1, 2, GL_FLOAT, GL_FALSE, 16, 8)));
}

TEST(CGlQuad, TopFirstPutsTheFirstRowAtTheTop) {
    const CGlRecorder gl;
    const CGlQuad quad(gl.getApi());
    const std::array<GLfloat, 32> quads = uploadedQuads(gl);
    // The first vertex is the top left corner: y = 1 samples v = 0.
    EXPECT_EQ(quads[1], 1.0F);
    EXPECT_EQ(quads[3], 0.0F);
    // The same corner of the second strip samples the last row.
    EXPECT_EQ(quads[17], 1.0F);
    EXPECT_EQ(quads[19], 1.0F);
}

TEST(CGlQuad, DrawsEachOrientationFromItsOwnStrip) {
    CGlRecorder gl;
    const CGlQuad quad(gl.getApi());
    gl.clear();
    quad.draw(9, EQuadRows::TopFirst);
    quad.draw(9, EQuadRows::BottomFirst);
    const auto drawn = [](int first) {
        return std::vector{glCall("ActiveTexture", GL_TEXTURE0),
                           glCall("BindTexture", GL_TEXTURE_2D, 9),
                           glCall("UseProgram", kProgram),
                           glCall("BindVertexArray", kVertexArray),
                           glCall("DrawArrays", GL_TRIANGLE_STRIP, first, 4),
                           glCall("BindVertexArray", 0)};
    };
    std::vector<SGlCall> expected = drawn(0);
    const std::vector<SGlCall> flipped = drawn(4);
    expected.insert(expected.end(), flipped.begin(), flipped.end());
    EXPECT_EQ(gl.getCalls(), expected);
}

// Shaders 6 and 7 make program 8, its vertices read where the quad's own program reads them.
TEST(CGlQuad, DrawsThroughAProgramOfTheCallers) {
    CGlRecorder gl;
    const CGlQuad quad(gl.getApi());
    gl.clear();
    const std::unique_ptr<CGlProgram> program = quad.makeProgram("fragment");
    EXPECT_THAT(gl.getCalls("BindAttribLocation"), ElementsAre(glCall("BindAttribLocation", 8, 0),
                                                               glCall("BindAttribLocation", 8, 1)));
    gl.clear();
    quad.draw(9, EQuadRows::TopFirst, *program);
    EXPECT_THAT(gl.getCalls("UseProgram"), ElementsAre(glCall("UseProgram", 8)));
    EXPECT_THAT(gl.getCalls("DrawArrays"),
                ElementsAre(glCall("DrawArrays", GL_TRIANGLE_STRIP, 0, 4)));
}

TEST(CGlQuad, AProgramThatWontLinkThrows) {
    CGlRecorder gl;
    const CGlQuad quad(gl.getApi());
    gl.link_fails = true;
    EXPECT_THROW(static_cast<void>(quad.makeProgram("fragment")), std::runtime_error);
}

TEST(CGlQuad, DeletesItsObjectsWhenDestroyed) {
    CGlRecorder gl;
    std::optional<CGlQuad> quad(std::in_place, gl.getApi());
    gl.clear();
    quad.reset();
    EXPECT_THAT(gl.getCalls(), ElementsAre(glCall("DeleteVertexArrays", 1, kVertexArray),
                                           glCall("DeleteBuffers", 1, kBuffer),
                                           glCall("DeleteProgram", kProgram)));
}

} // namespace
} // namespace nocturne::platform::gl
