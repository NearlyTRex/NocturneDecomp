#include "platform/gl/glmasterdepth.h"
#include "tests/mocks/platform/glrecorder.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <optional>
#include <vector>

namespace nocturne::platform::gl {
namespace {

using ::testing::ElementsAre;

constexpr GLuint kScene = 40;
// A slot's depth then framebuffer, as the first save creates them.
constexpr GLuint kSlotDepth = 1;
constexpr GLuint kSlotFramebuffer = 2;

std::vector<SGlCall> lastCalls(const CGlRecorder &gl, std::size_t count) {
    const std::vector<SGlCall> &calls = gl.getCalls();
    return {calls.end() - static_cast<std::ptrdiff_t>(count), calls.end()};
}

TEST(CGlMasterDepth, OnlySlotsZeroToSevenExist) {
    const CGlRecorder gl;
    CGlMasterDepth depth(gl.getApi());
    EXPECT_FALSE(depth.save(-1, kScene, 640, 480));
    EXPECT_FALSE(depth.save(CGlMasterDepth::kSlots, kScene, 640, 480));
    EXPECT_FALSE(depth.restore(-1, kScene, {.right = 1, .bottom = 1}, 480));
    EXPECT_FALSE(depth.restore(CGlMasterDepth::kSlots, kScene, {.right = 1, .bottom = 1}, 480));
    EXPECT_TRUE(gl.getCalls().empty());
}

TEST(CGlMasterDepth, AFirstSaveBuildsADepthOnlySlotAndCopiesTheWholeScene) {
    const CGlRecorder gl;
    CGlMasterDepth depth(gl.getApi());
    EXPECT_TRUE(depth.save(3, kScene, 640, 480));
    EXPECT_THAT(
        gl.getCalls(),
        ElementsAre(glCall("DeleteFramebuffers", 1, 0), glCall("DeleteRenderbuffers", 1, 0),
                    glCall("GenRenderbuffers", 1, kSlotDepth),
                    glCall("BindRenderbuffer", GL_RENDERBUFFER, kSlotDepth),
                    glCall("RenderbufferStorage", GL_RENDERBUFFER, GL_DEPTH_COMPONENT24, 640, 480),
                    glCall("BindRenderbuffer", GL_RENDERBUFFER, 0),
                    glCall("GenFramebuffers", 1, kSlotFramebuffer),
                    glCall("BindFramebuffer", GL_FRAMEBUFFER, kSlotFramebuffer),
                    glCall("FramebufferRenderbuffer", GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT,
                           GL_RENDERBUFFER, kSlotDepth),
                    glCall("DrawBuffer", GL_NONE), glCall("ReadBuffer", GL_NONE),
                    glCall("CheckFramebufferStatus", GL_FRAMEBUFFER),
                    glCall("BindFramebuffer", GL_FRAMEBUFFER, kScene),
                    glCall("BindFramebuffer", GL_READ_FRAMEBUFFER, kScene),
                    glCall("BindFramebuffer", GL_DRAW_FRAMEBUFFER, kSlotFramebuffer),
                    glCall("BlitFramebuffer", 0, 0, 640, 480, 0, 0, 640, 480, GL_DEPTH_BUFFER_BIT,
                           GL_NEAREST),
                    glCall("BindFramebuffer", GL_FRAMEBUFFER, kScene)));
}

TEST(CGlMasterDepth, SavingAgainAtTheSameSizeReusesTheSlot) {
    CGlRecorder gl;
    CGlMasterDepth depth(gl.getApi());
    ASSERT_TRUE(depth.save(0, kScene, 640, 480));
    gl.clear();
    EXPECT_TRUE(depth.save(0, kScene, 640, 480));
    EXPECT_EQ(gl.count("GenFramebuffers"), 0U);
    EXPECT_EQ(gl.count("BlitFramebuffer"), 1U);
}

TEST(CGlMasterDepth, SavingAtANewSizeRebuildsTheSlot) {
    for (const auto &[width, height] : {std::pair{800, 480}, std::pair{640, 600}}) {
        CGlRecorder gl;
        CGlMasterDepth depth(gl.getApi());
        ASSERT_TRUE(depth.save(0, kScene, 640, 480));
        gl.clear();
        EXPECT_TRUE(depth.save(0, kScene, width, height));
        EXPECT_THAT(std::vector(gl.getCalls().begin(), gl.getCalls().begin() + 2),
                    ElementsAre(glCall("DeleteFramebuffers", 1, kSlotFramebuffer),
                                glCall("DeleteRenderbuffers", 1, kSlotDepth)));
        EXPECT_EQ(
            gl.getCalls("RenderbufferStorage")[0],
            glCall("RenderbufferStorage", GL_RENDERBUFFER, GL_DEPTH_COMPONENT24, width, height));
    }
}

TEST(CGlMasterDepth, AnIncompleteSlotIsDroppedAndTheSceneStaysBound) {
    CGlRecorder gl;
    gl.framebuffer_status = GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT;
    CGlMasterDepth depth(gl.getApi());
    EXPECT_FALSE(depth.save(0, kScene, 640, 480));
    EXPECT_THAT(lastCalls(gl, 4), ElementsAre(glCall("CheckFramebufferStatus", GL_FRAMEBUFFER),
                                              glCall("BindFramebuffer", GL_FRAMEBUFFER, kScene),
                                              glCall("DeleteFramebuffers", 1, kSlotFramebuffer),
                                              glCall("DeleteRenderbuffers", 1, kSlotDepth)));
    gl.clear();
    EXPECT_FALSE(depth.restore(0, kScene, {.right = 10, .bottom = 10}, 480));
    EXPECT_TRUE(gl.getCalls().empty());
}

TEST(CGlMasterDepth, AnUnsavedSlotHasNothingToRestore) {
    const CGlRecorder gl;
    CGlMasterDepth depth(gl.getApi());
    EXPECT_FALSE(depth.restore(2, kScene, {.right = 10, .bottom = 10}, 480));
    EXPECT_TRUE(gl.getCalls().empty());
}

TEST(CGlMasterDepth, RestoreCopiesTheRectangleTurnedBottomUp) {
    CGlRecorder gl;
    CGlMasterDepth depth(gl.getApi());
    ASSERT_TRUE(depth.save(1, kScene, 640, 480));
    gl.clear();
    EXPECT_TRUE(
        depth.restore(1, kScene, {.left = 10, .top = 20, .right = 110, .bottom = 220}, 480));
    EXPECT_THAT(gl.getCalls(),
                ElementsAre(glCall("BindFramebuffer", GL_READ_FRAMEBUFFER, kSlotFramebuffer),
                            glCall("BindFramebuffer", GL_DRAW_FRAMEBUFFER, kScene),
                            glCall("BlitFramebuffer", 10, 260, 110, 460, 10, 260, 110, 460,
                                   GL_DEPTH_BUFFER_BIT, GL_NEAREST),
                            glCall("BindFramebuffer", GL_FRAMEBUFFER, kScene)));
}

TEST(CGlMasterDepth, AnEmptyRectangleSucceedsWithoutACopy) {
    CGlRecorder gl;
    CGlMasterDepth depth(gl.getApi());
    ASSERT_TRUE(depth.save(1, kScene, 640, 480));
    gl.clear();
    EXPECT_TRUE(depth.restore(1, kScene, {.left = 10, .top = 0, .right = 10, .bottom = 50}, 480));
    EXPECT_TRUE(depth.restore(1, kScene, {.left = 0, .top = 50, .right = 10, .bottom = 50}, 480));
    EXPECT_TRUE(gl.getCalls().empty());
}

TEST(CGlMasterDepth, DestroyingDeletesEverySlot) {
    CGlRecorder gl;
    std::optional<CGlMasterDepth> depth(std::in_place, gl.getApi());
    ASSERT_TRUE(depth->save(0, kScene, 4, 4));
    gl.clear();
    depth.reset();
    EXPECT_EQ(gl.count("DeleteFramebuffers"), static_cast<std::size_t>(CGlMasterDepth::kSlots));
    EXPECT_EQ(gl.getCalls()[0], glCall("DeleteFramebuffers", 1, kSlotFramebuffer));
    EXPECT_EQ(gl.getCalls()[1], glCall("DeleteRenderbuffers", 1, kSlotDepth));
}

} // namespace
} // namespace nocturne::platform::gl
