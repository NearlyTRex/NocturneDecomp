#include "common/error/fatalerror.h"
#include "core/box/boundingbox3d.h"
#include "core/skeleton/deformablemodel.h"
#include "tests/mocks/core/deformablemodelfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <bit>
#include <cstdint>
#include <string>

namespace nocturne::core {
namespace {

using ::testing::ElementsAre;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

// The default model bound to TEST.SKL's chain, unless the test gives another skeleton.
class CDeformableModelBonesTest : public CDeformableModelFixture {
protected:
    void bind(const SDfmFile &file = {}) {
        givenModel("m.dfm", file);
        model_.load("m.dfm");
        model_.captureTextures();
    }

    SDeformableModelOwners owners_{.dosio = dosio_, .models = models_, .renderer = demon_renderer_};
    CDeformableModel model_{owners_};
};

// Only the first level of detail counts: the vertex that follows bone 5 is in the second.
TEST_F(CDeformableModelBonesTest, EachBonesBoxTakesInTheVerticesThatFollowIt) {
    bind();
    const CBoundingBox3D &one = model_.getBoneBounds()[1];
    EXPECT_TRUE(one.min.equals({.x = 1.0F, .y = 2.0F, .z = 3.0F}));
    EXPECT_TRUE(one.max.equals({.x = 1.0F, .y = 2.0F, .z = 3.0F}));
    EXPECT_TRUE(model_.getBoneBounds()[2].min.equals({.x = -1.0F, .y = -2.0F, .z = -3.0F}));
    EXPECT_EQ(std::bit_cast<std::uint32_t>(model_.getBoneBounds()[5].min.x), 0x7cf0bdc2U);
}

// The root ends a chain, as do bones 3 and 4: 3's two nearest ancestors don't, and 4 has no
// followed child. Bones 1 and 2 each have the root within two, and 5 has no vertices.
TEST_F(CDeformableModelBonesTest, AFollowedBoneEndsAChainUnlessAnAncestorNearByDoes) {
    bind();
    EXPECT_THAT(model_.getBoneFlags().first(6), ElementsAre(2, 1, 1, 2, 2, 0));
}

// With no vertex on bone 4, bone 3's only child is no help, so 3 ends the chain.
TEST_F(CDeformableModelBonesTest, ABoneWhoseChildrenNoVertexFollowsEndsAChain) {
    bind({.vertices = "1\n0,1,0,0,0\n2\n1,0.75,1,2,3\n2,0.25,-1,-2,-3\n1\n3,1,4,5,6\n"
                      "1\n5,1,9,9,9\n"});
    EXPECT_THAT(model_.getBoneFlags().first(6), ElementsAre(2, 1, 1, 2, 0, 0));
}

// The root has the children 1 and 5, 5 the farther; bone 2's origin is the bone's own, so 1 has
// no child farther than nothing.
TEST_F(CDeformableModelBonesTest, EachBonesFarthestChildIsTheOneWhoseOriginIsFarthest) {
    bind();
    EXPECT_THAT(model_.getFarthestChildBones().first(6), ElementsAre(5, -1, 3, 4, -1, -1));
}

// Bone 1's parent is the root, so there is no second ancestor to look at when the root ends
// nothing, as an unfollowed root doesn't.
TEST_F(CDeformableModelBonesTest, LookingPastTheRootIsFatal) {
    givenModel("m.dfm", {.vertices = "1\n1,1,0,0,0\n2\n2,1,0,0,0\n3,1,0,0,0\n1\n4,1,0,0,0\n"
                                     "1\n5,1,0,0,0\n"});
    model_.load("m.dfm");
    EXPECT_THAT([this] { model_.captureTextures(); },
                ThrowsMessage<common::CFatalError>(StrEq("Bug!")));
}

// With no levels of detail there are no vertices, so no bone is followed.
TEST_F(CDeformableModelBonesTest, AModelWithoutLevelsOfDetailHasNoFollowedBones) {
    bind({.counts = "0,1,1,6,1\n",
          .lods = "",
          .parts = "\"All\", 0, 0\n",
          .vertices = "",
          .tris = "",
          .caps = "",
          .textures = "SKIN.RAW\n"});
    EXPECT_THAT(model_.getBoneFlags().first(6), ElementsAre(0, 0, 0, 0, 0, 0));
}

} // namespace
} // namespace nocturne::core
