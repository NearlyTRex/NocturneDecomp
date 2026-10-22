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

TEST(CWater, StartsStillAtLevelZeroInTilesOf32) {
    const CWater water;
    EXPECT_EQ(water.getWaterLevelY(), 0.0F);
    EXPECT_EQ(water.getTileSize(), 32.0F);
    EXPECT_FALSE(water.getWaveAnimationEnabled());
}

TEST(CWater, TheLevelTilesAndWavesCanBeSet) {
    CWater water;
    water.setLevel(-4.5F, 16.0F);
    water.setWaveAnimationEnabled(true);
    EXPECT_EQ(water.getWaterLevelY(), -4.5F);
    EXPECT_EQ(water.getTileSize(), 16.0F);
    EXPECT_TRUE(water.getWaveAnimationEnabled());
}

} // namespace
} // namespace nocturne::core
