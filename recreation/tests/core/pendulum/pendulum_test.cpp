#include "core/pendulum/pendulum.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CPendulum, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CPendulum>);
}

TEST(CPendulum, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CPendulum>);
}

TEST(CPendulum, IsConcrete) {
    static_assert(!std::is_abstract_v<CPendulum>);
}

TEST(CPendulum, Constructors) {
    static_assert(std::is_constructible_v<CPendulum>);
}

TEST(CPendulum, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CPendulum::setup), void (CPendulum::*)()>);
    static_assert(std::is_same_v<decltype(&CPendulum::process), void (CPendulum::*)(float)>);
    static_assert(std::is_same_v<decltype(&CPendulum::renderOpaque), int (CPendulum::*)()>);
    static_assert(std::is_same_v<decltype(&CPendulum::getBoundingBox),
                                 CBoundingBox3D *(CPendulum::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CPendulum::getCollisionType),
                                 ECollisionType (CPendulum::*)(SCollisionInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CPendulum::getGroundType), EGroundType (CPendulum::*)()>);
    static_assert(
        std::is_same_v<decltype(&CPendulum::getActorType), CDemonActorType *(CPendulum::*)()>);
    static_assert(std::is_same_v<decltype(&CPendulum::archive), void (CPendulum::*)()>);
}

} // namespace
} // namespace nocturne::core
