#include "core/teleport/teleport.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CTeleport, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CTeleport>);
}

TEST(CTeleport, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CTeleport>);
}

TEST(CTeleport, IsConcrete) {
    static_assert(!std::is_abstract_v<CTeleport>);
}

TEST(CTeleport, Constructors) {
    static_assert(std::is_constructible_v<CTeleport>);
}

TEST(CTeleport, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CTeleport::process), void (CTeleport::*)(float)>);
    static_assert(std::is_same_v<decltype(&CTeleport::getBoundingBox),
                                 CBoundingBox3D *(CTeleport::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CTeleport::getCollisionType),
                                 ECollisionType (CTeleport::*)(SCollisionInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CTeleport::getActorType), CDemonActorType *(CTeleport::*)()>);
    static_assert(std::is_same_v<decltype(&CTeleport::archive), void (CTeleport::*)()>);
}

} // namespace
} // namespace nocturne::core
