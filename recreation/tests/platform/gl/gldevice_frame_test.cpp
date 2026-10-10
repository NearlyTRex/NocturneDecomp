#include "platform/gl/gldevice.h"
#include "tests/mocks/platform/glrecorder.h"
#include "tests/mocks/platform/mockglframepresenter.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <algorithm>
#include <iterator>
#include <string>
#include <vector>

namespace nocturne::platform::gl {
namespace {

using ::testing::ElementsAre;
using ::testing::StrictMock;

constexpr GLuint kSceneFramebuffer = 15;
// 32-bit, so a row is four bytes a pixel.
constexpr int kWidth = 8;
constexpr int kHeight = 4;
constexpr int kPitch = kWidth * 4;

struct SFixture {
    SFixture() {
        EXPECT_TRUE(device.setMode(kWidth, kHeight, 32, scanlines));
        gl.read_pixels.assign(static_cast<std::size_t>(kPitch) * kHeight, std::byte{0x5A});
    }

    std::byte &pixel(std::size_t row) {
        return *static_cast<std::byte *>(scanlines[row]);
    }
    void drawTriangle() {
        EXPECT_TRUE(device.beginScene());
        EXPECT_EQ(device.getBatch().addPolygon(3).size(), 3U);
    }

    CGlRecorder gl;
    StrictMock<MockGlFramePresenter> presenter;
    CGlDevice device{gl.getApi(), presenter};
    std::vector<void *> scanlines = std::vector<void *>(kHeight);
};

std::vector<std::string> callNames(const CGlRecorder &gl) {
    std::vector<std::string> names;
    std::ranges::transform(gl.getCalls(), std::back_inserter(names),
                           [](const SGlCall &call) { return call.name; });
    return names;
}

TEST(CGlDeviceFrame, NothingLocksWithoutAMode) {
    const CGlRecorder gl;
    StrictMock<MockGlFramePresenter> presenter;
    CGlDevice device(gl.getApi(), presenter);
    EXPECT_FALSE(device.lockFrame());
    EXPECT_FALSE(device.lockHoldBuffer());
    EXPECT_FALSE(device.unlockHoldBuffer());
    EXPECT_FALSE(device.isFrameLocked());
}

TEST(CGlDeviceFrame, UnlockingNeedsALock) {
    SFixture f;
    EXPECT_FALSE(f.device.unlockFrame());
    ASSERT_TRUE(f.device.lockFrame());
    EXPECT_TRUE(f.device.isFrameLocked());
    EXPECT_TRUE(f.device.unlockFrame());
    EXPECT_FALSE(f.device.isFrameLocked());
    EXPECT_FALSE(f.device.unlockFrame());
}

// The engine draws its 2D straight into the image; reading back with nothing new in the
// target would erase it, and a screen with no 3D would never appear.
TEST(CGlDeviceFrame, ALockWithNothingDrawnKeepsTheImage) {
    SFixture f;
    f.pixel(0) = std::byte{0x11};
    f.gl.clear();
    ASSERT_TRUE(f.device.lockFrame());
    EXPECT_EQ(f.gl.count("ReadPixels"), 0U);
    EXPECT_EQ(f.pixel(0), std::byte{0x11});
}

TEST(CGlDeviceFrame, ALockEndsTheSceneSoItsGeometryLandsBeforeTheRead) {
    SFixture f;
    f.drawTriangle();
    f.gl.clear();
    ASSERT_TRUE(f.device.lockFrame());
    EXPECT_FALSE(f.device.isInScene());
    const std::vector<std::string> order = callNames(f.gl);
    const auto drawn = std::ranges::find(order, "DrawElements");
    const auto read = std::ranges::find(order, "ReadPixels");
    EXPECT_NE(read, order.end());
    EXPECT_LT(drawn, read);
}

TEST(CGlDeviceFrame, ALockAfterDrawingReadsTheTargetIntoTheImage) {
    SFixture f;
    f.drawTriangle();
    f.gl.clear();
    ASSERT_TRUE(f.device.lockFrame());
    ASSERT_EQ(f.gl.count("ReadPixels"), 1U);
    EXPECT_EQ(f.gl.getCalls("ReadPixels")[0].pointer, f.scanlines[0]);
    EXPECT_EQ(f.pixel(kHeight - 1), std::byte{0x5A});
}

TEST(CGlDeviceFrame, AfterAnUnlockTheNextLockReadsNothing) {
    SFixture f;
    f.drawTriangle();
    ASSERT_TRUE(f.device.lockFrame());
    ASSERT_TRUE(f.device.unlockFrame());
    f.gl.clear();
    ASSERT_TRUE(f.device.lockFrame());
    EXPECT_EQ(f.gl.count("ReadPixels"), 0U);
}

TEST(CGlDeviceFrame, UnlockingPutsTheCompositeBackInTheTarget) {
    SFixture f;
    ASSERT_TRUE(f.device.lockFrame());
    const std::uint32_t epoch = f.device.getPipeline().getEpoch();
    f.gl.clear();
    ASSERT_TRUE(f.device.unlockFrame());
    EXPECT_THAT(f.gl.getCalls("TexImage2D"),
                ElementsAre(glCall("TexImage2D", GL_TEXTURE_2D, 0, GL_RGBA8, kWidth, kHeight, 0,
                                   GL_BGRA, GL_UNSIGNED_BYTE)));
    EXPECT_EQ(f.gl.getCalls("TexImage2D")[0].pointer, f.scanlines[0]);
    EXPECT_EQ(f.device.getPipeline().getEpoch(), epoch + 1);
}

// Above 480 lines, at 16 bits per pixel.
struct SHoldFixture {
    SHoldFixture() {
        EXPECT_TRUE(device.setMode(1024, 768, 16, scanlines));
        frame = scanlines;
    }

    CGlRecorder gl;
    StrictMock<MockGlFramePresenter> presenter;
    CGlDevice device{gl.getApi(), presenter};
    std::vector<void *> scanlines = std::vector<void *>(768);
    std::vector<void *> frame;
};

// The rows the engine sees while the hold buffer is locked.
std::vector<void *> holdRows(const std::vector<void *> &frame, void *hold) {
    std::vector<void *> rows = frame;
    auto *row = static_cast<std::byte *>(hold);
    for (std::size_t y = 0; y < CGlDevice::kHoldHeight; ++y) {
        rows[y] = row + (y * CGlDevice::kHoldWidth * 2);
    }
    return rows;
}

TEST(CGlDeviceFrame, LockingTheHoldBufferPointsTheFirstRowsAtIt) {
    SHoldFixture f;
    ASSERT_TRUE(f.device.beginScene());
    ASSERT_TRUE(f.device.lockHoldBuffer());
    EXPECT_FALSE(f.device.isInScene());
    EXPECT_NE(f.scanlines[0], f.frame[0]);
    EXPECT_EQ(f.scanlines, holdRows(f.frame, f.scanlines[0]));
}

TEST(CGlDeviceFrame, UnlockingTheHoldBufferStretchesItOverTheTarget) {
    SHoldFixture f;
    ASSERT_TRUE(f.device.lockHoldBuffer());
    void *const hold = f.scanlines[0];
    const std::uint32_t epoch = f.device.getPipeline().getEpoch();
    f.gl.clear();
    ASSERT_TRUE(f.device.unlockHoldBuffer());
    EXPECT_EQ(f.scanlines, f.frame);
    EXPECT_THAT(f.gl.getCalls("TexImage2D"),
                ElementsAre(glCall("TexImage2D", GL_TEXTURE_2D, 0, GL_RGBA8, 640, 480, 0, GL_RGB,
                                   GL_UNSIGNED_SHORT_5_6_5)));
    EXPECT_EQ(f.gl.getCalls("TexImage2D")[0].pointer, hold);
    EXPECT_EQ(f.gl.getCalls("Viewport")[0], glCall("Viewport", 0, 0, 1024, 768));
    EXPECT_EQ(f.device.getPipeline().getEpoch(), epoch + 1);
}

// The stretched composite is in the target and not in the frame image.
TEST(CGlDeviceFrame, AStretchedHoldBufferIsReadBackAtTheNextLock) {
    SHoldFixture f;
    ASSERT_TRUE(f.device.lockHoldBuffer());
    ASSERT_TRUE(f.device.unlockHoldBuffer());
    f.gl.read_pixels.assign(std::size_t{1024} * 2 * 768, std::byte{0});
    f.gl.clear();
    ASSERT_TRUE(f.device.lockFrame());
    EXPECT_EQ(f.gl.count("ReadPixels"), 1U);
}

TEST(CGlDeviceFrame, ClearingColourDrawsWhatIsPendingThenClearsTheTarget) {
    SFixture f;
    f.drawTriangle();
    f.gl.clear();
    f.device.clearColor();
    const std::vector<SGlCall> &calls = f.gl.getCalls();
    EXPECT_THAT(std::vector(calls.end() - 3, calls.end()),
                ElementsAre(glCall("BindFramebuffer", GL_FRAMEBUFFER, kSceneFramebuffer),
                            glCall("ClearColor", 0.0F, 0.0F, 0.0F, 1.0F),
                            glCall("Clear", GL_COLOR_BUFFER_BIT)));
    EXPECT_EQ(f.gl.count("DrawElements"), 1U);
}

TEST(CGlDeviceFrame, AClearedTargetIsReadBackAtTheNextLock) {
    SFixture f;
    f.device.clearColor();
    f.gl.clear();
    ASSERT_TRUE(f.device.lockFrame());
    EXPECT_EQ(f.gl.count("ReadPixels"), 1U);
}

// Unlocking uploads the image over the target, so a clear while locked has to reach it.
TEST(CGlDeviceFrame, ClearingColourWhileLockedClearsTheImageToo) {
    SFixture f;
    ASSERT_TRUE(f.device.lockFrame());
    f.pixel(1) = std::byte{0x22};
    f.device.clearColor();
    EXPECT_EQ(f.pixel(1), std::byte{0});
    ASSERT_TRUE(f.device.unlockFrame());
    f.gl.clear();
    ASSERT_TRUE(f.device.lockFrame());
    EXPECT_EQ(f.gl.count("ReadPixels"), 0U);
}

TEST(CGlDeviceFrame, ClearingDepthTurnsWritesOnThroughThePipeline) {
    SFixture f;
    f.device.getPipeline().apply({.depth_write_enabled = false});
    f.gl.clear();
    f.device.clearDepth();
    EXPECT_THAT(f.gl.getCalls(),
                ElementsAre(glCall("BindFramebuffer", GL_FRAMEBUFFER, kSceneFramebuffer),
                            glCall("DepthMask", GL_TRUE), glCall("ClearDepth", 1.0),
                            glCall("Clear", GL_DEPTH_BUFFER_BIT)));
    EXPECT_TRUE(f.device.getPipeline().getState().depth_write_enabled);
}

TEST(CGlDeviceFrame, ABoxClearIsScissoredBottomUp) {
    SFixture f;
    f.gl.clear();
    f.device.clearDepthBox({.left = 1, .top = 1, .right = 5, .bottom = 3});
    EXPECT_THAT(f.gl.getCalls(),
                ElementsAre(glCall("BindFramebuffer", GL_FRAMEBUFFER, kSceneFramebuffer),
                            glCall("Enable", GL_SCISSOR_TEST), glCall("Scissor", 1, 1, 4, 2),
                            glCall("DepthMask", GL_TRUE), glCall("ClearDepth", 1.0),
                            glCall("Clear", GL_DEPTH_BUFFER_BIT),
                            glCall("Disable", GL_SCISSOR_TEST)));
}

TEST(CGlDeviceFrame, AnEmptyBoxClearsNothing) {
    SFixture f;
    f.gl.clear();
    f.device.clearDepthBox({.left = 5, .top = 1, .right = 5, .bottom = 3});
    f.device.clearDepthBox({.left = 1, .top = 3, .right = 5, .bottom = 3});
    EXPECT_TRUE(f.gl.getCalls().empty());
}

TEST(CGlDeviceFrame, NothingClearsWithoutAMode) {
    CGlRecorder gl;
    StrictMock<MockGlFramePresenter> presenter;
    CGlDevice device(gl.getApi(), presenter);
    gl.clear();
    device.clearColor();
    device.clearDepth();
    device.clearDepthBox({.left = 0, .top = 0, .right = 4, .bottom = 4});
    EXPECT_TRUE(gl.getCalls().empty());
}

} // namespace
} // namespace nocturne::platform::gl
