#include "core/tentacle/tentacle.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CTentacle, DerivesFromCEnemy) {
    static_assert(std::is_base_of_v<CEnemy, CTentacle>);
}

TEST(CTentacle, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CTentacle>);
}

TEST(CTentacle, IsConcrete) {
    static_assert(!std::is_abstract_v<CTentacle>);
}

TEST(CTentacle, Constructors) {
    static_assert(std::is_constructible_v<CTentacle>);
}

TEST(CTentacle, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CTentacle::setup), void (CTentacle::*)()>);
    static_assert(std::is_same_v<decltype(&CTentacle::process), void (CTentacle::*)(float)>);
    static_assert(std::is_same_v<decltype(&CTentacle::renderOpaque), int (CTentacle::*)()>);
    static_assert(
        std::is_same_v<decltype(&CTentacle::shouldIgnoreForTargeting), int (CTentacle::*)()>);
    static_assert(
        std::is_same_v<decltype(&CTentacle::getActorType), CDemonActorType *(CTentacle::*)()>);
    static_assert(std::is_same_v<decltype(&CTentacle::archive), void (CTentacle::*)()>);
    static_assert(std::is_same_v<decltype(&CTentacle::attractActorToward),
                                 int (CTentacle::*)(CDemonActor *, common::CVector3f *)>);
}

} // namespace
} // namespace nocturne::core
