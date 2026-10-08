#include "core/stairs/stairs.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CStairs, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CStairs>);
}

TEST(CStairs, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CStairs>);
}

TEST(CStairs, IsConcrete) {
    static_assert(!std::is_abstract_v<CStairs>);
}

TEST(CStairs, Constructors) {
    static_assert(std::is_constructible_v<CStairs>);
}

TEST(CStairs, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CStairs::setup), void (CStairs::*)()>);
    static_assert(std::is_same_v<decltype(&CStairs::process), void (CStairs::*)(float)>);
    static_assert(std::is_same_v<decltype(&CStairs::renderOpaque), int (CStairs::*)()>);
    static_assert(std::is_same_v<decltype(&CStairs::getBoundingBox),
                                 CBoundingBox3D *(CStairs::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CStairs::getCollisionType),
                                 ECollisionType (CStairs::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CStairs::getGroundType), EGroundType (CStairs::*)()>);
    static_assert(std::is_same_v<decltype(&CStairs::customRayIntersect),
                                 float (CStairs::*)(CVector3f *, CVector3f *, CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CStairs::customIntersectCylinderXZ),
                                 void (CStairs::*)(SIntersectXZCylinder *)>);
    static_assert(std::is_same_v<decltype(&CStairs::customGetFloorHeight),
                                 int (CStairs::*)(CVector3f *, float, float *)>);
    static_assert(
        std::is_same_v<decltype(&CStairs::getActorType), CDemonActorType *(CStairs::*)()>);
    static_assert(std::is_same_v<decltype(&CStairs::archive), void (CStairs::*)()>);
    static_assert(std::is_same_v<decltype(&CStairs::buildCollision), void (CStairs::*)()>);
}

} // namespace
} // namespace nocturne::core
