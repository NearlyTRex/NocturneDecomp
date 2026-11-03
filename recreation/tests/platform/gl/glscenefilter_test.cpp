#include "platform/gl/glquad.h"
#include "platform/gl/glscenefilter.h"
#include "platform/log.h"
#include "tests/mocks/platform/glrecorder.h"
#include "tests/mocks/platform/mocklog.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <algorithm>
#include <optional>
#include <string>
#include <vector>

namespace nocturne::platform::gl {
namespace {

using ::testing::ElementsAre;
using ::testing::HasSubstr;

constexpr GLuint kScene = 40;
constexpr int kWidth = 8;
constexpr int kHeight = 4;

class CGlSceneFilterTest : public ::testing::Test {
protected:
    CGlSceneFilterTest() {
        gl_.clear();
    }

    [[nodiscard]] bool antialias(int width = kWidth, int height = kHeight) {
        return filter_.antialias(kScene, width, height, EAntialias::Fxaa);
    }

    [[nodiscard]] std::size_t indexOf(const std::string &name) const {
        const std::vector<SGlCall> &calls = gl_.getCalls();
        return static_cast<std::size_t>(
            std::ranges::find_if(calls, [&](const SGlCall &call) { return call.name == name; }) -
            calls.begin());
    }

    CGlRecorder gl_;
    CGlQuad quad_{gl_.getApi()};
    ::testing::NiceMock<MockLog> log_;
    CGlSceneFilter filter_{gl_.getApi(), quad_, log_};
};

TEST_F(CGlSceneFilterTest, OffLeavesTheSceneAlone) {
    EXPECT_FALSE(filter_.antialias(kScene, kWidth, kHeight, EAntialias::Off));
    EXPECT_TRUE(gl_.getCalls().empty());
}

// The scene is copied as it stands, then drawn back over itself through the pass.
TEST_F(CGlSceneFilterTest, FxaaDrawsTheScenesCopyBackOverItAtItsOwnSize) {
    EXPECT_TRUE(antialias());
    EXPECT_EQ(gl_.getCalls("TexImage2D")[0], glCall("TexImage2D", GL_TEXTURE_2D, 0, GL_RGBA8,
                                                    kWidth, kHeight, 0, GL_BGRA, GL_UNSIGNED_BYTE));
    EXPECT_THAT(gl_.getCalls("BlitFramebuffer"),
                ElementsAre(glCall("BlitFramebuffer", 0, 0, kWidth, kHeight, 0, 0, kWidth, kHeight,
                                   GL_COLOR_BUFFER_BIT, GL_NEAREST)));
    EXPECT_LT(indexOf("Disable"), indexOf("BlitFramebuffer"));
    EXPECT_EQ(gl_.getCalls("Disable")[0], glCall("Disable", GL_SCISSOR_TEST));
    EXPECT_LT(indexOf("BlitFramebuffer"), indexOf("DrawArrays"));
    EXPECT_THAT(gl_.getCalls("Viewport"), ElementsAre(glCall("Viewport", 0, 0, kWidth, kHeight)));
    EXPECT_THAT(gl_.getCalls("Uniform2f"), ElementsAre(glCall("Uniform2f", 1, kWidth, kHeight)));
    EXPECT_THAT(gl_.getCalls("DepthMask"), ElementsAre(glCall("DepthMask", GL_FALSE)));
    EXPECT_EQ(gl_.getCalls("BindFramebuffer").back(),
              glCall("BindFramebuffer", GL_FRAMEBUFFER, kScene));
    // A render target into a render target: the copy's bottom row lands at the bottom.
    EXPECT_EQ(gl_.getCalls("DrawArrays")[0], glCall("DrawArrays", GL_TRIANGLE_STRIP, 4, 4));
    EXPECT_THAT(gl_.getCalls("TexParameteri"),
                ::testing::Contains(
                    glCall("TexParameteri", GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR)));
}

TEST_F(CGlSceneFilterTest, TheCopyAndTheProgramAreKeptAtTheSameSize) {
    ASSERT_TRUE(antialias());
    gl_.clear();
    EXPECT_TRUE(antialias());
    EXPECT_EQ(gl_.count("GenFramebuffers"), 0U);
    EXPECT_EQ(gl_.count("CreateProgram"), 0U);
    EXPECT_EQ(gl_.count("BlitFramebuffer"), 1U);
}

TEST_F(CGlSceneFilterTest, ANewSizeRemakesTheCopy) {
    ASSERT_TRUE(antialias());
    gl_.clear();
    EXPECT_TRUE(antialias(kWidth, kHeight * 2));
    EXPECT_EQ(gl_.count("DeleteFramebuffers"), 1U);
    EXPECT_EQ(gl_.count("GenFramebuffers"), 1U);
    gl_.clear();
    EXPECT_TRUE(antialias(kWidth * 2, kHeight * 2));
    EXPECT_EQ(gl_.count("GenFramebuffers"), 1U);
}

TEST_F(CGlSceneFilterTest, APassThatWontBuildIsLoggedOnceAndTheSceneIsLeftAlone) {
    gl_.link_fails = true;
    EXPECT_CALL(log_, write(ELogSubsystem::Render, HasSubstr("anti-aliasing 1 could not build")));
    EXPECT_FALSE(antialias());
    EXPECT_FALSE(antialias());
    EXPECT_EQ(gl_.count("CreateProgram"), 1U);
    EXPECT_EQ(gl_.count("BlitFramebuffer"), 0U);
    EXPECT_EQ(gl_.count("DrawArrays"), 0U);
}

TEST_F(CGlSceneFilterTest, AnIncompleteCopyIsDroppedAndTriedAgainNextTime) {
    gl_.framebuffer_status = GL_FRAMEBUFFER_UNSUPPORTED;
    EXPECT_CALL(log_, write(ELogSubsystem::Render, HasSubstr("scene copy incomplete at 8x4")));
    EXPECT_FALSE(antialias());
    EXPECT_EQ(gl_.count("BlitFramebuffer"), 0U);
    EXPECT_EQ(gl_.count("DrawArrays"), 0U);
    EXPECT_EQ(gl_.getCalls("BindFramebuffer").back(),
              glCall("BindFramebuffer", GL_FRAMEBUFFER, kScene));
    gl_.framebuffer_status = GL_FRAMEBUFFER_COMPLETE;
    gl_.clear();
    EXPECT_TRUE(antialias());
    EXPECT_EQ(gl_.count("GenFramebuffers"), 1U);
}

// Rows counted from the top land bottom-up on the target; the rest of the target goes black.
TEST_F(CGlSceneFilterTest, AReframeRedrawsTheSourceOverTheDestinationOnBlack) {
    const common::SSceneReframe reframe{.source = {.x = 0, .y = 1, .width = 8, .height = 2},
                                        .destination = {.x = 0, .y = 0, .width = 8, .height = 4}};
    EXPECT_TRUE(filter_.reframe(kScene, kWidth, kHeight, reframe));
    EXPECT_THAT(gl_.getCalls("BlitFramebuffer"),
                ElementsAre(glCall("BlitFramebuffer", 0, 0, kWidth, kHeight, 0, 0, kWidth, kHeight,
                                   GL_COLOR_BUFFER_BIT, GL_NEAREST),
                            glCall("BlitFramebuffer", 0, 1, 8, 3, 0, 0, 8, 4, GL_COLOR_BUFFER_BIT,
                                   GL_LINEAR)));
    EXPECT_THAT(gl_.getCalls("Clear"), ElementsAre(glCall("Clear", GL_COLOR_BUFFER_BIT)));
    // Cleared once the copy is taken, and before it is drawn back.
    EXPECT_GT(indexOf("Clear"), indexOf("BlitFramebuffer"));
    EXPECT_EQ(gl_.getCalls().back(), glCall("BindFramebuffer", GL_FRAMEBUFFER, kScene));
    EXPECT_EQ(gl_.getCalls()[gl_.getCalls().size() - 2].name, "BlitFramebuffer");
    EXPECT_EQ(gl_.getCalls("ClearColor")[0], glCall("ClearColor", 0.0F, 0.0F, 0.0F, 1.0F));
    EXPECT_EQ(gl_.getCalls("BindFramebuffer").back(),
              glCall("BindFramebuffer", GL_FRAMEBUFFER, kScene));
}

TEST_F(CGlSceneFilterTest, AReframeWithoutACopyLeavesTheScene) {
    gl_.framebuffer_status = GL_FRAMEBUFFER_UNSUPPORTED;
    EXPECT_FALSE(filter_.reframe(kScene, kWidth, kHeight, {}));
    EXPECT_EQ(gl_.count("BlitFramebuffer"), 0U);
    EXPECT_EQ(gl_.count("Clear"), 0U);
}

TEST_F(CGlSceneFilterTest, DestroyingDeletesTheCopy) {
    std::optional<CGlSceneFilter> filter(std::in_place, gl_.getApi(), quad_, log_);
    ASSERT_TRUE(filter->antialias(kScene, kWidth, kHeight, EAntialias::Fxaa));
    gl_.clear();
    filter.reset();
    EXPECT_EQ(gl_.count("DeleteFramebuffers"), 1U);
    EXPECT_EQ(gl_.count("DeleteTextures"), 1U);
}

} // namespace
} // namespace nocturne::platform::gl
