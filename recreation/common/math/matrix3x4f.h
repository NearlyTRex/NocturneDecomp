#pragma once

#include <array>

namespace nocturne::common {

// Three rows, each three rotation columns then a translation; a point transforms by row.
class CMatrix3x4f {
public:
    std::array<std::array<float, 4>, 3> m{};

    bool operator==(const CMatrix3x4f &) const = default;
};

} // namespace nocturne::common
