#include "common/math/matrix3x3f.h"

#include "common/math/math.h"

#include <cmath>
#include <cstddef>
#include <stdexcept>

namespace nocturne::common {
namespace {

Rows3x3d widen(const std::array<CVector3f, 3> &m) {
    Rows3x3d rows;
    for (std::size_t r = 0; r < 3; ++r) {
        rows.at(r) = {static_cast<double>(m.at(r).x), static_cast<double>(m.at(r).y),
                      static_cast<double>(m.at(r).z)};
    }
    return rows;
}

CVector3f narrow(double x, double y, double z) {
    return {.x = static_cast<float>(x), .y = static_cast<float>(y), .z = static_cast<float>(z)};
}

// The original's sum order: y and x first, then z.
double dot(const std::array<double, 3> &row, const CVector3f &v) {
    return ((static_cast<double>(v.y) * row[1]) + (static_cast<double>(v.x) * row[0])) +
           (static_cast<double>(v.z) * row[2]);
}

} // namespace

// The original stores sin x, sin y, sin z, cos y and cos z to floats before most of their uses.
// nocedit 0x00471d30
void CMatrix3x3f::buildRotationMatrix(const CVector3f &euler_angles) {
    const double sx = std::sin(static_cast<double>(euler_angles.x));
    const double sz = std::sin(static_cast<double>(euler_angles.z));
    const double sy = std::sin(static_cast<double>(euler_angles.y));
    const double cx = std::cos(static_cast<double>(euler_angles.x));
    const double cz = std::cos(static_cast<double>(euler_angles.z));
    const double cy = std::cos(static_cast<double>(euler_angles.y));
    const double sxf = roundToFloat(sx);
    const double syf = roundToFloat(sy);
    const double szf = roundToFloat(sz);
    const double cyf = roundToFloat(cy);
    const double czf = roundToFloat(cz);
    const double sy_sx = sy * sxf;
    const double cy_sx = cy * sxf;
    m[0] = narrow((sy_sx * szf) + (cyf * czf), (sy_sx * czf) + (-cyf * szf), syf * cx);
    m[1] = narrow(sz * cx, cz * cx, -sxf);
    m[2] = narrow((cy_sx * szf) + (-syf * czf), (cy_sx * czf) + (szf * syf), cyf * cx);
}

// nocedit 0x00471fd0
CVector3f CMatrix3x3f::transformVector(const CVector3f &input) const {
    const Rows3x3d rows = widen(m);
    return narrow(dot(rows[0], input), dot(rows[1], input), dot(rows[2], input));
}

// nocedit 0x00472030
CVector3f CMatrix3x3f::transformVectorTranspose(const CVector3f &input) const {
    const Rows3x3d rows = widen(m);
    const std::array<double, 3> column_x = {rows[0][0], rows[1][0], rows[2][0]};
    const std::array<double, 3> column_y = {rows[0][1], rows[1][1], rows[2][1]};
    const std::array<double, 3> column_z = {rows[0][2], rows[1][2], rows[2][2]};
    return narrow(dot(column_x, input), dot(column_y, input), dot(column_z, input));
}

// nocedit 0x00472160
CVector3f CMatrix3x3f::getEulerAngles() const {
    return eulerAnglesFromRows(widen(m));
}

// A NaN sine counts as straight down, as the original's unordered compare does.
CVector3f eulerAnglesFromRows(const Rows3x3d &rows) {
    constexpr float kRightAngle = 1.5707964F;
    const double sin_x = -rows[1][2];
    CVector3f angles;
    double cos_x = 0.0;
    if (!(sin_x > -1.0)) {
        angles.x = -kRightAngle;
    } else if (sin_x >= 1.0) {
        angles.x = kRightAngle;
    } else {
        angles.x = static_cast<float>(std::asin(sin_x));
        cos_x = std::sqrt(1.0 - (sin_x * sin_x));
    }
    if (cos_x <= 0.0) {
        angles.y = angleFromSinCos(-rows[2][0], rows[0][0]);
        return angles;
    }
    const double inverse = 1.0 / cos_x;
    angles.y = angleFromSinCos(rows[0][2] * inverse, rows[2][2] * inverse);
    angles.z = angleFromSinCos(rows[1][0] * inverse, rows[1][1] * inverse);
    return angles;
}

// The original stores the determinant, its reciprocal and six of the nine cofactors as floats,
// so a determinant that underflows a float is singular.
// nocedit 0x00471e10
void CMatrix3x3f::invert() {
    const Rows3x3d e = widen(m);
    const double c00 = (e[1][1] * e[2][2]) - (e[1][2] * e[2][1]);
    const double c10 = (e[1][0] * e[2][2]) - (e[1][2] * e[2][0]);
    const double c20 = (e[1][0] * e[2][1]) - (e[1][1] * e[2][0]);
    const double determinant = roundToFloat(((c00 * e[0][0]) - (c10 * e[0][1])) + (c20 * e[0][2]));
    if (determinant == 0.0) {
        throw std::domain_error("CMatrix::invert - Singular matrix");
    }
    const double inverse = roundToFloat(1.0 / determinant);
    m[0] = narrow(roundToFloat(c00) * inverse,
                  roundToFloat(-((e[0][1] * e[2][2]) - (e[0][2] * e[2][1]))) * inverse,
                  roundToFloat((e[0][1] * e[1][2]) - (e[0][2] * e[1][1])) * inverse);
    m[1] =
        narrow(roundToFloat(-c10) * inverse, ((e[0][0] * e[2][2]) - (e[0][2] * e[2][0])) * inverse,
               -((e[0][0] * e[1][2]) - (e[0][2] * e[1][0])) * inverse);
    m[2] = narrow(roundToFloat(c20) * inverse,
                  roundToFloat(-((e[0][0] * e[2][1]) - (e[0][1] * e[2][0]))) * inverse,
                  roundToFloat((e[0][0] * e[1][1]) - (e[0][1] * e[1][0])) * inverse);
}

// The original copied one word past the end of its output; this returns the product instead.
// nocedit 0x00472540
CMatrix3x3f CMatrix3x3f::multiply(const CMatrix3x3f &matrix_b) const {
    const Rows3x3d a = widen(m);
    const Rows3x3d b = widen(matrix_b.m);
    CMatrix3x3f product;
    for (std::size_t r = 0; r < 3; ++r) {
        const auto &row = a.at(r);
        product.m.at(r) = narrow((row[0] * b[0][0]) + (row[1] * b[1][0]) + (row[2] * b[2][0]),
                                 (row[0] * b[0][1]) + (row[1] * b[1][1]) + (row[2] * b[2][1]),
                                 (row[0] * b[0][2]) + (row[1] * b[1][2]) + (row[2] * b[2][2]));
    }
    return product;
}

} // namespace nocturne::common
