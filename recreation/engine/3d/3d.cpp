#include "engine/3d/3d.h"

#include "common/math/fixed.h"
#include "common/math/vector3i.h"
#include "engine/matrix/matrix.h"
#include "platform/clipplane.h"

#include <algorithm>
#include <cstdint>

namespace nocturne::engine {
namespace {

constexpr std::uint32_t kWhite = 0xffffff;

} // namespace

C3d::C3d(CMatrix &matrix) : matrix_(matrix) {}

// deferred: keeping the point, with CBoundingBox3D::isVisible, its only reader
// nocedit 0x004037e0
void C3d::processCameraRelativePoint(const common::CVector3i &point) {
    const common::CVector3i origin = matrix_.getCameraOrigin();
    matrix_.setRelativeOrigin({.x = common::wrappingSubtract(origin.x, point.x),
                               .y = common::wrappingSubtract(origin.y, point.y),
                               .z = common::wrappingSubtract(origin.z, point.z)});
}

// The original also counted the tests, which nothing read.
// nocedit 0x00403950
bool C3d::isVisiblePlane(const platform::SClipPlane &plane) const {
    // An all-zero plane stands for a face that has none.
    if (culling_mode_ != 0 || plane == platform::SClipPlane{}) {
        return true;
    }
    const common::CVector3i &camera = matrix_.getRelativeOrigin();
    const std::int64_t side = (std::int64_t{plane.a} * camera.x) +
                              (std::int64_t{plane.b} * camera.y) +
                              (std::int64_t{plane.c} * camera.z);
    return side > plane.d;
}

// prim.c's setter; the mode is 3d.c's data.
// nocedit 0x00551b90
void C3d::setCullingMode(int culling_mode) {
    culling_mode_ = culling_mode;
}

int C3d::getCullingMode() const {
    return culling_mode_;
}

// The original also stored the inverted colour in a global that nothing reads.
// nocedit 0x00406d80
int C3d::setRenderAlpha(int alpha_color_value) {
    current_alpha_value_ = std::clamp(alpha_color_value >> 8, 0, kOpaqueAlpha);
    const auto level = static_cast<std::uint32_t>(current_alpha_value_);
    current_render_color_ = level | (level << 8U) | (level << 16U);
    return static_cast<int>(current_render_color_ ^ kWhite);
}

// nocedit 0x00406dd0
void C3d::setBlendMode(int blend_mode) {
    blend_mode_ = blend_mode;
}

const int &C3d::getBlendMode() const {
    return blend_mode_;
}

const int &C3d::getCurrentAlphaValue() const {
    return current_alpha_value_;
}

std::uint32_t C3d::getCurrentRenderColor() const {
    return current_render_color_;
}

} // namespace nocturne::engine
