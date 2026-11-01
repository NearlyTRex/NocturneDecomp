#include "common/error/fatalerror.h"
#include "common/math/vector3f.h"
#include "core/barrier/barrier.h"
#include "core/box/boundingbox3d.h"
#include "core/dcube/demoncube.h"
#include "core/dmodel/keyframedmodel.h"
#include "core/door/door.h"
#include "core/dtrace/demonraytrace.h"
#include "core/location.h"
#include "tests/mocks/core/clothfixture.h"
#include "tests/mocks/core/geofile.h"
#include "tests/mocks/core/setfilefixture.h"
#include "tests/mocks/core/testfieldsarchive.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstdint>
#include <format>
#include <string>
#include <string_view>

namespace nocturne::core {
namespace {

using ::testing::StrEq;
using ::testing::ThrowsMessage;

// A quarter turn, as the door's param is multiplied by.
constexpr float kQuarterTurn = 1.57079632675F;

// A set over a grid of two empty cubes along x, whose voxels are (1, 2, 3), and the door models
// wide, from x -2 to 1, and narrow, from x -1 to 2, both 7 high and half a unit deep.
class CDemonSetCollisionTest : public CSetFileFixture {
protected:
    CDemonSetCollisionTest() {
        givenFile("data\\set.geo", geoFile(4, {.x = 2, .y = 1, .z = 1}, {{}, {}}));
        EXPECT_TRUE(set_parts_.raytrace.loadAndSyncWithGeoFile("set.geo"));
        givenFile("models\\wide.kfm", clothModelText("-512,0,-64\n256,1792,64\n", 2, "", 0));
        givenFile("models\\narrow.kfm", clothModelText("-256,0,-64\n512,1792,64\n", 2, "", 0));
        door_model_.load("wide.kfm");
    }

    // The first row of voxels of the first cube; 0 for a cube with none yet.
    [[nodiscard]] std::uint8_t firstRow() const {
        const CDemonCube &cube = *set_parts_.raytrace.getCubeAt(0, 0, 0);
        return cube.getVoxelBuffer1() ? cube.getVoxelBuffer1()->voxels[0][0] : 0;
    }

    // A door of the type, side, state and swing, closed at the position and turn, as far open as
    // the param, set up.
    void givenDoor(int type, int side, int state, int swing, std::string_view position,
                   std::string_view orientation, float param) {
        CTestFieldsArchive archive(
            door_, CDoor::kType, 1,
            std::format("\"door.kfm\"\n{}\n{}\n{}\n{}\n\"o\"\n\"c\"\n\"\"\n\"\"\n0\n{}\n{}\n{}\n1\n"
                        "1\n1\n",
                        type, side, state, swing, position, orientation, param));
        door_.archive(archive.get());
        door_.setup();
    }

    CKeyFramedModel &door_model_ = set_parts_.classes.getKeyFramedModel();
    CDoor door_{set_parts_.classes.get()};
};

TEST_F(CDemonSetCollisionTest, ABarriersBoxIsItsSizeAboutItsFootWithATenthToSpare) {
    CBarrier barrier;
    CTestFieldsArchive archive(barrier, CBarrier::kType, 1, "2,4,6\n");
    barrier.archive(archive.get());
    CBoundingBox3D box;
    EXPECT_EQ(barrier.getBoundingBox(&box), &box);
    EXPECT_TRUE(box.min.equals({.x = -1.0F, .y = -0.1F, .z = -3.0F}));
    EXPECT_TRUE(box.max.equals({.x = 1.0F, .y = 4.1F, .z = 3.0F}));
}

// A unit barrier at x 2.5 fills voxel 2.
TEST_F(CDemonSetCollisionTest, ABarrierOnThePathGridKeepsPathsOut) {
    CBarrier barrier;
    CTestFieldsArchive archive(barrier, CBarrier::kType, 2, "1,1,1\n\"\"\n1\n");
    barrier.archive(archive.get());
    barrier.setLocation({.position = {.x = 2.5F, .y = 1.0F, .z = 1.5F}});
    barrier.updateCollisionData(set_);
    EXPECT_EQ(firstRow(), 4);
}

TEST_F(CDemonSetCollisionTest, ABarrierOffThePathGridLeavesThemBe) {
    CBarrier barrier;
    CTestFieldsArchive archive(barrier, CBarrier::kType, 2, "1,1,1\n\"\"\n0\n");
    barrier.archive(archive.get());
    barrier.setLocation({.position = {.x = 2.5F, .y = 1.0F, .z = 1.5F}});
    barrier.updateCollisionData(set_);
    EXPECT_EQ(firstRow(), 0);
}

TEST_F(CDemonSetCollisionTest, ADoorsBoxIsItsModelsFirstFrames) {
    givenDoor(0, 1, 0, 0, "0,0,0", "0,0,0", 0.0F);
    CBoundingBox3D box;
    EXPECT_EQ(door_.getBoundingBox(&box), &box);
    EXPECT_TRUE(box.min.equals({.x = -2.0F, .y = 0.0F, .z = -0.25F}));
    EXPECT_TRUE(box.max.equals({.x = 1.0F, .y = 7.0F, .z = 0.25F}));
}

// Shut where it closes, it fills voxels 2 to 4 of the rows it stands in.
TEST_F(CDemonSetCollisionTest, AClosedDoorIsPutWhereItClosesAndKeepsPathsOut) {
    givenDoor(0, 1, 0, 0, "4,0,1.5", "0,0,0", 0.0F);
    door_.updateCollisionData(set_);
    EXPECT_TRUE(door_.getLocation().position.equals({.x = 4.0F, .y = 0.0F, .z = 1.5F}));
    EXPECT_EQ(firstRow(), 0x1c);
}

TEST_F(CDemonSetCollisionTest, MostActorsKeepNoPathsOut) {
    givenDoor(0, 1, 0, 0, "4,0,1.5", "0,0,0", 0.0F);
    door_.CDemonActor::updateCollisionData(set_);
    EXPECT_TRUE(door_.getLocation().position.equals({}));
    EXPECT_EQ(firstRow(), 0);
}

TEST_F(CDemonSetCollisionTest, AnOpenDoorIsLeftWhereItIs) {
    givenDoor(0, 1, 2, 0, "4,0,1.5", "0,0,0", 1.0F);
    door_.updateCollisionData(set_);
    EXPECT_TRUE(door_.getLocation().position.equals({}));
    EXPECT_EQ(firstRow(), 0);
}

// It is reached for 3.5 up, 0.3 in from its farther edge: the left of the wide door, the right
// of the narrow.
TEST_F(CDemonSetCollisionTest, ASwingingDoorIsReachedForNearItsFartherEdge) {
    givenDoor(0, 1, 0, 0, "2,0,1", "0,0,0", 0.0F);
    door_.updateCollisionData(set_);
    EXPECT_NEAR(door_.getOpenPosition().x, 0.3F, 1e-6F);
    EXPECT_EQ(door_.getOpenPosition().y, 3.5F);
    EXPECT_EQ(door_.getOpenPosition().z, 1.0F);
    door_model_.load("narrow.kfm");
    door_.updateCollisionData(set_);
    EXPECT_NEAR(door_.getOpenPosition().x, 3.7F, 1e-6F);
}

TEST_F(CDemonSetCollisionTest, ASwingingDoorTurnsFromWhereItClosesByAQuarterTurnAParam) {
    givenDoor(0, 1, 0, 0, "2,0,1", "0.25,0.5,0.75", 0.5F);
    door_.updateCollisionData(set_);
    EXPECT_FLOAT_EQ(door_.getOrientation().y, 0.5F + (0.5F * kQuarterTurn));
    EXPECT_EQ(door_.getOrientation().x, 0.0F);
    EXPECT_EQ(door_.getOrientation().z, 0.0F);
    givenDoor(0, 1, 0, 1, "2,0,1", "0,0.5,0", 0.5F);
    door_.updateCollisionData(set_);
    EXPECT_FLOAT_EQ(door_.getOrientation().y, 0.5F - (0.5F * kQuarterTurn));
}

TEST_F(CDemonSetCollisionTest, AVerticalDoorRisesByItsParam) {
    givenDoor(1, 1, 0, 0, "2,1,1", "0,0,0", 2.0F);
    door_.setLocation({.position = {.x = 5.0F, .y = 0.0F, .z = 6.0F}});
    door_.updateCollisionData(set_);
    EXPECT_TRUE(door_.getLocation().position.equals({.x = 5.0F, .y = 3.0F, .z = 6.0F}));
    EXPECT_TRUE(door_.getOpenPosition().equals({.x = 5.0F, .y = 6.5F, .z = 6.0F}));
}

// Hung from its right it slides along its x, from its left the other way.
TEST_F(CDemonSetCollisionTest, ASlidingDoorSlidesByItsParam) {
    givenDoor(2, 1, 0, 0, "2,1,1", "0,0,0", 2.0F);
    door_.updateCollisionData(set_);
    EXPECT_TRUE(door_.getLocation().position.equals({.x = 4.0F, .y = 1.0F, .z = 1.0F}));
    EXPECT_TRUE(door_.getOpenPosition().equals({.x = 4.0F, .y = 4.5F, .z = 1.0F}));
    givenDoor(2, 0, 0, 0, "2,1,1", "0,0,0", 2.0F);
    door_.updateCollisionData(set_);
    EXPECT_EQ(door_.getLocation().position.x, 0.0F);
}

// It tips over by a quarter turn a param, and is reached for at its box's middle.
TEST_F(CDemonSetCollisionTest, ATiltingDoorTipsByItsParam) {
    givenDoor(3, 1, 0, 0, "2,1,1", "0,0,0", 0.0F);
    door_.setLocation({.position = {.x = 5.0F, .y = 0.0F, .z = 6.0F}});
    door_.updateCollisionData(set_);
    EXPECT_TRUE(door_.getOpenPosition().equals({.x = 4.5F, .y = 3.5F, .z = 6.0F}));
    givenDoor(3, 1, 0, 0, "2,1,1", "0,0,0", 0.5F);
    door_.updateCollisionData(set_);
    EXPECT_EQ(door_.getOrientation().x, 0.5F * kQuarterTurn);
}

TEST_F(CDemonSetCollisionTest, ADoorOfAnUnknownTypeIsFatal) {
    givenDoor(7, 1, 0, 0, "2,1,1", "0,0,0", 0.0F);
    EXPECT_THAT([this] { door_.updateCollisionData(set_); },
                ThrowsMessage<common::CFatalError>(StrEq("CDoor::reposition - Unknown type")));
}

// The nudge is up to the range along x and z, once.
TEST_F(CDemonSetCollisionTest, ASwingRangeNudgesTheDoorOnce) {
    givenDoor(0, 1, 0, 0, "4,0,1.5", "0,0,0", 0.0F);
    door_.setSwingRange(1.0F);
    door_.updateCollisionData(set_);
    const common::CVector3f &position = door_.getLocation().position;
    EXPECT_NEAR(position.x, 4.0F, 1.0F);
    EXPECT_EQ(position.y, 0.0F);
    EXPECT_NEAR(position.z, 1.5F, 1.0F);
    EXPECT_FALSE(position.equals({.x = 4.0F, .y = 0.0F, .z = 1.5F}));
    EXPECT_EQ(door_.getSwingRange(), 0.0F);
}

} // namespace
} // namespace nocturne::core
