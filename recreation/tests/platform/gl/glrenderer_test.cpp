#include "platform/gl/glrenderer.h"
#include "platform/rendervertex.h"
#include "tests/platform/gl/glrenderer_fixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <string_view>

namespace nocturne::platform::gl {
namespace {

using ::testing::_;

TEST(CGlRenderer, IsAHardwareRenderer) {
    static_assert(std::is_base_of_v<IRenderer, CGlRenderer>);
    static_assert(!std::is_copy_constructible_v<CGlRenderer>);
}

TEST(CGlRenderer, NothingNeedingTheDeviceRunsBeforeInit) {
    SRendererFixture f;
    std::array<void *, 4> rows{};
    EXPECT_EQ(f.renderer.setVideoMode2(640, 480, 16, rows.data()), 0);
    EXPECT_EQ(f.renderer.beginScene(), 0);
    EXPECT_EQ(f.renderer.endScene(), 0);
    EXPECT_EQ(f.renderer.lockFrame(), 0);
    EXPECT_EQ(f.renderer.unlockFrame(), 0);
    EXPECT_EQ(f.renderer.lockHoldBuffer(), 0);
    EXPECT_EQ(f.renderer.unlockHoldBuffer(), 0);
    EXPECT_EQ(f.renderer.toggle(), 0);
    EXPECT_EQ(f.renderer.sync(), 0);
    EXPECT_EQ(f.renderer.clear(), 0);
    EXPECT_EQ(f.renderer.clearZBuffer(), 0);
    EXPECT_EQ(f.renderer.clearZBox(0, 9, 0, 9), 0);
    EXPECT_EQ(f.renderer.masterZBuffer(0), 0);
    EXPECT_EQ(f.renderer.restoreZBuffer(0, 0, 0, 9, 9), 0);
    SRenderVertex vertex;
    EXPECT_EQ(f.renderer.drawPolygon(&vertex, 1, 0), 0);
    f.renderer.beginReflectionPass();
    f.renderer.endReflectionPass();
    EXPECT_TRUE(f.gl.getCalls().empty());
}

TEST(CGlRenderer, InitOpensTheDeviceOnce) {
    SRendererFixture f;
    EXPECT_EQ(f.renderer.init(nullptr), 1);
    const std::size_t programs = f.gl.count("CreateProgram");
    EXPECT_GT(programs, 0U);
    EXPECT_EQ(f.renderer.init(nullptr), 1);
    EXPECT_EQ(f.gl.count("CreateProgram"), programs);
}

TEST(CGlRenderer, InitFailsWhenTheProgramDoesNotBuild) {
    SRendererFixture f;
    f.gl.link_fails = true;
    EXPECT_EQ(f.renderer.init(nullptr), 0);
    EXPECT_EQ(f.renderer.beginScene(), 0);
    f.gl.link_fails = false;
    EXPECT_EQ(f.renderer.init(nullptr), 1);
}

TEST(CGlRenderer, KillReleasesTheDeviceUntilTheNextInit) {
    SRendererFixture f;
    f.open();
    const std::size_t programs = f.gl.count("CreateProgram");
    f.gl.clear();
    f.renderer.kill();
    EXPECT_EQ(f.gl.count("DeleteProgram"), programs);
    EXPECT_EQ(f.renderer.beginScene(), 0);
    EXPECT_EQ(f.renderer.init(nullptr), 1);
    std::array<void *, 4> rows{};
    EXPECT_EQ(f.renderer.setVideoMode2(4, 4, 32, rows.data()), 1);
}

TEST(CGlRenderer, ReportsOneCardNamedByTheDriver) {
    SRendererFixture f;
    int count = 0;
    char *driver = nullptr;
    char *card = nullptr;
    int vendor = -1;
    int device = -1;
    EXPECT_EQ(f.renderer.buildCardList(&count, &driver, &card, &vendor, &device), 1);
    EXPECT_EQ(count, 1);
    EXPECT_EQ(std::string_view(driver), "OpenGL");
    EXPECT_EQ(std::string_view(card), "Test");
    EXPECT_EQ(vendor, 0);
    EXPECT_EQ(device, 0);
    // Asked once; the engine keeps the pointers.
    EXPECT_EQ(f.renderer.buildCardList(nullptr, nullptr, nullptr, nullptr, nullptr), 1);
    EXPECT_EQ(f.gl.count("GetString"), 1U);
}

TEST(CGlRenderer, ACardTheDriverDoesNotNameIsOpenGL) {
    SRendererFixture f;
    f.gl.renderer_name = nullptr;
    char *card = nullptr;
    EXPECT_EQ(f.renderer.buildCardList(nullptr, nullptr, &card, nullptr, nullptr), 1);
    EXPECT_EQ(std::string_view(card), "OpenGL");
}

TEST(CGlRenderer, VideoMemoryIsLargeEnoughNotToConstrainTheEngine) {
    SRendererFixture f;
    int total = 0;
    int available = 0;
    int type = -1;
    EXPECT_EQ(f.renderer.getVideoMemory(&total, &available, &type), 1);
    EXPECT_EQ(total, 256 * 1024 * 1024);
    EXPECT_EQ(available, 256 * 1024 * 1024);
    EXPECT_EQ(type, 0);
    EXPECT_EQ(f.renderer.getVideoMemory(nullptr, nullptr, nullptr), 1);
}

TEST(CGlRenderer, ChoicesWithNothingToDoSucceed) {
    SRendererFixture f;
    EXPECT_EQ(f.renderer.selectCard(3), 1);
    EXPECT_EQ(f.renderer.restoreVideoMode(), 1);
    EXPECT_EQ(f.renderer.setMipMapLevel(2), 1);
    EXPECT_TRUE(f.gl.getCalls().empty());
}

// The engine batches both itself and draws them on its CPU path.
TEST(CGlRenderer, ParticlesAndLinesAreLeftToTheEngine) {
    SRendererFixture f;
    f.openScene();
    int data = 0;
    EXPECT_EQ(f.renderer.addParticle(&data, 1), 1);
    EXPECT_EQ(f.renderer.flushParticleList(), 1);
    EXPECT_EQ(f.renderer.add3dLine(&data, &data, 0), 1);
    EXPECT_EQ(f.renderer.flushLineList(), 1);
    EXPECT_TRUE(f.gl.getCalls().empty());
}

TEST(CGlRenderer, AModePointsTheEnginesRowsAtTheFrame) {
    SRendererFixture f;
    f.open(320, 240, 32);
    EXPECT_NE(f.scanlines[0], nullptr);
    EXPECT_NE(f.scanlines[239], nullptr);
    EXPECT_EQ(f.scanlines[240], nullptr);
    EXPECT_EQ(f.renderer.setVideoMode2(320, 240, 8, f.scanlines.data()), 0);
    EXPECT_EQ(f.renderer.setVideoMode2(320, 240, 16, nullptr), 1);
}

TEST(CGlRenderer, WithoutAModeThereIsNoFrame) {
    SRendererFixture f;
    ASSERT_EQ(f.renderer.init(nullptr), 1);
    EXPECT_EQ(f.renderer.setVideoMode2(640, 0, 16, f.scanlines.data()), 0);
    EXPECT_EQ(f.renderer.lockFrame(), 0);
    EXPECT_EQ(f.renderer.lockHoldBuffer(), 0);
    EXPECT_EQ(f.renderer.unlockHoldBuffer(), 0);
    EXPECT_EQ(f.renderer.beginScene(), 0);
}

TEST(CGlRenderer, FrameEntryPointsReachTheDevice) {
    SRendererFixture f;
    f.open();
    EXPECT_EQ(f.renderer.beginScene(), 1);
    EXPECT_EQ(f.renderer.beginScene(), 0);
    EXPECT_EQ(f.renderer.endScene(), 1);
    EXPECT_EQ(f.renderer.endScene(), 0);
    EXPECT_EQ(f.renderer.lockFrame(), 1);
    EXPECT_EQ(f.renderer.unlockFrame(), 1);
    EXPECT_EQ(f.renderer.unlockFrame(), 0);
    EXPECT_EQ(f.renderer.lockHoldBuffer(), 1);
    EXPECT_EQ(f.renderer.unlockHoldBuffer(), 1);
}

TEST(CGlRenderer, ToggleShowsTheScene) {
    SRendererFixture f;
    f.open();
    EXPECT_CALL(f.presenter, presentScene(_, 640, 480));
    EXPECT_EQ(f.renderer.toggle(), 1);
}

TEST(CGlRenderer, SyncDrawsWhatIsWaiting) {
    SRendererFixture f;
    f.openScene();
    std::array<SRenderVertex, 3> triangle{};
    ASSERT_EQ(f.renderer.drawPolygon(triangle.data(), 3, 0), 1);
    EXPECT_EQ(f.gl.count("DrawElements"), 0U);
    EXPECT_EQ(f.renderer.sync(), 1);
    EXPECT_EQ(f.gl.count("DrawElements"), 1U);
}

TEST(CGlRenderer, ClearsReachTheirBuffers) {
    SRendererFixture f;
    f.open();
    f.gl.clear();
    EXPECT_EQ(f.renderer.clear(), 1);
    EXPECT_EQ(f.renderer.clearZBuffer(), 1);
    const std::vector<SGlCall> clears = f.gl.getCalls("Clear");
    ASSERT_EQ(clears.size(), 2U);
    EXPECT_EQ(clears[0], glCall("Clear", GL_COLOR_BUFFER_BIT));
    EXPECT_EQ(clears[1], glCall("Clear", GL_DEPTH_BUFFER_BIT));
}

// The original's blit adds one to the right and bottom edges.
TEST(CGlRenderer, ABoxClearIncludesItsRightAndBottomEdges) {
    SRendererFixture f;
    f.open();
    f.gl.clear();
    EXPECT_EQ(f.renderer.clearZBox(10, 19, 20, 29), 1);
    EXPECT_EQ(f.gl.getCalls("Scissor"), std::vector{glCall("Scissor", 10, 450, 10, 10)});
}

TEST(CGlRenderer, ARestoredDepthBoxIncludesItsRightAndBottomEdges) {
    SRendererFixture f;
    f.open();
    EXPECT_EQ(f.renderer.restoreZBuffer(0, 10, 20, 19, 29), 0);
    EXPECT_EQ(f.renderer.masterZBuffer(0), 1);
    f.gl.clear();
    EXPECT_EQ(f.renderer.restoreZBuffer(0, 10, 20, 19, 29), 1);
    const std::vector<SGlCall> blits = f.gl.getCalls("BlitFramebuffer");
    ASSERT_EQ(blits.size(), 1U);
    EXPECT_EQ(blits[0], glCall("BlitFramebuffer", 10, 450, 20, 460, 10, 450, 20, 460,
                               GL_DEPTH_BUFFER_BIT, GL_NEAREST));
    EXPECT_EQ(f.renderer.masterZBuffer(99), 0);
}

TEST(CGlRenderer, FogColourIsHeldAcrossInit) {
    SRendererFixture f;
    EXPECT_EQ(f.renderer.setFogColor(255, 0, 51), 1);
    EXPECT_TRUE(f.gl.getCalls().empty());
    ASSERT_EQ(f.renderer.init(nullptr), 1);
    const SGlCall fog = f.gl.getCalls("Uniform3f").back();
    EXPECT_DOUBLE_EQ(fog.args[1], 1.0);
    EXPECT_DOUBLE_EQ(fog.args[2], 0.0);
    EXPECT_DOUBLE_EQ(fog.args[3], static_cast<double>(51.0F / 255.0F));
    f.gl.clear();
    EXPECT_EQ(f.renderer.setFogColor(0, 255, 0), 1);
    ASSERT_EQ(f.gl.count("Uniform3f"), 1U);
    EXPECT_EQ(f.gl.getCalls("Uniform3f")[0].args[2], 1.0);
}

} // namespace
} // namespace nocturne::platform::gl
