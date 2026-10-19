#include "common/math/fixed.h"
#include "common/math/matrix3x3f.h"
#include "common/math/matrix3x3i.h"
#include "common/math/vector3f.h"
#include "common/math/vector3i.h"
#include "engine/2d/2d.h"
#include "engine/3d/3d.h"
#include "engine/drender/demonrenderer.h"
#include "engine/matrix/matrix.h"

#include <cstdint>

namespace nocturne::engine {
namespace {

using common::CVector3f;
using common::CVector3i;
using common::truncateToInt;

// World units to the 24.8 fixed point the software renderer works in.
constexpr double kWorldToFixed = 256.0;
constexpr double kFixedOne = 65536.0;
// Radians to the matrix code's 65536-to-a-turn angles: over pi, then half a turn. The original's
// 1/pi is off in the eleventh place.
constexpr double kInversePi = 0.318309886192889;
constexpr double kHalfTurn = 32768.0;
// The field of view that gives the unit projection scale.
constexpr double kUnitFieldOfView = 18.0;

int toAngle(float radians) {
    return truncateToInt(static_cast<double>(radians) * kInversePi * kHalfTurn);
}

CVector3i toFixed(const CVector3f &v) {
    return {.x = truncateToInt(static_cast<double>(v.x) * kWorldToFixed),
            .y = truncateToInt(static_cast<double>(v.y) * kWorldToFixed),
            .z = truncateToInt(static_cast<double>(v.z) * kWorldToFixed)};
}

CVector3i toFixedRow(const CVector3f &row) {
    return {.x = truncateToInt(static_cast<double>(row.x) * kFixedOne),
            .y = truncateToInt(static_cast<double>(row.y) * kFixedOne),
            .z = truncateToInt(static_cast<double>(row.z) * kFixedOne)};
}

} // namespace

// nocedit 0x0048c150
void CDemonRenderer::setCameraOriginFromScaledPoint(const CVector3f &point) {
    const CVector3i origin = toFixed(point);
    matrix_.setCameraOrigin(origin.x, origin.y, origin.z);
}

// nocedit 0x0048c1d0
void CDemonRenderer::setupSceneRendering(const CVector3f &euler_angles) {
    common::CMatrix3x3f rotation;
    rotation.buildRotationMatrix(euler_angles);
    setupCameraAndProjection(rotation);
}

// nocedit 0x0048c200
void CDemonRenderer::setupCameraAndProjection(const common::CMatrix3x3f &transform_matrix) {
    const CVector3f angles = transform_matrix.getEulerAngles();
    common::CMatrix3x3i transform{.m = {toFixedRow(transform_matrix.m[0]),
                                        toFixedRow(transform_matrix.m[1]),
                                        toFixedRow(transform_matrix.m[2])}};
    matrix_.storeCameraRotation(
        {.x = toAngle(angles.x), .y = toAngle(angles.z), .z = toAngle(angles.y)});

    const std::int64_t scale = matrix_.getProjectionScale();
    const auto x_scale = static_cast<std::int32_t>((std::int64_t{1} << 32) / scale);
    const SClipRect clip = two_d_.getClipRect();
    // The width is shifted in 32 bits before the divide, as the original's SHL wraps it.
    const auto width =
        static_cast<std::int32_t>(static_cast<std::uint32_t>(clip.right - clip.left + 1) << 16U);
    const std::int32_t aspect = width / (clip.bottom - clip.top + 1);
    const auto y_scale = static_cast<std::int32_t>((std::int64_t{aspect} * 0x10000) / scale);
    for (CVector3i &row : transform.m) {
        row.x = common::fixedMultiply(x_scale, row.x);
        row.y = common::fixedMultiply(y_scale, row.y);
    }
    matrix_.setTransformMatrix(transform);
    matrix_.invertTransformMatrix();
}

// nocedit 0x0048c450
void CDemonRenderer::processCameraRelativeVertex(const CVector3f &world_position) {
    three_d_.processCameraRelativePoint(toFixed(world_position));
}

// The angles go to the matrix code as x, z, y.
// nocedit 0x0048c4f0
void CDemonRenderer::applyScaledTransform(const CVector3f &euler_angles,
                                          const CVector3f *translation) {
    const CVector3i move = translation != nullptr ? toFixed(*translation) : CVector3i{};
    matrix_.matrixPushAndTransform(toAngle(euler_angles.x), toAngle(euler_angles.z),
                                   toAngle(euler_angles.y), move.x, move.y, move.z);
}

// nocedit 0x0048c630
void CDemonRenderer::matrixPush() {
    matrix_.matrixPush();
}

// nocedit 0x0048c640
void CDemonRenderer::matrixPop() {
    matrix_.pop();
}

// nocedit 0x0048c650
void CDemonRenderer::setProjectionScale(float field_of_view) {
    matrix_.setProjectionScale(
        truncateToInt(kUnitFieldOfView / static_cast<double>(field_of_view) * kFixedOne));
}

// nocedit 0x0048c760
CVector3i CDemonRenderer::getCameraOriginFixed() const {
    return matrix_.getCameraOrigin();
}

// nocedit 0x0048c890
void CDemonRenderer::pushViewport(int x, int y, int width, int height) {
    matrix_.pushViewport(x, y, width, height);
}

// nocedit 0x0048c8c0
void CDemonRenderer::popViewport() {
    matrix_.popViewport();
}

} // namespace nocturne::engine
