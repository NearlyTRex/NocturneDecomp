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
    static_assert(std::is_same_v<decltype(&CDemonRaytrace::rayIntersection),
                                 common::CVector3f *(CDemonRaytrace::*)(common::CVector3f *,
                                                                        common::CVector3f *,
                                                                        common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDemonRaytrace::rayVoxelIntersection),
                                 float (CDemonRaytrace::*)(common::CVector3f *, common::CVector3f *,
                                                           common::CVector3f *, int *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonRaytrace::rayVoxelGridTest),
                       int (CDemonRaytrace::*)(common::CVector3f *, common::CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonRaytrace::getGroundHeight),
                       float (CDemonRaytrace::*)(common::CVector3f *, int *, common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDemonRaytrace::cylinderGroundCheck),
                                 float (CDemonRaytrace::*)(common::CVector3f *, float, int *,
                                                           common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDemonRaytrace::testCylinderCollision),
                                 void (CDemonRaytrace::*)(SIntersectXZCylinder *)>);
    static_assert(std::is_same_v<decltype(&CDemonRaytrace::renderFrustumCubes),
                                 void (CDemonRaytrace::*)(float, int)>);
    static_assert(
        std::is_same_v<decltype(&CDemonRaytrace::setPVS), void (CDemonRaytrace::*)(int, int *)>);
    static_assert(std::is_same_v<decltype(&CDemonRaytrace::savePVS),
                                 void (CDemonRaytrace::*)(int *, int **)>);
    static_assert(std::is_same_v<decltype(&CDemonRaytrace::getVoxelHeightAtPosition),
                                 float (CDemonRaytrace::*)(common::CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonRaytrace::voxelRaycast3D),
                       int (CDemonRaytrace::*)(common::CVector3f *, common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDemonRaytrace::worldPositionToVoxelCoords),
                                 common::CVector3i *(CDemonRaytrace::*)(common::CVector3f *,
                                                                        common::CVector3i *)>);
    static_assert(std::is_same_v<decltype(&CDemonRaytrace::getVoxelHeightAtVoxelCoords),
                                 int (CDemonRaytrace::*)(common::CVector3i *)>);
    static_assert(std::is_same_v<decltype(&CDemonRaytrace::getBBoxMin),
                                 common::CVector3f *(CDemonRaytrace::*)(common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDemonRaytrace::getBBoxMax),
                                 common::CVector3f *(CDemonRaytrace::*)(common::CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonRaytrace::markShadowVoxels),
                       void (CDemonRaytrace::*)(common::CVector3f *, common::CVector3f *,
                                                common::CVector3f *, common::CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonRaytrace::commitShadowBuffer), void (CDemonRaytrace::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDemonRaytrace::transferShadowVoxels),
                       void (CDemonRaytrace::*)(common::CVector3f *, common::CVector3f *,
                                                common::CVector3f *, common::CVector3f *)>);
}

} // namespace
} // namespace nocturne::core
