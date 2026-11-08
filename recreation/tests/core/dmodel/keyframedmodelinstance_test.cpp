#include "common/math/vector3i.h"
#include "core/dmodel/keyframedmodel.h"
#include "core/dmodel/keyframedmodelinstance.h"
#include "core/set/demonset.h"
#include "core/skeleton/partvisibility.h"
#include "tests/mocks/core/mockkeyframedmodels.h"
#include "tests/mocks/core/setparts.h"
#include "tests/mocks/engine/demonrendererfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstddef>
#include <string_view>
#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CKeyFramedModelInstance, IsConcrete) {
    static_assert(!std::is_abstract_v<CKeyFramedModelInstance>);
}

TEST(CKeyFramedModelInstance, Constructors) {
    static_assert(std::is_constructible_v<CKeyFramedModelInstance, IKeyFramedModels &>);
}

TEST(CKeyFramedModelInstance, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CKeyFramedModelInstance::prepareForRendering),
                                 void (CKeyFramedModelInstance::*)(
                                     float, int, engine::CDemonRenderer &, CDemonSet &)>);
    static_assert(std::is_same_v<decltype(&CKeyFramedModelInstance::preCache),
                                 CKeyFramedModel &(CKeyFramedModelInstance::*)()>);
    static_assert(std::is_same_v<decltype(&CKeyFramedModelInstance::getModelPtr),
                                 CKeyFramedModel &(CKeyFramedModelInstance::*)()>);
    static_assert(std::is_same_v<decltype(&CKeyFramedModelInstance::setModelName),
                                 void (CKeyFramedModelInstance::*)(std::string_view)>);
}

TEST(CKeyFramedModelInstance, AnInstanceNamesNoModelAndShowsEveryPart) {
    ::testing::NiceMock<MockKeyFramedModels> models;
    const CKeyFramedModelInstance instance{models};
    EXPECT_EQ(instance.getModelName(), "");
    for (std::size_t part = 0; part < CKeyFramedModelInstance::kMaxParts; ++part) {
        EXPECT_EQ(instance.getPartVisibility(part), EPartVisibility::kShown);
    }
}

TEST(CKeyFramedModelInstance, NamingTheModelKeepsItsName) {
    ::testing::NiceMock<MockKeyFramedModels> models;
    CKeyFramedModelInstance instance{models};
    instance.setModelName("gat.kfm");
    instance.setModelName("bullet.kfm");
    EXPECT_EQ(instance.getModelName(), "bullet.kfm");
}

// A model of one triangle in two frames, two thousand units ahead and then four thousand, found
// through a mock and drawn through the hardware renderer.
class CKeyFramedModelInstanceRenderTest : public engine::CDemonRendererFixture {
protected:
    CKeyFramedModelInstanceRenderTest() {
        constexpr int kOne = 0x10000;
        two_d_.setupViewportAndClipping(0, 0, 639, 479);
        matrix_.setTransformMatrix(
            {.m = {common::CVector3i{.x = kOne}, common::CVector3i{.y = kOne},
                   common::CVector3i{.z = kOne}}});
        givenFile("models\\two.kfm", "/\n5\n;\n3,1,0,1,2\n;\n0\n;\n"
                                     "0,0,2048\n512,0,2048\n512,512,2048\n"
                                     "0,0,4096\n512,0,4096\n512,512,4096\n"
                                     ";\n0,3, 0,0,0, 2,0,0, 1,0,0\n;\n;\n3,1\n");
        model_.load("two.kfm");
        ON_CALL(models_, loadModel(::testing::_)).WillByDefault(::testing::ReturnRef(model_));
        instance_.setModelName("two.kfm");
        static_cast<void>(instance_.preCache());
        startRenderer();
    }

    [[nodiscard]] int drawnDepth(float animation_frame) {
        instance_.prepareForRendering(animation_frame, -1, demon_renderer_, set_);
        return vertex_buffer_[0].projected_vertex.transformed_z;
    }

    CSetParts set_parts_{dosio_};
    CDemonSet set_{set_parts_.owners(demon_renderer_, three_d_, matrix_, special_, two_d_, screen_,
                                     raw_input_)};
    CKeyFramedModel model_{dosio_};
    ::testing::NiceMock<MockKeyFramedModels> models_;
    CKeyFramedModelInstance instance_{models_};
};

// The nearest frame is drawn, a half rounding to the even one.
TEST_F(CKeyFramedModelInstanceRenderTest, TheNearestFrameIsDrawn) {
    EXPECT_EQ(drawnDepth(0.5F), 2048);
    EXPECT_EQ(drawnDepth(0.6F), 4096);
    EXPECT_EQ(drawnDepth(1.5F), 4096);
}

} // namespace
} // namespace nocturne::core
