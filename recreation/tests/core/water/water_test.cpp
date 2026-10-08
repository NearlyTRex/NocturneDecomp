#include "core/water/water.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CWater, IsConcrete) {
    static_assert(!std::is_abstract_v<CWater>);
}

TEST(CWater, Constructors) {
    static_assert(std::is_constructible_v<CWater>);
}

TEST(CWater, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CWater::captureTextures), void (CWater::*)()>);
    static_assert(std::is_same_v<decltype(&CWater::calculateVisibleTiles), void (CWater::*)()>);
    static_assert(std::is_same_v<decltype(&CWater::process), void (CWater::*)()>);
    static_assert(std::is_same_v<decltype(&CWater::render), void (CWater::*)(int)>);
}

} // namespace
} // namespace nocturne::core
