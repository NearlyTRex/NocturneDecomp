#include "core/drip/drip.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CDrip, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CDrip>);
}

TEST(CDrip, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CDrip>);
}

TEST(CDrip, IsConcrete) {
    static_assert(!std::is_abstract_v<CDrip>);
}

TEST(CDrip, Constructors) {
    static_assert(std::is_constructible_v<CDrip>);
}

TEST(CDrip, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CDrip::setup), void (CDrip::*)()>);
    static_assert(std::is_same_v<decltype(&CDrip::process), void (CDrip::*)(float)>);
    static_assert(std::is_same_v<decltype(&CDrip::renderOpaque), int (CDrip::*)()>);
    static_assert(std::is_same_v<decltype(&CDrip::getBoundingBox),
                                 CBoundingBox3D *(CDrip::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CDrip::getCollisionType),
                                 ECollisionType (CDrip::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CDrip::getActorType), CDemonActorType *(CDrip::*)()>);
    static_assert(std::is_same_v<decltype(&CDrip::archive), void (CDrip::*)()>);
    static_assert(std::is_same_v<decltype(&CDrip::reset), void (CDrip::*)()>);
}

} // namespace
} // namespace nocturne::core
