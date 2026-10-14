#include "common/error/fatalerror.h"
#include "core/course/course.h"
#include "tests/mocks/engine/podfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <string>
#include <type_traits>

namespace nocturne::core {
namespace {

using ::testing::StrEq;
using ::testing::ThrowsMessage;

TEST(CCourse, IsConcrete) {
    static_assert(!std::is_abstract_v<CCourse>);
}

TEST(CCourse, Constructors) {
    static_assert(std::is_constructible_v<CCourse, const engine::CDosIo &>);
}

TEST(CCourse, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CCourse::load), void (CCourse::*)(std::string_view)>);
    static_assert(std::is_same_v<decltype(&CCourse::free), void (CCourse::*)()>);
    static_assert(
        std::is_same_v<decltype(&CCourse::evaluate),
                       void (CCourse::*)(float, common::CVector3f &, common::CVector3f &) const>);
    static_assert(std::is_same_v<decltype(&CCourse::getLength), int (CCourse::*)() const>);
}

constexpr float kQuarterPi = 0.78539819F;

// Three frames: the origin, ten along x, then ten along x and twenty up turned a quarter about z.
std::string threeFrames(int loop) {
    return std::string("; course\r\n1\r\n; frames, loop\r\n3,") + std::to_string(loop) +
           "\r\n; frames\r\n"
           "0,0,0, 1,0,0,0\r\n"
           "10,0,0, 1,0,0,0\r\n"
           "10,20,0, 0.70710677,0,0,0.70710677\r\n";
}

class CCourseTest : public engine::CPodFixture {
protected:
    struct SPoint {
        common::CVector3f pos;
        common::CVector3f euler;
    };

    SPoint at(float time) const {
        SPoint point;
        course_.evaluate(time, point.pos, point.euler);
        return point;
    }

    CCourse course_{dosio_};
};

TEST_F(CCourseTest, LoadsEveryFrame) {
    givenFile("data\\bat.pth", threeFrames(0));
    course_.load("bat.pth");
    EXPECT_EQ(course_.getLength(), 3);
    EXPECT_TRUE(at(2.0F).pos.equals({.x = 10, .y = 20}));
}

TEST_F(CCourseTest, BetweenFramesThePositionBlendsAndTheTurnSlerps) {
    givenFile("data\\bat.pth", threeFrames(0));
    course_.load("bat.pth");
    EXPECT_TRUE(at(0.5F).pos.equals({.x = 5}));
    const SPoint halfway = at(1.5F);
    EXPECT_TRUE(halfway.pos.equals({.x = 10, .y = 10}));
    EXPECT_NEAR(halfway.euler.z, kQuarterPi, 1e-6F);
}

TEST_F(CCourseTest, AlmostOnAFrameTakesTheFrame) {
    givenFile("data\\bat.pth", threeFrames(0));
    course_.load("bat.pth");
    EXPECT_TRUE(at(1.0005F).pos.equals({.x = 10}));
}

TEST_F(CCourseTest, ACourseThatDoesntLoopHoldsAtItsEnds) {
    givenFile("data\\bat.pth", threeFrames(0));
    course_.load("bat.pth");
    EXPECT_TRUE(at(-5.0F).pos.equals({}));
    EXPECT_TRUE(at(7.0F).pos.equals({.x = 10, .y = 20}));
}

TEST_F(CCourseTest, ALoopingCourseRunsFromItsLastFrameBackToItsFirst) {
    givenFile("data\\bat.pth", threeFrames(1));
    course_.load("bat.pth");
    EXPECT_TRUE(at(2.5F).pos.equals({.x = 5, .y = 10}));
    EXPECT_TRUE(at(5.5F).pos.equals({.x = 5, .y = 10}));
    EXPECT_TRUE(at(-0.5F).pos.equals({.x = 5, .y = 10}));
    EXPECT_TRUE(at(3.0F).pos.equals({}));
}

TEST_F(CCourseTest, WholeLoopsBackLandOnTheFirstFrame) {
    givenFile("data\\bat.pth", threeFrames(1));
    course_.load("bat.pth");
    EXPECT_TRUE(at(-3.0F).pos.equals({}));
}

TEST_F(CCourseTest, TimeJustBeforeZeroWrapsToTheFirstFrameRatherThanPastTheLast) {
    givenFile("data\\bat.pth", threeFrames(1));
    course_.load("bat.pth");
    EXPECT_TRUE(at(-1e-8F).pos.equals({}));
}

TEST_F(CCourseTest, WithoutALoopFlagTheCourseKeepsTheOneItHad) {
    givenFile("data\\open.pth", threeFrames(0));
    givenFile("data\\bare.pth", "; c\r\n1\r\n; c\r\n2\r\n; c\r\n0,0,0, 1,0,0,0\r\n"
                                "4,0,0, 1,0,0,0\r\n");
    course_.load("open.pth");
    course_.load("bare.pth");
    EXPECT_TRUE(at(1.5F).pos.equals({.x = 4}));
}

TEST_F(CCourseTest, AnUnreadableFieldIsLeftZero) {
    givenFile("data\\bad.pth", "; c\r\n1\r\n; c\r\n1,0\r\n; c\r\n7,x\r\n");
    course_.load("bad.pth");
    EXPECT_TRUE(at(0.0F).pos.equals({.x = 7}));
}

TEST_F(CCourseTest, ANegativeCountLoadsNoFrames) {
    givenFile("data\\neg.pth", "; c\r\n1\r\n; c\r\n-2,0\r\n");
    course_.load("neg.pth");
    EXPECT_EQ(course_.getLength(), 0);
}

TEST_F(CCourseTest, AnEmptyCourseStaysAtTheOriginUnturned) {
    const SPoint point = at(1.0F);
    EXPECT_TRUE(point.pos.equals({}));
    EXPECT_TRUE(point.euler.equals({}));
}

TEST_F(CCourseTest, FreeingDropsTheFrames) {
    givenFile("data\\bat.pth", threeFrames(0));
    course_.load("bat.pth");
    course_.free();
    EXPECT_EQ(course_.getLength(), 0);
}

TEST_F(CCourseTest, AMissingCourseIsFatal) {
    EXPECT_THAT(
        [this] { course_.load("gone.pth"); },
        ThrowsMessage<common::CFatalError>(StrEq("CCourse::load - can't open data\\gone.pth")));
}

} // namespace
} // namespace nocturne::core
