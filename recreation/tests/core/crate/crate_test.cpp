#include "core/crate/crate.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CCrate, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CCrate>);
}

TEST(CCrate, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CCrate>);
}

TEST(CCrate, IsConcrete) {
    static_assert(!std::is_abstract_v<CCrate>);
}

TEST(CCrate, Constructors) {
    static_assert(std::is_constructible_v<CCrate>);
}

TEST(CCrate, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CCrate::setup), void (CCrate::*)()>);
    static_assert(std::is_same_v<decltype(&CCrate::process), void (CCrate::*)(float)>);
    static_assert(std::is_same_v<decltype(&CCrate::renderOpaque), int (CCrate::*)()>);
    static_assert(std::is_same_v<decltype(&CCrate::renderBackground), void (CCrate::*)(int)>);
    static_assert(std::is_same_v<decltype(&CCrate::getBoundingBox),
                                 CBoundingBox3D *(CCrate::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CCrate::getCollisionType),
                                 ECollisionType (CCrate::*)(SCollisionInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CCrate::getTargetPoints), int (CCrate::*)(common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CCrate::canPickup), int (CCrate::*)(CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CCrate::pickup), void (CCrate::*)(CDemonActor *)>);
    static_assert(
        std::is_same_v<decltype(&CCrate::onDropped), void (CCrate::*)(common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CCrate::getCarrier), CDemonActor *(CCrate::*)()>);
    static_assert(std::is_same_v<decltype(&CCrate::getActorType), CDemonActorType *(CCrate::*)()>);
    static_assert(std::is_same_v<decltype(&CCrate::archive), void (CCrate::*)()>);
    static_assert(std::is_same_v<decltype(&CCrate::explode), void (CCrate::*)()>);
}

} // namespace
} // namespace nocturne::core
