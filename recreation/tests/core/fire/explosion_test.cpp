#include "core/fire/explosion.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CExplosion, IsConcrete) {
    static_assert(!std::is_abstract_v<CExplosion>);
}

TEST(CExplosion, Constructors) {
    static_assert(std::is_constructible_v<CExplosion>);
}

TEST(CExplosion, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CExplosion::activate),
                                 void (CExplosion::*)(common::CVector3f *, float, float)>);
    static_assert(std::is_same_v<decltype(&CExplosion::process), void (CExplosion::*)()>);
    static_assert(std::is_same_v<decltype(&CExplosion::render), void (CExplosion::*)()>);
}

} // namespace
} // namespace nocturne::core
