#include "core/dtri/demontriangle.h"

#include <cmath>

namespace nocturne::core {

// nocedit 0x0049a790
void CDemonTriangle::buildCollision(const common::CVector3f &vertex1,
                                    const common::CVector3f &vertex2,
                                    const common::CVector3f &vertex3) {
    this->vertex1 = vertex1;
    this->vertex2 = vertex2;
    this->vertex3 = vertex3;
    calculateData();
}

// The normal faces against the winding of the first edge then the second; a degenerate triangle
// keeps its raw cross product, which is zero.
// nocedit 0x0049a640
void CDemonTriangle::calculateData() {
    const double ax = static_cast<double>(vertex2.x) - vertex1.x;
    const double ay = static_cast<double>(vertex2.y) - vertex1.y;
    const double az = static_cast<double>(vertex2.z) - vertex1.z;
    const double bx = static_cast<double>(vertex3.x) - vertex2.x;
    const double by = static_cast<double>(vertex3.y) - vertex2.y;
    const double bz = static_cast<double>(vertex3.z) - vertex2.z;
    const double nx = (ay * bz) - (by * az);
    const double ny = (bx * az) - (ax * bz);
    const double nz = (ax * by) - (bx * ay);
    double length = std::sqrt((nz * nz) + (ny * ny) + (nx * nx));
    if (length == 0.0) {
        length = 1.0;
    }
    normal = {.x = static_cast<float>(-nx / length),
              .y = static_cast<float>(-ny / length),
              .z = static_cast<float>(-nz / length)};
    plane_distance = static_cast<float>(((-(static_cast<double>(vertex1.x) * normal.x)) -
                                         (static_cast<double>(vertex1.y) * normal.y)) -
                                        (static_cast<double>(vertex1.z) * normal.z));
    const float x = std::abs(normal.x);
    const float y = std::abs(normal.y);
    const float z = std::abs(normal.z);
    if (y < x && z < x) {
        dominant_axis = 0;
    } else if (x < y && z < y) {
        dominant_axis = 1;
    } else {
        dominant_axis = 2;
    }
}

} // namespace nocturne::core
