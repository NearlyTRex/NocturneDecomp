#include "platform/lograte.h"

#include <gtest/gtest.h>

#include <optional>
#include <type_traits>
#include <vector>

namespace nocturne::platform {
namespace {

TEST(CLogRate, PublicInterface) {
    static_assert(std::is_constructible_v<CLogRate, int, int>);
    static_assert(std::is_same_v<decltype(&CLogRate::take), std::optional<int> (CLogRate::*)()>);
}

TEST(CLogRate, TheFirstAreWrittenThenEveryNth) {
    CLogRate rate(2, 5);
    std::vector<int> written;
    for (int call = 0; call < 16; ++call) {
        if (const std::optional<int> number = rate.take()) {
            written.push_back(*number);
        }
    }
    EXPECT_EQ(written, (std::vector<int>{1, 2, 5, 10, 15}));
}

} // namespace
} // namespace nocturne::platform
