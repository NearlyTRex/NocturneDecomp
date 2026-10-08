#include "core/fire/bullettrail.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CBulletTrail, IsConcrete) {
    static_assert(!std::is_abstract_v<CBulletTrail>);
}

TEST(CBulletTrail, Constructors) {
    static_assert(std::is_constructible_v<CBulletTrail>);
}

TEST(CBulletTrail, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CBulletTrail::process), void (CBulletTrail::*)()>);
    static_assert(std::is_same_v<decltype(&CBulletTrail::render), void (CBulletTrail::*)()>);
}

} // namespace
} // namespace nocturne::core
