#include "core/dtrace/demonraytrace.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CDemonRaytrace, IsConcrete) {
    static_assert(!std::is_abstract_v<CDemonRaytrace>);
}

TEST(CDemonRaytrace, Constructors) {
    static_assert(std::is_constructible_v<CDemonRaytrace>);
}

TEST(CDemonRaytrace, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CDemonRaytrace::loadAndSyncWithGeoFile),
                                 int (CDemonRaytrace::*)(char *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonRaytrace::rayIntersection),
                       CVector3f *(CDemonRaytrace::*)(CVector3f *, CVector3f *, CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonRaytrace::rayVoxelIntersection),
                       float (CDemonRaytrace::*)(CVector3f *, CVector3f *, CVector3f *, int *)>);
    static_assert(std::is_same_v<decltype(&CDemonRaytrace::rayVoxelGridTest),
                                 int (CDemonRaytrace::*)(CVector3f *, CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDemonRaytrace::getGroundHeight),
                                 float (CDemonRaytrace::*)(CVector3f *, int *, CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonRaytrace::cylinderGroundCheck),
                       float (CDemonRaytrace::*)(CVector3f *, float, int *, CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDemonRaytrace::testCylinderCollision),
                                 void (CDemonRaytrace::*)(SIntersectXZCylinder *)>);
    static_assert(std::is_same_v<decltype(&CDemonRaytrace::renderFrustumCubes),
                                 void (CDemonRaytrace::*)(float, int)>);
    static_assert(
        std::is_same_v<decltype(&CDemonRaytrace::setPVS), void (CDemonRaytrace::*)(int, int *)>);
    static_assert(std::is_same_v<decltype(&CDemonRaytrace::savePVS),
                                 void (CDemonRaytrace::*)(int *, int **)>);
    static_assert(std::is_same_v<decltype(&CDemonRaytrace::getVoxelHeightAtPosition),
                                 float (CDemonRaytrace::*)(CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDemonRaytrace::voxelRaycast3D),
                                 int (CDemonRaytrace::*)(CVector3f *, CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDemonRaytrace::worldPositionToVoxelCoords),
                                 CVector3i *(CDemonRaytrace::*)(CVector3f *, CVector3i *)>);
    static_assert(std::is_same_v<decltype(&CDemonRaytrace::getVoxelHeightAtVoxelCoords),
                                 int (CDemonRaytrace::*)(CVector3i *)>);
    static_assert(std::is_same_v<decltype(&CDemonRaytrace::getBBoxMin),
                                 CVector3f *(CDemonRaytrace::*)(CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDemonRaytrace::getBBoxMax),
                                 CVector3f *(CDemonRaytrace::*)(CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDemonRaytrace::markShadowVoxels),
                                 void (CDemonRaytrace::*)(CVector3f *, CVector3f *, CVector3f *,
                                                          CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonRaytrace::commitShadowBuffer), void (CDemonRaytrace::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonRaytrace::transferShadowVoxels),
                                 void (CDemonRaytrace::*)(CVector3f *, CVector3f *, CVector3f *,
                                                          CVector3f *)>);
}

} // namespace
} // namespace nocturne::core
