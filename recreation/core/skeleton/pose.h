#pragma once

#include "common/math/matrix3x4f.h"
#include "common/math/quaternion4f.h"
#include "common/math/vector3f.h"

#include <array>
#include <cstddef>

namespace nocturne::core {

// The most bones a pose holds.
inline constexpr std::size_t kMaxPoseBones = 100;

// Where a skeleton's root is moved to and how each bone is turned, in the model's space.
struct SPoseData {
    common::CVector3f root_position;
    std::array<common::CQuaternion4f, kMaxPoseBones> bone_rotations{};
};

// A pose, each bone's scale, and the matrices that take each bone's points into the model.
struct SPose {
    SPoseData pose_data;
    std::array<float, kMaxPoseBones> bone_scales{};
    std::array<common::CMatrix3x4f, kMaxPoseBones> bone_model_matrices{};
};

} // namespace nocturne::core
