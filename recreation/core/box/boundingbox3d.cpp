#include "core/box/boundingbox3d.h"

#include <algorithm>

namespace nocturne::core {

// nocedit 0x00420240
void CBoundingBox3D::expand(const common::CVector3f &point) {
    min.x = std::min(min.x, point.x);
    max.x = std::max(max.x, point.x);
    min.y = std::min(min.y, point.y);
    max.y = std::max(max.y, point.y);
    min.z = std::min(min.z, point.z);
    max.z = std::max(max.z, point.z);
}

} // namespace nocturne::core
