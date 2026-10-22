#include "core/set/demonset.h"
#include "core/setdir/vdbox.h"
#include "tests/mocks/core/setfilefixture.h"

#include <gtest/gtest.h>

#include <string>
#include <vector>

namespace nocturne::core {
namespace {

using CDemonSetVdirTest = CSetFileFixture;

// An unturned box at x with extents of 1.2, which touches one 2 along and not one 4 along.
std::string boxAt(int x) {
    return std::to_string(x) + ",0,0\n1.2,1.2,1.2\n0,0,0\n";
}

std::vector<int> parents(const CDemonSet &set) {
    std::vector<int> indices;
    for (const SVDBox &box : set.getVdirBoxes()) {
        indices.push_back(box.parent_index);
    }
    return indices;
}

TEST_F(CDemonSetVdirTest, EachBoxIsReadPlacedAndTurned) {
    load({.vdir_boxes = "1\n1,2,3\n4,5,6\n0,0,0\n"});
    ASSERT_EQ(set_.getVdirBoxes().size(), 1U);
    EXPECT_TRUE(set_.getVdirBoxes()[0].position.equals({.x = 1, .y = 2, .z = 3}));
    EXPECT_TRUE(set_.getVdirBoxes()[0].extents.equals({.x = 4, .y = 5, .z = 6}));
    EXPECT_EQ(set_.getVdirBoxes()[0].parent_index, -1);
}

TEST_F(CDemonSetVdirTest, BoxesThatTouchShareAGroupAndOneApartIsItsOwn) {
    load({.vdir_boxes = "3\n" + boxAt(0) + boxAt(2) + boxAt(10)});
    EXPECT_EQ(parents(set_), (std::vector<int>{-1, 0, -1}));
}

// Box 3 joins box 0's group, then box 0's root joins box 1's; finding box 3's root then points
// it at box 1 directly.
TEST_F(CDemonSetVdirTest, FindingARootPointsEveryBoxOnTheWayStraightAtIt) {
    load({.vdir_boxes = "4\n" + boxAt(0) + boxAt(4) + boxAt(6) + boxAt(2)});
    EXPECT_EQ(parents(set_), (std::vector<int>{1, -1, 1, 1}));
}

TEST_F(CDemonSetVdirTest, ABoxReachingIntoTheOtherFromEitherSideJoinsIt) {
    load({.vdir_boxes = "2\n0,0,0\n10,10,10\n0,0,0\n0,0,0\n1,1,1\n0,0,0\n"});
    EXPECT_EQ(parents(set_), (std::vector<int>{-1, 0}));
}

TEST_F(CDemonSetVdirTest, AGroupingIsBuiltAfreshEachLoad) {
    load({.vdir_boxes = "2\n" + boxAt(0) + boxAt(2)});
    load({.vdir_boxes = "2\n" + boxAt(0) + boxAt(10)});
    EXPECT_EQ(parents(set_), (std::vector<int>{-1, -1}));
}

TEST_F(CDemonSetVdirTest, OldDirectorsAreSkippedLineByLine) {
    load({.version = 9,
          .vdir_boxes = "1\n7,0,0\n1,1,1\n0,0,0\n",
          .old_directors = "2\n\"first\", 1\nline\n\"second\", 0\n"});
    ASSERT_EQ(set_.getVdirBoxes().size(), 1U);
    EXPECT_EQ(set_.getVdirBoxes()[0].position.x, 7.0F);
}

} // namespace
} // namespace nocturne::core
