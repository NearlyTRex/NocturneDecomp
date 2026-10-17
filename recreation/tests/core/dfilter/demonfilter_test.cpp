#include "core/dfilter/demonfilter.h"

#include <gtest/gtest.h>

#include <cstddef>
#include <cstdint>
#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CDemonFilter, IsConcrete) {
    static_assert(!std::is_abstract_v<CDemonFilter>);
}

TEST(CDemonFilter, Constructors) {
    static_assert(std::is_constructible_v<CDemonFilter>);
    static_assert(std::is_constructible_v<CDemonFilter, int, int>);
}

TEST(CDemonFilter, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CDemonFilter::load), void (CDemonFilter::*)(char *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonFilter::init), void (CDemonFilter::*)(float, int)>);
}

// The level at (x, y) of a 4x4 filter.
std::uint8_t at(const CDemonFilter &filter, int x, int y) {
    return filter.getData()[(static_cast<std::size_t>(y) * 4) + static_cast<std::size_t>(x)];
}

TEST(CDemonFilter, StartsSixtyFourSquareAndEmpty) {
    const CDemonFilter filter;
    EXPECT_EQ(filter.getSize(), 64);
    EXPECT_EQ(filter.getCount(), 64);
    EXPECT_TRUE(filter.getData().empty());
}

TEST(CDemonFilter, AFreshSpotFallsOffFromTheCentreToTheEdge) {
    CDemonFilter filter(4, 4);
    filter.init(1.0F, 0);
    ASSERT_EQ(filter.getData().size(), 16U);
    // A full level of 64 is held at the top.
    EXPECT_EQ(at(filter, 2, 2), 63);
    EXPECT_EQ(at(filter, 1, 2), 32);
    EXPECT_EQ(at(filter, 2, 1), 32);
    EXPECT_EQ(at(filter, 3, 2), 32);
    // 1 - sqrt(2) / 2 of 64, chopped.
    EXPECT_EQ(at(filter, 1, 1), 18);
    EXPECT_EQ(at(filter, 0, 0), 0);
}

TEST(CDemonFilter, TheCentreLevelIsTheInitValue) {
    CDemonFilter filter(4, 4);
    filter.init(0.5F, 0);
    EXPECT_EQ(at(filter, 2, 2), 32);
}

TEST(CDemonFilter, ScalingMultipliesTheLevelsByTheFalloff) {
    CDemonFilter filter(4, 4);
    filter.init(1.0F, 0);
    filter.init(0.5F, 1);
    EXPECT_EQ(at(filter, 2, 2), 31);
    EXPECT_EQ(at(filter, 1, 2), 8);
    EXPECT_EQ(at(filter, 1, 1), 2);
    EXPECT_EQ(at(filter, 0, 0), 0);
}

TEST(CDemonFilter, AScaledLevelPastAByteIsHeldAtTheTopRatherThanWrapping) {
    CDemonFilter filter(4, 4);
    filter.init(1.0F, 0);
    filter.init(5.0F, 1);
    EXPECT_EQ(at(filter, 2, 2), CDemonFilter::kMaxLevel);
}

// A level too big for an int is the x87's integer indefinite, whose low byte the original kept.
TEST(CDemonFilter, ALevelTooBigForAnIntIsDark) {
    CDemonFilter filter(4, 4);
    filter.init(1e30F, 0);
    EXPECT_EQ(at(filter, 2, 2), 0);
}

TEST(CDemonFilter, ScalingAFilterNeverFilledLeavesItEmpty) {
    CDemonFilter filter(4, 4);
    filter.init(1.0F, 1);
    EXPECT_TRUE(filter.getData().empty());
}

// The square root and the level are rounded to floats where the original stores them; 32 is what
// nocedit's own code gives, where float maths throughout gives 31.
TEST(CDemonFilter, TheFalloffRoundsToFloatsWhereTheOriginalStoresIt) {
    CDemonFilter filter(6, 6);
    filter.init(0.75F, 0);
    constexpr std::size_t kX = 4;
    constexpr std::size_t kY = 3;
    EXPECT_EQ(filter.getData()[(kY * 6) + kX], 32);
}

// A filter one wide divides by its zero half width, which puts every level at the edge.
TEST(CDemonFilter, AFilterOneWideIsDarkThroughout) {
    CDemonFilter filter(1, 3);
    filter.init(1.0F, 0);
    ASSERT_EQ(filter.getData().size(), 3U);
    for (const std::uint8_t level : filter.getData()) {
        EXPECT_EQ(level, 0);
    }
}

TEST(CDemonFilter, AFreshSpotReplacesTheLevelsBefore) {
    CDemonFilter filter(4, 4);
    filter.init(1.0F, 0);
    filter.init(0.5F, 0);
    EXPECT_EQ(at(filter, 2, 2), 32);
}

} // namespace
} // namespace nocturne::core
