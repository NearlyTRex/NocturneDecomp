#pragma once

#include "common/math/vector3f.h"

#include <gtest/gtest.h>

namespace nocturne::common {

// Every coordinate exactly the same, both vectors named when they aren't.
inline ::testing::AssertionResult isSameVector(const CVector3f &actual, const CVector3f &expected) {
    if (actual.x == expected.x && actual.y == expected.y && actual.z == expected.z) {
        return ::testing::AssertionSuccess();
    }
    return ::testing::AssertionFailure()
           << "(" << actual.x << ", " << actual.y << ", " << actual.z << ") is not (" << expected.x
           << ", " << expected.y << ", " << expected.z << ")";
}

} // namespace nocturne::common
