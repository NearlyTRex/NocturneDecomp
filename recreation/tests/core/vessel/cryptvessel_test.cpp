#include "core/vessel/cryptvessel.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CCryptVessel, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CCryptVessel>);
}

TEST(CCryptVessel, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CCryptVessel>);
}

TEST(CCryptVessel, IsConcrete) {
    static_assert(!std::is_abstract_v<CCryptVessel>);
}

TEST(CCryptVessel, Constructors) {
    static_assert(std::is_constructible_v<CCryptVessel>);
}

TEST(CCryptVessel, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CCryptVessel::setup), void (CCryptVessel::*)()>);
    static_assert(std::is_same_v<decltype(&CCryptVessel::process), void (CCryptVessel::*)(float)>);
    static_assert(std::is_same_v<decltype(&CCryptVessel::renderOpaque), int (CCryptVessel::*)()>);
    static_assert(
        std::is_same_v<decltype(&CCryptVessel::renderTransparent), int (CCryptVessel::*)()>);
    static_assert(
        std::is_same_v<decltype(&CCryptVessel::renderBackground), void (CCryptVessel::*)(int)>);
    static_assert(std::is_same_v<decltype(&CCryptVessel::getBoundingBox),
                                 CBoundingBox3D *(CCryptVessel::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CCryptVessel::getCollisionType),
                                 ECollisionType (CCryptVessel::*)(SCollisionInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CCryptVessel::canPickup), int (CCryptVessel::*)(CDemonActor *)>);
    static_assert(
        std::is_same_v<decltype(&CCryptVessel::pickup), void (CCryptVessel::*)(CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CCryptVessel::onDropped),
                                 void (CCryptVessel::*)(common::CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&CCryptVessel::getCarrier), CDemonActor *(CCryptVessel::*)()>);
    static_assert(std::is_same_v<decltype(&CCryptVessel::getActorType),
                                 CDemonActorType *(CCryptVessel::*)()>);
    static_assert(std::is_same_v<decltype(&CCryptVessel::archive), void (CCryptVessel::*)()>);
}

} // namespace
} // namespace nocturne::core
