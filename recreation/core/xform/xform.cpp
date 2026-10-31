#include "core/xform/xform.h"

#include "common/error/error.h"
#include "common/math/extendedfloat.h"
#include "common/math/matrix3x3f.h"

#include <cmath>
#include <cstddef>

namespace nocturne::core {
namespace {

// Beyond this the two rotations are too close for the arc to be measured, and the blend is linear.
constexpr double kNearlyParallel = 0.99999;

double widen(float value) {
    return static_cast<double>(value);
}

} // namespace

// nocedit 0x005f4dc0
common::CVector3f transformVector3x4(const common::CVector3f &input_vector,
                                     const common::CMatrix3x4f &matrix) {
    const auto row = [&input_vector](const std::array<float, 4> &m) {
        return static_cast<float>(
            (((widen(input_vector.y) * m[1]) + (widen(input_vector.x) * m[0])) +
             (widen(input_vector.z) * m[2])) +
            m[3]);
    };
    return {.x = row(matrix.m[0]), .y = row(matrix.m[1]), .z = row(matrix.m[2])};
}

// nocedit 0x005f4f10
common::CMatrix3x4f multiplyMatrix3x4(const common::CMatrix3x4f &matrix_a,
                                      const common::CMatrix3x4f &matrix_b) {
    common::CMatrix3x4f out;
    for (std::size_t r = 0; r < out.m.size(); ++r) {
        const std::array<float, 4> &b = matrix_b.m[r];
        for (std::size_t c = 0; c < 4; ++c) {
            const double sum =
                ((widen(b[2]) * matrix_a.m[2][c]) + (widen(b[0]) * matrix_a.m[0][c])) +
                (widen(b[1]) * matrix_a.m[1][c]);
            out.m[r][c] = static_cast<float>(c == 3 ? sum + b[3] : sum);
        }
    }
    return out;
}

// nocedit 0x005f5390
common::CMatrix3x4f buildMatrixFromEulerAndPosition(const common::CVector3f &position,
                                                    const common::CVector3f &euler_angles) {
    const double sx = std::sin(widen(euler_angles.x));
    const double cx = std::cos(widen(euler_angles.x));
    const double sz = std::sin(widen(euler_angles.z));
    const double cz = std::cos(widen(euler_angles.z));
    const double sy = std::sin(widen(euler_angles.y));
    const double cy = std::cos(widen(euler_angles.y));
    common::CMatrix3x4f out;
    out.m[0] = {static_cast<float>((cy * cz) + (sy * sx * sz)), static_cast<float>(sz * cx),
                static_cast<float>((-sy * cz) + (cy * sx * sz)), 0.0F};
    out.m[1] = {static_cast<float>((-cy * sz) + (sy * sx * cz)), static_cast<float>(cz * cx),
                static_cast<float>((sz * sy) + (cy * sx * cz)), 0.0F};
    out.m[2] = {static_cast<float>(sy * cx), static_cast<float>(-sx), static_cast<float>(cy * cx),
                0.0F};
    for (std::array<float, 4> &row : out.m) {
        row[3] =
            static_cast<float>(-(((widen(position.z) * row[2]) + (widen(position.x) * row[0])) +
                                 (widen(position.y) * row[1])));
    }
    return out;
}

// nocedit 0x005f61c0
double determinant(const common::CMatrix3x4f &matrix) {
    const auto &m = matrix.m;
    return (((widen(m[1][0]) * m[2][1]) - (widen(m[1][1]) * m[2][0])) * m[0][2]) +
           ((((widen(m[1][1]) * m[2][2]) - (widen(m[1][2]) * m[2][1])) * m[0][0]) -
            (((widen(m[1][0]) * m[2][2]) - (widen(m[1][2]) * m[2][0])) * m[0][1]));
}

// nocedit 0x005f6210
common::CMatrix3x4f inverse(const common::CMatrix3x4f &matrix_in) {
    const double det = determinant(matrix_in);
    if (det == 0.0) {
        common::displayErrorAndQuit("inverse() - Singular matrix");
    }
    const double scale = 1.0 / det;
    const auto &m = matrix_in.m;
    const auto cofactor = [scale](float a, float b, float c, float d, bool negate) {
        const double minor = (widen(a) * b) - (widen(c) * d);
        return static_cast<float>((negate ? -minor : minor) * scale);
    };
    common::CMatrix3x4f out;
    out.m[0] = {cofactor(m[1][1], m[2][2], m[1][2], m[2][1], false),
                cofactor(m[0][1], m[2][2], m[0][2], m[2][1], true),
                cofactor(m[0][1], m[1][2], m[0][2], m[1][1], false), 0.0F};
    out.m[1] = {cofactor(m[1][0], m[2][2], m[1][2], m[2][0], true),
                cofactor(m[0][0], m[2][2], m[0][2], m[2][0], false),
                cofactor(m[0][0], m[1][2], m[0][2], m[1][0], true), 0.0F};
    out.m[2] = {cofactor(m[1][0], m[2][1], m[1][1], m[2][0], false),
                cofactor(m[0][0], m[2][1], m[0][1], m[2][0], true),
                cofactor(m[0][0], m[1][1], m[0][1], m[1][0], false), 0.0F};
    // Each row takes z's term, then its own column's before the other's; the first row's own is 0.
    const auto translate = [&m](const std::array<float, 4> &row, std::size_t own,
                                std::size_t other) {
        return static_cast<float>(-(((widen(m[2][3]) * row[2]) + (widen(m[own][3]) * row[own])) +
                                    (widen(m[other][3]) * row[other])));
    };
    out.m[0][3] = translate(out.m[0], 0, 1);
    out.m[1][3] = translate(out.m[1], 1, 0);
    out.m[2][3] = translate(out.m[2], 1, 0);
    return out;
}

// nocedit 0x005f5370
void clearTranslation(common::CMatrix3x4f &matrix) {
    for (std::array<float, 4> &row : matrix.m) {
        row[3] = 0.0F;
    }
}

// CMatrix3x3f's reading of the rotation once each row is unit length; a zero row is left as it is.
// The original also wraps the x angle past -pi, which asin never reaches.
// nocedit 0x005f5690
common::CVector3f matrixToEulerAngles(const common::CMatrix3x4f &matrix_in) {
    common::Rows3x3d rows;
    for (std::size_t i = 0; i < rows.size(); ++i) {
        const std::array<float, 4> &row = matrix_in.m[i];
        const double length = std::sqrt(((widen(row[0]) * row[0]) + (widen(row[1]) * row[1])) +
                                        (widen(row[2]) * row[2]));
        const double scale = length > 0.0 ? 1.0 / length : length;
        rows[i] = {row[0] * scale, row[1] * scale, row[2] * scale};
    }
    return common::eulerAnglesFromRows(rows);
}

// nocedit 0x005f7280
void quaternionToMatrix3x3(common::CMatrix3x4f &matrix_out, const common::CQuaternion4f &quat_in) {
    const double w = quat_in.w;
    const double x = quat_in.x;
    const double y = quat_in.y;
    const double z = quat_in.z;
    const double s = 2.0 / ((z * z) + (y * y) + (w * w) + (x * x));
    auto &m = matrix_out.m;
    m[0][0] = static_cast<float>(1.0 - ((y * y * s) + (z * z * s)));
    m[0][1] = static_cast<float>((x * y * s) - (w * z * s));
    m[0][2] = static_cast<float>((x * z * s) + (w * y * s));
    m[1][0] = static_cast<float>((x * y * s) + (w * z * s));
    m[1][1] = static_cast<float>(1.0 - ((x * x * s) + (z * z * s)));
    m[1][2] = static_cast<float>((y * z * s) - (w * x * s));
    m[2][0] = static_cast<float>((x * z * s) - (w * y * s));
    m[2][1] = static_cast<float>((y * z * s) + (w * x * s));
    m[2][2] = static_cast<float>(1.0 - ((x * x * s) + (y * y * s)));
}

// nocedit 0x005f73e0
common::CMatrix3x4f quaternionToMatrix3x4(const common::CQuaternion4f &quat_in) {
    common::CMatrix3x4f matrix;
    quaternionToMatrix3x3(matrix, quat_in);
    clearTranslation(matrix);
    return matrix;
}

// nocedit 0x005f75e0
common::CQuaternion4f negateFirstComponent(const common::CQuaternion4f &vector_in) {
    return {.w = -vector_in.w, .x = vector_in.x, .y = vector_in.y, .z = vector_in.z};
}

// nocedit 0x005f7620
void setIdentityQuaternion(common::CQuaternion4f &quaternion) {
    quaternion = {.w = 1.0F};
}

// Each component's products summed at the x87's precision in the original's order, then stored.
// nocedit 0x005f7640
common::CQuaternion4f multiplyQuaternion(const common::CQuaternion4f &quat1_in,
                                         const common::CQuaternion4f &quat2_in) {
    const auto x = [](float value) { return common::CExtendedFloat(value); };
    const common::CQuaternion4f &a = quat1_in;
    const common::CQuaternion4f &b = quat2_in;
    return {
        .w = ((x(b.w) * x(a.w)) - (((x(b.x) * x(a.x)) + (x(b.y) * x(a.y))) + (x(b.z) * x(a.z))))
                 .toFloat(),
        .x = ((((x(b.w) * x(a.x)) + (x(a.w) * x(b.x))) + (x(b.y) * x(a.z))) - (x(b.z) * x(a.y)))
                 .toFloat(),
        .y = ((((x(b.w) * x(a.y)) + (x(a.w) * x(b.y))) + (x(b.z) * x(a.x))) - (x(b.x) * x(a.z)))
                 .toFloat(),
        .z = ((((x(b.w) * x(a.z)) + (x(a.w) * x(b.z))) + (x(b.x) * x(a.y))) - (x(b.y) * x(a.x)))
                 .toFloat(),
    };
}

// As the original's unordered compares do, a NaN t gives the second rotation and a NaN cosine
// takes the arc.
// nocedit 0x005f77e0
common::CQuaternion4f slerpQuaternion(const common::CQuaternion4f &quat1_in,
                                      const common::CQuaternion4f &quat2_in, float t) {
    if (t <= 0.0F) {
        return quat1_in;
    }
    if (!(t < 1.0F)) {
        return quat2_in;
    }
    common::CQuaternion4f target = quat2_in;
    double cosine = (((widen(quat1_in.x) * quat2_in.x) + (widen(quat1_in.y) * quat2_in.y)) +
                     (widen(quat1_in.z) * quat2_in.z)) +
                    (widen(quat1_in.w) * quat2_in.w);
    if (cosine < 0.0) {
        target = {.w = -target.w, .x = -target.x, .y = -target.y, .z = -target.z};
        cosine = -cosine;
    }
    double from_weight = 1.0 - t;
    double to_weight = t;
    if (!(cosine > kNearlyParallel)) {
        const double sine = std::sqrt(1.0 - (cosine * cosine));
        const double angle = std::atan2(sine, cosine);
        const double inverse_sine = 1.0 / sine;
        from_weight = std::sin((1.0 - t) * angle) * inverse_sine;
        to_weight = std::sin(t * angle) * inverse_sine;
    }
    const auto blend = [from_weight, to_weight](float a, float b) {
        return static_cast<float>((a * from_weight) + (b * to_weight));
    };
    return {.w = blend(quat1_in.w, target.w),
            .x = blend(quat1_in.x, target.x),
            .y = blend(quat1_in.y, target.y),
            .z = blend(quat1_in.z, target.z)};
}

// nocedit 0x005f7ac0
common::CVector3f quaternionToEulerAngles(const common::CQuaternion4f &quat_in) {
    return matrixToEulerAngles(quaternionToMatrix3x4(quat_in));
}

} // namespace nocturne::core
