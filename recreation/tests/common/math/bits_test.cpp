#include "common/math/bits.h"

#include <gtest/gtest.h>

namespace nocturne::common {
namespace {

TEST(Bits, ShiftsByTheCount) {
    EXPECT_EQ(shiftLeft(0x3, 4), 0x30U);
    EXPECT_EQ(shiftRight(0x30, 4), 0x3U);
}

TEST(Bits, OnlyTheLowFiveBitsOfTheCountShift) {
    EXPECT_EQ(shiftLeft(0x3, 32), 0x3U);
    EXPECT_EQ(shiftRight(0x30, 36), 0x3U);
}

} // namespace
} // namespace nocturne::common
