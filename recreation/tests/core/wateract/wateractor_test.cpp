#include "core/wateract/wateractor.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CWaterActor, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CWaterActor>);
}

TEST(CWaterActor, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CWaterActor>);
}

TEST(CWaterActor, IsConcrete) {
    static_assert(!std::is_abstract_v<CWaterActor>);
}

TEST(CWaterActor, Constructors) {
    static_assert(std::is_constructible_v<CWaterActor>);
}

TEST(CWaterActor, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CWaterActor::setup), void (CWaterActor::*)()>);
    static_assert(std::is_same_v<decltype(&CWaterActor::process), void (CWaterActor::*)(float)>);
    static_assert(
        std::is_same_v<decltype(&CWaterActor::renderTransparent), int (CWaterActor::*)()>);
    static_assert(std::is_same_v<decltype(&CWaterActor::getBoundingBox),
                                 CBoundingBox3D *(CWaterActor::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CWaterActor::getCollisionType),
                                 ECollisionType (CWaterActor::*)(SCollisionInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CWaterActor::getGroundType), EGroundType (CWaterActor::*)()>);
    static_assert(
        std::is_same_v<decltype(&CWaterActor::onLaserHit), void (CWaterActor::*)(SLaserInfo *)>);
    static_assert(std::is_same_v<decltype(&CWaterActor::customRayIntersect),
                                 float (CWaterActor::*)(common::CVector3f *, common::CVector3f *,
                                                        common::CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&CWaterActor::getActorType), CDemonActorType *(CWaterActor::*)()>);
    static_assert(std::is_same_v<decltype(&CWaterActor::archive), void (CWaterActor::*)()>);
}

} // namespace
} // namespace nocturne::core
