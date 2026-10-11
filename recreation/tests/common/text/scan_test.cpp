#include "common/text/scan.h"

#include <gtest/gtest.h>

#include <optional>

namespace nocturne::common {
namespace {

TEST(ScanInteger, ReadsASignedNumber) {
    EXPECT_EQ(scanInteger("640"), 640);
    EXPECT_EQ(scanInteger("-12"), -12);
    EXPECT_EQ(scanInteger("+7"), 7);
}

TEST(ScanInteger, SkipsLeadingWhitespaceAndStopsAtTheFirstNonDigit) {
    EXPECT_EQ(scanInteger(" \t42"), 42);
    EXPECT_EQ(scanInteger("16bit"), 16);
}

TEST(ScanInteger, NoDigitsIsNothing) {
    EXPECT_EQ(scanInteger(""), std::nullopt);
    EXPECT_EQ(scanInteger("   "), std::nullopt);
    EXPECT_EQ(scanInteger("on"), std::nullopt);
    EXPECT_EQ(scanInteger("+-3"), std::nullopt);
}

TEST(ScanInteger, OutOfRangeIsNothing) {
    EXPECT_EQ(scanInteger("99999999999"), std::nullopt);
}

TEST(ScanFloat, ReadsFixedAndExponentForms) {
    EXPECT_EQ(scanFloat("1.5"), 1.5F);
    EXPECT_EQ(scanFloat(" -0.25"), -0.25F);
    EXPECT_EQ(scanFloat("+2e3"), 2000.0F);
    EXPECT_EQ(scanFloat(".5x"), 0.5F);
}

TEST(ScanFloat, NoDigitsIsNothing) {
    EXPECT_EQ(scanFloat("x1"), std::nullopt);
    EXPECT_EQ(scanFloat(""), std::nullopt);
}

} // namespace
} // namespace nocturne::common
