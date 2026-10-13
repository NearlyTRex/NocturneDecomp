#pragma once

#include "common/math/vector3i.h"

#include <array>

namespace nocturne::common {

// A rotation in 16.16 fixed point, by rows.
class CMatrix3x3i {
public:
    std::array<CVector3i, 3> m{};

    bool operator==(const CMatrix3x3i &) const = default;
};

} // namespace nocturne::common
