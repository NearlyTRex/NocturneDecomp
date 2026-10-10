#include "core/fire/raindrop.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CRainDrop, DerivesFromCParticle) {
    static_assert(std::is_base_of_v<CParticle, CRainDrop>);
}

TEST(CRainDrop, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CRainDrop>);
}

TEST(CRainDrop, IsConcrete) {
    static_assert(!std::is_abstract_v<CRainDrop>);
}

TEST(CRainDrop, Constructors) {
    static_assert(std::is_constructible_v<CRainDrop>);
}

TEST(CRainDrop, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CRainDrop::render), void (CRainDrop::*)()>);
    static_assert(
        std::is_same_v<decltype(&CRainDrop::onCollision), int (CRainDrop::*)(common::CVector3f *)>);
}

} // namespace
} // namespace nocturne::core
