#include "core/gore/bloodparticle.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CBloodParticle, DerivesFromCParticle) {
    static_assert(std::is_base_of_v<CParticle, CBloodParticle>);
}

TEST(CBloodParticle, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CBloodParticle>);
}

TEST(CBloodParticle, IsConcrete) {
    static_assert(!std::is_abstract_v<CBloodParticle>);
}

TEST(CBloodParticle, Constructors) {
    static_assert(std::is_constructible_v<CBloodParticle>);
}

TEST(CBloodParticle, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CBloodParticle::render), void (CBloodParticle::*)()>);
    static_assert(std::is_same_v<decltype(&CBloodParticle::onCollision),
                                 int (CBloodParticle::*)(common::CVector3f *)>);
    static_assert(std::is_same_v<
                  std::integral_constant<void (CBloodParticle::*)(common::CVector3f *,
                                                                  common::CVector3f *, EBloodType),
                                         &CBloodParticle::setup>::value_type,
                  void (CBloodParticle::*)(common::CVector3f *, common::CVector3f *, EBloodType)>);
    static_assert(
        std::is_same_v<decltype(&CBloodParticle::setupRenderState), void (CBloodParticle::*)()>);
}

} // namespace
} // namespace nocturne::core
