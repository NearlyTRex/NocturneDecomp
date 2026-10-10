#include "core/fire/toss.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CToss, IsConcrete) {
    static_assert(!std::is_abstract_v<CToss>);
}

TEST(CToss, Constructors) {
    static_assert(std::is_constructible_v<CToss>);
}

TEST(CToss, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CToss::reset), void (CToss::*)()>);
    static_assert(
        std::is_same_v<decltype(&CToss::create),
                       void (CToss::*)(int, common::CVector3f *, common::UOrientationVector *,
                                       common::CVector3f *, float)>);
    static_assert(std::is_same_v<decltype(&CToss::process), void (CToss::*)()>);
    static_assert(std::is_same_v<decltype(&CToss::render), void (CToss::*)()>);
}

} // namespace
} // namespace nocturne::core
