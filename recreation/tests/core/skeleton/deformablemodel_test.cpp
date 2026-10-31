#include "common/error/fatalerror.h"
#include "core/skeleton/deformablemodel.h"
#include "core/skeleton/skeleton.h"
#include "tests/mocks/core/deformablemodelfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstddef>
#include <cstdint>
#include <span>
#include <string_view>
#include <type_traits>

namespace nocturne::core {
namespace {

using ::testing::StrEq;
using ::testing::ThrowsMessage;

TEST(CDeformableModel, IsConcrete) {
    static_assert(!std::is_abstract_v<CDeformableModel>);
}

TEST(CDeformableModel, Constructors) {
    static_assert(std::is_constructible_v<CDeformableModel, const SDeformableModelOwners &>);
}

TEST(CDeformableModel, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CDeformableModel::free), void (CDeformableModel::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDeformableModel::captureTextures), void (CDeformableModel::*)()>);
    static_assert(std::is_same_v<decltype(&CDeformableModel::getSkeletonPtr),
                                 CSkeleton *(CDeformableModel::*)()>);
    static_assert(std::is_same_v<decltype(&CDeformableModel::getVertexPoolPtr),
                                 common::CVector3f *(CDeformableModel::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CDeformableModel::skinVertices),
                       void (CDeformableModel::*)(std::size_t, std::span<const common::CMatrix3x4f>,
                                                  std::span<common::CVector3i>) const>);
    static_assert(std::is_same_v<decltype(&CDeformableModel::skinSingleVertex),
                                 common::CVector3f *(CDeformableModel::*)(
                                     common::CVector3f *, int, int, common::CMatrix3x4f *)>);
    static_assert(std::is_same_v<decltype(&CDeformableModel::rotateVertices),
                                 void (CDeformableModel::*)(int, int *)>);
    static_assert(std::is_same_v<decltype(&CDeformableModel::lightVertices),
                                 void (CDeformableModel::*)(int, common::CVector3i *)>);
    static_assert(std::is_same_v<decltype(&CDeformableModel::initVertexWRecip),
                                 void (CDeformableModel::*)(int, common::CVector3i *)>);
    static_assert(std::is_same_v<decltype(&CDeformableModel::renderParts),
                                 void (CDeformableModel::*)(int, int *, int *, int, int)>);
    static_assert(std::is_same_v<decltype(&CDeformableModel::renderWireframe),
                                 void (CDeformableModel::*)(int)>);
    static_assert(std::is_same_v<decltype(&CDeformableModel::renderSkeleton),
                                 void (CDeformableModel::*)(int, common::CMatrix3x4f *, int)>);
    static_assert(std::is_same_v<decltype(&CDeformableModel::renderBones),
                                 void (CDeformableModel::*)(common::CMatrix3x4f *)>);
    static_assert(std::is_same_v<decltype(&CDeformableModel::load),
                                 void (CDeformableModel::*)(std::string_view)>);
    static_assert(
        std::is_same_v<decltype(&CDeformableModel::getPartPtr), SPart *(CDeformableModel::*)(int)>);
    static_assert(std::is_same_v<decltype(&CDeformableModel::findPartByName),
                                 int (CDeformableModel::*)(char *, int)>);
    static_assert(
        std::is_same_v<decltype(&CDeformableModel::getBonePart), int (CDeformableModel::*)(int)>);
    static_assert(std::is_same_v<decltype(&CDeformableModel::dismember),
                                 void (CDeformableModel::*)(int, CBodyPart *, int,
                                                            common::CVector3i *, int)>);
    static_assert(
        std::is_same_v<decltype(&CDeformableModel::exactRayTrace),
                       float (CDeformableModel::*)(int, common::CVector3f *, common::CVector3f *,
                                                   common::CVector3i *, std::uint8_t *)>);
    static_assert(std::is_same_v<decltype(&CDeformableModel::selectLOD),
                                 int (CDeformableModel::*)(CBoundingBox3D *)>);
    static_assert(
        std::is_same_v<decltype(&CDeformableModel::shatter),
                       void (CDeformableModel::*)(common::CVector3f *, common::CVector3f *, int,
                                                  common::CVector3i *, int *, int *)>);
    static_assert(std::is_same_v<decltype(&CDeformableModel::findMaxWeightBone),
                                 int (CDeformableModel::*)(int, int)>);
    static_assert(std::is_same_v<decltype(&CDeformableModel::calculateMemorySize),
                                 int (CDeformableModel::*)()>);
}

class CDeformableModelTest : public CDeformableModelFixture {
protected:
    SDeformableModelOwners owners_{.dosio = dosio_, .models = models_, .renderer = demon_renderer_};
    CDeformableModel model_{owners_};
};

// One of each scale, and no bias, levels or skeleton.
TEST_F(CDeformableModelTest, ANewModelIsEmptyAtAScaleOfOne) {
    EXPECT_TRUE(model_.getLods().empty());
    EXPECT_TRUE(model_.getParts().empty());
    EXPECT_TRUE(model_.getModelScale().equals({.x = 1.0F, .y = 1.0F, .z = 1.0F}));
    EXPECT_TRUE(model_.getBias().equals({}));
    EXPECT_THAT([this] { static_cast<void>(model_.getSkeletonPtr()); },
                ThrowsMessage<common::CFatalError>(
                    StrEq("Tried to do something with the skeleton, but skeleton ptr not set!")));
}

// The skeleton the file names is loaded and bound, and each set's textures are captured.
TEST_F(CDeformableModelTest, CapturingBindsTheSkeletonAndLoadsEveryTexture) {
    givenModel("m.dfm", {});
    model_.load("m.dfm");
    EXPECT_CALL(file_system_, getFileInfo(::testing::_)).Times(::testing::AnyNumber());
    for (const char *name : {"SKIN.RAW", "FACE.RAW", "SKIN2.RAW", "FACE2.RAW"}) {
        EXPECT_CALL(file_system_, getFileInfo(::testing::EndsWith(name)))
            .Times(::testing::AtLeast(1));
    }
    model_.captureTextures();
    ASSERT_NE(model_.getSkeletonPtr(), nullptr);
    EXPECT_EQ(model_.getSkeletonPtr()->getLoadedFilename(), "TEST.SKL");
    EXPECT_EQ(model_.getSkeletonPtr()->getBoneCount(), 6);
    EXPECT_EQ(&models_.loadSkeleton("test.skl"), model_.getSkeletonPtr());
}

// The bone tables stay.
TEST_F(CDeformableModelTest, FreeingForgetsTheMeshesTexturesAndParts) {
    givenModel("m.dfm", {});
    model_.load("m.dfm");
    model_.free();
    EXPECT_TRUE(model_.getLods().empty());
    EXPECT_TRUE(model_.getLodMeshes().empty());
    EXPECT_TRUE(model_.getTextureSets().empty());
    EXPECT_TRUE(model_.getParts().empty());
    EXPECT_TRUE(model_.getVertexPoolPtr(3)->equals({.x = 0.0F, .y = 2.0F, .z = 0.0F}));
    EXPECT_EQ(model_.getBoneToPartMap()[0], 1);
}

TEST_F(CDeformableModelTest, TheVertexPoolIsTheBonesOrigins) {
    givenModel("m.dfm", {});
    model_.load("m.dfm");
    EXPECT_TRUE(model_.getVertexPoolPtr(5)->equals({.x = 0.0F, .y = 0.0F, .z = 3.0F}));
    EXPECT_TRUE(model_.getVertexPoolPtr(99)->equals({}));
}

} // namespace
} // namespace nocturne::core
