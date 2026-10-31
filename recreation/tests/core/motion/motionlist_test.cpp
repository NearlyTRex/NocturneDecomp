#include "common/error/fatalerror.h"
#include "common/text/textscanner.h"
#include "core/motion/motionlist.h"
#include "core/motion/motiontransitioncmd.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <string>
#include <string_view>
#include <type_traits>

namespace nocturne::core {
namespace {

using ::testing::ElementsAre;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

TEST(CMotionList, IsConcrete) {
    static_assert(!std::is_abstract_v<CMotionList>);
}

TEST(CMotionList, Constructors) {
    static_assert(std::is_constructible_v<CMotionList>);
}

TEST(CMotionList, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CMotionList::load),
                                 void (CMotionList::*)(common::CTextScanner &)>);
    static_assert(std::is_same_v<decltype(&CMotionList::findMotionIndex),
                                 int (CMotionList::*)(std::string_view, bool) const>);
    static_assert(
        std::is_same_v<decltype(&CMotionList::findStateIndex), int (CMotionList::*)(char *, int)>);
}

// A motion's lines after its name and frames, each after its comment.
std::string motionBody(std::string_view transitions, std::string_view signals) {
    return std::string("// exit forward\n12,1,2.5\n// exit cmd\n3,0.25,1\n// exit backward\n"
                       "4,1.5\n// transitions\n") +
           std::string(transitions) + "// signals\n" + std::string(signals);
}

TEST(CMotionList, AnEmptyListHasNoStatesOrMotions) {
    const CMotionList list;
    EXPECT_TRUE(list.getStateNames().empty());
    EXPECT_TRUE(list.getMotions().empty());
}

// ARMOUR.SKL's list, but with a second state, a transition, a signal and markers.
TEST(CMotionList, AListIsReadWithItsStatesMotionsTransitionsSignalsAndMarkers) {
    const std::string text = "// motion list version\n2\n// state list\n2\nTEST\nWALK\n"
                             "// motion count\n1\n// motion 0\n\"stand\",30,1,7,20\n" +
                             motionBody("1\n1,3,0,4.5,0.5,1\n", "1\n6,9\n") +
                             "// markers\n2 5 10\n// after\n";
    common::CTextScanner scanner(text);
    CMotionList list;
    list.load(scanner);
    EXPECT_THAT(list.getStateNames(), ElementsAre("TEST", "WALK"));
    ASSERT_EQ(list.getMotions().size(), 1U);
    const SMotion &motion = list.getMotions()[0];
    EXPECT_EQ(motion.motion_name, "stand");
    EXPECT_EQ(motion.fps, 30.0F);
    EXPECT_EQ(motion.state_index, 1);
    EXPECT_EQ(motion.frame_start, 7);
    EXPECT_EQ(motion.frame_count, 20);
    EXPECT_EQ(motion.exit_forward_from_frame, 12);
    EXPECT_EQ(motion.exit_forward_to_motion, 1);
    EXPECT_EQ(motion.exit_forward_to_frame, 2.5F);
    EXPECT_EQ(motion.exit_forward_cmd, EMotionTransitionCmd::MOTION_CMD_TWEEN);
    EXPECT_EQ(motion.exit_forward_tween_time, 0.25F);
    EXPECT_TRUE(motion.exit_forward_set_new_state);
    EXPECT_EQ(motion.exit_backward_to_motion, 4);
    EXPECT_EQ(motion.exit_backward_to_frame, 1.5F);
    ASSERT_EQ(motion.transitions.size(), 1U);
    const SMotionTransition &transition = motion.transitions[0];
    EXPECT_EQ(transition.desired_state, 1);
    EXPECT_EQ(transition.cmd, EMotionTransitionCmd::MOTION_CMD_TWEEN);
    EXPECT_EQ(transition.to_motion_number, 0);
    EXPECT_EQ(transition.to_frame_number, 4.5F);
    EXPECT_EQ(transition.tween_time, 0.5F);
    EXPECT_TRUE(transition.set_new_state_as_desired);
    ASSERT_EQ(motion.signals.size(), 1U);
    EXPECT_EQ(motion.signals[0].frame_number, 6);
    EXPECT_EQ(motion.signals[0].value, 9);
    EXPECT_THAT(motion.markers, ElementsAre(5, 10));
    EXPECT_EQ(scanner.readLine(), "// after");
}

// Two motions, walk listed twice: the first is found.
TEST(CMotionList, AMotionIsFoundByItsNameInAnyCase) {
    const std::string text = "// v\n2\n// s\n0\n// m\n3\n// m0\n\"stand\",1,0,0,1\n" +
                             motionBody("0\n", "0\n") + "// k\n0\n// m1\n\"Walk\",1,0,0,1\n" +
                             motionBody("0\n", "0\n") + "// k\n0\n// m2\n\"walk\",1,0,0,1\n" +
                             motionBody("0\n", "0\n") + "// k\n0\n";
    common::CTextScanner scanner(text);
    CMotionList list;
    list.load(scanner);
    EXPECT_EQ(list.findMotionIndex("STAND", false), 0);
    EXPECT_EQ(list.findMotionIndex("walk", true), 1);
    EXPECT_EQ(list.findMotionIndex("run", false), -1);
    EXPECT_THAT(
        [&] { static_cast<void>(list.findMotionIndex("run", true)); },
        ThrowsMessage<common::CFatalError>(StrEq("Can't find motion \"run\" in motion list")));
}

// No markers, and nothing kept from the list read before.
TEST(CMotionList, AVersionOneListHasNoMarkers) {
    const std::string first = "// v\n2\n// s\n0\n// m\n1\n// m0\n\"a\",1,0,0,1\n" +
                              motionBody("0\n", "0\n") + "// markers\n1 3\n";
    const std::string second = "// v\n1\n// s\n0\n// m\n1\n// m0\n\"b\",1,0,0,1\n" +
                               motionBody("0\n", "0\n") + "// after\n";
    common::CTextScanner first_scanner(first);
    CMotionList list;
    list.load(first_scanner);
    common::CTextScanner second_scanner(second);
    list.load(second_scanner);
    ASSERT_EQ(list.getMotions().size(), 1U);
    EXPECT_EQ(list.getMotions()[0].motion_name, "b");
    EXPECT_TRUE(list.getMotions()[0].markers.empty());
    EXPECT_EQ(second_scanner.readLine(), "// after");
}

TEST(CMotionList, AVersionPastTwoOrNoneIsFatal) {
    common::CTextScanner newer("// v\n3\n");
    CMotionList list;
    EXPECT_THAT([&] { list.load(newer); },
                ThrowsMessage<common::CFatalError>(
                    StrEq("Can't read motion list - it's version 3, and I can only handle up to "
                          "version 2.  (Probably you have an old .exe)")));
    common::CTextScanner unreadable("// v\nnone\n");
    EXPECT_THAT([&] { list.load(unreadable); },
                ThrowsMessage<common::CFatalError>(StrEq("Error reading motion list.")));
}

} // namespace
} // namespace nocturne::core
