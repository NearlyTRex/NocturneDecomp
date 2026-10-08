#include "core/particle/particle.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CParticle, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CParticle>);
}

TEST(CParticle, IsConcrete) {
    static_assert(!std::is_abstract_v<CParticle>);
}

TEST(CParticle, Constructors) {
    static_assert(std::is_constructible_v<CParticle>);
}

TEST(CParticle, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&CParticle::setup), void (CParticle::*)(CVector3f *, CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CParticle::process), void (CParticle::*)()>);
    static_assert(std::is_same_v<decltype(&CParticle::render), void (CParticle::*)()>);
    static_assert(
        std::is_same_v<decltype(&CParticle::onCollision), int (CParticle::*)(CVector3f *)>);
}

} // namespace
} // namespace nocturne::core
