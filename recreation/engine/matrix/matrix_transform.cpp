#include "common/error/error.h"
#include "common/math/fixed.h"
#include "common/math/math.h"
#include "engine/light/light.h"
#include "engine/matrix/matrix.h"

#include <cstddef>

namespace nocturne::engine {
namespace {

using common::CMatrix3x3i;
using common::CVector3i;
using common::fixedMultiply;
using common::roundToFloat;
using common::truncateToInt;
using common::wrappingAdd;

constexpr double kFixedOne = 65536.0;

int dot(const CVector3i &row, int x, int y, int z) {
    return wrappingAdd(wrappingAdd(fixedMultiply(row.x, x), fixedMultiply(row.y, y)),
                       fixedMultiply(row.z, z));
}

CVector3i rotate(const CMatrix3x3i &rotation, const CVector3i &v) {
    return {.x = dot(rotation.m[0], v.x, v.y, v.z),
            .y = dot(rotation.m[1], v.x, v.y, v.z),
            .z = dot(rotation.m[2], v.x, v.y, v.z)};
}

// rotation times matrix: each result row mixes the matrix's rows by one row of the rotation.
CMatrix3x3i multiply(const CMatrix3x3i &rotation, const CMatrix3x3i &matrix) {
    CMatrix3x3i result;
    for (std::size_t i = 0; i < result.m.size(); ++i) {
        const CVector3i &r = rotation.m[i];
        result.m[i] = {.x = dot(r, matrix.m[0].x, matrix.m[1].x, matrix.m[2].x),
                       .y = dot(r, matrix.m[0].y, matrix.m[1].y, matrix.m[2].y),
                       .z = dot(r, matrix.m[0].z, matrix.m[1].z, matrix.m[2].z)};
    }
    return result;
}

// The rotation the original builds from each angle's sine and cosine, term for term.
CMatrix3x3i buildRotation(int sin_x, int cos_x, int sin_y, int cos_y, int sin_z, int cos_z) {
    const int sin_y_sin_x = fixedMultiply(sin_y, sin_x);
    const int cos_y_sin_x = fixedMultiply(cos_y, sin_x);
    CMatrix3x3i rotation;
    rotation.m[0] = {
        .x = wrappingAdd(fixedMultiply(cos_y, cos_z), fixedMultiply(sin_y_sin_x, sin_z)),
        .y = fixedMultiply(cos_x, sin_y),
        .z = wrappingAdd(fixedMultiply(cos_y, -sin_z), fixedMultiply(sin_y_sin_x, cos_z))};
    rotation.m[1] = {
        .x = wrappingAdd(fixedMultiply(sin_y, -cos_z), fixedMultiply(cos_y_sin_x, sin_z)),
        .y = fixedMultiply(cos_x, cos_y),
        .z = wrappingAdd(fixedMultiply(sin_z, sin_y), fixedMultiply(cos_y_sin_x, cos_z))};
    rotation.m[2] = {
        .x = fixedMultiply(cos_x, sin_z), .y = -sin_x, .z = fixedMultiply(cos_x, cos_z)};
    return rotation;
}

} // namespace

void CMatrix::pushTransformState() {
    matrix_stack_[matrix_stack_index_] = {.transform = transform_matrix_,
                                          .relative_origin = relative_origin_,
                                          .light_direction = light_.getLightDirection()};
    ++matrix_stack_index_;
    if (matrix_stack_index_ >= kMatrixStackSize) {
        common::displayErrorAndQuit("Matrix unbalance");
    }
}

// The original also kept the three angles, which nothing read.
// nocedit 0x0050cee0
void CMatrix::matrixPushAndTransform(int rot_x, int rot_y, int rot_z, int translate_x,
                                     int translate_y, int translate_z) {
    pushTransformState();
    const CVector3i moved{.x = common::wrappingSubtract(relative_origin_.x, translate_x),
                          .y = common::wrappingSubtract(relative_origin_.y, translate_y),
                          .z = common::wrappingSubtract(relative_origin_.z, translate_z)};
    if (rot_x == 0 && rot_y == 0 && rot_z == 0) {
        relative_origin_ = moved;
        return;
    }
    const CMatrix3x3i rotation =
        buildRotation(interpolatedSin(rot_x), interpolatedCos(rot_x), interpolatedSin(rot_y),
                      interpolatedCos(rot_y), interpolatedSin(rot_z), interpolatedCos(rot_z));
    light_.setLightDirection(rotate(rotation, light_.getLightDirection()));
    transform_matrix_ = multiply(rotation, transform_matrix_);
    relative_origin_ = rotate(rotation, moved);
}

// nocedit 0x0050d620
void CMatrix::matrixPush() {
    pushTransformState();
}

// nocedit 0x0050d720
void CMatrix::pop() {
    if (matrix_stack_index_ == 0) {
        common::displayErrorAndQuit("Matrix unbalance2");
    }
    --matrix_stack_index_;
    const STransformState &saved = matrix_stack_[matrix_stack_index_];
    transform_matrix_ = saved.transform;
    relative_origin_ = saved.relative_origin;
    light_.setLightDirection(saved.light_direction);
}

// The original also copied the transform into a global nothing reads. It stores the elements,
// the determinant, the scale and six of the cofactors as floats.
// nocedit 0x0050c640
void CMatrix::invertTransformMatrix() {
    const auto loaded = [this](std::size_t row, int CVector3i::*column) {
        return static_cast<double>(transform_matrix_.m[row].*column) / kFixedOne;
    };
    const auto e = [&loaded](std::size_t row, int CVector3i::*column) {
        return roundToFloat(loaded(row, column));
    };
    const double e00 = e(0, &CVector3i::x);
    const double e01 = e(0, &CVector3i::y);
    const double e02 = e(0, &CVector3i::z);
    const double e10 = e(1, &CVector3i::x);
    const double e11 = e(1, &CVector3i::y);
    const double e12 = e(1, &CVector3i::z);
    const double e20 = e(2, &CVector3i::x);
    const double e21 = e(2, &CVector3i::y);
    const double e22 = e(2, &CVector3i::z);
    // Two products take e01 and e10 as loaded, before they are stored.
    const double e01_loaded = loaded(0, &CVector3i::y);
    const double c00 = roundToFloat(roundToFloat(e11 * e22) - (e12 * e21));
    const double c10 = (loaded(1, &CVector3i::x) * e22) - (e12 * e20);
    const double c20 = roundToFloat(roundToFloat(e10 * e21) - (e11 * e20));
    const double determinant = roundToFloat(((e00 * c00) - (e01 * c10)) + (e02 * c20));
    const double f = roundToFloat(kFixedOne / determinant);
    inverse_matrix_.m[0] = {
        .x = truncateToInt(c00 * f),
        .y = truncateToInt(roundToFloat(-((e01_loaded * e22) - (e02 * e21))) * f),
        .z = truncateToInt(((e01 * e12) - (e02 * e11)) * f)};
    inverse_matrix_.m[1] = {.x = truncateToInt(roundToFloat(-c10) * f),
                            .y = truncateToInt(roundToFloat((e00 * e22) - (e02 * e20)) * f),
                            .z = truncateToInt(-((e00 * e12) - (e02 * e10)) * f)};
    inverse_matrix_.m[2] = {.x = truncateToInt(c20 * f),
                            .y = truncateToInt(roundToFloat(-((e00 * e21) - (e01 * e20))) * f),
                            .z = truncateToInt(roundToFloat((e00 * e11) - (e01 * e10)) * f)};
}

const common::CMatrix3x3i &CMatrix::getTransformMatrix() const {
    return transform_matrix_;
}

void CMatrix::setTransformMatrix(const common::CMatrix3x3i &transform) {
    transform_matrix_ = transform;
}

const common::CVector3i &CMatrix::getRelativeOrigin() const {
    return relative_origin_;
}

void CMatrix::setRelativeOrigin(const common::CVector3i &origin) {
    relative_origin_ = origin;
}

const common::CMatrix3x3i &CMatrix::getInverseMatrix() const {
    return inverse_matrix_;
}

} // namespace nocturne::engine
