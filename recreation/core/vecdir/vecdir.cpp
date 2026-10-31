#include "core/vecdir/vecdir.h"

#include "common/math/vector3f.h"

#include <cmath>
#include <numbers>

namespace nocturne::core {

// nocedit 0x005e7830
common::CVector3f
convertDirectionVectorToEulerAngles(const common::CVector3f &in_direction_vector) {
    const auto x = static_cast<double>(in_direction_vector.x);
    const auto y = static_cast<double>(in_direction_vector.y);
    const auto z = static_cast<double>(in_direction_vector.z);
    if (x == 0.0 && z == 0.0) {
        const auto quarter = static_cast<float>(std::numbers::pi / 2.0);
        return {.x = y > 0.0 ? -quarter : quarter};
    }
    return {.x = static_cast<float>(-std::atan2(y, std::sqrt((x * x) + (z * z)))),
            .y = static_cast<float>(std::atan2(x, z))};
}

} // namespace nocturne::core
