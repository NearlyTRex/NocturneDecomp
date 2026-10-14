#include "engine/matrix/matrix.h"

#include "common/error/error.h"
#include "engine/light/light.h"

#include <cmath>
#include <cstddef>

namespace nocturne::engine {
namespace {

// The original's pi, truncated.
constexpr double kPi = 3.1415926535;
constexpr double kStep = 1.0 / 128.0;
constexpr double kFixedOne = 65536.0;

// The entry below the angle plus the fraction of the way to the next, divided toward zero.
int interpolate(const std::array<int, 257> &table, int angle) {
    const auto index = static_cast<std::size_t>((angle >> 8) & 0xff);
    const int low = table[index];
    return low + (((table[index + 1] - low) * (angle & 0xff)) / 256);
}

} // namespace

CMatrix::CMatrix(C2d &two_d, CLight &light) : two_d_(two_d), light_(light) {
    initializeTrigTables();
}

// nocedit 0x0050c530
void CMatrix::initializeTrigTables() {
    for (std::size_t i = 0; i < sin_table_.size(); ++i) {
        const double angle = static_cast<double>(i) * kPi * kStep;
        sin_table_[i] = static_cast<int>(std::trunc(std::sin(angle) * kFixedOne));
        cos_table_[i] = static_cast<int>(std::trunc(std::cos(angle) * kFixedOne));
    }
}

// nocedit 0x0050c5c0
int CMatrix::interpolatedSin(int angle) const {
    return interpolate(sin_table_, angle);
}

// nocedit 0x0050c600
int CMatrix::interpolatedCos(int angle) const {
    return interpolate(cos_table_, angle);
}

// nocedit 0x0050e270
void CMatrix::setCameraOrigin(int x, int y, int z) {
    camera_origin_ = {.x = x, .y = y, .z = z};
}

// nocedit 0x0050e2c0
common::CVector3i CMatrix::getCameraOrigin() const {
    return camera_origin_;
}

// nocedit 0x0050e2f0
common::CVector3i CMatrix::getCameraRotation() const {
    return camera_rotation_;
}

// nocedit 0x0050e320
void CMatrix::pushViewport(int x, int y, int width, int height) {
    viewport_stack_[viewport_stack_index_] = {.camera_origin = camera_origin_,
                                              .camera_rotation = camera_rotation_,
                                              .light_direction = light_.getLightDirection(),
                                              .projection = two_d_.getProjection(),
                                              .projection_scale = projection_scale_,
                                              .clip = two_d_.getClipRect()};
    ++viewport_stack_index_;
    if (viewport_stack_index_ == kViewportStackSize) {
        common::displayErrorAndQuit("Too many 3D windows");
    }
    two_d_.setupViewportAndClipping(x, y, x + width, y + height);
    projection_scale_ = kUnitProjectionScale;
}

// nocedit 0x0050e480
void CMatrix::popViewport() {
    if (viewport_stack_index_ == 0) {
        common::displayErrorAndQuit("3D Window unbalance");
    }
    --viewport_stack_index_;
    const SViewportState &saved = viewport_stack_[viewport_stack_index_];
    camera_origin_ = saved.camera_origin;
    camera_rotation_ = saved.camera_rotation;
    light_.setLightDirection(saved.light_direction);
    two_d_.setProjection(saved.projection);
    projection_scale_ = saved.projection_scale;
    two_d_.setClipRect(saved.clip);
}

int CMatrix::getProjectionScale() const {
    return projection_scale_;
}

void CMatrix::setProjectionScale(int scale) {
    projection_scale_ = scale;
}

void CMatrix::storeCameraRotation(const common::CVector3i &rotation) {
    camera_rotation_ = rotation;
}

} // namespace nocturne::engine
