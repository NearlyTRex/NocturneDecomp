#include "core/fire/smokeparticle.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CSmokeParticle, IsConcrete) {
    static_assert(!std::is_abstract_v<CSmokeParticle>);
}

TEST(CSmokeParticle, Constructors) {
    static_assert(std::is_constructible_v<CSmokeParticle>);
}

TEST(CSmokeParticle, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&CSmokeParticle::setupRenderState), void (CSmokeParticle::*)()>);
    static_assert(std::is_same_v<decltype(&CSmokeParticle::reset), void (CSmokeParticle::*)()>);
    static_assert(std::is_same_v<decltype(&CSmokeParticle::init),
                                 void (CSmokeParticle::*)(CVector3f *, float, CVector3f *, int)>);
    static_assert(std::is_same_v<decltype(&CSmokeParticle::process), void (CSmokeParticle::*)()>);
    static_assert(std::is_same_v<decltype(&CSmokeParticle::render), void (CSmokeParticle::*)()>);
}

} // namespace
} // namespace nocturne::core
