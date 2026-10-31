#include "core/skeleton/deformablemodelinstance.h"
#include "core/skeleton/partvisibility.h"
#include "tests/mocks/core/mockdeformablemodels.h"
#include "tests/mocks/core/notportedcalls.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <string_view>
#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CDeformableModelInstance, DerivesFromCMotionController) {
    static_assert(std::is_base_of_v<CMotionController, CDeformableModelInstance>);
}

TEST(CDeformableModelInstance, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CDeformableModelInstance>);
}

TEST(CDeformableModelInstance, IsConcrete) {
    static_assert(!std::is_abstract_v<CDeformableModelInstance>);
}

TEST(CDeformableModelInstance, Constructors) {
    static_assert(std::is_constructible_v<CDeformableModelInstance, IDeformableModels &>);
}

TEST(CDeformableModelInstance, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CDeformableModelInstance::findPatchToFrame),
                                 int (CDeformableModelInstance::*)(int, float, int)>);
    static_assert(std::is_same_v<decltype(&CDeformableModelInstance::accumulateScaledRootMotion),
                                 void (CDeformableModelInstance::*)(float, float, float)>);
    static_assert(std::is_same_v<decltype(&CDeformableModelInstance::resetToRestPose),
                                 void (CDeformableModelInstance::*)()>);
    static_assert(std::is_same_v<decltype(&CDeformableModelInstance::updateAnimationAndTransforms),
                                 void (CDeformableModelInstance::*)()>);
    static_assert(std::is_same_v<decltype(&CDeformableModelInstance::updateAnimation),
                                 void (CDeformableModelInstance::*)()>);
    static_assert(std::is_same_v<decltype(&CDeformableModelInstance::updateMotionAtFrame),
                                 void (CDeformableModelInstance::*)(int, float)>);
    static_assert(std::is_same_v<decltype(&CDeformableModelInstance::updateMotion),
                                 void (CDeformableModelInstance::*)(int, float, int)>);
    static_assert(
        std::is_same_v<decltype(&CDeformableModelInstance::blendMotion),
                       void (CDeformableModelInstance::*)(
                           int, float, float, int, CDeformableModel::MotionBlendWeightFunc *)>);
    static_assert(
        std::is_same_v<decltype(&CDeformableModelInstance::blendWithPoseData),
                       void (CDeformableModelInstance::*)(
                           SPoseData *, float, int, CDeformableModel::MotionBlendWeightFunc *)>);
    static_assert(std::is_same_v<decltype(&CDeformableModelInstance::blendBoneRotations),
                                 void (CDeformableModelInstance::*)(
                                     common::CQuaternion4f *, float, int,
                                     CDeformableModel::MotionBlendWeightFunc *)>);
    static_assert(std::is_same_v<decltype(&CDeformableModelInstance::getBoneModelMatrix),
                                 common::CMatrix3x4f *(CDeformableModelInstance::*)(
                                     int, common::CMatrix3x4f *)>);
    static_assert(
        std::is_same_v<decltype(&CDeformableModelInstance::getBoneModelPosition),
                       common::CVector3f *(CDeformableModelInstance::*)(common::CVector3f *, int)>);
    static_assert(
        std::is_same_v<decltype(&CDeformableModelInstance::getBoneCachedModelPosition),
                       common::CVector3f *(CDeformableModelInstance::*)(common::CVector3f *, int)>);
    static_assert(std::is_same_v<decltype(&CDeformableModelInstance::computeBoneTransforms),
                                 void (CDeformableModelInstance::*)()>);
    static_assert(std::is_same_v<decltype(&CDeformableModelInstance::computeBoneModelMatrices),
                                 void (CDeformableModelInstance::*)(SPose &)>);
    static_assert(std::is_same_v<decltype(&CDeformableModelInstance::computeBoneTransformsForFrame),
                                 void (CDeformableModelInstance::*)(int, float, SPose &)>);
    static_assert(
        std::is_same_v<decltype(&blendWeightCallback), CDeformableModel::MotionBlendWeightFunc *>);
    static_assert(std::is_same_v<decltype(&CDeformableModelInstance::applyRotationToHierarchy),
                                 void (CDeformableModelInstance::*)(
                                     common::CQuaternion4f *, float, int,
                                     CDeformableModel::MotionBlendWeightFunc *)>);
    static_assert(std::is_same_v<decltype(&CDeformableModelInstance::scalePoseDataForHierarchy),
                                 void (CDeformableModelInstance::*)(float, int)>);
    static_assert(std::is_same_v<decltype(&CDeformableModelInstance::renderWithOptions),
                                 void (CDeformableModelInstance::*)(int, std::uint32_t, int, int)>);
    static_assert(std::is_same_v<decltype(&CDeformableModelInstance::skinVerticesForLOD),
                                 void (CDeformableModelInstance::*)(int)>);
    static_assert(std::is_same_v<decltype(&CDeformableModelInstance::skinAndRotateVertices),
                                 void (CDeformableModelInstance::*)(int)>);
    static_assert(std::is_same_v<decltype(&CDeformableModelInstance::renderPolygons),
                                 void (CDeformableModelInstance::*)(int, int)>);
    static_assert(std::is_same_v<decltype(&CDeformableModelInstance::showAllParts),
                                 void (CDeformableModelInstance::*)()>);
    static_assert(std::is_same_v<decltype(&CDeformableModelInstance::clearAllTextureSetIndices),
                                 void (CDeformableModelInstance::*)()>);
    static_assert(std::is_same_v<decltype(&CDeformableModelInstance::preCache),
                                 void (CDeformableModelInstance::*)()>);
    static_assert(std::is_same_v<decltype(&CDeformableModelInstance::initializeFromModel),
                                 void (CDeformableModelInstance::*)(CDeformableModel &)>);
    static_assert(std::is_same_v<decltype(&CDeformableModelInstance::getModelPtr),
                                 CDeformableModel *(CDeformableModelInstance::*)()>);
    static_assert(std::is_same_v<decltype(&CDeformableModelInstance::getSkeletonPtr),
                                 CSkeleton *(CDeformableModelInstance::*)()>);
    static_assert(std::is_same_v<decltype(&CDeformableModelInstance::init),
                                 void (CDeformableModelInstance::*)(std::string_view)>);
    static_assert(std::is_same_v<decltype(&CDeformableModelInstance::getRootMotionDelta),
                                 common::CVector3f *(CDeformableModelInstance::*)(
                                     common::CVector3f *, float, float)>);
    static_assert(std::is_same_v<decltype(&CDeformableModelInstance::dismemberPart),
                                 void (CDeformableModelInstance::*)(CBodyPart *, int)>);
    static_assert(std::is_same_v<decltype(&CDeformableModelInstance::rayIntersect),
                                 float (CDeformableModelInstance::*)(common::CVector3f *,
                                                                     common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDeformableModelInstance::findClosestBone),
                                 int (CDeformableModelInstance::*)(common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDeformableModelInstance::shatter),
                                 void (CDeformableModelInstance::*)(common::CVector3f *,
                                                                    common::CVector3f *, int)>);
    static_assert(std::is_same_v<decltype(&CDeformableModelInstance::getBoneTransform),
                                 SPose *(CDeformableModelInstance::*)(SPose *)>);
    static_assert(std::is_same_v<decltype(&CDeformableModelInstance::setBoneTransform),
                                 void (CDeformableModelInstance::*)(SPose *)>);
    static_assert(std::is_same_v<decltype(&CDeformableModelInstance::computeBoundingBoxFromBones),
                                 CBoundingBox3D *(CDeformableModelInstance::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CDeformableModelInstance::computeCylindricalUVs),
                                 void (CDeformableModelInstance::*)(int, int)>);
}

TEST(CDeformableModelInstance, NamingTheModelShowsEveryPartInItsFirstTextureSet) {
    ::testing::NiceMock<MockDeformableModels> models;
    CDeformableModelInstance model(models);
    EXPECT_EQ(model.getModelName(), "");
    model.setPartVisibility(3, EPartVisibility::kHidden);
    model.setPartTextureSet(4, 2);
    model.init("zombie1.dfm");
    EXPECT_EQ(model.getModelName(), "zombie1.dfm");
    EXPECT_EQ(model.getPartVisibility(3), EPartVisibility::kShown);
    EXPECT_EQ(model.getPartTextureSet(4), CDeformableModelInstance::kFirstTextureSet);
}

TEST(CDeformableModelInstance, TheFunctionsNotPortedYetQuit) {
    ::testing::NiceMock<MockDeformableModels> models;
    CDeformableModelInstance model(models);
    const NotPortedCalls calls = {
        {"accumulateScaledRootMotion", [&] { model.accumulateScaledRootMotion(0.0F, 0.0F, 0.0F); }},
    };
    EXPECT_EQ(calls.size(), 1U);
    expectEachQuitsNotPorted("CDeformableModelInstance", calls);
}

} // namespace
} // namespace nocturne::core
