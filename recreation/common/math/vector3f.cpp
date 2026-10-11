#include "common/math/vector3f.h"

#include <cmath>

namespace nocturne::common {

// nocedit 0x00410380
float CVector3f::length() const {
    const auto dx = static_cast<double>(x);
    const auto dy = static_cast<double>(y);
    const auto dz = static_cast<double>(z);
    return static_cast<float>(std::sqrt((dy * dy) + (dx * dx) + (dz * dz)));
}

// nocedit 0x004103b0
void CVector3f::zero() {
    *this = {};
}

// nocedit 0x004103d0
CVector3i CVector3f::toFixed8() const {
    constexpr float kOne = 256.0F;
    return {.x = static_cast<int>(std::nearbyint(x * kOne)),
            .y = static_cast<int>(std::nearbyint(y * kOne)),
            .z = static_cast<int>(std::nearbyint(z * kOne))};
}

// nocedit 0x00571410
bool CVector3f::equals(const CVector3f &b) const {
    return x == b.x && y == b.y && z == b.z;
}

} // namespace nocturne::common
