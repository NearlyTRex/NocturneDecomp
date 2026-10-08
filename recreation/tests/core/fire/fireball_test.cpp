#include "core/fire/fireball.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CFireball, DerivesFromCParticle) {
    static_assert(std::is_base_of_v<CParticle, CFireball>);
}

TEST(CFireball, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CFireball>);
}

TEST(CFireball, IsConcrete) {
    static_assert(!std::is_abstract_v<CFireball>);
}

TEST(CFireball, Constructors) {
    static_assert(std::is_constructible_v<CFireball>);
}

TEST(CFireball, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CFireball::process), void (CFireball::*)()>);
    static_assert(std::is_same_v<decltype(&CFireball::render), void (CFireball::*)()>);
    static_assert(
        std::is_same_v<decltype(&CFireball::onCollision), int (CFireball::*)(CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CFireball::setupRenderState), void (CFireball::*)()>);
}

} // namespace
} // namespace nocturne::core
