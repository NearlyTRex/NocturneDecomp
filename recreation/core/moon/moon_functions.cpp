#include "core/moon/moon_functions.h"

#include "common/math/fixed.h"

namespace nocturne::core {

// The first half of a course takes the level from 0x2000 down to nothing by the ratio rounded to
// float, the second back up to 0x1000.
int getBatAmbient(float course_position, int length) {
    const double along = static_cast<double>(course_position) / length;
    if (along >= 0.5) {
        return common::truncateToInt((along - 0.5) * 8192.0);
    }
    return common::truncateToInt(8192.0 -
                                 (static_cast<double>(static_cast<float>(along)) * 16384.0));
}

} // namespace nocturne::core
