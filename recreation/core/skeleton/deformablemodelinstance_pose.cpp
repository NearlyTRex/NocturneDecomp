#include "common/math/extendedfloat.h"
#include "common/math/matrix3x4f.h"
#include "common/math/vector3f.h"
#include "common/math/vector3i.h"
#include "core/actor/notported.h"
#include "core/motion/motioncontroller.h"
#include "core/skeleton/deformablemodel.h"
#include "core/skeleton/deformablemodelinstance.h"
#include "core/skeleton/pose.h"
#include "core/skeleton/skeleton.h"
#include "core/xform/xform.h"

#include <algorithm>
#include <array>
#include <cstddef>
#include <cstdint>
#include <limits>
#include <span>

namespace nocturne::core {
namespace {

// A skinned vertex's 24.8 fixed point back to a float.
constexpr float kFixedToFloat = 1.0F / 256.0F;
// The share of its extent the box is padded by on each side, as the original's float holds it.
constexpr float kBoxPadding = 0.05F;
// A bone matrix row's rotation, before its translation.
constexpr std::size_t kRotationColumns = 3;

} // namespace

// nocedit 0x0059df80
void CDeformableModelInstance::resetToRestPose() {
    const std::size_t bone_count = getSkeletonPtr()->getBones().size();
    for (std::size_t i = 0; i < bone_count; ++i) {
        setIdentityQuaternion(bone_transform_.pose_data.bone_rotations.at(i));
        bone_transform_.bone_scales.at(i) = rest_bone_scales_.at(i);
    }
    bone_transform_.pose_data.root_position = {};
}

// nocedit 0x0059e000
void CDeformableModelInstance::updateAnimationAndTransforms() {
    updateAnimation();
    computeBoneTransforms();
}

// deferred: blending towards the tween's target while one runs, with blendMotion and
//   setDesiredState's start of a tween
// nocedit 0x0059e020
void CDeformableModelInstance::updateAnimation() {
    updateMotion(getCurrentMotionIndex(), getCurrentFrameNumber(), -1);
}

// nocedit 0x0059e070
void CDeformableModelInstance::updateMotionAtFrame(int motion_index, float frame_number) {
    updateMotion(motion_index, frame_number, -1);
    computeBoneTransforms();
}

// The root's z adds its first frame's share before it is stored as a float, as the x87 holds it.
// deferred: posing only the bone and those below it, each of the three ways the bone update mode
//   picks, with the aiming and layered motions that ask for it
// nocedit 0x0059e0a0
void CDeformableModelInstance::updateMotion(int motion_index, float frame_number, int bone_index) {
    const CSkeleton &skeleton = *getSkeletonPtr();
    const SInterpolationFrames frames = getFramesForInterpolation(motion_index, frame_number);
    if (bone_index >= 0) {
        quitNotPorted("CDeformableModelInstance", "updateMotion");
    }
    const std::size_t bone_count = skeleton.getBones().size();
    for (std::size_t i = 0; i < bone_count; ++i) {
        bone_transform_.pose_data.bone_rotations.at(i) = skeleton.getBoneAngleInterpolated(
            static_cast<int>(i), frames.frame_1, frames.frame_2, frames.blend_weight);
        bone_transform_.bone_scales.at(i) = rest_bone_scales_.at(i);
    }
    const std::span<const common::CVector3f> offsets = skeleton.getRootOffsets();
    const common::CVector3f &from = offsets[static_cast<std::size_t>(frames.frame_1)];
    const common::CVector3f &to = offsets[static_cast<std::size_t>(frames.frame_2)];
    const float weight = frames.blend_weight;
    const float stay = 1.0F - weight;
    common::CVector3f &root = bone_transform_.pose_data.root_position;
    root.x = (from.x * stay) + (to.x * weight);
    root.y = (from.y * stay) + (to.y * weight);
    root.z = ((common::CExtendedFloat(from.z) * common::CExtendedFloat(stay)) +
              common::CExtendedFloat(to.z * weight))
                 .toFloat();
    root.x *= root_offset_scale_.x;
    root.y *= root_offset_scale_.y;
    root.z *= root_offset_scale_.z;
}

// nocedit 0x0059fb40
void CDeformableModelInstance::computeBoneTransforms() {
    const std::span<const SBone> bones = getSkeletonPtr()->getBones();
    std::array<common::CMatrix3x4f, kMaxPoseBones> &matrices = bone_transform_.bone_model_matrices;
    for (std::size_t i = 0; i < bones.size(); ++i) {
        common::CMatrix3x4f &matrix = matrices.at(i);
        quaternionToMatrix3x3(matrix, bone_transform_.pose_data.bone_rotations.at(i));
        const float scale = bone_transform_.bone_scales.at(i);
        if (scale != 1.0F) {
            for (std::array<float, 4> &row : matrix.m) {
                for (std::size_t column = 0; column < kRotationColumns; ++column) {
                    row.at(column) = scale * row.at(column);
                }
            }
        }
        const common::CVector3f &origin = bone_origins_.at(i);
        const int parent = bones[i].parent_index;
        const common::CVector3f moved =
            parent < 0
                ? common::CVector3f{.x = origin.x + bone_transform_.pose_data.root_position.x,
                                    .y = origin.y + bone_transform_.pose_data.root_position.y,
                                    .z = origin.z + bone_transform_.pose_data.root_position.z}
                : transformVector3x4(origin, matrices.at(static_cast<std::size_t>(parent)));
        matrix.m[0][3] = moved.x;
        matrix.m[1][3] = moved.y;
        matrix.m[2][3] = moved.z;
    }
    cached_skinned_lod_index_ = kNoSkinnedLod;
}

// nocedit 0x005a01d0
void CDeformableModelInstance::skinVerticesForLOD(int lod_index) {
    getModelPtr()->skinVertices(static_cast<std::size_t>(lod_index),
                                bone_transform_.bone_model_matrices, skinned_vertices_);
    cached_skinned_lod_index_ = lod_index;
}

// The padding is a twentieth of the extent at the x87's precision, then stored as a float. With
// no vertices, the box is the inverted one between the extremes it starts from.
// nocedit 0x005a05e0
void CDeformableModelInstance::computeBoundingBoxFromVertices() {
    updateMotionAtFrame(0, 0.0F);
    skinVerticesForLOD(0);
    common::CVector3i min{.x = std::numeric_limits<std::int32_t>::max(),
                          .y = std::numeric_limits<std::int32_t>::max(),
                          .z = std::numeric_limits<std::int32_t>::max()};
    common::CVector3i max{.x = -std::numeric_limits<std::int32_t>::max(),
                          .y = -std::numeric_limits<std::int32_t>::max(),
                          .z = -std::numeric_limits<std::int32_t>::max()};
    for (const common::CVector3i &vertex : skinned_vertices_) {
        min = {.x = std::min(min.x, vertex.x),
               .y = std::min(min.y, vertex.y),
               .z = std::min(min.z, vertex.z)};
        max = {.x = std::max(max.x, vertex.x),
               .y = std::max(max.y, vertex.y),
               .z = std::max(max.z, vertex.z)};
    }
    const auto toFloat = [](int fixed) { return static_cast<float>(fixed) * kFixedToFloat; };
    const auto pad = [](float low, float high) {
        return (common::CExtendedFloat(static_cast<double>(high) - low) *
                common::CExtendedFloat(kBoxPadding))
            .toFloat();
    };
    bounding_box_.min = {.x = toFloat(min.x), .y = toFloat(min.y), .z = toFloat(min.z)};
    bounding_box_.max = {.x = toFloat(max.x), .y = toFloat(max.y), .z = toFloat(max.z)};
    const common::CVector3f padding{.x = pad(bounding_box_.min.x, bounding_box_.max.x),
                                    .y = pad(bounding_box_.min.y, bounding_box_.max.y),
                                    .z = pad(bounding_box_.min.z, bounding_box_.max.z)};
    bounding_box_.min = {.x = bounding_box_.min.x - padding.x,
                         .y = bounding_box_.min.y - padding.y,
                         .z = bounding_box_.min.z - padding.z};
    bounding_box_.max = {.x = bounding_box_.max.x + padding.x,
                         .y = bounding_box_.max.y + padding.y,
                         .z = bounding_box_.max.z + padding.z};
}

} // namespace nocturne::core
