#include "common/text/asctime.h"

#include <gtest/gtest.h>

namespace nocturne::common {
namespace {

TEST(Asctime, PadsTheDayWithASpaceAndEndsWithANewline) {
    std::tm time{};
    time.tm_year = 99;
    time.tm_mon = 9;
    time.tm_mday = 3;
    time.tm_wday = 0;
    time.tm_hour = 7;
    time.tm_min = 5;
    time.tm_sec = 9;
    EXPECT_EQ(formatAsctime(time), "Sun Oct  3 07:05:09 1999\n");
    time.tm_mday = 13;
    EXPECT_EQ(formatAsctime(time), "Sun Oct 13 07:05:09 1999\n");
}

} // namespace
} // namespace nocturne::common
