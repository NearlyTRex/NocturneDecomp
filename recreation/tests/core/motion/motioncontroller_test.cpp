#include "common/error/fatalerror.h"
#include "core/motion/motioncontroller.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <limits>
#include <type_traits>
#include <vector>

namespace nocturne::core {
namespace {

TEST(CMotionController, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CMotionController>);
}

TEST(CMotionController, IsConcrete) {
    static_assert(!std::is_abstract_v<CMotionController>);
}

TEST(CMotionController, Constructors) {
    static_assert(std::is_constructible_v<CMotionController>);
}

TEST(CMotionController, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CMotionController::findPatchToFrame),
                                 int (CMotionController::*)(int, float, int)>);
    static_assert(std::is_same_v<decltype(&CMotionController::accumulateScaledRootMotion),
                                 void (CMotionController::*)(float, float, float)>);
    static_assert(
        std::is_same_v<decltype(&CMotionController::advance), int (CMotionController::*)(float *)>);
    static_assert(std::is_same_v<decltype(&CMotionController::getCurrentMotion),
                                 SMotion *(CMotionController::*)()>);
    static_assert(std::is_same_v<decltype(&CMotionController::setDesiredState),
                                 void (CMotionController::*)(int, int)>);
    static_assert(std::is_same_v<decltype(&CMotionController::setDesiredStateByName),
                                 void (CMotionController::*)(char *, int)>);
    static_assert(std::is_same_v<decltype(&CMotionController::setMotionList),
                                 void (CMotionController::*)(CMotionList *)>);
    static_assert(std::is_same_v<decltype(&CMotionController::getMotionList),
                                 CMotionList *(CMotionController::*)()>);
    static_assert(std::is_same_v<decltype(&CMotionController::getCurrentStateName),
                                 char *(CMotionController::*)()>);
    static_assert(std::is_same_v<decltype(&CMotionController::getStateBlendWeight),
                                 float (CMotionController::*)(int)>);
    static_assert(std::is_same_v<decltype(&CMotionController::jumpToMotionByName),
                                 void (CMotionController::*)(char *, float)>);
    static_assert(std::is_same_v<decltype(&CMotionController::jumpToMotion),
                                 void (CMotionController::*)(int, float)>);
    static_assert(std::is_same_v<decltype(&CMotionController::frameToMarkerPosition),
                                 float (CMotionController::*)()>);
    static_assert(std::is_same_v<decltype(&CMotionController::markerPositionToFrame),
                                 float (CMotionController::*)(int, float)>);
    static_assert(std::is_same_v<decltype(&CMotionController::getFramesForInterpolation),
                                 void (CMotionController::*)(int, float, int *, int *, float *)>);
    static_assert(std::is_same_v<decltype(&CMotionController::load),
                                 void (CMotionController::*)(std::FILE *)>);
    static_assert(std::is_same_v<decltype(&CMotionController::save),
                                 void (CMotionController::*)(std::FILE *, char *)>);
    static_assert(std::is_same_v<decltype(&CMotionController::render),
                                 void (CMotionController::*)(CDemonActor *)>);
}

// A controller whose patch is always frame 17, recording what it was asked.
class CPatchingController : public CMotionController {
public:
    struct SPatchQuery {
        int source_motion_index = 0;
        float source_frame = 0.0F;
        int target_motion_index = 0;
    };

    int findPatchToFrame(int source_motion_index, float source_frame,
                         int target_motion_index) override {
        queries.push_back({.source_motion_index = source_motion_index,
                           .source_frame = source_frame,
                           .target_motion_index = target_motion_index});
        return 17;
    }

    std::vector<SPatchQuery> queries;
};

TEST(CMotionController, StartsAtTheFirstFrameOfMotionZeroWithNoStateTransitionOrTween) {
    const CMotionController controller;
    EXPECT_EQ(controller.getCurrentMotionIndex(), 0);
    EXPECT_EQ(controller.getCurrentFrameNumber(), 0.0F);
    EXPECT_EQ(controller.getStateIndex(), -1);
    EXPECT_EQ(controller.getInTransition(), nullptr);
    EXPECT_EQ(controller.getTweenType(), EMotionTransitionCmd::MOTION_CMD_NONE);
    EXPECT_EQ(controller.getTweenProgress(), -1.0F);
}

TEST(CMotionController, AJumpGoesStraightToTheMotionAndFrame) {
    CPatchingController controller;
    controller.jumpToMotion(3, 5.5F);
    EXPECT_EQ(controller.getCurrentMotionIndex(), 3);
    EXPECT_EQ(controller.getCurrentFrameNumber(), 5.5F);
    EXPECT_EQ(controller.getTweenType(), EMotionTransitionCmd::MOTION_CMD_NONE);
    EXPECT_EQ(controller.getTweenProgress(), -1.0F);
    EXPECT_TRUE(controller.queries.empty());
}

TEST(CMotionController, APatchFrameAsksWhereToJoinTheMotionFromWhereItIs) {
    CPatchingController controller;
    controller.jumpToMotion(2, 4.0F);
    controller.jumpToMotion(6, CMotionController::kPatchFrame);
    ASSERT_EQ(controller.queries.size(), 1U);
    EXPECT_EQ(controller.queries[0].source_motion_index, 2);
    EXPECT_EQ(controller.queries[0].source_frame, 4.0F);
    EXPECT_EQ(controller.queries[0].target_motion_index, 6);
    EXPECT_EQ(controller.getCurrentMotionIndex(), 6);
    EXPECT_EQ(controller.getCurrentFrameNumber(), 17.0F);
}

TEST(CMotionController, ANaNFrameAsksForThePatchToo) {
    CPatchingController controller;
    controller.jumpToMotion(1, std::numeric_limits<float>::quiet_NaN());
    EXPECT_EQ(controller.queries.size(), 1U);
    EXPECT_EQ(controller.getCurrentFrameNumber(), 17.0F);
}

TEST(CMotionController, TheBaseControllerHasNoPatchToFind) {
    CMotionController controller;
    EXPECT_THAT([&controller] { controller.jumpToMotion(1, CMotionController::kPatchFrame); },
                ::testing::ThrowsMessage<common::CFatalError>(::testing::StrEq(
                    "CMotionController::findPatchToFrame should never be called for this base "
                    "class!")));
}

TEST(CMotionController, ItsOwnRootMotionChangesNothing) {
    CMotionController controller;
    controller.jumpToMotion(4, 2.0F);
    controller.accumulateScaledRootMotion(0.0F, 2.0F, 1.0F);
    EXPECT_EQ(controller.getCurrentMotionIndex(), 4);
    EXPECT_EQ(controller.getCurrentFrameNumber(), 2.0F);
}

} // namespace
} // namespace nocturne::core
