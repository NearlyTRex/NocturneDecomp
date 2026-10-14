#include "common/math/matrix3x3f.h"

#include "common/math/math.h"

#include <cmath>
#include <cstddef>
#include <stdexcept>

namespace nocturne::common {
namespace {

// Rows of doubles: the original works at the x87's extended precision and stores floats.
struct SRows {
    std::array<std::array<double, 3>, 3> e{};
};

SRows widen(const std::array<CVector3f, 3> &m) {
    SRows rows;
    for (std::size_t r = 0; r < 3; ++r) {
        rows.e.at(r) = {static_cast<double>(m.at(r).x), static_cast<double>(m.at(r).y),
                        static_cast<double>(m.at(r).z)};
    }
    return rows;
}

CVector3f narrow(double x, double y, double z) {
    return {.x = static_cast<float>(x), .y = static_cast<float>(y), .z = static_cast<float>(z)};
}

// The original's sum order: z first, then x, then y.
double dot(const std::array<double, 3> &row, const CVector3f &v) {
    return (static_cast<double>(v.z) * row[2]) + (static_cast<double>(v.x) * row[0]) +
           (static_cast<double>(v.y) * row[1]);
}

} // namespace

// nocedit 0x00471d30
void CMatrix3x3f::buildRotationMatrix(const CVector3f &euler_angles) {
    const double sx = std::sin(static_cast<double>(euler_angles.x));
    const double sz = std::sin(static_cast<double>(euler_angles.z));
    const double sy = std::sin(static_cast<double>(euler_angles.y));
    const double cx = std::cos(static_cast<double>(euler_angles.x));
    const double cz = std::cos(static_cast<double>(euler_angles.z));
    const double cy = std::cos(static_cast<double>(euler_angles.y));
    m[0] = narrow((cy * cz) + (sy * sx * sz), (-cy * sz) + (sy * sx * cz), sy * cx);
    m[1] = narrow(sz * cx, cz * cx, -sx);
    m[2] = narrow((-sy * cz) + (cy * sx * sz), (sz * sy) + (cy * sx * cz), cy * cx);
}

// nocedit 0x00471fd0
CVector3f CMatrix3x3f::transformVector(const CVector3f &input) const {
    const SRows rows = widen(m);
    return narrow(dot(rows.e[0], input), dot(rows.e[1], input), dot(rows.e[2], input));
}

// nocedit 0x00472030
CVector3f CMatrix3x3f::transformVectorTranspose(const CVector3f &input) const {
    const SRows rows = widen(m);
    const std::array<double, 3> column_x = {rows.e[0][0], rows.e[1][0], rows.e[2][0]};
    const std::array<double, 3> column_y = {rows.e[0][1], rows.e[1][1], rows.e[2][1]};
    const std::array<double, 3> column_z = {rows.e[0][2], rows.e[1][2], rows.e[2][2]};
    return narrow(dot(column_x, input), dot(column_y, input), dot(column_z, input));
}

// nocedit 0x00472160
CVector3f CMatrix3x3f::getEulerAngles() const {
    constexpr float kRightAngle = 1.5707964F;
    const double sin_x = -static_cast<double>(m[1].z);
    CVector3f angles;
    double cos_x = 0.0;
    if (sin_x <= -1.0) {
        angles.x = -kRightAngle;
    } else if (sin_x >= 1.0) {
        angles.x = kRightAngle;
    } else {
        angles.x = static_cast<float>(std::asin(sin_x));
        cos_x = std::sqrt(1.0 - (sin_x * sin_x));
    }
    if (cos_x <= 0.0) {
        angles.y = angleFromSinCos(-static_cast<double>(m[2].x), static_cast<double>(m[0].x));
        return angles;
    }
    const double inverse = 1.0 / cos_x;
    angles.y = angleFromSinCos(static_cast<double>(m[0].z) * inverse,
                               static_cast<double>(m[2].z) * inverse);
    angles.z = angleFromSinCos(static_cast<double>(m[1].x) * inverse,
                               static_cast<double>(m[1].y) * inverse);
    return angles;
}

// nocedit 0x00471e10
void CMatrix3x3f::invert() {
    const SRows rows = widen(m);
    const auto &e = rows.e;
    const double determinant = (((e[1][0] * e[2][1]) - (e[1][1] * e[2][0])) * e[0][2]) +
                               ((((e[1][1] * e[2][2]) - (e[1][2] * e[2][1])) * e[0][0]) -
                                (((e[1][0] * e[2][2]) - (e[1][2] * e[2][0])) * e[0][1]));
    if (determinant == 0.0) {
        throw std::domain_error("CMatrix::invert - Singular matrix");
    }
    const double inverse = 1.0 / determinant;
    m[0] = narrow(((e[1][1] * e[2][2]) - (e[1][2] * e[2][1])) * inverse,
                  -((e[0][1] * e[2][2]) - (e[0][2] * e[2][1])) * inverse,
                  ((e[0][1] * e[1][2]) - (e[0][2] * e[1][1])) * inverse);
    m[1] = narrow(-((e[1][0] * e[2][2]) - (e[1][2] * e[2][0])) * inverse,
                  ((e[0][0] * e[2][2]) - (e[0][2] * e[2][0])) * inverse,
                  -((e[0][0] * e[1][2]) - (e[0][2] * e[1][0])) * inverse);
    m[2] = narrow(((e[1][0] * e[2][1]) - (e[1][1] * e[2][0])) * inverse,
                  -((e[0][0] * e[2][1]) - (e[0][1] * e[2][0])) * inverse,
                  ((e[0][0] * e[1][1]) - (e[0][1] * e[1][0])) * inverse);
}

// The original copied one word past the end of its output; this returns the product instead.
// nocedit 0x00472540
CMatrix3x3f CMatrix3x3f::multiply(const CMatrix3x3f &matrix_b) const {
    const SRows a = widen(m);
    const SRows b = widen(matrix_b.m);
    CMatrix3x3f product;
    for (std::size_t r = 0; r < 3; ++r) {
        const auto &row = a.e.at(r);
        product.m.at(r) =
            narrow((row[0] * b.e[0][0]) + (row[1] * b.e[1][0]) + (row[2] * b.e[2][0]),
                   (row[0] * b.e[0][1]) + (row[1] * b.e[1][1]) + (row[2] * b.e[2][1]),
                   (row[0] * b.e[0][2]) + (row[1] * b.e[1][2]) + (row[2] * b.e[2][2]));
    }
    return product;
}

} // namespace nocturne::common
