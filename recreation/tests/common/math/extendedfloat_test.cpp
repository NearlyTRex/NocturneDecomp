#include "common/math/extendedfloat.h"

#include <gtest/gtest.h>

#include <bit>
#include <cmath>
#include <compare>
#include <cstdint>
#include <limits>
#include <random>

namespace nocturne::common {
namespace {

using X = CExtendedFloat;

std::uint32_t floatBits(float value) {
    return std::bit_cast<std::uint32_t>(value);
}

std::uint32_t storedBits(const X &value) {
    return floatBits(value.toFloat());
}

const double kInfinity = std::numeric_limits<double>::infinity();
const double kNaN = std::numeric_limits<double>::quiet_NaN();

// On a target whose long double is the x87's own format, the hardware is the reference.
constexpr bool kLongDoubleIsX87 = std::numeric_limits<long double>::digits == 64;

class CExtendedFloatAgainstX87 : public ::testing::Test {
protected:
    void SetUp() override {
        if (!kLongDoubleIsX87) {
            GTEST_SKIP() << "long double is not the x87's format here";
        }
    }

    // A float or double across magnitudes, signs and the subnormal range.
    double pick() {
        std::uniform_int_distribution<int> kind(0, 5);
        std::uniform_real_distribution<double> unit(-1.0, 1.0);
        std::uniform_int_distribution<int> exponent(-160, 160);
        const double value = std::ldexp(unit(random_), exponent(random_));
        switch (kind(random_)) {
        case 0:
            return static_cast<float>(value);
        case 1:
            return std::ldexp(unit(random_), -1060);
        case 2:
            return std::round(value);
        default:
            return value;
        }
    }

    std::mt19937_64 random_{20261015};
};

TEST_F(CExtendedFloatAgainstX87, ProductsAndSumsRoundAsTheX87Does) {
    for (int i = 0; i < 200000; ++i) {
        const double a = pick();
        const double b = pick();
        const double c = pick();
        const long double product = static_cast<long double>(a) * b;
        const long double sum = product + c;
        const X x_sum = (X(a) * X(b)) + X(c);
        ASSERT_EQ(storedBits(X(a) * X(b)), floatBits(static_cast<float>(product)))
            << a << " * " << b;
        ASSERT_EQ(storedBits(x_sum), floatBits(static_cast<float>(sum)))
            << a << " * " << b << " + " << c;
        ASSERT_EQ(x_sum > X(c), sum > c) << a << " * " << b << " + " << c;
        ASSERT_EQ(x_sum == X(c), sum == c) << a << " * " << b << " + " << c;
    }
}

TEST_F(CExtendedFloatAgainstX87, SumsOfNearlyCancellingValuesKeepTheirLowBits) {
    for (int i = 0; i < 100000; ++i) {
        const double a = pick();
        const double b = -a * (1.0 + std::ldexp(pick(), -40));
        const long double sum = static_cast<long double>(a) + b;
        ASSERT_EQ(storedBits(X(a) + X(b)), floatBits(static_cast<float>(sum))) << a << " " << b;
    }
}

TEST(CExtendedFloat, KeepsADoubleExactly) {
    EXPECT_EQ(X(0.1) <=> X(0.1), std::partial_ordering::equivalent);
    EXPECT_EQ(X(0.1).toFloat(), 0.1F);
    EXPECT_EQ(X(std::numeric_limits<double>::denorm_min()) <=> X(0.0),
              std::partial_ordering::greater);
}

// 1 + 2^-63 times 2 - 2^-62 is 2 - 2^-125, whose rounding carries out of the mantissa.
TEST(CExtendedFloat, AProductRoundingUpPastTheMantissaGainsAnExponent) {
    const X a = X(1.0) + X(std::ldexp(1.0, -63));
    const X b = X(2.0) + X(-std::ldexp(1.0, -62));
    EXPECT_TRUE(a * b == X(2.0));
}

TEST(CExtendedFloat, SumsHalfwayRoundToEven) {
    // 1 + 2^-64 lies halfway between 1 and the next value up, 1 + 2^-63.
    EXPECT_TRUE(X(1.0) + X(std::ldexp(1.0, -64)) == X(1.0));
    const X odd = X(1.0) + X(std::ldexp(1.0, -63));
    EXPECT_TRUE(odd + X(std::ldexp(1.0, -64)) == X(1.0) + X(std::ldexp(1.0, -62)));
}

TEST(CExtendedFloat, AFarSmallerAddendRoundsAway) {
    EXPECT_TRUE(X(1.0) + X(std::ldexp(1.0, -300)) == X(1.0));
    EXPECT_TRUE(X(1.0) + X(-std::ldexp(1.0, -300)) == X(1.0));
}

TEST(CExtendedFloat, ExactCancellationIsPositiveZero) {
    const X sum = X(1.5) + X(-1.5);
    EXPECT_EQ(storedBits(sum), 0U);
    const X small = (X(1.0) + X(std::ldexp(1.0, -63))) + X(-1.0);
    EXPECT_TRUE(small == X(std::ldexp(1.0, -63)));
}

TEST(CExtendedFloat, ZerosKeepTheirSignsAsTheX87Does) {
    EXPECT_EQ(storedBits(X(-0.0) + X(-0.0)), 0x80000000U);
    EXPECT_EQ(storedBits(X(-0.0) + X(0.0)), 0U);
    EXPECT_EQ(storedBits(X(-2.0) * X(0.0)), 0x80000000U);
    EXPECT_EQ(storedBits(X(0.0) * X(3.0)), 0U);
    EXPECT_TRUE(X(2.5) + X(0.0) == X(2.5));
    EXPECT_TRUE(X(0.0) + X(-2.5) == X(-2.5));
}

TEST(CExtendedFloat, AddsInEitherOrder) {
    EXPECT_TRUE(X(0.25) + X(3.0) == X(3.25));
    EXPECT_TRUE(X(3.0) + X(-0.25) == X(2.75));
    EXPECT_TRUE(X(-0.25) + X(3.0) == X(2.75));
}

TEST(CExtendedFloat, ANaNOperandIsWhatComesOut) {
    const X nan(-kNaN);
    EXPECT_EQ(storedBits(nan * X(2.0)), 0xffc00000U);
    EXPECT_EQ(storedBits(X(2.0) * X(kNaN)), 0x7fc00000U);
    EXPECT_EQ(storedBits(X(kNaN) + X(2.0)), 0x7fc00000U);
    EXPECT_EQ(storedBits(X(2.0) + nan), 0xffc00000U);
}

TEST(CExtendedFloat, InvalidOperationsGiveTheRealIndefinite) {
    EXPECT_EQ(storedBits(X(kInfinity) * X(0.0)), 0xffc00000U);
    EXPECT_EQ(storedBits(X(0.0) * X(-kInfinity)), 0xffc00000U);
    EXPECT_EQ(storedBits(X(kInfinity) + X(-kInfinity)), 0xffc00000U);
}

TEST(CExtendedFloat, InfinitiesCarryThrough) {
    EXPECT_EQ(storedBits(X(kInfinity) * X(-2.0)), 0xff800000U);
    EXPECT_EQ(storedBits(X(3.0) * X(kInfinity)), 0x7f800000U);
    EXPECT_EQ(storedBits(X(kInfinity) + X(kInfinity)), 0x7f800000U);
    EXPECT_EQ(storedBits(X(kInfinity) + X(-5.0)), 0x7f800000U);
    EXPECT_EQ(storedBits(X(5.0) + X(-kInfinity)), 0xff800000U);
}

TEST(CExtendedFloat, StoresTooLargeForAFloatAsInfinity) {
    EXPECT_EQ(storedBits(X(1e39)), 0x7f800000U);
    EXPECT_EQ(storedBits(X(-1e300)), 0xff800000U);
    // Under halfway past the largest float rounds down to it; halfway rounds to even, past it.
    const double largest = std::numeric_limits<float>::max();
    EXPECT_EQ(storedBits(X(largest + std::ldexp(1.0, 102))), 0x7f7fffffU);
    EXPECT_EQ(storedBits(X(largest + std::ldexp(1.0, 103))), 0x7f800000U);
}

TEST(CExtendedFloat, StoresTinyValuesAsSubnormalsOrZero) {
    EXPECT_EQ(storedBits(X(std::ldexp(3.0, -149))), 3U);
    EXPECT_EQ(storedBits(X(-std::ldexp(1.0, -150))), 0x80000000U);
    EXPECT_EQ(storedBits(X(std::ldexp(1.5, -150))), 1U);
    EXPECT_EQ(storedBits(X(std::ldexp(1.0, -200))), 0U);
    // Just under the least normal float rounds up to it.
    EXPECT_EQ(storedBits(X(std::ldexp(1.0, -126) - std::ldexp(1.0, -151))), 0x00800000U);
}

TEST(CExtendedFloat, StoresARoundingCarryAsTheNextPowerOfTwo) {
    EXPECT_EQ(storedBits(X(1.0 - std::ldexp(1.0, -30))), floatBits(1.0F));
}

TEST(CExtendedFloat, OrdersAsTheX87ComparesThem) {
    EXPECT_EQ(X(kNaN) <=> X(1.0), std::partial_ordering::unordered);
    EXPECT_EQ(X(1.0) <=> X(kNaN), std::partial_ordering::unordered);
    EXPECT_EQ(X(-0.0) <=> X(0.0), std::partial_ordering::equivalent);
    EXPECT_EQ(X(-1.0) <=> X(0.0), std::partial_ordering::less);
    EXPECT_EQ(X(0.0) <=> X(-1.0), std::partial_ordering::greater);
    EXPECT_EQ(X(0.0) <=> X(1.0), std::partial_ordering::less);
    EXPECT_EQ(X(-2.0) <=> X(-1.0), std::partial_ordering::less);
    EXPECT_EQ(X(1.5) <=> X(1.25), std::partial_ordering::greater);
    EXPECT_EQ(X(kInfinity) <=> X(1e300), std::partial_ordering::greater);
    EXPECT_EQ(X(-kInfinity) <=> X(-kInfinity), std::partial_ordering::equivalent);
    EXPECT_EQ(X(1.0) <=> X(kInfinity), std::partial_ordering::less);
    EXPECT_FALSE(X(kNaN) == X(kNaN));
}

} // namespace
} // namespace nocturne::common
