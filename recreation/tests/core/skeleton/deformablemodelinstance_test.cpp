#include "core/skeleton/deformablemodelinstance.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CDeformableModelInstance, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CDeformableModelInstance>);
}

TEST(CDeformableModelInstance, IsConcrete) {
    static_assert(!std::is_abstract_v<CDeformableModelInstance>);
}

TEST(CDeformableModelInstance, Constructors) {
    static_assert(std::is_constructible_v<CDeformableModelInstance>);
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
                                 common::CMatrix3x4f *(
                                     CDeformableModelInstance::*)(int, common::CMatrix3x4f *)>);
    static_assert(
        std::is_same_v<decltype(&CDeformableModelInstance::getBoneModelPosition),
                       common::CVector3f *(CDeformableModelInstance::*)(common::CVector3f *, int)>);
    static_assert(
        std::is_same_v<decltype(&CDeformableModelInstance::getBoneCachedModelPosition),
                       common::CVector3f *(CDeformableModelInstance::*)(common::CVector3f *, int)>);
    static_assert(std::is_same_v<decltype(&CDeformableModelInstance::computeBoneTransforms),
                                 void (CDeformableModelInstance::*)()>);
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
                                 void (CDeformableModelInstance::*)(CDeformableModel *)>);
    static_assert(std::is_same_v<decltype(&CDeformableModelInstance::getModelPtr),
                                 CDeformableModel *(CDeformableModelInstance::*)()>);
    static_assert(std::is_same_v<decltype(&CDeformableModelInstance::getSkeletonPtr),
                                 CSkeleton *(CDeformableModelInstance::*)()>);
    static_assert(std::is_same_v<decltype(&CDeformableModelInstance::init),
                                 void (CDeformableModelInstance::*)(char *)>);
    static_assert(
        std::is_same_v<decltype(&CDeformableModelInstance::getRootMotionDelta),
                       common::CVector3f *(CDeformableModelInstance::*)(common::CVector3f *, float,
                                                                        float)>);
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

} // namespace
} // namespace nocturne::core
