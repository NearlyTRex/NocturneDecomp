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
    // Some products take the second edge's x and z rounded to floats, and each component is
    // squared against its stored float, as the original's stores leave them.
    const double bx_stored = static_cast<float>(bx);
    const double bz_stored = static_cast<float>(bz);
    const double nx = (ay * bz_stored) - (by * az);
    const double ny = (bx * az) - (ax * bz_stored);
    const double nz = (ax * by) - (ay * bx_stored);
    const auto stored_x = static_cast<float>(nx);
    const auto stored_y = static_cast<float>(ny);
    const auto stored_z = static_cast<float>(nz);
    auto length =
        static_cast<float>(std::sqrt(((nx * stored_x) + (ny * stored_y)) + (nz * stored_z)));
    if (length == 0.0F) {
        length = 1.0F;
    }
    const double reciprocal = 1.0 / length;
    const double unit_x = -static_cast<double>(stored_x) * reciprocal;
    const double unit_y = -static_cast<double>(stored_y) * reciprocal;
    normal = {.x = static_cast<float>(unit_x),
              .y = static_cast<float>(unit_y),
              .z = static_cast<float>(-static_cast<double>(stored_z) * reciprocal)};
    plane_distance = static_cast<float>(((-(static_cast<double>(vertex1.x) * normal.x)) -
                                         (static_cast<double>(vertex1.y) * normal.y)) -
                                        (static_cast<double>(vertex1.z) * normal.z));
    // The first test takes x and y before they were stored.
    const double x = std::abs(unit_x);
    const float z = std::abs(normal.z);
    if (std::abs(unit_y) < x && z < x) {
        dominant_axis = 0;
        return;
    }
    const float y = std::abs(normal.y);
    dominant_axis = std::abs(normal.x) < y && z < y ? 1 : 2;
}

} // namespace nocturne::core
