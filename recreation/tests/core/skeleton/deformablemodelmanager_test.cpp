#include "common/error/fatalerror.h"
#include "core/skeleton/deformablemodel.h"
#include "core/skeleton/deformablemodelmanager.h"
#include "core/skeleton/skeleton.h"
#include "engine/dosio/dosio.h"
#include "engine/drender/demonrenderer.h"
#include "tests/mocks/core/deformablemodelfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstddef>
#include <format>
#include <string>
#include <string_view>
#include <type_traits>

namespace nocturne::core {
namespace {

using ::testing::StrEq;
using ::testing::ThrowsMessage;

TEST(CDeformableModelManager, Constructors) {
    static_assert(std::is_constructible_v<CDeformableModelManager, const engine::CDosIo &,
                                          engine::CDemonRenderer &>);
}

TEST(CDeformableModelManager, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CDeformableModelManager::getDeformableModel),
                                 CDeformableModel &(CDeformableModelManager::*)(std::string_view)>);
    static_assert(std::is_same_v<decltype(&CDeformableModelManager::loadSkeleton),
                                 CSkeleton &(CDeformableModelManager::*)(std::string_view)>);
    static_assert(std::is_same_v<decltype(&CDeformableModelManager::freeAllModels),
                                 void (CDeformableModelManager::*)()>);
    static_assert(std::is_same_v<decltype(&CDeformableModelManager::freeAllSkeletons),
                                 void (CDeformableModelManager::*)()>);
    static_assert(std::is_same_v<decltype(&CDeformableModelManager::getMemoryStats),
                                 void (CDeformableModelManager::*)(char *)>);
}

using CDeformableModelManagerTest = CDeformableModelFixture;

// Loaded the first time, with its skeleton bound; after that the same model, by any case.
TEST_F(CDeformableModelManagerTest, AModelIsLoadedOnceAndBound) {
    givenModel("gabriela.dfm", {});
    CDeformableModel &model = models_.getDeformableModel("gabriela.dfm");
    EXPECT_EQ(model.getModelName(), "TEST.SKL");
    EXPECT_EQ(model.getSkeletonPtr()->getBoneCount(), 6);
    EXPECT_CALL(file_system_, getFileInfo(::testing::EndsWith("GABRIELA.DFM"))).Times(0);
    EXPECT_EQ(&models_.getDeformableModel("GABRIELA.DFM"), &model);
    EXPECT_EQ(models_.getModelCount(), 1U);
    EXPECT_EQ(models_.getSkeletonCount(), 1U);
}

TEST_F(CDeformableModelManagerTest, ModelsShareTheirSkeleton) {
    givenModel("a.dfm", {});
    givenModel("b.dfm", {});
    CDeformableModel &a = models_.getDeformableModel("a.dfm");
    CDeformableModel &b = models_.getDeformableModel("b.dfm");
    EXPECT_NE(&a, &b);
    EXPECT_EQ(a.getSkeletonPtr(), b.getSkeletonPtr());
    EXPECT_EQ(models_.getSkeletonCount(), 1U);
}

TEST_F(CDeformableModelManagerTest, ASixtyFifthModelIsFatal) {
    for (std::size_t i = 0; i <= CDeformableModelManager::kMaxModels; ++i) {
        givenModel(std::format("m{}.dfm", i), {});
    }
    for (std::size_t i = 0; i < CDeformableModelManager::kMaxModels; ++i) {
        static_cast<void>(models_.getDeformableModel(std::format("m{}.dfm", i)));
    }
    EXPECT_THAT([this] { static_cast<void>(models_.getDeformableModel("m64.dfm")); },
                ThrowsMessage<common::CFatalError>(StrEq(
                    "Can't load m64.dfm because deformable model manager is full.  (Size is 64)")));
}

TEST_F(CDeformableModelManagerTest, AFortyFirstSkeletonIsFatal) {
    for (std::size_t i = 0; i <= CDeformableModelManager::kMaxSkeletons; ++i) {
        givenFile(std::format("data\\s{}.skl", i), chainSkeletonFile());
    }
    for (std::size_t i = 0; i < CDeformableModelManager::kMaxSkeletons; ++i) {
        static_cast<void>(models_.loadSkeleton(std::format("s{}.skl", i)));
    }
    EXPECT_THAT([this] { static_cast<void>(models_.loadSkeleton("s40.skl")); },
                ThrowsMessage<common::CFatalError>(
                    StrEq("Can't load s40.skl because skeleton manager is full.  (Size is 40)")));
}

// What was held of a freed model is emptied and loaded into again, so it is the same object.
TEST_F(CDeformableModelManagerTest, FreeingTheModelsForgetsThemForReuse) {
    givenModel("a.dfm", {});
    givenModel("b.dfm", {});
    const CDeformableModel &a = models_.getDeformableModel("a.dfm");
    models_.freeAllModels();
    EXPECT_EQ(models_.getModelCount(), 0U);
    EXPECT_TRUE(a.getLods().empty());
    EXPECT_EQ(&models_.getDeformableModel("b.dfm"), &a);
    EXPECT_EQ(a.getModelFilename(), "b.dfm");
    EXPECT_EQ(models_.getSkeletonCount(), 1U);
}

TEST_F(CDeformableModelManagerTest, FreeingTheSkeletonsFreesTheModelsToo) {
    givenModel("a.dfm", {});
    CDeformableModel &a = models_.getDeformableModel("a.dfm");
    const CSkeleton &skeleton = *a.getSkeletonPtr();
    models_.freeAllSkeletons();
    EXPECT_EQ(models_.getModelCount(), 0U);
    EXPECT_EQ(models_.getSkeletonCount(), 0U);
    EXPECT_EQ(skeleton.getBoneCount(), 0);
    EXPECT_TRUE(a.getLods().empty());
    EXPECT_EQ(&models_.loadSkeleton("TEST.SKL"), &skeleton);
    EXPECT_EQ(skeleton.getBoneCount(), 6);
}

} // namespace
} // namespace nocturne::core
