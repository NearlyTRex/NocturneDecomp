#include "common/math/vector3d.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::common {
namespace {

TEST(CVector3d, IsAnAggregateValueType) {
    static_assert(std::is_aggregate_v<CVector3d>);
    static_assert(std::is_trivially_copyable_v<CVector3d>);
}

TEST(CVector3d, StartsAtTheOriginAndComparesByValue) {
    EXPECT_EQ(CVector3d{}, (CVector3d{.x = 0.0, .y = 0.0, .z = 0.0}));
    EXPECT_NE(CVector3d{}, (CVector3d{.x = 0.0, .y = 1.0, .z = 0.0}));
}

} // namespace
} // namespace nocturne::common
