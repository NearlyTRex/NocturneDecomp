#include "core/fire/popcorn.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CPopcorn, DerivesFromCParticle) {
    static_assert(std::is_base_of_v<CParticle, CPopcorn>);
}

TEST(CPopcorn, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CPopcorn>);
}

TEST(CPopcorn, IsConcrete) {
    static_assert(!std::is_abstract_v<CPopcorn>);
}

TEST(CPopcorn, Constructors) {
    static_assert(std::is_constructible_v<CPopcorn>);
}

TEST(CPopcorn, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CPopcorn::render), void (CPopcorn::*)()>);
    static_assert(
        std::is_same_v<decltype(&CPopcorn::onCollision), int (CPopcorn::*)(common::CVector3f *)>);
}

} // namespace
} // namespace nocturne::core
