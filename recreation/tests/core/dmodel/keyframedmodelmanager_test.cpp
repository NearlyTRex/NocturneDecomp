#include "common/error/fatalerror.h"
#include "core/dmodel/keyframedmodel.h"
#include "core/dmodel/keyframedmodelinstance.h"
#include "core/dmodel/keyframedmodelmanager.h"
#include "tests/mocks/core/deformablemodelfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstddef>
#include <format>

namespace nocturne::core {
namespace {

using ::testing::StrEq;
using ::testing::ThrowsMessage;

// A triangle over one frame with the one texture SKIN.RAW.
constexpr const char *kTriangle = "/\n5\n;\n3,1,1,0,1\n;\n1\n;\n0,0,0\n256,0,0\n0,256,0\n"
                                  ";\n0,3, 0,0,0, 1,0,0, 2,0,0\n;\nSKIN.RAW\n";

// The deformable model fixture's renderer and textures, with the keyframed manager.
class CKeyFramedModelManagerTest : public CDeformableModelFixture {
protected:
    CKeyFramedModelManagerTest() {
        givenFile("models\\door.kfm", kTriangle);
    }

    CKeyFramedModelManager keyframed_models_{dosio_, demon_renderer_};
};

TEST_F(CKeyFramedModelManagerTest, AModelIsLoadedOnceByItsNameInAnyCase) {
    const CKeyFramedModel &model = keyframed_models_.loadModel("door.kfm");
    EXPECT_EQ(model.getModelFilename(), "door.kfm");
    EXPECT_EQ(model.getVertexCount(), 3);
    EXPECT_EQ(&keyframed_models_.loadModel("DOOR.KFM"), &model);
    EXPECT_EQ(keyframed_models_.getModelCount(), 1U);
}

TEST_F(CKeyFramedModelManagerTest, ItsTexturesAreCaptured) {
    EXPECT_CALL(file_system_, getFileInfo(::testing::_)).Times(::testing::AnyNumber());
    EXPECT_CALL(file_system_, getFileInfo(::testing::EndsWith("SKIN.RAW")))
        .Times(::testing::AtLeast(1));
    static_cast<void>(keyframed_models_.loadModel("door.kfm"));
}

TEST_F(CKeyFramedModelManagerTest, FreeingForgetsTheModelsAndReusesTheirPlaces) {
    const CKeyFramedModel &model = keyframed_models_.loadModel("door.kfm");
    keyframed_models_.freeAllModels();
    EXPECT_EQ(keyframed_models_.getModelCount(), 0U);
    EXPECT_EQ(model.getVertexCount(), 0);
    EXPECT_EQ(&keyframed_models_.loadModel("door.kfm"), &model);
}

TEST_F(CKeyFramedModelManagerTest, MoreModelsThanItHoldsIsFatal) {
    for (std::size_t i = 0; i <= CKeyFramedModelManager::kMaxModels; ++i) {
        givenFile(std::format("models\\m{}.kfm", i), kTriangle);
    }
    for (std::size_t i = 0; i < CKeyFramedModelManager::kMaxModels; ++i) {
        static_cast<void>(keyframed_models_.loadModel(std::format("m{}.kfm", i)));
    }
    EXPECT_THAT([this] { static_cast<void>(keyframed_models_.loadModel("m256.kfm")); },
                ThrowsMessage<common::CFatalError>(StrEq(
                    "Can't load m256.kfm because keyFrame model manager is full.  (Size is 256)")));
}

TEST_F(CKeyFramedModelManagerTest, AnInstanceFindsItsModelThroughTheManager) {
    CKeyFramedModelInstance instance(keyframed_models_);
    instance.setModelName("door.kfm");
    EXPECT_THAT([&] { static_cast<void>(instance.getModelPtr()); },
                ThrowsMessage<common::CFatalError>(
                    StrEq("Tried to do something with model door.kfm, but modelPtr not set.  "
                          "(CKeyFramedModelInstance::preCache not called.")));
    const CKeyFramedModel &model = instance.preCache();
    EXPECT_EQ(&instance.getModelPtr(), &model);
    instance.setModelName("door.kfm");
    EXPECT_THROW(static_cast<void>(instance.getModelPtr()), common::CFatalError);
}

} // namespace
} // namespace nocturne::core
