#include "common/error/fatalerror.h"
#include "common/math/extendedfloat.h"
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
        std::is_same_v<decltype(&CMotionController::advance), int (CMotionController::*)(float &)>);
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

// The name is looked up once, and the frame kept.
TEST(CMotionController, AMotionAFileNamedIsLookedUpInTheList) {
    CMotionController controller;
    common::CTextScanner scanner("\"WALK\",2\n");
    controller.load(scanner);
    CMotionList list;
    const std::string text = "// version\n2\n// states\n0\n// motions\n2\n" +
                             motionText("0,1", "1,0,0", 1) +
                             motionText("1,1", "1,1,0", 1).replace(10, 3, "\"walk\"");
    common::CTextScanner list_text(text);
    list.load(list_text);
    controller.setMotionList(list);
    EXPECT_EQ(controller.getCurrentMotionIndex(), 1);
    EXPECT_EQ(controller.getCurrentFrameNumber(), 2.0F);
    EXPECT_TRUE(controller.getCurrentMotionName().empty());
}

TEST(CMotionController, AMotionAFileNamedThatTheListHasntIsFatal) {
    CMotionController controller;
    common::CTextScanner scanner("\"walk\",2\n");
    controller.load(scanner);
    const CMotionList list;
    EXPECT_THAT([&] { controller.setMotionList(list); },
                ::testing::ThrowsMessage<common::CFatalError>(
                    ::testing::StrEq("Can't find motion \"walk\" in motion list")));
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

// A controller recording the root motion it is asked to gather; its patch is always frame 3.
class CRecordingController : public CMotionController {
public:
    struct SRootMotion {
        float start_frame = 0.0F;
        float end_frame = 0.0F;
        float scale_factor = 0.0F;

        bool operator==(const SRootMotion &) const = default;
    };

    int findPatchToFrame(int /*source_motion_index*/, float /*source_frame*/,
                         int /*target_motion_index*/) override {
        ++patches;
        return 3;
    }

    void accumulateScaledRootMotion(float start_frame, float end_frame,
                                    float scale_factor) override {
        root_motion.push_back(
            {.start_frame = start_frame, .end_frame = end_frame, .scale_factor = scale_factor});
    }

    int patches = 0;
    std::vector<SRootMotion> root_motion;
};

// A motion at 8 frames a second over the skeleton's frames from the start, with its exit and the
// routes and signals as their lines give them.
std::string playedMotion(int state, int start, int count, std::string_view exit,
                         std::string_view cmd, std::string_view routes, int route_count,
                         std::string_view signals, int signal_count) {
    return std::format("// motion\n\"m\",8,{},{},{}\n// exit\n{}\n// cmd\n{}\n// back\n0,0\n"
                       "// transitions\n{}\n{}// signals\n{}\n{}// markers\n0\n",
                       state, start, count, exit, cmd, route_count, routes, signal_count, signals);
}

// idle loops with a signal at frame 2. Its routes: to go, tweening and playing only go; to wait,
// waiting for the exit; to hold, a frozen tween; to dash, skip and wait's signals, tweens playing
// only their targets; a cut to loop; and one of command 7. wait's two signals share frame 1 and
// its exit keeps the state; hold's exit tweens to go's patch frame, playing both; bad's exit has
// no command; both's exit tweens playing only itself; loop has no signals. dash's exit cuts to
// idle's patch frame and skip's to idle's frame 1; waitexit exits by a wait command; tiny's exit
// tweens in no time to speak of; signalboth's exit tweens playing both, from its signal at 1.
class CMotionControllerAdvanceTest : public ::testing::Test {
protected:
    static constexpr int kIdle = 0;
    static constexpr int kGo = 1;
    static constexpr int kWait = 2;
    static constexpr int kHold = 3;
    static constexpr int kBad = 4;
    static constexpr int kBoth = 5;
    static constexpr int kLoop = 6;
    static constexpr int kWaitExit = 9;
    static constexpr int kTiny = 10;
    static constexpr int kSignalBoth = 11;

    CMotionControllerAdvanceTest() {
        const std::string text =
            "// version\n2\n// states\n10\nIDLE\nGO\nWAIT\nHOLD\nDASH\nSKIP\nSIGNAL\nLOOP\nODD\n"
            "TWIN\n// motions\n12\n" +
            playedMotion(0, 0, 5, "4,0,0", "1,0,0",
                         "1,4,1,0,0.5,1\n2,2,2,1,0,0\n3,3,3,1,0.25,0\n4,4,7,1,0.5,0\n"
                         "5,4,8,1,0.5,0\n6,4,2,0,0.5,0\n7,1,6,0,0,0\n8,7,1,0,0.5,0\n"
                         "9,6,8,1,0.5,0\n",
                         9, "2,7\n", 1) +
            playedMotion(1, 5, 6, "6,0,0", "1,0,0", "", 0, "", 0) +
            playedMotion(2, 11, 4, "4,0,2", "1,0,1", "", 0, "1,3\n1,5\n", 2) +
            playedMotion(3, 15, 2, "2,1,-1", "6,0.5,0", "", 0, "", 0) +
            playedMotion(0, 17, 2, "1,0,0", "0,0,0", "", 0, "", 0) +
            playedMotion(0, 19, 4, "4,1,0", "5,0.25,0", "", 0, "", 0) +
            playedMotion(0, 23, 2, "2,6,0", "1,0,0", "", 0, "", 0) +
            playedMotion(4, 25, 2, "2,0,-1", "1,0,0", "", 0, "", 0) +
            playedMotion(5, 27, 2, "2,0,1", "1,0,0", "", 0, "", 0) +
            playedMotion(0, 29, 2, "1,0,1", "2,0,0", "", 0, "", 0) +
            playedMotion(0, 31, 2, "1,0,0", "3,1e-45,0", "", 0, "", 0) +
            playedMotion(0, 33, 2, "1,1,0", "6,0.5,0", "", 0, "1,4\n", 1);
        common::CTextScanner scanner(text);
        list_.load(scanner);
        controller_.setMotionList(list_);
    }

    int advance(float time) {
        time_left_ = time;
        return controller_.advance(time_left_);
    }

    using SRootMotion = CRecordingController::SRootMotion;

    CMotionList list_;
    CRecordingController controller_;
    float time_left_ = 0.0F;
};

TEST_F(CMotionControllerAdvanceTest, NoTimeToSpeakOfPlaysNothing) {
    EXPECT_EQ(advance(0.000001F), 0);
    EXPECT_EQ(time_left_, 0.0F);
    EXPECT_TRUE(controller_.root_motion.empty());
}

TEST_F(CMotionControllerAdvanceTest, TimePlaysTheMotionOnGatheringItsRootMotion) {
    EXPECT_EQ(advance(0.125F), 0);
    EXPECT_EQ(controller_.getCurrentFrameNumber(), 1.0F);
    EXPECT_EQ(time_left_, 0.0F);
    EXPECT_THAT(controller_.root_motion,
                ::testing::ElementsAre(SRootMotion{.end_frame = 1.0F, .scale_factor = 1.0F}));
}

// The step ends just past the signal, and the time it didn't play is left.
TEST_F(CMotionControllerAdvanceTest, ASignalStopsTheStepAndIsReturned) {
    controller_.jumpToMotion(kIdle, 1.0F);
    EXPECT_EQ(advance(0.5F), 7);
    EXPECT_EQ(controller_.getCurrentFrameNumber(), 2.001F);
    EXPECT_EQ(time_left_, 0.5F - ((2.001F - 1.0F) / 8.0F));
}

TEST_F(CMotionControllerAdvanceTest, OfTwoSignalsOnOneFrameTheLastListedIsReturned) {
    controller_.jumpToMotion(kWait, 0.0F);
    EXPECT_EQ(advance(0.25F), 5);
}

// Half a frame to the exit, then the rest of the step from the loop's start.
TEST_F(CMotionControllerAdvanceTest, TheExitCutsToWhereItLeadsAndPlaysOn) {
    controller_.jumpToMotion(kIdle, 3.5F);
    EXPECT_EQ(advance(0.125F), 0);
    EXPECT_EQ(controller_.getCurrentMotionIndex(), kIdle);
    EXPECT_EQ(controller_.getCurrentFrameNumber(), 0.5F);
    EXPECT_THAT(controller_.root_motion,
                ::testing::ElementsAre(
                    SRootMotion{.start_frame = 3.5F, .end_frame = 4.0F, .scale_factor = 1.0F},
                    SRootMotion{.end_frame = 0.5F, .scale_factor = 1.0F}));
}

// wait's exit lands on idle's frame 2 and keeps idle's state; the signal there stops the step.
TEST_F(CMotionControllerAdvanceTest, AnExitWithKeepStateWantsTheStateItLandsIn) {
    controller_.jumpToMotion(kWait, 3.5F);
    EXPECT_EQ(advance(0.125F), 7);
    EXPECT_EQ(controller_.getCurrentMotionIndex(), kIdle);
    EXPECT_EQ(controller_.getStateIndex(), 0);
    EXPECT_EQ(controller_.getCurrentFrameNumber(), 2.001F);
}

TEST_F(CMotionControllerAdvanceTest, TheTimeLeftAfterFiveStepsIsDropped) {
    controller_.jumpToMotion(kLoop, 0.0F);
    EXPECT_EQ(advance(10.0F), 0);
    EXPECT_EQ(time_left_, 0.0F);
    EXPECT_EQ(controller_.root_motion.size(), 5U);
    EXPECT_EQ(controller_.getCurrentFrameNumber(), 0.0F);
}

TEST_F(CMotionControllerAdvanceTest, AnExitWithNoCommandIsFatal) {
    controller_.jumpToMotion(kBad, 0.5F);
    EXPECT_THAT([this] { advance(0.125F); },
                ::testing::ThrowsMessage<common::CFatalError>(::testing::StrEq(
                    "Invalid transition command returned by CMotionControler::advanceComplex: 0")));
}

// The route to go starts its tween in the step: idle holds its frame and go plays from frame 0,
// gathering its root motion at the tween's share.
TEST_F(CMotionControllerAdvanceTest, ARouteIsTakenAtTheStartOfAStep) {
    controller_.setDesiredState(kGo, false);
    EXPECT_EQ(advance(0.125F), 0);
    EXPECT_EQ(controller_.getCurrentMotionIndex(), kIdle);
    EXPECT_EQ(controller_.getCurrentFrameNumber(), 0.0F);
    EXPECT_EQ(controller_.getTweenTargetFrame(), 1.0F);
    EXPECT_EQ(controller_.getTweenProgress(),
              (common::CExtendedFloat(0.25) + common::CExtendedFloat(0.001F)).toFloat());
    EXPECT_THAT(controller_.root_motion,
                ::testing::ElementsAre(SRootMotion{
                    .start_frame = 5.0F, .end_frame = 6.0F, .scale_factor = 1.0F - 0.001F}));
}

// At the midpoint go becomes the motion and keepState wants its state; idle, now the target, is
// frozen and go plays on as the tween runs down to its end.
TEST_F(CMotionControllerAdvanceTest, AtItsMidpointATweenSwapsItsMotionsAndRunsDown) {
    controller_.setDesiredState(kGo, false);
    advance(0.125F);
    advance(0.125F);
    EXPECT_EQ(controller_.getCurrentMotionIndex(), kGo);
    EXPECT_EQ(controller_.getTweenTargetMotion(), kIdle);
    EXPECT_TRUE(controller_.isTweenPastMidpoint());
    EXPECT_EQ(controller_.getTweenType(), EMotionTransitionCmd::MOTION_CMD_TWEEN_ADVANCE_BOTH);
    EXPECT_EQ(controller_.getStateIndex(), kGo);
    EXPECT_EQ(controller_.getInTransition(), nullptr);
    EXPECT_NEAR(controller_.getTweenProgress(), 0.499F, 1e-4F);
    EXPECT_NEAR(controller_.getCurrentFrameNumber(), 2.0F, 1e-4F);
    advance(0.5F);
    EXPECT_EQ(controller_.getTweenProgress(), -1.0F);
    EXPECT_EQ(controller_.getTweenType(), EMotionTransitionCmd::MOTION_CMD_NONE);
}

TEST_F(CMotionControllerAdvanceTest, AFrozenTweenPlaysNeitherMotion) {
    controller_.setDesiredState(kHold, false);
    advance(0.0625F);
    EXPECT_EQ(controller_.getTweenType(), EMotionTransitionCmd::MOTION_CMD_TWEEN);
    EXPECT_EQ(controller_.getCurrentFrameNumber(), 0.0F);
    EXPECT_EQ(controller_.getTweenTargetFrame(), 1.0F);
    EXPECT_TRUE(controller_.root_motion.empty());
}

// hold's exit tweens to go's patch frame. Both play: hold to its last frame, where it holds as a
// tween exit does, and go on from frame 3.
TEST_F(CMotionControllerAdvanceTest, ATweenPlayingBothPlaysEachAtItsShare) {
    controller_.jumpToMotion(kHold, 1.5F);
    advance(0.125F);
    EXPECT_EQ(controller_.patches, 1);
    EXPECT_EQ(controller_.getCurrentMotionIndex(), kHold);
    EXPECT_EQ(controller_.getCurrentFrameNumber(), 1.0F);
    EXPECT_EQ(controller_.getTweenTargetMotion(), kGo);
    EXPECT_EQ(controller_.getTweenTargetFrame(), 3.5F);
    EXPECT_THAT(
        controller_.root_motion,
        ::testing::ElementsAre(
            SRootMotion{.start_frame = 16.5F, .end_frame = 17.0F, .scale_factor = 1.0F},
            SRootMotion{.start_frame = 16.5F, .end_frame = 17.0F, .scale_factor = 0.001F},
            SRootMotion{.start_frame = 8.0F, .end_frame = 8.5F, .scale_factor = 1.0F - 0.001F}));
}

TEST_F(CMotionControllerAdvanceTest, ATweenPlayingItsSourcePlaysOnlyTheCurrentMotion) {
    controller_.jumpToMotion(kBoth, 3.5F);
    advance(0.125F);
    EXPECT_EQ(controller_.getTweenType(), EMotionTransitionCmd::MOTION_CMD_TWEEN_ADVANCE_BOTH);
    EXPECT_EQ(controller_.getCurrentFrameNumber(), 3.0F);
    EXPECT_EQ(controller_.getTweenTargetFrame(), 0.0F);
}

// The exit is idle's own cut to its frame 0, taken to the waiting route's target instead.
TEST_F(CMotionControllerAdvanceTest, AWaitingRouteTakesTheExitToItsTarget) {
    controller_.jumpToMotion(kIdle, 3.0F);
    controller_.setDesiredState(kWait, true);
    EXPECT_EQ(advance(0.25F), 5);
    EXPECT_EQ(controller_.getCurrentMotionIndex(), kWait);
    EXPECT_EQ(controller_.getInTransition(), nullptr);
}

TEST_F(CMotionControllerAdvanceTest, WantingNoStateDropsTheRouteWaiting) {
    controller_.jumpToMotion(kIdle, 3.0F);
    controller_.setDesiredState(kWait, true);
    controller_.setDesiredState(-1, false);
    ASSERT_NE(controller_.getInTransition(), nullptr);
    advance(0.0625F);
    EXPECT_EQ(controller_.getInTransition(), nullptr);
    EXPECT_EQ(controller_.getCurrentFrameNumber(), 3.5F);
}

TEST_F(CMotionControllerAdvanceTest, ACutRouteTakesAStepOfItsOwn) {
    controller_.setDesiredState(7, false);
    advance(0.125F);
    EXPECT_EQ(controller_.getCurrentMotionIndex(), kLoop);
    EXPECT_EQ(controller_.getCurrentFrameNumber(), 1.0F);
}

TEST_F(CMotionControllerAdvanceTest, ARouteOfAnotherCommandGoesNowhere) {
    controller_.setDesiredState(8, true);
    EXPECT_EQ(controller_.getInTransition(), nullptr);
    EXPECT_EQ(controller_.getTweenProgress(), -1.0F);
}

TEST_F(CMotionControllerAdvanceTest, AnExitByAWaitCutsLikeAnyOther) {
    controller_.jumpToMotion(kWaitExit, 0.5F);
    advance(0.125F);
    EXPECT_EQ(controller_.getCurrentMotionIndex(), kIdle);
    EXPECT_EQ(controller_.getCurrentFrameNumber(), 1.5F);
}

// The target plays to its end, where its exit cuts: dash's to idle's patch frame, skip's to
// idle's frame 1.
TEST_F(CMotionControllerAdvanceTest, ATweensTargetTakesItsExitAtItsEnd) {
    controller_.setDesiredState(4, false);
    advance(0.125F);
    EXPECT_EQ(controller_.patches, 1);
    EXPECT_EQ(controller_.getTweenTargetMotion(), kIdle);
    EXPECT_EQ(controller_.getTweenTargetFrame(), 3.0F);
    controller_.jumpToMotion(kIdle, 0.0F);
    controller_.setDesiredState(5, false);
    advance(0.125F);
    EXPECT_EQ(controller_.patches, 1);
    EXPECT_EQ(controller_.getTweenTargetFrame(), 1.0F);
}

// wait's frame 1 signals cut the tween's step short there.
TEST_F(CMotionControllerAdvanceTest, ATweensStepStopsAtItsTargetsSignal) {
    controller_.setDesiredState(6, false);
    EXPECT_EQ(advance(0.25F), 5);
    EXPECT_EQ(controller_.getTweenTargetFrame(), 1.001F);
    EXPECT_EQ(time_left_, 0.25F - (1.001F / 8.0F));
}

// The tween to skip plays both; skip reaches its end before the midpoint and cuts to idle, so
// idle is the motion after it and the route to skip stays under way. Idle's own exit is then taken
// to idle, not to the route's target.
TEST_F(CMotionControllerAdvanceTest, OnlyAWaitingRouteTakesTheExitToItsTarget) {
    controller_.setDesiredState(9, false);
    for (int step = 0; step < 24; ++step) {
        advance(0.0625F);
        ASSERT_NE(controller_.getCurrentMotionIndex(), 8) << step;
    }
    EXPECT_EQ(controller_.getTweenType(), EMotionTransitionCmd::MOTION_CMD_NONE);
    EXPECT_EQ(controller_.getCurrentMotionIndex(), kIdle);
    EXPECT_EQ(controller_.getInTransition(), &list_.getMotions()[0].transitions[8]);
}

// hold's tween wants no new state at its midpoint.
TEST_F(CMotionControllerAdvanceTest, AtTheMidpointATweenWithoutKeepStateKeepsTheStateWanted) {
    controller_.setDesiredState(kHold, false);
    advance(0.25F);
    EXPECT_EQ(controller_.getCurrentMotionIndex(), kHold);
    EXPECT_TRUE(controller_.isTweenPastMidpoint());
    EXPECT_EQ(controller_.getStateIndex(), kHold);
}

// Its speed is infinite, so the tween has no time left to run and its progress goes NaN, where it
// stays as it does in the original.
TEST_F(CMotionControllerAdvanceTest, ATweenOfNoTimeToSpeakOfNeverRuns) {
    controller_.jumpToMotion(kTiny, 0.5F);
    advance(0.125F);
    EXPECT_TRUE(std::isnan(controller_.getTweenProgress()));
    EXPECT_EQ(controller_.getCurrentFrameNumber(), 0.5F);
}

// The step to the exit reaches the signal and leaves the frame where it was, so the tween plays
// signalboth over it again: its signal is returned, go's step returning none. The signal cuts
// both motions' step short.
TEST_F(CMotionControllerAdvanceTest, PlayingBothTheCurrentMotionsSignalComesFirst) {
    controller_.jumpToMotion(kSignalBoth, 0.5F);
    EXPECT_EQ(advance(0.125F), 4);
    EXPECT_EQ(controller_.getCurrentFrameNumber(), 0.5F);
    EXPECT_EQ(advance(0.125F), 4);
    EXPECT_EQ(controller_.getCurrentFrameNumber(), 1.001F);
    EXPECT_EQ(controller_.getTweenTargetFrame(), 1.001F - 0.5F);
}

// The original turns back the tween the jump dropped, swapping go's frame in for idle's.
TEST_F(CMotionControllerAdvanceTest, ATweenDroppedBeforeItsMidpointIsntTurnedBack) {
    controller_.setDesiredState(kGo, true);
    controller_.jumpToMotion(kIdle, 3.0F);
    controller_.setDesiredState(kWait, true);
    controller_.setDesiredState(kHold, false);
    EXPECT_EQ(controller_.getCurrentMotionIndex(), kIdle);
    EXPECT_EQ(controller_.getCurrentFrameNumber(), 3.0F);
    EXPECT_EQ(controller_.getTweenProgress(), -1.0F);
}

} // namespace
} // namespace nocturne::core
