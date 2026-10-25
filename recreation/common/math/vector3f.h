#pragma once

#include "common/math/vector3i.h"

namespace nocturne::common {

// The original computes these in the x87's extended precision and stores floats; the bodies
// work in double, the closest portable stand-in.
class CVector3f {
public:
    // The original's zero vectors were statics zeroed at startup; a default CVector3f is one.
    // nocedit 0x00472680
    // nocedit 0x005e7810
    float x = 0.0F;
    float y = 0.0F;
    float z = 0.0F;

    [[nodiscard]] float length() const;
    void zero();
    // 8.8 fixed point, rounded to nearest with ties to even.
    [[nodiscard]] CVector3i toFixed8() const;
    // Exact comparison, where a NaN on either side counts as equal, as the original's unordered
    // compare does.
    [[nodiscard]] bool equals(const CVector3f &b) const;
};

} // namespace nocturne::common
