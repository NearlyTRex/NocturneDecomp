#include "core/ladder/ladder.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CLadder, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CLadder>);
}

TEST(CLadder, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CLadder>);
}

TEST(CLadder, IsConcrete) {
    static_assert(!std::is_abstract_v<CLadder>);
}

TEST(CLadder, Constructors) {
    static_assert(std::is_constructible_v<CLadder>);
}

TEST(CLadder, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CLadder::setup), void (CLadder::*)()>);
    static_assert(std::is_same_v<decltype(&CLadder::process), void (CLadder::*)(float)>);
    static_assert(std::is_same_v<decltype(&CLadder::renderOpaque), int (CLadder::*)()>);
    static_assert(std::is_same_v<decltype(&CLadder::getBoundingBox),
                                 CBoundingBox3D *(CLadder::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CLadder::getCollisionType),
                                 ECollisionType (CLadder::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CLadder::getGroundType), EGroundType (CLadder::*)()>);
    static_assert(
        std::is_same_v<decltype(&CLadder::getActorType), CDemonActorType *(CLadder::*)()>);
    static_assert(std::is_same_v<decltype(&CLadder::archive), void (CLadder::*)()>);
}

} // namespace
} // namespace nocturne::core
