#include "core/fire/trail.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CTrail, IsConcrete) {
    static_assert(!std::is_abstract_v<CTrail>);
}

TEST(CTrail, Constructors) {
    static_assert(std::is_constructible_v<CTrail>);
}

TEST(CTrail, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CTrail::reset), void (CTrail::*)()>);
    static_assert(
        std::is_same_v<decltype(&CTrail::activate),
                       void (CTrail::*)(CVector3f *, float, float, float, SMRGLTextureBasic *)>);
    static_assert(std::is_same_v<decltype(&CTrail::process), void (CTrail::*)()>);
    static_assert(std::is_same_v<decltype(&CTrail::render), void (CTrail::*)()>);
}

} // namespace
} // namespace nocturne::core
