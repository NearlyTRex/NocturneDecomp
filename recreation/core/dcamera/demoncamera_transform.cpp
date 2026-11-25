#include "common/math/extendedfloat.h"
#include "common/math/fixed.h"
#include "common/math/matrix3x3i.h"
#include "common/math/vector3i.h"
#include "core/dcamera/demoncamera.h"
#include "engine/2d/2d.h"
#include "engine/drender/demonrenderer.h"
#include "engine/matrix/matrix.h"
#include "engine/screendevice.h"

#include <cstddef>
#include <cstdint>
#include <span>

namespace nocturne::core {
namespace {

using common::CExtendedFloat;

constexpr double kFixedToFloat = 1.0 / 65536.0;
constexpr double kFloatToFixed = 65536.0;
constexpr int kFixedShift = 16;
// The depth a point where nothing was drawn takes, and what each z-buffer word divides.
constexpr int kFarthestDepth = 0x7fffffff;

// 16.16 as the x87 loads it: exact.
[[nodiscard]] CExtendedFloat fromFixed(int value) {
    return CExtendedFloat(static_cast<double>(value)) * CExtendedFloat(kFixedToFloat);
}

[[nodiscard]] CExtendedFloat load(float value) {
    return CExtendedFloat(static_cast<double>(value));
}

// The 64-bit sum of the three products, its bits 16 to 47 kept, as SHRD leaves them.
[[nodiscard]] std::int32_t dotFixed(const common::CVector3i &point, int a, int b, int c) {
    const std::uint64_t sum = static_cast<std::uint64_t>(std::int64_t{point.x} * a) +
                              static_cast<std::uint64_t>(std::int64_t{point.y} * b) +
                              static_cast<std::uint64_t>(std::int64_t{point.z} * c);
    return static_cast<std::int32_t>(static_cast<std::uint32_t>(sum >> kFixedShift));
}

// Each product's bits 16 to 47, as SHRD leaves them, summed as the 32-bit adds wrap.
[[nodiscard]] std::int32_t dotEachFixed(const common::CVector3i &point, int a, int b, int c) {
    const auto shifted = [](std::int64_t product) {
        return static_cast<std::int32_t>(
            static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> kFixedShift));
    };
    return common::wrappingAdd(
        common::wrappingAdd(shifted(std::int64_t{point.x} * a), shifted(std::int64_t{point.y} * b)),
        shifted(std::int64_t{point.z} * c));
}

// Inside the frustum's sides: the depth positive and each offset within it.
[[nodiscard]] bool isInsideFrustum(const common::CVector3i &eye) {
    return eye.z > 0 && eye.x < eye.z && -eye.z < eye.x && eye.y < eye.z && -eye.z < eye.y;
}

// Offset from the projection's centre, scaled by the depth back to the eye's plane. The quotient
// fits whenever the point is on the screen.
[[nodiscard]] std::int32_t unproject(int screen, int center, int half_extent, int depth) {
    return static_cast<std::int32_t>(
        (std::int64_t{common::wrappingSubtract(screen, center)} * depth) / half_extent);
}

} // namespace

// nocedit 0x0044d1c0
// bw1 0x0044dc90
// bw2 0x0043c5d0
// bw3 0x00449dd0
void CDemonCamera::updateTransformMatrices() {
    source_matrix_ = owners_.matrix.getTransformMatrix();
    camera_origin_ = owners_.renderer.getCameraOriginFixed();
    cached_projection_ = owners_.two_d.getProjection();
    calculateInverseTransform();
}

// The cofactors in floats over the determinant, each entry chopped. Three products take the
// matrix's own 16.16 value where the rest take its float, as the x87 kept them.
// nocedit 0x0044cf20
void CDemonCamera::calculateInverseTransform() {
    const common::CMatrix3x3i &source = source_matrix_;
    const CExtendedFloat a1 = fromFixed(source.m[0].y);
    const CExtendedFloat b0 = fromFixed(source.m[1].x);
    const CExtendedFloat b2 = fromFixed(source.m[1].z);
    const CExtendedFloat a0f = load(fromFixed(source.m[0].x).toFloat());
    const CExtendedFloat a1f = load(a1.toFloat());
    const CExtendedFloat a2f = load(fromFixed(source.m[0].z).toFloat());
    const CExtendedFloat b0f = load(b0.toFloat());
    const CExtendedFloat b1f = load(fromFixed(source.m[1].y).toFloat());
    const CExtendedFloat b2f = load(b2.toFloat());
    const CExtendedFloat c0f = load(fromFixed(source.m[2].x).toFloat());
    const CExtendedFloat c1f = load(fromFixed(source.m[2].y).toFloat());
    const CExtendedFloat c2f = load(fromFixed(source.m[2].z).toFloat());

    const float d0 = ((b1f * c2f) - (b2 * c1f)).toFloat();
    const float d1 = ((b0 * c2f) - (b2f * c0f)).toFloat();
    const float d2 = (load((b0f * c1f).toFloat()) - (b1f * c0f)).toFloat();
    const float g = ((a1 * c2f) - (a2f * c1f)).toFloat();
    const float h = ((a0f * c2f) - (a2f * c0f)).toFloat();
    const float n = ((a0f * c1f) - (a1f * c0f)).toFloat();
    const float j = ((a1f * b2f) - (a2f * b1f)).toFloat();
    const float i = ((a0f * b2f) - (a2f * b0f)).toFloat();
    const float p = ((a0f * b1f) - (a1f * b0f)).toFloat();
    const CExtendedFloat minor_sum = (a0f * load(d0)) - (a1f * load(d1));
    const float determinant = (minor_sum + (a2f * load(d2))).toFloat();
    const CExtendedFloat scale =
        load((CExtendedFloat(kFloatToFixed) / load(determinant)).toFloat());
    const auto entry = [&](float cofactor) { return (load(cofactor) * scale).truncateToInt(); };

    common::CMatrix3x3i &inverse = inverted_matrix_;
    inverse.m[0] = {.x = entry(d0), .y = entry(-g), .z = entry(j)};
    inverse.m[1] = {.x = entry(-d1), .y = entry(h), .z = entry(-i)};
    inverse.m[2] = {.x = entry(d2), .y = entry(-n), .z = entry(p)};
}

// deferred: the camera's viewport origin added to the point before the depth is read, as retail
//   has it (its reinitCamera sets the origin), with the viewport origin in beginScene and endScene
// nocedit 0x0044d2a0
// bw1 0x0044dd70
// bw2 0x0043c6b0
// bw3 0x00449eb0
int CDemonCamera::screenToWorldCoord(int screen_x, int screen_y, common::CVector3i *output_ptr) {
    const std::span<std::uint32_t *> depth_rows = owners_.screen.getZBufferRows();
    const std::uint32_t stored =
        depth_rows[static_cast<std::size_t>(screen_y)][static_cast<std::size_t>(screen_x)];
    const int depth =
        stored == 0 ? kFarthestDepth : kFarthestDepth / static_cast<std::int32_t>(stored);
    *output_ptr = {.x = screen_x << kFixedShift, .y = screen_y << kFixedShift, .z = depth};
    return depth;
}

// nocedit 0x0044d370
common::CVector3i *CDemonCamera::screenToWorldTransform(common::CVector3i *input_ptr,
                                                        common::CVector3i *output_ptr) {
    const engine::SProjectionParams &projection = cached_projection_;
    const int depth = input_ptr->z;
    const common::CVector3i eye{
        .x = unproject(input_ptr->x, projection.center_x_fixed, projection.half_width_fixed, depth),
        .y = unproject(input_ptr->y, projection.center_y_fixed, projection.neg_half_height_fixed,
                       depth),
        .z = depth};
    const common::CMatrix3x3i &inverse = inverted_matrix_;
    *output_ptr = {
        .x = common::wrappingAdd(camera_origin_.x,
                                 dotFixed(eye, inverse.m[0].x, inverse.m[1].x, inverse.m[2].x)),
        .y = common::wrappingAdd(camera_origin_.y,
                                 dotFixed(eye, inverse.m[0].y, inverse.m[1].y, inverse.m[2].y)),
        .z = common::wrappingAdd(camera_origin_.z,
                                 dotFixed(eye, inverse.m[0].z, inverse.m[1].z, inverse.m[2].z))};
    return output_ptr;
}

// deferred: a point projected through the alpha pass's own transform while the renderer's alpha
//   mask is set, with setAlphaMask's callers and saveAlphaTransform
// nocedit 0x0044d7d0
// bw1 0x0044e2a0
// bw2 0x0043cbe0
// bw3 0x0044a3e0
common::CVector3i *CDemonCamera::worldToScreenWithFrustumCull(common::CVector3i *input_ptr,
                                                              common::CVector3i *output_ptr) {
    const common::CVector3i offset{.x = common::wrappingSubtract(input_ptr->x, camera_origin_.x),
                                   .y = common::wrappingSubtract(input_ptr->y, camera_origin_.y),
                                   .z = common::wrappingSubtract(input_ptr->z, camera_origin_.z)};
    const common::CMatrix3x3i &source = source_matrix_;
    const common::CVector3i eye{
        .x = dotEachFixed(offset, source.m[0].x, source.m[1].x, source.m[2].x),
        .y = dotEachFixed(offset, source.m[0].y, source.m[1].y, source.m[2].y),
        .z = dotEachFixed(offset, source.m[0].z, source.m[1].z, source.m[2].z)};
    if (!isInsideFrustum(eye)) {
        *output_ptr = {};
        return output_ptr;
    }
    const engine::SProjectionParams &projection = cached_projection_;
    *output_ptr = {
        .x = projection.center_x_fixed +
             static_cast<std::int32_t>((std::int64_t{eye.x} * projection.half_width_fixed) / eye.z),
        .y = projection.center_y_fixed +
             static_cast<std::int32_t>((std::int64_t{eye.y} * projection.neg_half_height_fixed) /
                                       eye.z),
        .z = eye.z};
    return output_ptr;
}

} // namespace nocturne::core
