#include "common/text/values.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <optional>
#include <string_view>

namespace nocturne::common {
namespace {

using ::testing::ElementsAre;

TEST(ValuesTest, TrimTakesOffTheSpacesAndTabsAround) {
    EXPECT_EQ(trimSpaces(" \t a b \t"), "a b");
    EXPECT_EQ(trimSpaces(" \t "), "");
    EXPECT_EQ(trimSpaces(""), "");
}

TEST(ValuesTest, SplitTrimsEachValue) {
    EXPECT_THAT(splitValues(" a , b,,c "), ElementsAre("a", "b", "", "c"));
    EXPECT_THAT(splitValues("one"), ElementsAre("one"));
}

TEST(ValuesTest, AValuePastTheLastIsEmpty) {
    const auto values = splitValues("a,b");
    EXPECT_EQ(getValue(values, 1), "b");
    EXPECT_EQ(getValue(values, 2), "");
}

TEST(ValuesTest, ANumberMustFillItsValue) {
    EXPECT_EQ(parseNumber<int>("-12"), -12);
    EXPECT_EQ(parseNumber<float>("2.5"), 2.5F);
    EXPECT_EQ(parseNumber<int>("12px"), std::nullopt);
    EXPECT_EQ(parseNumber<int>(""), std::nullopt);
    EXPECT_EQ(parseNumber<float>("+1"), std::nullopt);
}

} // namespace
} // namespace nocturne::common
