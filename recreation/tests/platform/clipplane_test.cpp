#include "platform/clipplane.h"

#include <gtest/gtest.h>

namespace nocturne::platform {
namespace {

TEST(SClipPlane, StartsAsNoPlane) {
    constexpr SClipPlane plane;
    EXPECT_EQ(plane, (SClipPlane{.a = 0, .b = 0, .c = 0, .d = 0}));
}

} // namespace
} // namespace nocturne::platform
