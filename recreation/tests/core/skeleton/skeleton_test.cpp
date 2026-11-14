#include "common/error/fatalerror.h"
#include "common/math/quaternion4f.h"
#include "core/skeleton/skeleton.h"
#include "core/xform/xform.h"
#include "engine/dosio/dosio.h"
#include "tests/mocks/engine/podfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <bit>
#include <cmath>
#include <cstdint>
#include <format>
#include <span>
#include <string>
#include <string_view>
#include <type_traits>

namespace nocturne::core {
namespace {

using ::testing::StrEq;
using ::testing::ThrowsMessage;

TEST(CSkeleton, IsConcrete) {
    static_assert(!std::is_abstract_v<CSkeleton>);
}

TEST(CSkeleton, Constructors) {
    static_assert(std::is_constructible_v<CSkeleton, const engine::CDosIo &>);
}

TEST(CSkeleton, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CSkeleton::free), void (CSkeleton::*)()>);
    static_assert(
        std::is_same_v<decltype(&CSkeleton::load), void (CSkeleton::*)(std::string_view)>);
    static_assert(std::is_same_v<decltype(&CSkeleton::findBone),
                                 int (CSkeleton::*)(std::string_view, bool) const>);
    static_assert(std::is_same_v<decltype(&CSkeleton::getBoneAngleAtFrame),
                                 const common::CQuaternion4f &(CSkeleton::*)(int, int) const>);
    static_assert(std::is_same_v<decltype(&CSkeleton::getBoneAngleInterpolated),
                                 common::CQuaternion4f (CSkeleton::*)(int, int, int, float) const>);
    static_assert(std::is_same_v<decltype(&CSkeleton::getHierarchyDistance),
                                 int (CSkeleton::*)(int, int) const>);
    static_assert(
        std::is_same_v<decltype(&CSkeleton::calculateFrameDataSize), int (CSkeleton::*)()>);
}

// A skeleton of the version, with the bones Pelvis and Spine over two frames, one motion, and the
// reference bone origins a version 3 file ends with; written with CRLFs, as the shipped files are.
std::string skeletonFile(int version, std::string_view bones = "2,2\n") {
    std::string text = std::format(
        "// skeleton version\n{}\n// bonecount, frameCount\n{}// boneList\n\"Bip01 Pelvis\", -1\n"
        "\"Bip01 Spine\", 0\n// angle list: w,x,y,z\n1,0,0,0\n0.5,0.25,0.125,1\n0,1,0,0\n"
        "0,0,1,0\n// root offset list: x,y,z\n1,2,3\n4,5,6\n// canceled movement list: x,y,z\n"
        "7,8,9\n10,11,12\n// motion list version\n2\n// state list\n1\nSTAND\n// motion count\n"
        "1\n// motion 0\n\"stand\",30,0,0,2\n// exit\n1,0,0\n// cmd\n1,0,0\n// back\n0,0\n"
        "// transitions\n0\n// signals\n0\n// markers\n0\n",
        version, bones);
    if (version >= 3) {
        text += "// reference bone org list: x,y,z\n0,1,0\n0,0.5,0\n";
    }
    std::string crlf;
    for (const char c : text) {
        if (c == '\n') {
            crlf += '\r';
        }
        crlf += c;
    }
    return crlf;
}

class CSkeletonTest : public engine::CPodFixture {
protected:
    void expectFatal(const std::string &file, std::string_view message) {
        givenFile("data\\bad.skl", file);
        EXPECT_THAT([this] { skeleton_.load("bad.skl"); },
                    ThrowsMessage<common::CFatalError>(StrEq(std::string(message))));
    }

    CSkeleton skeleton_{dosio_};
};

TEST_F(CSkeletonTest, AnEmptySkeletonHasNoBonesOrFrames) {
    EXPECT_EQ(skeleton_.getBoneCount(), 0);
    EXPECT_EQ(skeleton_.getFrameCount(), 0);
    EXPECT_TRUE(skeleton_.getLoadedFilename().empty());
}

TEST_F(CSkeletonTest, ASkeletonIsReadWithItsBonesFramesAndMotions) {
    givenFile("data\\GABRIELA.SKL", skeletonFile(3));
    skeleton_.load("GABRIELA.SKL");
    EXPECT_EQ(skeleton_.getLoadedFilename(), "GABRIELA.SKL");
    ASSERT_EQ(skeleton_.getBoneCount(), 2);
    EXPECT_EQ(skeleton_.getBones()[0].bone_name, "Bip01 Pelvis");
    EXPECT_EQ(skeleton_.getBones()[0].parent_index, -1);
    EXPECT_EQ(skeleton_.getBones()[1].bone_name, "Bip01 Spine");
    EXPECT_EQ(skeleton_.getBones()[1].parent_index, 0);
    EXPECT_EQ(skeleton_.getFrameCount(), 2);
    ASSERT_EQ(skeleton_.getBoneAngleFrames().size(), 4U);
    EXPECT_EQ(skeleton_.getBoneAngleFrames()[1],
              (common::CQuaternion4f{.w = 0.5F, .x = 0.25F, .y = 0.125F, .z = 1.0F}));
    EXPECT_EQ(skeleton_.getBoneAngleFrames()[3],
              (common::CQuaternion4f{.w = 0.0F, .x = 0.0F, .y = 1.0F, .z = 0.0F}));
    ASSERT_EQ(skeleton_.getRootOffsets().size(), 2U);
    EXPECT_TRUE(skeleton_.getRootOffsets()[1].equals({.x = 4.0F, .y = 5.0F, .z = 6.0F}));
    ASSERT_EQ(skeleton_.getCanceledMovements().size(), 2U);
    EXPECT_TRUE(skeleton_.getCanceledMovements()[0].equals({.x = 7.0F, .y = 8.0F, .z = 9.0F}));
    ASSERT_EQ(skeleton_.getMotionList().getMotions().size(), 1U);
    EXPECT_EQ(skeleton_.getMotionList().getMotions()[0].motion_name, "stand");
}

// Retail reads past a version 3 file's reference bone origins without keeping them.
TEST_F(CSkeletonTest, AVersionTwoSkeletonEndsAtItsMotions) {
    givenFile("data\\old.skl", skeletonFile(2));
    skeleton_.load("old.skl");
    EXPECT_EQ(skeleton_.getBoneCount(), 2);
    EXPECT_EQ(skeleton_.getMotionList().getStateNames()[0], "STAND");
}

TEST_F(CSkeletonTest, EachFrameHoldsEveryBonesAngle) {
    givenFile("data\\GABRIELA.SKL", skeletonFile(3));
    skeleton_.load("GABRIELA.SKL");
    EXPECT_EQ(skeleton_.getBoneAngleAtFrame(1, 0),
              (common::CQuaternion4f{.w = 0.5F, .x = 0.25F, .y = 0.125F, .z = 1.0F}));
    EXPECT_EQ(skeleton_.getBoneAngleAtFrame(0, 1), (common::CQuaternion4f{.x = 1.0F}));
}

// A NaN takes the second frame, as the original's unordered compares do.
TEST_F(CSkeletonTest, AnAngleBetweenFramesIsTheirSlerpInsideZeroToOne) {
    givenFile("data\\GABRIELA.SKL", skeletonFile(3));
    skeleton_.load("GABRIELA.SKL");
    const common::CQuaternion4f first{.w = 1.0F};
    const common::CQuaternion4f second{.x = 1.0F};
    EXPECT_EQ(skeleton_.getBoneAngleInterpolated(0, 0, 1, 0.0F), first);
    EXPECT_EQ(skeleton_.getBoneAngleInterpolated(0, 0, 1, -1.0F), first);
    EXPECT_EQ(skeleton_.getBoneAngleInterpolated(0, 0, 1, 1.0F), second);
    EXPECT_EQ(skeleton_.getBoneAngleInterpolated(0, 0, 1, std::nanf("")), second);
    EXPECT_EQ(skeleton_.getBoneAngleInterpolated(0, 0, 1, 0.25F),
              slerpQuaternion(first, second, 0.25F));
}

TEST_F(CSkeletonTest, ABoneIsFoundByItsNameInAnyCase) {
    givenFile("data\\GABRIELA.SKL", skeletonFile(3));
    skeleton_.load("GABRIELA.SKL");
    EXPECT_EQ(skeleton_.findBone("bip01 spine", true), 1);
    EXPECT_EQ(skeleton_.findBone("Bip01 Head", false), -1);
    EXPECT_THAT([this] { static_cast<void>(skeleton_.findBone("Bip01 Head", true)); },
                ThrowsMessage<common::CFatalError>(
                    StrEq("Can't find bone Bip01 Head in skeleton GABRIELA.SKL!")));
}

TEST_F(CSkeletonTest, TheHierarchyDistanceCountsTheBonesUpToTheTarget) {
    givenFile("data\\GABRIELA.SKL", skeletonFile(3));
    skeleton_.load("GABRIELA.SKL");
    EXPECT_EQ(skeleton_.getHierarchyDistance(1, 1), 0);
    EXPECT_EQ(skeleton_.getHierarchyDistance(1, 0), 1);
    EXPECT_EQ(skeleton_.getHierarchyDistance(0, 1), -1);
    EXPECT_EQ(skeleton_.getHierarchyDistance(1, -1), 2);
    EXPECT_EQ(skeleton_.getHierarchyDistance(0, -1), 1);
}

TEST_F(CSkeletonTest, FreeingForgetsTheBonesAndFrames) {
    givenFile("data\\GABRIELA.SKL", skeletonFile(3));
    skeleton_.load("GABRIELA.SKL");
    skeleton_.free();
    EXPECT_EQ(skeleton_.getBoneCount(), 0);
    EXPECT_EQ(skeleton_.getFrameCount(), 0);
    EXPECT_TRUE(skeleton_.getBoneAngleFrames().empty());
    EXPECT_TRUE(skeleton_.getRootOffsets().empty());
    EXPECT_TRUE(skeleton_.getCanceledMovements().empty());
}

TEST_F(CSkeletonTest, AFileThatWontOpenIsFatal) {
    EXPECT_THAT([this] { skeleton_.load("none.skl"); },
                ThrowsMessage<common::CFatalError>(StrEq("CSkeleton::load - Can't open none.skl")));
}

TEST_F(CSkeletonTest, AVersionOutsideTwoToFourIsFatal) {
    expectFatal("// v\nx\n", "Invalid skeleton version");
    expectFatal(skeletonFile(0), "Invalid skeleton version");
    expectFatal(skeletonFile(1), "Old skeleton version 1 not supported");
    expectFatal(skeletonFile(5),
                "Skeleton version 5 is newer than .EXE, which can only process up to version 4");
}

// A float whose little-endian bytes hold a CR LF pair, which reading the file as text would fold.
const float kCrLfFloat = std::bit_cast<float>(std::uint32_t{0x3F0A0D00});

// The angles of skeletonFile as a version 4 file holds them: four little-endian floats each.
std::string binaryAngles(std::span<const float> values) {
    std::string bytes;
    for (const float value : values) {
        const auto bits = std::bit_cast<std::uint32_t>(value);
        for (int shift = 0; shift < 32; shift += 8) {
            bytes += static_cast<char>((bits >> shift) & 0xFFU);
        }
    }
    return bytes;
}

// skeletonFile(4) with its text angles swapped for a binary block, as Blair Witch Volume 1 writes.
std::string binarySkeletonFile(std::string_view block) {
    std::string file = skeletonFile(4);
    const std::string_view angles = "1,0,0,0\r\n0.5,0.25,0.125,1\r\n0,1,0,0\r\n0,0,1,0\r\n";
    file.replace(file.find(angles), angles.size(), std::string(block) + "\r\n");
    return file;
}

TEST_F(CSkeletonTest, AVersionFourSkeletonHoldsItsAnglesAsBinary) {
    const std::array<float, 16> values = {1, 0, 0, 0, kCrLfFloat, 0.25F, 0.125F, 1,
                                          0, 1, 0, 0, 0,          0,     1,      0};
    givenFile("data\\SHADOW.SKL", binarySkeletonFile(binaryAngles(values)));
    skeleton_.load("SHADOW.SKL");
    EXPECT_EQ(skeleton_.getBoneAngleAtFrame(1, 0),
              (common::CQuaternion4f{.w = kCrLfFloat, .x = 0.25F, .y = 0.125F, .z = 1.0F}));
    EXPECT_EQ(skeleton_.getBoneAngleAtFrame(1, 1), (common::CQuaternion4f{.y = 1.0F}));
    EXPECT_TRUE(skeleton_.getRootOffsets()[1].equals({.x = 4.0F, .y = 5.0F, .z = 6.0F}));
    EXPECT_EQ(skeleton_.getMotionList().getMotions()[0].motion_name, "stand");
}

TEST_F(CSkeletonTest, AShortBinaryAngleBlockIsFatal) {
    std::string file = binarySkeletonFile("");
    file.resize(file.find("// angle list"));
    expectFatal(file + "// angle list: w,x,y,z\r\n" + binaryAngles(std::array<float, 3>{}),
                "Skeleton file corrupt");
}

TEST_F(CSkeletonTest, MoreThanAHundredBonesIsFatal) {
    expectFatal(skeletonFile(3, "101,1\n"), "Too bony!");
}

// A negative count reads as none.
TEST_F(CSkeletonTest, NegativeCountsHoldNothing) {
    givenFile("data\\none.skl", "// v\n2\n// counts\n-1,-1\n// bones\n// angles\n// roots\n"
                                "// canceled\n// motion list version\n2\n// s\n0\n// m\n0\n");
    skeleton_.load("none.skl");
    EXPECT_EQ(skeleton_.getBoneCount(), 0);
    EXPECT_TRUE(skeleton_.getBoneAngleFrames().empty());
}

} // namespace
} // namespace nocturne::core
