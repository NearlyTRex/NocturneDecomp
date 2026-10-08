#include "core/skeleton/deformablemodel.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CDeformableModel, IsConcrete) {
    static_assert(!std::is_abstract_v<CDeformableModel>);
}

TEST(CDeformableModel, Constructors) {
    static_assert(std::is_constructible_v<CDeformableModel>);
}

TEST(CDeformableModel, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CDeformableModel::free), void (CDeformableModel::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDeformableModel::captureTextures), void (CDeformableModel::*)()>);
    static_assert(std::is_same_v<decltype(&CDeformableModel::getSkeletonPtr),
                                 CSkeleton *(CDeformableModel::*)()>);
    static_assert(std::is_same_v<decltype(&CDeformableModel::getVertexPoolPtr),
                                 CVector3f *(CDeformableModel::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CDeformableModel::skinVertices),
                       void (CDeformableModel::*)(int, CMatrix3x4f *, int *, SPartInstanceData *)>);
    static_assert(
        std::is_same_v<decltype(&CDeformableModel::skinSingleVertex),
                       CVector3f *(CDeformableModel::*)(CVector3f *, int, int, CMatrix3x4f *)>);
    static_assert(std::is_same_v<decltype(&CDeformableModel::rotateVertices),
                                 void (CDeformableModel::*)(int, int *)>);
    static_assert(std::is_same_v<decltype(&CDeformableModel::lightVertices),
                                 void (CDeformableModel::*)(int, CVector3i *)>);
    static_assert(std::is_same_v<decltype(&CDeformableModel::initVertexWRecip),
                                 void (CDeformableModel::*)(int, CVector3i *)>);
    static_assert(std::is_same_v<decltype(&CDeformableModel::renderParts),
                                 void (CDeformableModel::*)(int, int *, int *, int, int)>);
    static_assert(std::is_same_v<decltype(&CDeformableModel::renderWireframe),
                                 void (CDeformableModel::*)(int)>);
    static_assert(std::is_same_v<decltype(&CDeformableModel::renderSkeleton),
                                 void (CDeformableModel::*)(int, CMatrix3x4f *, int)>);
    static_assert(std::is_same_v<decltype(&CDeformableModel::renderBones),
                                 void (CDeformableModel::*)(CMatrix3x4f *)>);
    static_assert(
        std::is_same_v<decltype(&CDeformableModel::load), void (CDeformableModel::*)(char *)>);
    static_assert(
        std::is_same_v<decltype(&CDeformableModel::getPartPtr), SPart *(CDeformableModel::*)(int)>);
    static_assert(std::is_same_v<decltype(&CDeformableModel::findPartByName),
                                 int (CDeformableModel::*)(char *, int)>);
    static_assert(
        std::is_same_v<decltype(&CDeformableModel::getBonePart), int (CDeformableModel::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CDeformableModel::dismember),
                       void (CDeformableModel::*)(int, CBodyPart *, int, CVector3i *, int)>);
    static_assert(std::is_same_v<decltype(&CDeformableModel::exactRayTrace),
                                 float (CDeformableModel::*)(int, CVector3f *, CVector3f *,
                                                             CVector3i *, std::uint8_t *)>);
    static_assert(std::is_same_v<decltype(&CDeformableModel::selectLOD),
                                 int (CDeformableModel::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CDeformableModel::shatter),
                                 void (CDeformableModel::*)(CVector3f *, CVector3f *, int,
                                                            CVector3i *, int *, int *)>);
    static_assert(std::is_same_v<decltype(&CDeformableModel::findMaxWeightBone),
                                 int (CDeformableModel::*)(int, int)>);
    static_assert(std::is_same_v<decltype(&CDeformableModel::calculateMemorySize),
                                 int (CDeformableModel::*)()>);
}

} // namespace
} // namespace nocturne::core
