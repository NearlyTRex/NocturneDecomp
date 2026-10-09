#include "core/hero/hero_functions.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreHeroFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&closestHeroToPoint), CHero *(*)(CLocation *)>);
    static_assert(
        std::is_same_v<decltype(&isAnyHeroWithinRadius), int (*)(common::CVector3f *, float)>);
    static_assert(std::is_same_v<decltype(&isAnyHeroWithinCylinder),
                                 int (*)(common::CVector3f *, float, float)>);
    static_assert(std::is_same_v<decltype(&factoryFuncHeroPlaceholder), CHeroPlaceholder *(*)()>);
}

} // namespace
} // namespace nocturne::core
