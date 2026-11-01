#include "common/error/fatalerror.h"
#include "common/math/vector3f.h"
#include "core/cloth/cloth.h"
#include "core/dmodel/keyframedmodel.h"
#include "core/skeleton/deformablemodelinstance.h"
#include "tests/mocks/core/deformablemodelfixture.h"
#include "tests/mocks/core/mockkeyframedmodels.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <format>
#include <string>
#include <string_view>

namespace nocturne::core {
namespace {

using ::testing::StrEq;
using ::testing::ThrowsMessage;

// The default model but for bone five, half a unit along z, so the root's farthest child is bone
// one, a unit up, and bone two's is bone three, 2 up; and a cloth of points around them, the
// first pinned.
class CClothModelTest : public CDeformableModelFixture {
protected:
    CClothModelTest() {
        ON_CALL(keyframed_models_, loadOwnedModel)
            .WillByDefault([](CKeyFramedModel &model, std::string_view name) { model.load(name); });
        givenFile("data\\TEST.SKL",
                  "// v\n3\n// counts\n6,1\n// bones\n\"root\",-1\n\"one\",0\n\"two\",1\n"
                  "\"three\",2\n\"four\",3\n\"five\",0\n// angles\n1,0,0,0\n1,0,0,0\n1,0,0,0\n"
                  "1,0,0,0\n1,0,0,0\n1,0,0,0\n// roots\n0,0,0\n// canceled\n0,0,0\n"
                  "// motion list version\n2\n// states\n1\nS\n// motions\n1\n// m\n"
                  "\"stand\",30,0,0,1\n// exit\n1,0,0\n// cmd\n1,0,0\n// back\n0,0\n"
                  "// transitions\n0\n// signals\n0\n// markers\n0\n// origins\n0,0,0\n0,0,0\n"
                  "0,0,0\n0,0,0\n0,0,0\n0,0,0\n");
        givenModel("test.dfm", {.origins = "0,0,0\n0,1,0\n0,0,0\n0,2,0\n0,1,1\n0,0,0.5\n"});
        std::string vertices;
        for (const int y : {64, 512, -256}) {
            for (const int z : {32, 128, 512, -256}) {
                vertices += std::format("0,{},{}\n", y, z);
            }
        }
        givenFile("models\\around.kfm",
                  std::format("/\n5\n;\n12,1,0,0,1\n;\n0\n;\n{};\n0,3, 0,0,0, 1,0,0, 4,0,0\n;\n",
                              vertices));
        model_.init("test.dfm");
        model_.preCache();
    }

    void givenCloth(std::string_view bones) {
        givenFile("models\\around.cth",
                  std::format("//\n3\n//\naround.kfm\n//\n0.1,32,0.9,0.1,0.5,0.5,0.1,0.1\n//\n1\n"
                              "//\n0\n//\n1\n//\n0\n//\n{}",
                              bones));
        cloth_.load("around.cth");
    }

    ::testing::NiceMock<MockKeyFramedModels> keyframed_models_;
    CDeformableModelInstance model_{models_};
    CCloth cloth_{dosio_, keyframed_models_};
};

// The pin takes the bones of the model's nearest vertex, its first, which follows the root alone.
TEST_F(CClothModelTest, ThePinsFollowTheNearestVertexsBonesAndTheBonesRunToTheirFarthestChild) {
    givenCloth("2\n\"root\",100,100, 0,0,0, 0,0,0, 0\n\"two\",0.001,0.001, 0,0,0, 0,0,0, 7\n");
    cloth_.setup({}, {}, &model_);
    const SClothVertex &pin = cloth_.getVertices()[0];
    EXPECT_EQ(pin.position.x, 0.5F);
    EXPECT_EQ(pin.position.y, 0.5F);
    EXPECT_EQ(pin.bone_influence_count, 1);
    EXPECT_EQ(pin.bone_index[0], 0);
    EXPECT_EQ(pin.bone_weights[0], 1.0F);
    EXPECT_EQ(pin.bone_positions[0].z, 0.125F);
    const SClothBone &root = cloth_.getCollideBones()[0];
    EXPECT_EQ(root.parent_bone_index, 0);
    EXPECT_EQ(root.child_distance, 1.0F);
    EXPECT_EQ(root.inv_radius1, 0.01F);
    EXPECT_EQ(cloth_.getCollideBones()[1].child_distance, 7.0F);
}

TEST_F(CClothModelTest, ABoneWithNoChildIsFatal) {
    givenCloth("1\n\"four\",1,1, 0,0,0, 0,0,0, 0\n");
    EXPECT_THAT([this] { cloth_.setup({}, {}, &model_); },
                ThrowsMessage<common::CFatalError>(StrEq("Can't orient bone with no children!")));
}

// The wide root bone pushes out the points along it; the thin one pushes none.
TEST_F(CClothModelTest, ABoneThePointsHaveGoneIntoPushesThemOut) {
    givenCloth("2\n\"root\",100,100, 0,0,0, 0,0,0, 0\n\"two\",0.001,0.001, 0,0,0, 0,0,0, 7\n");
    cloth_.setup({}, {}, &model_);
    cloth_.process({}, {}, 0.05F, 9999.0F, &model_, {});
    int pushed = 0;
    for (const SClothVertex &point : cloth_.getVertices()) {
        pushed += point.body_collision ? 1 : 0;
    }
    EXPECT_GT(pushed, 0);
    EXPECT_LT(pushed, 11);
    EXPECT_EQ(cloth_.getVertices()[0].position.x, 0.5F);
}

// A model of no vertices, at no level or at one, has none for the pin to follow.
TEST_F(CClothModelTest, APinOnAModelWithNoVerticesFollowsNoBones) {
    for (const char *counts : {"0,1,1,6,0\n", "1,1,1,6,0\n"}) {
        givenModel("empty.dfm", {.counts = counts,
                                 .lods = counts[0] == '0' ? "" : "0,0,0,100,0\n",
                                 .parts = "",
                                 .vertices = "",
                                 .tris = "",
                                 .caps = "",
                                 .textures = "SKIN.RAW\n",
                                 .bone_parts = "0\n0\n0\n0\n0\n0\n"});
        CDeformableModelInstance empty{models_};
        empty.init("empty.dfm");
        empty.preCache();
        givenCloth("0\n");
        cloth_.setup({}, {}, &empty);
        EXPECT_EQ(cloth_.getVertices()[0].bone_influence_count, 0);
        models_.freeAllModels();
    }
}

} // namespace
} // namespace nocturne::core
