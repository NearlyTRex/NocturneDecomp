#include "common/math/vector3i.h"

#include <gtest/gtest.h>

namespace nocturne::common {
namespace {

TEST(CVector3i, StartsAtTheOriginAndComparesByComponent) {
    const CVector3i v;
    EXPECT_EQ(v, (CVector3i{.x = 0, .y = 0, .z = 0}));
    EXPECT_NE(v, (CVector3i{.x = 0, .y = 0, .z = 1}));
}

} // namespace
} // namespace nocturne::common
