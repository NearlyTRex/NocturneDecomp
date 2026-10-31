#include "core/dlight/cameraview.h"

#include "common/math/matrix3x3f.h"
#include "common/math/vector3f.h"

namespace nocturne::core {

// nocedit 0x00427ce0
CCameraView::CCameraView() = default;

// nocedit 0x00427d00
CCameraView::~CCameraView() = default;

// nocedit 0x00427d20
void CCameraView::setupPerspectiveAndFog(common::CVector3f * /*position*/,
                                         platform::SProjectedVertex * /*projected_vertex*/) {}

// nocedit 0x00427d50
int CCameraView::getFogValueAtPosition(common::CVector3i * /*world_position*/,
                                       platform::SProjectedVertex * /*projected_vertex*/) {
    return 0;
}

// nocedit 0x00427d70
void CCameraView::saveAlphaTransform(int /*alpha_index*/) {}

float CCameraView::getFixedPointScale() const {
    return fixed_point_scale_;
}

const common::CVector3f &CCameraView::getPosition() const {
    return position_;
}

void CCameraView::setPosition(const common::CVector3f &position) {
    position_ = position;
}

const common::CMatrix3x3f &CCameraView::getRotationMatrix() const {
    return rotation_matrix_;
}

void CCameraView::setRotationMatrix(const common::CMatrix3x3f &rotation_matrix) {
    rotation_matrix_ = rotation_matrix;
}

float CCameraView::getFocalLength() const {
    return focal_length_;
}

void CCameraView::setFocalLength(float focal_length) {
    focal_length_ = focal_length;
}

} // namespace nocturne::core
