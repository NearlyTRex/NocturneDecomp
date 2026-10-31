#include "common/error/fatalerror.h"
#include "common/text/textscanner.h"
#include "core/motion/motioncontroller.h"
#include "core/motion/motionlist.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cmath>
#include <format>
#include <limits>
#include <string>
#include <string_view>
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
                                 const SMotion &(CMotionController::*)() const>);
    static_assert(std::is_same_v<decltype(&CMotionController::setDesiredState),
                                 void (CMotionController::*)(int, bool)>);
    static_assert(std::is_same_v<decltype(&CMotionController::setDesiredStateByName),
                                 void (CMotionController::*)(char *, int)>);
    static_assert(std::is_same_v<decltype(&CMotionController::setMotionList),
                                 void (CMotionController::*)(const CMotionList &)>);
    static_assert(std::is_same_v<decltype(&CMotionController::getMotionList),
                                 const CMotionList *(CMotionController::*)() const>);
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
                                 SInterpolationFrames (CMotionController::*)(int, float) const>);
    static_assert(std::is_same_v<decltype(&CMotionController::load),
                                 void (CMotionController::*)(common::CTextScanner &)>);
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

// A motion as its list gives it: the frames, then where its forward exit leaves from and to, and
// how.
std::string motionText(std::string_view frames, std::string_view exit_forward, int exit_cmd) {
    return std::format("// motion\n\"m\",30,0,{}\n// exit\n{}\n// cmd\n{},0,0\n// back\n0,0\n"
                       "// transitions\n0\n// signals\n0\n// markers\n0\n",
                       frames, exit_forward, exit_cmd);
}

// Frames 2 to 6, jumping from the last to motion 1's frame 1.5; frames 10 to 12, whose exit
// leaves before the last; and frames 20 to 23, tweening from the last.
class CMotionControllerFramesTest : public ::testing::Test {
protected:
    CMotionControllerFramesTest() {
        const std::string text = "// version\n2\n// states\n0\n// motions\n3\n" +
                                 motionText("2,5", "4,1,1.5", 1) + motionText("10,3", "1,0,0", 1) +
                                 motionText("20,4", "3,0,0", 3);
        common::CTextScanner scanner(text);
        list_.load(scanner);
        controller_.setMotionList(list_);
    }

    void expectFrames(int motion, float frame, int frame_1, int frame_2, float weight) const {
        const SInterpolationFrames frames = controller_.getFramesForInterpolation(motion, frame);
        EXPECT_EQ(frames.frame_1, frame_1) << motion << " at " << frame;
        EXPECT_EQ(frames.frame_2, frame_2) << motion << " at " << frame;
        EXPECT_EQ(frames.blend_weight, weight) << motion << " at " << frame;
    }

    CMotionList list_;
    CMotionController controller_;
};

TEST(CMotionController, ItHasNoMotionListUntilItIsGivenOne) {
    CMotionController controller;
    EXPECT_EQ(controller.getMotionList(), nullptr);
    const CMotionList list;
    controller.setMotionList(list);
    EXPECT_EQ(controller.getMotionList(), &list);
}

TEST(CMotionController, AMotionAFileNamedIsntLookedUpYet) {
    CMotionController controller;
    common::CTextScanner scanner("\"walk\",2\n");
    controller.load(scanner);
    const CMotionList list;
    EXPECT_THAT([&] { controller.setMotionList(list); },
                ::testing::ThrowsMessage<common::CFatalError>(
                    ::testing::StrEq("CMotionList::findMotionIndex is not ported yet")));
}

TEST_F(CMotionControllerFramesTest, AtOrBeforeTheStartItIsTheMotionsFirstFrame) {
    expectFrames(0, 0.0F, 2, 2, 0.0F);
    expectFrames(0, -3.0F, 2, 2, 0.0F);
}

TEST_F(CMotionControllerFramesTest, InsideTheMotionItIsBetweenTwoFrames) {
    expectFrames(0, 1.25F, 3, 4, 0.25F);
    // The sum is chopped, so a position just short of a frame is still before it.
    expectFrames(0, std::nextafter(1.0F, 0.0F), 2, 3, std::nextafter(1.0F, 0.0F));
}

TEST_F(CMotionControllerFramesTest, PastTheLastFrameItMovesTowardsWhereTheExitJumpsTo) {
    expectFrames(0, 4.0F, 6, 11, 0.0F);
    expectFrames(0, 4.5F, 6, 11, 0.5F);
}

TEST_F(CMotionControllerFramesTest, AWholeFramePastTheLastItHasJumped) {
    expectFrames(0, 5.0F, 11, 11, 0.0F);
    expectFrames(0, std::numeric_limits<float>::quiet_NaN(), 11, 11, 0.0F);
}

// The second's exit leaves before its last frame, and the third's tweens.
TEST_F(CMotionControllerFramesTest, PastTheLastFrameOfAMotionThatDoesntJumpFromThereItStays) {
    expectFrames(1, 2.5F, 12, 12, 0.0F);
    expectFrames(2, 3.5F, 23, 23, 0.0F);
}

TEST(CMotionController, ANewControllerHasNoStaleTweenToTurnBack) {
    const CMotionController controller;
    EXPECT_EQ(controller.getTweenSpeed(), 0.0F);
    EXPECT_EQ(controller.getTweenTargetMotion(), 0);
    EXPECT_EQ(controller.getTweenTargetFrame(), 0.0F);
    EXPECT_TRUE(controller.isTweenPastMidpoint());
    EXPECT_FALSE(controller.getTweenSetsNewState());
}

// A motion in the state, over frames 0 to 9, with the routes given as transition lines.
std::string routedMotion(int state, std::string_view routes, int route_count) {
    return std::format("// motion\n\"m\",30,{},0,10\n// exit\n9,0,0\n// cmd\n1,0,0\n// back\n0,0\n"
                       "// transitions\n{}\n{}// signals\n0\n// markers\n0\n",
                       state, route_count, routes);
}

// Stand's routes to each state; walk in state 1 and run in state 2, routeless.
class CMotionControllerStateTest : public ::testing::Test {
protected:
    static constexpr int kWalk = 1;
    static constexpr int kRun = 2;
    static constexpr int kWait = 3;
    static constexpr int kNone = 4;
    static constexpr int kPatch = 5;
    static constexpr int kNoTime = 6;
    static constexpr int kRouteless = 7;
    static constexpr int kCutKeeping = 8;
    static constexpr int kCut = 9;
    static constexpr int kBoth = 10;
    static constexpr int kPlainNoTime = 11;
    static constexpr int kSelf = 12;

    CMotionControllerStateTest() {
        const std::string routes = "1,3,1,2,0.25,1\n"
                                   "2,1,2,1,0,1\n"
                                   "3,2,1,0,0,0\n"
                                   "4,0,1,0,0,0\n"
                                   "5,4,2,-1,0.5,0\n"
                                   "6,5,1,3,0,1\n"
                                   "8,1,1,4,0,1\n"
                                   "9,1,1,4,0,0\n"
                                   "10,5,1,1,0.5,0\n"
                                   "11,6,1,3,0,0\n"
                                   "12,3,0,5,0.5,0\n";
        const std::string text =
            "// version\n2\n// states\n13\nSTAND\nWALK\nRUN\nWAIT\nNONE\nPATCH\nNOTIME\nLONELY\n"
            "KEEP\nCUT\nBOTH\nPLAIN\nSELF\n// motions\n3\n" +
            routedMotion(0, routes, 11) + routedMotion(1, "", 0) + routedMotion(2, "", 0);
        common::CTextScanner scanner(text);
        list_.load(scanner);
        controller_.setMotionList(list_);
    }

    [[nodiscard]] const SMotionTransition &route(std::size_t index) const {
        return list_.getMotions()[0].transitions[index];
    }

    CMotionList list_;
    CPatchingController controller_;
};

TEST_F(CMotionControllerStateTest, TheCurrentMotionComesFromTheList) {
    controller_.jumpToMotion(kRun, 0.0F);
    EXPECT_EQ(&controller_.getCurrentMotion(), &list_.getMotions()[2]);
}

TEST_F(CMotionControllerStateTest, AStateBelowZeroWantsNone) {
    controller_.setDesiredState(kWalk, false);
    controller_.setDesiredState(-5, true);
    EXPECT_EQ(controller_.getStateIndex(), -1);
}

TEST_F(CMotionControllerStateTest, AStatePastTheListsIsFatal) {
    EXPECT_THAT([this] { controller_.setDesiredState(13, false); },
                ::testing::ThrowsMessage<common::CFatalError>(
                    ::testing::StrEq("CMotionController::setDesiredState - invalid state index")));
}

TEST_F(CMotionControllerStateTest, UnforcedTheStateIsOnlyWanted) {
    controller_.setDesiredState(kRun, false);
    EXPECT_EQ(controller_.getStateIndex(), kRun);
    EXPECT_EQ(controller_.getCurrentMotionIndex(), 0);
    EXPECT_EQ(controller_.getInTransition(), nullptr);
}

TEST_F(CMotionControllerStateTest, ACutGoesStraightToTheRoutesMotion) {
    controller_.setDesiredState(kRun, true);
    EXPECT_EQ(controller_.getCurrentMotionIndex(), 2);
    EXPECT_EQ(controller_.getCurrentFrameNumber(), 1.0F);
    EXPECT_EQ(controller_.getInTransition(), nullptr);
    EXPECT_EQ(controller_.getStateIndex(), kRun);
}

// The alias states land in walk, whose state keepState makes the one wanted.
TEST_F(CMotionControllerStateTest, KeepStateWantsTheStateLandedIn) {
    controller_.setDesiredState(kCutKeeping, true);
    EXPECT_EQ(controller_.getStateIndex(), kWalk);
    controller_.jumpToMotion(0, 0.0F);
    controller_.setDesiredState(kCut, true);
    EXPECT_EQ(controller_.getCurrentMotionIndex(), 1);
    EXPECT_EQ(controller_.getStateIndex(), kCut);
}

TEST_F(CMotionControllerStateTest, ATweenStartsTowardsTheRoutesMotion) {
    controller_.setDesiredState(kWalk, true);
    EXPECT_EQ(controller_.getInTransition(), &route(0));
    EXPECT_EQ(controller_.getCurrentMotionIndex(), 0);
    EXPECT_EQ(controller_.getTweenType(), EMotionTransitionCmd::MOTION_CMD_TWEEN);
    EXPECT_EQ(controller_.getTweenProgress(), 0.001F);
    EXPECT_EQ(controller_.getTweenTargetMotion(), 1);
    EXPECT_EQ(controller_.getTweenTargetFrame(), 2.0F);
    EXPECT_EQ(controller_.getTweenSpeed(), 4.0F);
    EXPECT_FALSE(controller_.isTweenPastMidpoint());
    EXPECT_TRUE(controller_.getTweenSetsNewState());
}

TEST_F(CMotionControllerStateTest, ATweenOfNoTimeIsACut) {
    controller_.setDesiredState(kNoTime, true);
    EXPECT_EQ(controller_.getCurrentMotionIndex(), 1);
    EXPECT_EQ(controller_.getCurrentFrameNumber(), 3.0F);
    EXPECT_EQ(controller_.getTweenProgress(), -1.0F);
    EXPECT_EQ(controller_.getStateIndex(), kWalk);
}

TEST_F(CMotionControllerStateTest, ACutOfNoTimeWithoutKeepStateKeepsTheStateWanted) {
    controller_.setDesiredState(kPlainNoTime, true);
    EXPECT_EQ(controller_.getCurrentMotionIndex(), 1);
    EXPECT_EQ(controller_.getStateIndex(), kPlainNoTime);
}

// Stand tweens to its own frame 5 and turns back to stand, where waiting for the exit drops the
// tween.
TEST_F(CMotionControllerStateTest, ANewRouteDropsTheTweenTurnedBack) {
    controller_.setDesiredState(kSelf, true);
    controller_.setDesiredState(kWait, true);
    EXPECT_EQ(controller_.getCurrentMotionIndex(), 0);
    EXPECT_EQ(controller_.getCurrentFrameNumber(), 5.0F);
    EXPECT_EQ(controller_.getTweenProgress(), -1.0F);
    EXPECT_EQ(controller_.getInTransition(), &route(2));
}

TEST_F(CMotionControllerStateTest, ATweensPatchFrameIsAskedFor) {
    controller_.jumpToMotion(0, 4.5F);
    controller_.setDesiredState(kPatch, true);
    ASSERT_EQ(controller_.queries.size(), 1U);
    EXPECT_EQ(controller_.queries[0].source_frame, 4.5F);
    EXPECT_EQ(controller_.queries[0].target_motion_index, 2);
    EXPECT_EQ(controller_.getTweenTargetFrame(), 17.0F);
}

// Forced again, the tween under way is left as it is.
TEST_F(CMotionControllerStateTest, ARouteUnderWayIsntStartedAgain) {
    controller_.setDesiredState(kPatch, true);
    controller_.setDesiredState(kPatch, true);
    EXPECT_EQ(controller_.queries.size(), 1U);
}

TEST_F(CMotionControllerStateTest, WaitingForTheExitHoldsTheRouteOnly) {
    controller_.setDesiredState(kWait, true);
    EXPECT_EQ(controller_.getInTransition(), &route(2));
    EXPECT_EQ(controller_.getCurrentMotionIndex(), 0);
    EXPECT_EQ(controller_.getTweenProgress(), -1.0F);
}

TEST_F(CMotionControllerStateTest, ARouteOfNoCommandGoesNowhere) {
    controller_.setDesiredState(kWait, true);
    controller_.setDesiredState(kNone, true);
    EXPECT_EQ(controller_.getInTransition(), nullptr);
    EXPECT_EQ(controller_.getTweenProgress(), -1.0F);
    EXPECT_EQ(controller_.getCurrentMotionIndex(), 0);
    EXPECT_EQ(controller_.getStateIndex(), kNone);
}

TEST_F(CMotionControllerStateTest, AStateWithNoRouteIsWantedAndNothingMoves) {
    controller_.setDesiredState(kRouteless, true);
    EXPECT_EQ(controller_.getStateIndex(), kRouteless);
    EXPECT_EQ(controller_.getInTransition(), nullptr);
    EXPECT_EQ(controller_.getCurrentMotionIndex(), 0);
}

TEST_F(CMotionControllerStateTest, TheStateOfTheMotionPlayingNeedsNoRoute) {
    controller_.setDesiredState(0, true);
    EXPECT_EQ(controller_.getInTransition(), nullptr);
    EXPECT_EQ(controller_.getCurrentMotionIndex(), 0);
}

// Before its midpoint a tween turns back: the motions swap and its progress runs the other way.
TEST_F(CMotionControllerStateTest, ANewStateTurnsATweenBackBeforeItsMidpoint) {
    controller_.setDesiredState(kWalk, true);
    controller_.setDesiredState(kRun, false);
    EXPECT_EQ(controller_.getInTransition(), nullptr);
    EXPECT_EQ(controller_.getCurrentMotionIndex(), 1);
    EXPECT_EQ(controller_.getCurrentFrameNumber(), 2.0F);
    EXPECT_EQ(controller_.getTweenTargetMotion(), 0);
    EXPECT_EQ(controller_.getTweenTargetFrame(), 0.0F);
    EXPECT_EQ(controller_.getTweenProgress(), 1.0F - 0.001F);
    EXPECT_EQ(controller_.getTweenType(), EMotionTransitionCmd::MOTION_CMD_TWEEN);
    EXPECT_TRUE(controller_.isTweenPastMidpoint());
    EXPECT_FALSE(controller_.getTweenSetsNewState());
    EXPECT_EQ(controller_.getStateIndex(), kRun);
}

// The motion that was playing plays on once they swap.
TEST_F(CMotionControllerStateTest, TurningBackSwapsWhichMotionPlays) {
    controller_.setDesiredState(kPatch, true);
    controller_.setDesiredState(kRun, false);
    EXPECT_EQ(controller_.getTweenType(), EMotionTransitionCmd::MOTION_CMD_TWEEN_ADVANCE_BOTH);
    controller_.jumpToMotion(0, 0.0F);
    controller_.setDesiredState(kBoth, true);
    controller_.setDesiredState(kRun, false);
    EXPECT_EQ(controller_.getTweenType(), EMotionTransitionCmd::MOTION_CMD_TWEEN_ADVANCE);
}

// A new controller counts as past the midpoint, so a route with no tween is only dropped.
TEST_F(CMotionControllerStateTest, ANewStateOnlyDropsARouteWithNoTween) {
    controller_.setDesiredState(kWait, true);
    controller_.setDesiredState(kRun, false);
    EXPECT_EQ(controller_.getInTransition(), nullptr);
    EXPECT_EQ(controller_.getCurrentMotionIndex(), 0);
    EXPECT_EQ(controller_.getTweenTargetMotion(), 0);
}

} // namespace
} // namespace nocturne::core
