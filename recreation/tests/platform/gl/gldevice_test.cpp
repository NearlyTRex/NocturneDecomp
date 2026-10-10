#include "platform/gl/gldevice.h"
#include "tests/mocks/platform/glrecorder.h"
#include "tests/mocks/platform/mockglframepresenter.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <algorithm>
#include <vector>

namespace nocturne::platform::gl {
namespace {

using ::testing::StrictMock;

// The quad, pipeline and upload texture take names 1 to 12; the first mode's colour texture
// and framebuffer follow.
constexpr GLuint kSceneColor = 13;
constexpr GLuint kSceneFramebuffer = 15;

struct SFixture {
    CGlRecorder gl;
    StrictMock<MockGlFramePresenter> presenter;
    CGlDevice device{gl.getApi(), presenter};
    std::vector<void *> scanlines = std::vector<void *>(480);
};

void addTriangle(CGlDevice &device) {
    ASSERT_EQ(device.getBatch().addPolygon(3).size(), 3U);
}

std::size_t indexOf(const CGlRecorder &gl, const SGlCall &call) {
    return static_cast<std::size_t>(std::ranges::find(gl.getCalls(), call) - gl.getCalls().begin());
}

TEST(CGlDevice, TakesOnlySixteenAndThirtyTwoBitModes) {
    SFixture f;
    f.gl.clear();
    EXPECT_FALSE(f.device.setMode(640, 480, 8, f.scanlines));
    EXPECT_FALSE(f.device.setMode(640, 480, 24, f.scanlines));
    EXPECT_FALSE(f.device.setMode(0, 480, 16, f.scanlines));
    EXPECT_FALSE(f.device.setMode(640, 0, 16, f.scanlines));
    EXPECT_TRUE(f.gl.getCalls().empty());
    EXPECT_EQ(f.device.getBitsPerPixel(), 0);
}

TEST(CGlDevice, AModePointsTheEnginesRowsAtTheFrame) {
    SFixture f;
    ASSERT_TRUE(f.device.setMode(640, 480, 16, f.scanlines));
    EXPECT_EQ(f.device.getWidth(), 640);
    EXPECT_EQ(f.device.getHeight(), 480);
    EXPECT_EQ(f.device.getBitsPerPixel(), 16);
    const auto *first = static_cast<const std::byte *>(f.scanlines[0]);
    for (std::size_t y = 0; y < f.scanlines.size(); ++y) {
        EXPECT_EQ(static_cast<const std::byte *>(f.scanlines[y]), first + (y * 640 * 2));
    }
}

TEST(CGlDevice, TheEnginesArrayIsNeverWrittenPastItsEnd) {
    SFixture f;
    std::vector<void *> short_array(10);
    ASSERT_TRUE(f.device.setMode(64, 20, 32, short_array));
    EXPECT_TRUE(std::ranges::none_of(short_array, [](void *row) { return row == nullptr; }));
    std::vector<void *> long_array(30);
    ASSERT_TRUE(f.device.setMode(64, 20, 32, long_array));
    EXPECT_NE(long_array[19], nullptr);
    EXPECT_EQ(long_array[20], nullptr);
}

TEST(CGlDevice, ATargetGlCannotCompleteLeavesNoMode) {
    SFixture f;
    ASSERT_TRUE(f.device.setMode(640, 480, 16, f.scanlines));
    ASSERT_TRUE(f.device.beginScene());
    addTriangle(f.device);
    f.gl.framebuffer_status = GL_FRAMEBUFFER_UNSUPPORTED;
    EXPECT_FALSE(f.device.setMode(800, 600, 16, f.scanlines));
    EXPECT_EQ(f.device.getBitsPerPixel(), 0);
    EXPECT_FALSE(f.device.isInScene());
    EXPECT_TRUE(f.device.getBatch().getVertices().empty());
    EXPECT_FALSE(f.device.beginScene());
}

TEST(CGlDevice, AModeSetsTheProjectionAndInvalidatesThePipeline) {
    SFixture f;
    const std::uint32_t epoch = f.device.getPipeline().getEpoch();
    f.gl.clear();
    ASSERT_TRUE(f.device.setMode(640, 480, 32, f.scanlines));
    EXPECT_EQ(f.device.getPipeline().getEpoch(), epoch + 1);
    EXPECT_EQ(f.gl.count("UniformMatrix4fv"), 1U);
}

TEST(CGlDevice, OnlyAModeThatMovedDropsTheTextures) {
    SFixture f;
    const std::vector<std::uint32_t> pixel(1);
    ASSERT_TRUE(f.device.setMode(640, 480, 16, f.scanlines));
    f.device.getTextures().upload("A.RAW", 1, pixel);
    ASSERT_TRUE(f.device.setMode(640, 480, 16, f.scanlines));
    EXPECT_EQ(f.device.getTextures().getSize(), 1U);
    for (const auto &[width, height, bits] :
         {std::tuple{800, 480, 16}, std::tuple{800, 600, 16}, std::tuple{800, 600, 32}}) {
        f.device.getTextures().upload("A.RAW", 1, pixel);
        ASSERT_TRUE(f.device.setMode(width, height, bits, f.scanlines));
        EXPECT_EQ(f.device.getTextures().getSize(), 0U);
    }
}

TEST(CGlDevice, ScenesNeedAModeAndDoNotNest) {
    SFixture f;
    EXPECT_FALSE(f.device.beginScene());
    EXPECT_FALSE(f.device.endScene());
    ASSERT_TRUE(f.device.setMode(640, 480, 16, f.scanlines));
    EXPECT_TRUE(f.device.beginScene());
    EXPECT_TRUE(f.device.isInScene());
    EXPECT_FALSE(f.device.beginScene());
    EXPECT_TRUE(f.device.endScene());
    EXPECT_FALSE(f.device.isInScene());
    EXPECT_FALSE(f.device.endScene());
}

TEST(CGlDevice, EndingASceneDrawsWhatItGathered) {
    SFixture f;
    ASSERT_TRUE(f.device.setMode(640, 480, 16, f.scanlines));
    ASSERT_TRUE(f.device.beginScene());
    addTriangle(f.device);
    f.gl.clear();
    ASSERT_TRUE(f.device.endScene());
    EXPECT_EQ(f.gl.getCalls()[0], glCall("BindFramebuffer", GL_FRAMEBUFFER, kSceneFramebuffer));
    EXPECT_EQ(f.gl.getCalls("DrawElements"),
              std::vector{glCall("DrawElements", GL_TRIANGLES, 3, GL_UNSIGNED_SHORT, 0)});
    EXPECT_TRUE(f.device.getBatch().getIndices().empty());
}

TEST(CGlDevice, FlushingPolygonsWithoutTrianglesDrawsNothingAndEmptiesTheBatch) {
    SFixture f;
    ASSERT_TRUE(f.device.setMode(640, 480, 16, f.scanlines));
    ASSERT_EQ(f.device.getBatch().addPolygon(2).size(), 2U);
    f.gl.clear();
    f.device.flush();
    EXPECT_TRUE(f.gl.getCalls().empty());
    EXPECT_TRUE(f.device.getBatch().getVertices().empty());
}

TEST(CGlDevice, BindingSamplesAsTheAppliedStateAsks) {
    SFixture f;
    f.device.getPipeline().apply({.min_filter = common::ETextureFilter::Linear});
    f.gl.clear();
    f.device.bindTexture(20);
    EXPECT_THAT(f.gl.getCalls("TexParameteri")[0],
                glCall("TexParameteri", GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR));
    EXPECT_EQ(f.gl.count("GenerateMipmap"), 0U);
}

TEST(CGlDevice, ReflectionPassesNest) {
    SFixture f;
    const auto reflects = [&f] {
        f.gl.clear();
        f.device.bindTexture(20);
        return f.gl.count("GenerateMipmap") == 1;
    };
    f.device.beginReflectionPass();
    f.device.beginReflectionPass();
    f.device.endReflectionPass();
    EXPECT_TRUE(reflects());
    f.device.endReflectionPass();
    f.device.endReflectionPass();
    f.gl.clear();
    f.device.bindTexture(21);
    EXPECT_EQ(f.gl.count("GenerateMipmap"), 0U);
    // An unmatched end does not leave a later pass needing two ends.
    f.device.beginReflectionPass();
    f.gl.clear();
    f.device.bindTexture(22);
    EXPECT_EQ(f.gl.count("GenerateMipmap"), 1U);
}

TEST(CGlDevice, DepthSlotsNeedAMode) {
    SFixture f;
    EXPECT_FALSE(f.device.saveDepth(0));
    EXPECT_FALSE(f.device.restoreDepth(0, {.right = 1, .bottom = 1}));
}

TEST(CGlDevice, SavingDepthDrawsWhatIsPendingFirst) {
    SFixture f;
    ASSERT_TRUE(f.device.setMode(640, 480, 16, f.scanlines));
    addTriangle(f.device);
    f.gl.clear();
    EXPECT_TRUE(f.device.saveDepth(0));
    EXPECT_LT(indexOf(f.gl, glCall("DrawElements", GL_TRIANGLES, 3, GL_UNSIGNED_SHORT, 0)),
              f.gl.getCalls().size());
    EXPECT_EQ(f.gl.getCalls("BlitFramebuffer"),
              std::vector{glCall("BlitFramebuffer", 0, 0, 640, 480, 0, 0, 640, 480,
                                 GL_DEPTH_BUFFER_BIT, GL_NEAREST)});
    EXPECT_EQ(f.gl.getCalls().back(), glCall("BindFramebuffer", GL_FRAMEBUFFER, kSceneFramebuffer));
}

TEST(CGlDevice, RestoringDepthFlipsTheRectangleAgainstTheMode) {
    SFixture f;
    ASSERT_TRUE(f.device.setMode(640, 480, 16, f.scanlines));
    ASSERT_TRUE(f.device.saveDepth(2));
    addTriangle(f.device);
    f.gl.clear();
    EXPECT_TRUE(f.device.restoreDepth(2, {.left = 0, .top = 0, .right = 640, .bottom = 100}));
    EXPECT_EQ(f.gl.count("DrawElements"), 1U);
    EXPECT_EQ(f.gl.getCalls("BlitFramebuffer"),
              std::vector{glCall("BlitFramebuffer", 0, 380, 640, 480, 0, 380, 640, 480,
                                 GL_DEPTH_BUFFER_BIT, GL_NEAREST)});
}

TEST(CGlDevice, PresentingWithoutAModeShowsNothing) {
    SFixture f;
    f.device.present();
}

TEST(CGlDevice, PresentEndsTheSceneThenHandsOverTheTarget) {
    SFixture f;
    ASSERT_TRUE(f.device.setMode(800, 600, 32, f.scanlines));
    ASSERT_TRUE(f.device.beginScene());
    addTriangle(f.device);
    EXPECT_CALL(f.presenter, presentScene(kSceneColor, 800, 600)).WillOnce([&f] {
        EXPECT_EQ(f.gl.count("DrawElements"), 1U);
    });
    f.device.present();
    EXPECT_FALSE(f.device.isInScene());
}

// The presenter draws with state and a texture of its own and restores neither.
TEST(CGlDevice, PresentingForgetsThePipelineAndTheBinding) {
    SFixture f;
    ASSERT_TRUE(f.device.setMode(640, 480, 16, f.scanlines));
    f.device.bindTexture(30);
    EXPECT_CALL(f.presenter, presentScene);
    const std::uint32_t epoch = f.device.getPipeline().getEpoch();
    f.device.present();
    EXPECT_EQ(f.device.getPipeline().getEpoch(), epoch + 1);
    f.gl.clear();
    f.device.getTextures().upload("A.RAW", 1, std::vector<std::uint32_t>(1));
    EXPECT_EQ(f.gl.getCalls().back(), glCall("BindTexture", GL_TEXTURE_2D, 0));
}

} // namespace
} // namespace nocturne::platform::gl
