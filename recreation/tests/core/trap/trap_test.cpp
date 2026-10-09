#include "core/trap/trap.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CTrap, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CTrap>);
}

TEST(CTrap, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CTrap>);
}

TEST(CTrap, IsConcrete) {
    static_assert(!std::is_abstract_v<CTrap>);
}

TEST(CTrap, Constructors) {
    static_assert(std::is_constructible_v<CTrap>);
}

TEST(CTrap, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CTrap::setup), void (CTrap::*)()>);
    static_assert(std::is_same_v<decltype(&CTrap::process), void (CTrap::*)(float)>);
    static_assert(std::is_same_v<decltype(&CTrap::renderOpaque), int (CTrap::*)()>);
    static_assert(std::is_same_v<decltype(&CTrap::getBoundingBox),
                                 CBoundingBox3D *(CTrap::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CTrap::getCollisionType),
                                 ECollisionType (CTrap::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CTrap::canPickup), int (CTrap::*)(CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CTrap::pickup), void (CTrap::*)(CDemonActor *)>);
    static_assert(
        std::is_same_v<decltype(&CTrap::onDropped), void (CTrap::*)(common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CTrap::getCarrier), CDemonActor *(CTrap::*)()>);
    static_assert(std::is_same_v<decltype(&CTrap::getActorType), CDemonActorType *(CTrap::*)()>);
    static_assert(std::is_same_v<decltype(&CTrap::archive), void (CTrap::*)()>);
}

} // namespace
} // namespace nocturne::core
