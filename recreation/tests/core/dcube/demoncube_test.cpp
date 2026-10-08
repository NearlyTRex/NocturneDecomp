#include "core/dcube/demoncube.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CDemonCube, IsConcrete) {
    static_assert(!std::is_abstract_v<CDemonCube>);
}

TEST(CDemonCube, Constructors) {
    static_assert(std::is_constructible_v<CDemonCube>);
}

TEST(CDemonCube, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CDemonCube::allocVoxelMemory), void (CDemonCube::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonCube::load), void (CDemonCube::*)(std::FILE *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonCube::rotateVertices), void (CDemonCube::*)(std::uint32_t)>);
    static_assert(std::is_same_v<decltype(&CDemonCube::rayIntersectTriangles),
                                 float (CDemonCube::*)(CVector3f *, CVector3f *, CVector3f *,
                                                       std::uint32_t *)>);
    static_assert(std::is_same_v<decltype(&CDemonCube::testCylinderCollision),
                                 void (CDemonCube::*)(SIntersectXZCylinder *)>);
    static_assert(std::is_same_v<decltype(&CDemonCube::testCylinderGroundCollision),
                                 int (CDemonCube::*)(CVector3f *, float, CVector3f *, CVector3f *,
                                                     std::uint32_t *)>);
}

} // namespace
} // namespace nocturne::core
