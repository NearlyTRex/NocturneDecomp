#pragma once

namespace nocturne::common {

// The angle whose sine and cosine are y and x, in -pi..pi radians. Each is clamped to its
// range, and near the poles the angle comes from the cosine, where asin loses precision.
[[nodiscard]] float angleFromSinCos(double y, double x);

// value as the original leaves it after storing it to a 32-bit float.
[[nodiscard]] constexpr double roundToFloat(double value) {
    return static_cast<double>(static_cast<float>(value));
}

} // namespace nocturne::common
