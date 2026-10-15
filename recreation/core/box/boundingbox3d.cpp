#include "core/box/boundingbox3d.h"

#include <algorithm>
#include <cmath>

namespace nocturne::core {

// A NaN on either side of a min test stores the point, as the original's unordered compare does.
// nocedit 0x00420240
void CBoundingBox3D::expand(const common::CVector3f &point) {
    if (!std::isgreaterequal(point.x, min.x)) {
        min.x = point.x;
    }
    max.x = std::max(max.x, point.x);
    if (!std::isgreaterequal(point.y, min.y)) {
        min.y = point.y;
    }
    max.y = std::max(max.y, point.y);
    if (!std::isgreaterequal(point.z, min.z)) {
        min.z = point.z;
    }
    max.z = std::max(max.z, point.z);
}

} // namespace nocturne::core
