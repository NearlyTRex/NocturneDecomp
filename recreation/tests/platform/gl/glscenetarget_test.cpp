#include "common/video/framebuffer.h"
#include "platform/gl/glquad.h"
#include "platform/gl/glscenetarget.h"
#include "tests/mocks/platform/glrecorder.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstddef>
#include <memory>
#include <vector>

namespace nocturne::platform::gl {
namespace {

using ::testing::ElementsAre;

// The quad takes 1 to 5; the target's upload texture is next, then each resize's colour,
// depth and framebuffer.
constexpr GLuint kQuadProgram = 3;
constexpr GLuint kQuadArray = 4;
constexpr GLuint kUploadTexture = 6;
constexpr GLuint kColor = 7;
constexpr GLuint kDepth = 8;
constexpr GLuint kFramebuffer = 9;

struct SFixture {
    CGlRecorder gl;
    CGlQuad quad{gl.getApi()};
    std::unique_ptr<CGlSceneTarget> target = std::make_unique<CGlSceneTarget>(gl.getApi(), quad);
};

std::vector<std::byte> rows(std::initializer_list<int> values, std::size_t pitch) {
    std::vector<std::byte> out;
    for (const int value : values) {
        out.insert(out.end(), pitch, static_cast<std::byte>(value));
    }
    return out;
}

TEST(CGlSceneTarget, KeepsAnUploadTextureSampledNearestAndClamped) {
    CGlRecorder gl;
    const CGlQuad quad(gl.getApi());
    gl.clear();
    const CGlSceneTarget target(gl.getApi(), quad);
    EXPECT_THAT(
        gl.getCalls(),
        ElementsAre(glCall("GenTextures", 1, kUploadTexture),
                    glCall("BindTexture", GL_TEXTURE_2D, kUploadTexture),
                    glCall("TexParameteri", GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST),
                    glCall("TexParameteri", GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST),
                    glCall("TexParameteri", GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE),
                    glCall("TexParameteri", GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE)));
}

TEST(CGlSceneTarget, ResizeBuildsATargetThatStartsBlackAtTheFarDepth) {
    SFixture f;
    f.gl.clear();
    EXPECT_TRUE(f.target->resize(640, 480));
    EXPECT_THAT(
        f.gl.getCalls(),
        ElementsAre(glCall("DeleteFramebuffers", 1, 0), glCall("DeleteTextures", 1, 0),
                    glCall("DeleteRenderbuffers", 1, 0), glCall("GenTextures", 1, kColor),
                    glCall("BindTexture", GL_TEXTURE_2D, kColor),
                    glCall("TexParameteri", GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST),
                    glCall("TexParameteri", GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST),
                    glCall("TexParameteri", GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE),
                    glCall("TexParameteri", GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE),
                    glCall("TexImage2D", GL_TEXTURE_2D, 0, GL_RGBA8, 640, 480, 0, GL_BGRA,
                           GL_UNSIGNED_BYTE),
                    glCall("GenRenderbuffers", 1, kDepth),
                    glCall("BindRenderbuffer", GL_RENDERBUFFER, kDepth),
                    glCall("RenderbufferStorage", GL_RENDERBUFFER, GL_DEPTH_COMPONENT24, 640, 480),
                    glCall("BindRenderbuffer", GL_RENDERBUFFER, 0),
                    glCall("GenFramebuffers", 1, kFramebuffer),
                    glCall("BindFramebuffer", GL_FRAMEBUFFER, kFramebuffer),
                    glCall("FramebufferTexture2D", GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0,
                           GL_TEXTURE_2D, kColor, 0),
                    glCall("FramebufferRenderbuffer", GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT,
                           GL_RENDERBUFFER, kDepth),
                    glCall("CheckFramebufferStatus", GL_FRAMEBUFFER),
                    glCall("Viewport", 0, 0, 640, 480),
                    glCall("ClearColor", 0.0F, 0.0F, 0.0F, 1.0F), glCall("ClearDepth", 1.0),
                    glCall("DepthMask", GL_TRUE),
                    glCall("Clear", GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT)));
    EXPECT_EQ(f.target->getFramebuffer(), kFramebuffer);
    EXPECT_EQ(f.target->getColorTexture(), kColor);
}

TEST(CGlSceneTarget, TheSameSizeKeepsTheContentsAndRebinds) {
    SFixture f;
    ASSERT_TRUE(f.target->resize(640, 480));
    f.gl.clear();
    EXPECT_TRUE(f.target->resize(640, 480));
    EXPECT_THAT(f.gl.getCalls(),
                ElementsAre(glCall("BindFramebuffer", GL_FRAMEBUFFER, kFramebuffer)));
}

TEST(CGlSceneTarget, ANewWidthOrHeightRebuildsTheTarget) {
    for (const auto &[width, height] : {std::pair{800, 480}, std::pair{640, 600}}) {
        SFixture f;
        ASSERT_TRUE(f.target->resize(640, 480));
        f.gl.clear();
        EXPECT_TRUE(f.target->resize(width, height));
        EXPECT_THAT(std::vector(f.gl.getCalls().begin(), f.gl.getCalls().begin() + 3),
                    ElementsAre(glCall("DeleteFramebuffers", 1, kFramebuffer),
                                glCall("DeleteTextures", 1, kColor),
                                glCall("DeleteRenderbuffers", 1, kDepth)));
        EXPECT_EQ(f.gl.getCalls().back(),
                  glCall("Clear", GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT));
    }
}

TEST(CGlSceneTarget, AnIncompleteTargetIsDroppedAndTheWindowBound) {
    SFixture f;
    f.gl.framebuffer_status = GL_FRAMEBUFFER_UNSUPPORTED;
    f.gl.clear();
    EXPECT_FALSE(f.target->resize(640, 480));
    const std::vector<SGlCall> &calls = f.gl.getCalls();
    EXPECT_THAT(std::vector(calls.end() - 4, calls.end()),
                ElementsAre(glCall("BindFramebuffer", GL_FRAMEBUFFER, 0),
                            glCall("DeleteFramebuffers", 1, kFramebuffer),
                            glCall("DeleteTextures", 1, kColor),
                            glCall("DeleteRenderbuffers", 1, kDepth)));
    EXPECT_EQ(f.target->getFramebuffer(), 0U);
    EXPECT_EQ(f.target->getColorTexture(), 0U);
}

TEST(CGlSceneTarget, ReadBackTurnsGlsBottomUpRowsTopDown) {
    SFixture f;
    ASSERT_TRUE(f.target->resize(2, 3));
    // Three 32-bit pixels per row, of which the target fills two.
    constexpr std::size_t kPitch = 12;
    f.gl.read_pixels = rows({0, 1, 2}, kPitch);
    std::vector<std::byte> image(kPitch * 3);
    f.gl.clear();
    f.target->readBack(image, common::EPixelLayout::Bgra8888, kPitch);
    EXPECT_THAT(f.gl.getCalls(),
                ElementsAre(glCall("BindFramebuffer", GL_FRAMEBUFFER, kFramebuffer),
                            glCall("ReadBuffer", GL_COLOR_ATTACHMENT0),
                            glCall("PixelStorei", GL_PACK_ALIGNMENT, 1),
                            glCall("PixelStorei", GL_PACK_ROW_LENGTH, 3),
                            glCall("ReadPixels", 0, 0, 2, 3, GL_BGRA, GL_UNSIGNED_BYTE),
                            glCall("PixelStorei", GL_PACK_ROW_LENGTH, 0)));
    EXPECT_EQ(f.gl.getCalls("ReadPixels")[0].pointer, image.data());
    EXPECT_EQ(image, rows({2, 1, 0}, kPitch));
}

TEST(CGlSceneTarget, ReadBackOfAnEvenHeightSwapsEveryRow) {
    SFixture f;
    ASSERT_TRUE(f.target->resize(2, 4));
    f.gl.read_pixels = rows({0, 1, 2, 3}, 4);
    std::vector<std::byte> image(16);
    f.target->readBack(image, common::EPixelLayout::Rgb565, 4);
    EXPECT_EQ(f.gl.getCalls("ReadPixels")[0],
              glCall("ReadPixels", 0, 0, 2, 4, GL_RGB, GL_UNSIGNED_SHORT_5_6_5));
    EXPECT_EQ(image, rows({3, 2, 1, 0}, 4));
}

TEST(CGlSceneTarget, UploadDrawsTheImageOverTheColourWithDepthUntouched) {
    SFixture f;
    ASSERT_TRUE(f.target->resize(800, 600));
    const std::vector<std::byte> image(std::size_t{640} * 2 * 480);
    f.gl.clear();
    f.target->upload(image, common::EPixelLayout::Rgb565, 640, 480, 640 * 2);
    EXPECT_THAT(
        f.gl.getCalls(),
        ElementsAre(glCall("ActiveTexture", GL_TEXTURE0),
                    glCall("BindTexture", GL_TEXTURE_2D, kUploadTexture),
                    glCall("PixelStorei", GL_UNPACK_ALIGNMENT, 1),
                    glCall("PixelStorei", GL_UNPACK_ROW_LENGTH, 640),
                    glCall("TexImage2D", GL_TEXTURE_2D, 0, GL_RGBA8, 640, 480, 0, GL_RGB,
                           GL_UNSIGNED_SHORT_5_6_5),
                    glCall("PixelStorei", GL_UNPACK_ROW_LENGTH, 0),
                    glCall("BindFramebuffer", GL_FRAMEBUFFER, kFramebuffer),
                    glCall("Viewport", 0, 0, 800, 600), glCall("Disable", GL_SCISSOR_TEST),
                    glCall("Disable", GL_DEPTH_TEST), glCall("DepthMask", GL_FALSE),
                    glCall("Disable", GL_BLEND), glCall("Disable", GL_CULL_FACE),
                    glCall("ActiveTexture", GL_TEXTURE0),
                    glCall("BindTexture", GL_TEXTURE_2D, kUploadTexture),
                    glCall("UseProgram", kQuadProgram), glCall("BindVertexArray", kQuadArray),
                    glCall("DrawArrays", GL_TRIANGLE_STRIP, 0, 4), glCall("BindVertexArray", 0)));
    EXPECT_EQ(f.gl.getCalls("TexImage2D")[0].pointer, image.data());
}

TEST(CGlSceneTarget, AnUploadLikeTheLastReplacesOnlyTheContents) {
    SFixture f;
    ASSERT_TRUE(f.target->resize(4, 4));
    const std::vector<std::byte> image(std::size_t{4} * 4 * 4);
    f.target->upload(image, common::EPixelLayout::Bgra8888, 4, 4, 16);
    f.gl.clear();
    f.target->upload(image, common::EPixelLayout::Bgra8888, 4, 4, 16);
    EXPECT_EQ(f.gl.count("TexImage2D"), 0U);
    EXPECT_THAT(f.gl.getCalls("TexSubImage2D"),
                ElementsAre(glCall("TexSubImage2D", GL_TEXTURE_2D, 0, 0, 0, 4, 4, GL_BGRA,
                                   GL_UNSIGNED_BYTE)));
    EXPECT_EQ(f.gl.getCalls("TexSubImage2D")[0].pointer, image.data());
}

TEST(CGlSceneTarget, AnUploadOfAnotherShapeRespecifiesTheTexture) {
    struct SShape {
        common::EPixelLayout layout;
        int width;
        int height;
    };
    for (const SShape shape : {SShape{common::EPixelLayout::Bgra8888, 2, 4},
                               SShape{common::EPixelLayout::Bgra8888, 4, 2},
                               SShape{common::EPixelLayout::Rgb565, 4, 4}}) {
        SFixture f;
        ASSERT_TRUE(f.target->resize(4, 4));
        const std::vector<std::byte> image(std::size_t{4} * 4 * 4);
        f.target->upload(image, common::EPixelLayout::Bgra8888, 4, 4, 16);
        f.gl.clear();
        f.target->upload(image, shape.layout, shape.width, shape.height, 16);
        EXPECT_EQ(f.gl.count("TexImage2D"), 1U);
        EXPECT_EQ(f.gl.count("TexSubImage2D"), 0U);
    }
}

TEST(CGlSceneTarget, DestroyingDeletesTheTargetAndTheUploadTexture) {
    SFixture f;
    ASSERT_TRUE(f.target->resize(4, 4));
    f.gl.clear();
    f.target.reset();
    EXPECT_THAT(f.gl.getCalls(), ElementsAre(glCall("DeleteFramebuffers", 1, kFramebuffer),
                                             glCall("DeleteTextures", 1, kColor),
                                             glCall("DeleteRenderbuffers", 1, kDepth),
                                             glCall("DeleteTextures", 1, kUploadTexture)));
}

} // namespace
} // namespace nocturne::platform::gl
