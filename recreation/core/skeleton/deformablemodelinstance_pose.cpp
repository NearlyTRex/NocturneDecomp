#include "common/error/error.h"
#include "common/math/extendedfloat.h"
#include "common/math/matrix3x4f.h"
#include "common/math/quaternion4f.h"
#include "common/math/vector3f.h"
#include "common/math/vector3i.h"
#include "core/motion/motioncontroller.h"
#include "core/motion/motionlist.h"
#include "core/skeleton/boneupdatemode.h"
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
// A blend's weight, or a tween's progress, at or below this changes nothing. The original holds it
// as a double.
constexpr double kBlendThreshold = 0.001;
// Further than any frame's bones sit from the source's.
constexpr float kFarthest = 1e30F;

std::size_t toIndex(int index) {
    return static_cast<std::size_t>(index);
}

// The bones the bone_index names and those below it; every bone for one below 0.
std::array<bool, kMaxPoseBones> findBranch(const CSkeleton &skeleton, int bone_index) {
    std::array<bool, kMaxPoseBones> in_branch{};
    for (std::size_t i = 0; i < skeleton.getBones().size(); ++i) {
        in_branch.at(i) = skeleton.getHierarchyDistance(static_cast<int>(i), bone_index) >= 0;
    }
    return in_branch;
}

// Where the frames put the root, before it is scaled. x and y add products stored as floats; z
// adds its first frame's share before it is stored, as the x87 holds it.
common::CVector3f interpolateRootPosition(const CSkeleton &skeleton,
                                          const SInterpolationFrames &frames) {
    const std::span<const common::CVector3f> offsets = skeleton.getRootOffsets();
    const common::CVector3f &from = offsets[toIndex(frames.frame_1)];
    const common::CVector3f &to = offsets[toIndex(frames.frame_2)];
    const float weight = frames.blend_weight;
    const float stay = 1.0F - weight;
    return {.x = (from.x * stay) + (to.x * weight),
            .y = (from.y * stay) + (to.y * weight),
            .z = ((common::CExtendedFloat(from.z) * common::CExtendedFloat(stay)) +
                  common::CExtendedFloat(to.z * weight))
                     .toFloat()};
}

} // namespace

// nocedit 0x0059ddb0
float blendWeightCallback(int /*current_bone_index*/, int /*target_bone_index*/, float blend_weight,
                          int /*hierarchy_distance*/, CDeformableModelInstance & /*instance*/) {
    return blend_weight;
}

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

// A NaN progress blends nothing, as the original's unordered compare does.
// nocedit 0x0059e020
void CDeformableModelInstance::updateAnimation() {
    updateMotion(getCurrentMotionIndex(), getCurrentFrameNumber(), -1);
    if (!(static_cast<double>(getTweenProgress()) > kBlendThreshold)) {
        return;
    }
    blendMotion(getTweenTargetMotion(), getTweenTargetFrame(), getTweenProgress(), -1,
                blendWeightCallback);
}

// nocedit 0x0059e070
void CDeformableModelInstance::updateMotionAtFrame(int motion_index, float frame_number) {
    updateMotion(motion_index, frame_number, -1);
    computeBoneTransforms();
}

// nocedit 0x0059e0a0
void CDeformableModelInstance::updateMotion(int motion_index, float frame_number, int bone_index) {
    const CSkeleton &skeleton = *getSkeletonPtr();
    const SInterpolationFrames frames = getFramesForInterpolation(motion_index, frame_number);
    std::array<common::CQuaternion4f, kMaxPoseBones> &rotations =
        bone_transform_.pose_data.bone_rotations;
    const std::size_t bone_count = skeleton.getBones().size();
    if (bone_index < 0) {
        for (std::size_t i = 0; i < bone_count; ++i) {
            rotations.at(i) = skeleton.getBoneAngleInterpolated(
                static_cast<int>(i), frames.frame_1, frames.frame_2, frames.blend_weight);
            bone_transform_.bone_scales.at(i) = rest_bone_scales_.at(i);
        }
        const common::CVector3f root = interpolateRootPosition(skeleton, frames);
        bone_transform_.pose_data.root_position = {.x = root.x * root_offset_scale_.x,
                                                   .y = root.y * root_offset_scale_.y,
                                                   .z = root.z * root_offset_scale_.z};
        return;
    }
    if (bone_update_mode_ == EBoneUpdateMode::kRelative) {
        // A slerp the whole way is the turn itself.
        poseRelativeToParents(skeleton, frames, bone_index, 1.0F);
        return;
    }
    if (bone_update_mode_ == EBoneUpdateMode::kAdditive) {
        poseAdditively(skeleton, frames, motion_index, bone_index);
        return;
    }
    const std::array<bool, kMaxPoseBones> in_branch = findBranch(skeleton, bone_index);
    for (std::size_t i = 0; i < bone_count; ++i) {
        if (in_branch.at(i)) {
            rotations.at(i) = skeleton.getBoneAngleInterpolated(
                static_cast<int>(i), frames.frame_1, frames.frame_2, frames.blend_weight);
        }
    }
}

// The original reads the root offsets of frames past the skeleton's last; the decomp holds them to
// the last, and so does this.
// nocedit 0x0059eb50
void CDeformableModelInstance::blendMotion(int target_motion_index, float target_frame_number,
                                           float blend_weight, int bone_index,
                                           CDeformableModel::MotionBlendWeightFunc *callback_func) {
    if (!(static_cast<double>(blend_weight) > kBlendThreshold)) {
        return;
    }
    const SInterpolationFrames frames =
        getFramesForInterpolation(target_motion_index, target_frame_number);
    const CSkeleton &skeleton = *getSkeletonPtr();
    std::array<common::CQuaternion4f, kMaxPoseBones> &rotations =
        bone_transform_.pose_data.bone_rotations;
    if (bone_update_mode_ == EBoneUpdateMode::kAbsolute) {
        for (std::size_t i = 0; i < skeleton.getBones().size(); ++i) {
            const int bone = static_cast<int>(i);
            const int distance = skeleton.getHierarchyDistance(bone, bone_index);
            if (distance >= 0) {
                const float weight = callback_func(bone, bone_index, blend_weight, distance, *this);
                rotations.at(i) =
                    slerpQuaternion(rotations.at(i),
                                    skeleton.getBoneAngleInterpolated(
                                        bone, frames.frame_1, frames.frame_2, frames.blend_weight),
                                    weight);
            }
        }
    } else if (bone_update_mode_ == EBoneUpdateMode::kRelative) {
        poseRelativeToParents(skeleton, frames, bone_index, blend_weight);
    } else {
        common::displayErrorAndQuit("Write me!");
    }
    if (bone_index >= 0) {
        return;
    }
    const int last_frame = skeleton.getFrameCount() - 1;
    const common::CVector3f target =
        interpolateRootPosition(skeleton, {.frame_1 = std::min(frames.frame_1, last_frame),
                                           .frame_2 = std::min(frames.frame_2, last_frame),
                                           .blend_weight = frames.blend_weight});
    const float stay = 1.0F - blend_weight;
    common::CVector3f &root = bone_transform_.pose_data.root_position;
    const float moved_z =
        ((common::CExtendedFloat(target.z) * common::CExtendedFloat(root_offset_scale_.z)) *
         common::CExtendedFloat(blend_weight))
            .toFloat();
    root = {.x = (root.x * stay) + ((target.x * root_offset_scale_.x) * blend_weight),
            .y = (root.y * stay) + ((target.y * root_offset_scale_.y) * blend_weight),
            .z = ((common::CExtendedFloat(root.z) * common::CExtendedFloat(stay)) +
                  common::CExtendedFloat(moved_z))
                     .toFloat()};
}

// For a bone_index below 0 the original also takes the turn of the bone past the last, reading
// bone -1's parent from the bone count, and no bone's turn uses it.
void CDeformableModelInstance::poseRelativeToParents(const CSkeleton &skeleton,
                                                     const SInterpolationFrames &frames,
                                                     int bone_index, float blend_weight) {
    const std::span<const SBone> bones = skeleton.getBones();
    const std::array<bool, kMaxPoseBones> in_branch = findBranch(skeleton, bone_index);
    const auto turnAt = [&](int bone) {
        return skeleton.getBoneAngleInterpolated(bone, frames.frame_1, frames.frame_2,
                                                 frames.blend_weight);
    };
    std::array<common::CQuaternion4f, kMaxPoseBones> turns{};
    for (std::size_t i = 0; i < bones.size(); ++i) {
        if (in_branch.at(i)) {
            turns.at(i) = turnAt(static_cast<int>(i));
        }
    }
    const int above = bone_index < 0 ? -1 : bones[toIndex(bone_index)].parent_index;
    if (above >= 0) {
        turns.at(toIndex(above)) = turnAt(above);
    }
    std::array<common::CQuaternion4f, kMaxPoseBones> &rotations =
        bone_transform_.pose_data.bone_rotations;
    for (std::size_t i = 0; i < bones.size(); ++i) {
        if (!in_branch.at(i)) {
            continue;
        }
        const int parent = bones[i].parent_index;
        const common::CQuaternion4f turn =
            parent < 0 ? turns.at(i)
                       : multiplyQuaternion(
                             multiplyQuaternion(turns.at(i),
                                                negateFirstComponent(turns.at(toIndex(parent)))),
                             rotations.at(toIndex(parent)));
        rotations.at(i) = slerpQuaternion(rotations.at(i), turn, blend_weight);
    }
}

void CDeformableModelInstance::poseAdditively(const CSkeleton &skeleton,
                                              const SInterpolationFrames &frames, int motion_index,
                                              int bone_index) {
    const std::span<const SBone> bones = skeleton.getBones();
    const int first_frame =
        skeleton.getMotionList().getMotions()[toIndex(motion_index)].frame_start;
    const std::array<bool, kMaxPoseBones> in_branch = findBranch(skeleton, bone_index);
    std::array<common::CQuaternion4f, kMaxPoseBones> starts{};
    std::array<common::CQuaternion4f, kMaxPoseBones> turns{};
    const auto take = [&](int bone) {
        starts.at(toIndex(bone)) = skeleton.getBoneAngleAtFrame(bone, first_frame);
        turns.at(toIndex(bone)) = skeleton.getBoneAngleInterpolated(
            bone, frames.frame_1, frames.frame_2, frames.blend_weight);
    };
    for (std::size_t i = 0; i < bones.size(); ++i) {
        if (in_branch.at(i)) {
            take(static_cast<int>(i));
        }
    }
    const int above = bones[toIndex(bone_index)].parent_index;
    if (above >= 0) {
        take(above);
    }
    std::array<common::CQuaternion4f, kMaxPoseBones> &rotations =
        bone_transform_.pose_data.bone_rotations;
    for (std::size_t i = 0; i < bones.size(); ++i) {
        if (!in_branch.at(i)) {
            continue;
        }
        const int parent = bones[i].parent_index;
        common::CQuaternion4f start = starts.at(i);
        common::CQuaternion4f turn = turns.at(i);
        common::CQuaternion4f current = rotations.at(i);
        if (parent >= 0) {
            const std::size_t up = toIndex(parent);
            start = multiplyQuaternion(start, negateFirstComponent(starts.at(up)));
            turn = multiplyQuaternion(turn, negateFirstComponent(turns.at(up)));
            current = multiplyQuaternion(current, negateFirstComponent(rotations.at(up)));
        }
        const common::CQuaternion4f added =
            multiplyQuaternion(current, multiplyQuaternion(turn, negateFirstComponent(start)));
        rotations.at(i) =
            parent < 0 ? added : multiplyQuaternion(added, rotations.at(toIndex(parent)));
    }
}

// nocedit 0x0059fb40
void CDeformableModelInstance::computeBoneTransforms() {
    computeBoneModelMatrices(bone_transform_);
    cached_skinned_lod_index_ = kNoSkinnedLod;
}

// nocedit 0x005a1950
void CDeformableModelInstance::computeBoneModelMatrices(SPose &bone_data) {
    const std::span<const SBone> bones = getSkeletonPtr()->getBones();
    std::array<common::CMatrix3x4f, kMaxPoseBones> &matrices = bone_data.bone_model_matrices;
    for (std::size_t i = 0; i < bones.size(); ++i) {
        common::CMatrix3x4f &matrix = matrices.at(i);
        quaternionToMatrix3x3(matrix, bone_data.pose_data.bone_rotations.at(i));
        const float scale = bone_data.bone_scales.at(i);
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
            parent < 0 ? common::CVector3f{.x = origin.x + bone_data.pose_data.root_position.x,
                                           .y = origin.y + bone_data.pose_data.root_position.y,
                                           .z = origin.z + bone_data.pose_data.root_position.z}
                       : transformVector3x4(origin, matrices.at(toIndex(parent)));
        matrix.m[0][3] = moved.x;
        matrix.m[1][3] = moved.y;
        matrix.m[2][3] = moved.z;
    }
}

// nocedit 0x005a0ad0
void CDeformableModelInstance::computeBoneTransformsForFrame(int motion_index, float animation_time,
                                                             SPose &output_bone_data) {
    const CSkeleton &skeleton = *getSkeletonPtr();
    const SInterpolationFrames frames = getFramesForInterpolation(motion_index, animation_time);
    for (std::size_t i = 0; i < skeleton.getBones().size(); ++i) {
        output_bone_data.pose_data.bone_rotations.at(i) = skeleton.getBoneAngleInterpolated(
            static_cast<int>(i), frames.frame_1, frames.frame_2, frames.blend_weight);
        output_bone_data.bone_scales.at(i) = 1.0F;
    }
    const common::CVector3f root = interpolateRootPosition(skeleton, frames);
    output_bone_data.pose_data.root_position = {.x = root_offset_scale_.x * root.x,
                                                .y = root_offset_scale_.y * root.y,
                                                .z = root_offset_scale_.z * root.z};
}

// Each frame's distance is the sum of its bones' squared distances at the x87's precision, then
// stored; the first of equals is kept. As the original's unordered compare does, a NaN distance
// is taken as nearer, and so then is every frame after it.
// nocedit 0x005a08a0
int CDeformableModelInstance::findPatchToFrame(int source_motion_index, float source_frame,
                                               int target_motion_index) {
    const int frame_count = getMotionList()->getMotions()[toIndex(target_motion_index)].frame_count;
    const std::size_t bone_count = getSkeletonPtr()->getBones().size();
    SPose source;
    computeBoneTransformsForFrame(source_motion_index, source_frame, source);
    computeBoneModelMatrices(source);
    int nearest_frame = -1;
    float nearest = kFarthest;
    SPose candidate;
    for (int frame = 0; frame < frame_count; ++frame) {
        computeBoneTransformsForFrame(target_motion_index, static_cast<float>(frame), candidate);
        computeBoneModelMatrices(candidate);
        common::CExtendedFloat sum(0.0);
        for (std::size_t i = 0; i < bone_count; ++i) {
            const common::CMatrix3x4f &from = source.bone_model_matrices.at(i);
            const common::CMatrix3x4f &to = candidate.bone_model_matrices.at(i);
            const auto squared = [&](std::size_t row) {
                const common::CExtendedFloat difference = common::CExtendedFloat(to.m.at(row)[3]) -
                                                          common::CExtendedFloat(from.m.at(row)[3]);
                return difference * difference;
            };
            sum = sum + ((squared(0) + squared(1)) + squared(2));
        }
        const float distance = sum.toFloat();
        if (!(distance >= nearest)) {
            nearest = distance;
            nearest_frame = frame;
        }
    }
    return nearest_frame;
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
