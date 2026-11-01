#include "common/error/fatalerror.h"
#include "core/cloth/cloth.h"
#include "tests/mocks/core/clothfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <string>

namespace nocturne::core {
namespace {

using ::testing::ElementsAre;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

// A strip of two points, the second a unit below the first.
class CClothLoadTest : public CClothFixture {
protected:
    CClothLoadTest() {
        givenFile("models\\strip.kfm",
                  clothModelText("0,0,0\n0,-256,128\n", 2, "0,2, 0,0,0, 1,0,0\n", 1));
    }

    CCloth cloth_{dosio_, models_};
};

// The second bone angle is read as x, z then y.
TEST_F(CClothLoadTest, AClothIsReadWithItsModelPhysicsPinsAndBones) {
    givenFile("models\\strip.cth", clothText("strip.kfm", "1,2,3,4,5,6,7,8", "1\n// list\n0\n",
                                             "1\n\"Bip01\",0.5,0.25, 1,2,3, 4,5,6, 7\n"));
    cloth_.load("strip.cth");
    EXPECT_EQ(cloth_.getVersion(), 3);
    EXPECT_EQ(cloth_.getModel().getVertexCount(), 2);
    EXPECT_EQ(cloth_.getWeight(), 1.0F);
    EXPECT_EQ(cloth_.getGravity(), 2.0F);
    EXPECT_EQ(cloth_.getDampen(), 3.0F);
    EXPECT_EQ(cloth_.getSpring(), 4.0F);
    EXPECT_EQ(cloth_.getBodyFriction(), 5.0F);
    EXPECT_EQ(cloth_.getFloorFriction(), 6.0F);
    EXPECT_EQ(cloth_.getWindArea(), 7.0F);
    EXPECT_EQ(cloth_.getMomentOfInertia(), 8.0F);
    EXPECT_EQ(cloth_.getTransparency(), 1.0F);
    EXPECT_FALSE(cloth_.isDoubleSided());
    EXPECT_THAT(cloth_.getLockedVertexIndices(), ElementsAre(0));
    ASSERT_EQ(cloth_.getCollideBones().size(), 1U);
    const SClothBone &bone = cloth_.getCollideBones()[0];
    EXPECT_EQ(bone.name, "Bip01");
    EXPECT_EQ(bone.radius1, 0.5F);
    EXPECT_EQ(bone.radius2, 0.25F);
    EXPECT_EQ(bone.euler1.z, 3.0F);
    EXPECT_EQ(bone.euler2.x, 4.0F);
    EXPECT_EQ(bone.euler2.z, 5.0F);
    EXPECT_EQ(bone.euler2.y, 6.0F);
    EXPECT_EQ(bone.length, 7.0F);
    ASSERT_EQ(cloth_.getVertices().size(), 2U);
    EXPECT_EQ(cloth_.getVertices()[1].offset_pos.y, -1.0F);
    EXPECT_EQ(cloth_.getVertices()[1].offset_pos.z, 0.5F);
}

// Before version 3 the physics read are replaced by the defaults.
TEST_F(CClothLoadTest, AVersionTwoClothTakesTheDefaultPhysics) {
    givenFile("models\\old.cth",
              "//\n2\n//\nstrip.kfm\n//\n1,1,1,1,1,1\n//\n0\n//\n1\n//\n0\n//\n//\n0\n");
    cloth_.load("old.cth");
    EXPECT_EQ(cloth_.getWeight(), 0.125F);
    EXPECT_EQ(cloth_.getGravity(), 32.0F);
    EXPECT_EQ(cloth_.getDampen(), 0.9F);
    EXPECT_EQ(cloth_.getSpring(), 0.005F);
    EXPECT_EQ(cloth_.getBodyFriction(), 0.5F);
    EXPECT_EQ(cloth_.getFloorFriction(), 0.5F);
    EXPECT_EQ(cloth_.getWindArea(), 0.05F);
    EXPECT_EQ(cloth_.getMomentOfInertia(), 0.15F);
    EXPECT_TRUE(cloth_.isDoubleSided());
    EXPECT_TRUE(cloth_.getLockedVertexIndices().empty());
    EXPECT_TRUE(cloth_.getCollideBones().empty());
}

// Before version 2 a cloth holds no double-sided flag and isn't.
TEST_F(CClothLoadTest, AVersionOneClothIsntDoubleSided) {
    givenFile("models\\two.cth", "//\n3\n//\nstrip.kfm\n//\n1,1,1,1,1,1,1,1\n//\n0\n//\n1\n");
    cloth_.load("two.cth");
    givenFile("models\\old.cth",
              "//\n1\n//\nstrip.kfm\n//\n1,1,1,1,1,1\n//\n0\n//\n0\n//\n//\n0\n");
    cloth_.load("old.cth");
    EXPECT_EQ(cloth_.getWindArea(), 0.05F);
    EXPECT_FALSE(cloth_.isDoubleSided());
}

// A file that ends before its double-sided flag keeps the flag the cloth had.
TEST_F(CClothLoadTest, AShortFileKeepsWhatItCouldntRead) {
    givenFile("models\\two.cth", "//\n3\n//\nstrip.kfm\n//\n1,1,1,1,1,1,1,1\n//\n0\n//\n1\n");
    cloth_.load("two.cth");
    EXPECT_TRUE(cloth_.isDoubleSided());
    givenFile("models\\short.cth", "//\n3\n//\nstrip.kfm\n//\n1,1,1,1,1,1,1,1\n//\n0\n//\n");
    cloth_.load("short.cth");
    EXPECT_TRUE(cloth_.isDoubleSided());
}

TEST_F(CClothLoadTest, AClothThatWontOpenOrIsTooNewIsFatal) {
    EXPECT_THAT(
        [this] { cloth_.load("gone.cth"); },
        ThrowsMessage<common::CFatalError>(StrEq("CCloth::load - Unable to open file gone.cth")));
    givenFile("models\\new.cth", "//\n4\n");
    EXPECT_THAT([this] { cloth_.load("new.cth"); },
                ThrowsMessage<common::CFatalError>(StrEq(
                    "new.cth is version 4, this .EXE is old and can only handle up to version 3")));
}

// Read, each point is tied to all it shares an edge with, as every point is still at the origin.
TEST_F(CClothLoadTest, APointTiedToMoreThanFifteenIsFatal) {
    std::string vertices = "0,0,0\n";
    std::string polygons;
    for (int i = 1; i <= 16; ++i) {
        vertices += std::format("{},256,0\n", i * 256);
        polygons += std::format("0,3, 0,0,0, {},0,0, {},0,0\n", i, i + 1);
    }
    vertices += "0,512,0\n";
    givenFile("models\\fan.kfm", clothModelText(vertices, 18, polygons, 16));
    givenFile("models\\fan.cth", clothText("fan.kfm", kPhysics, "0\n// list\n", "0\n"));
    EXPECT_THAT([this] { cloth_.load("fan.cth"); },
                ThrowsMessage<common::CFatalError>(StrEq("Too many connecting verticies")));
}

} // namespace
} // namespace nocturne::core
