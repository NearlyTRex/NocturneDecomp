#include "common/error/error.h"
#include "core/actor/notported.h"
#include "core/skeleton/deformablemodel.h"
#include "core/skeleton/skeleton.h"

#include <cmath>
#include <cstddef>
#include <cstdint>
#include <span>
#include <utility>

namespace nocturne::core {
namespace {

constexpr int kNoFollowers = 0;
constexpr int kFollowed = 1;
constexpr int kChainEnd = 2;
// How many ancestors are looked through for a chain's end.
constexpr int kChainDepth = 2;

} // namespace

// From the first level of detail's vertices. A followed bone ends a chain unless it is the root or
// has a followed child, and neither of its two nearest ancestors ends one.
// nocedit 0x0059d9e0
void CDeformableModel::computeBoneBoundsAndFlags() {
    const CSkeleton &skeleton = *getSkeletonPtr();
    const std::size_t bone_count = skeleton.getBones().size();
    for (std::size_t i = 0; i < bone_count; ++i) {
        bone_bounds_[i].reset();
        bone_flags_[i] = kNoFollowers;
    }
    const std::span<const SVert> vertices =
        meshes_.empty() ? std::span<const SVert>() : std::span<const SVert>(meshes_[0].vertices);
    for (const SVert &vertex : vertices) {
        for (std::size_t i = 0; i < vertex.num_bone_influences; ++i) {
            const std::uint8_t bone = vertex.bone_indices.at(i);
            bone_bounds_[bone].expand(vertex.bone_offsets.at(i));
            bone_flags_[bone] = kFollowed;
        }
    }
    for (std::size_t i = 0; i < bone_count; ++i) {
        if (bone_flags_[i] == kFollowed && endsChain(skeleton, static_cast<int>(i))) {
            bone_flags_[i] = kChainEnd;
        }
    }
}

// An ancestor past the root is fatal: a bone whose parent is the root has only the one ancestor.
bool CDeformableModel::endsChain(const CSkeleton &skeleton, int bone_index) const {
    const std::span<const SBone> bones = skeleton.getBones();
    if (bones[static_cast<std::size_t>(bone_index)].parent_index < 0) {
        return true;
    }
    bool has_followed_child = false;
    for (std::size_t i = 0; i < bones.size(); ++i) {
        if (bones[i].parent_index == bone_index && bone_flags_[i] != kNoFollowers) {
            has_followed_child = true;
            break;
        }
    }
    if (!has_followed_child) {
        return true;
    }
    int ancestor = bone_index;
    for (int depth = 0; depth < kChainDepth; ++depth) {
        ancestor = bones[static_cast<std::size_t>(ancestor)].parent_index;
        if (ancestor < 0) {
            common::displayErrorAndQuit("Bug!");
        }
        if (bone_flags_[static_cast<std::size_t>(ancestor)] == kChainEnd) {
            return false;
        }
    }
    return true;
}

// unverified: comparing the children's distances in double where the x87 holds them at its
//   extended precision, by running nocedit's code on children of near-equal distance
// nocedit 0x0059dbe0
void CDeformableModel::computeFarthestChildBones() {
    const std::span<const SBone> bones = getSkeletonPtr()->getBones();
    for (std::size_t i = 0; i < bones.size(); ++i) {
        farthest_child_bone_[i] = -1;
        float farthest = 0.0F;
        for (std::size_t child = 0; child < bones.size(); ++child) {
            if (std::cmp_not_equal(bones[child].parent_index, i)) {
                continue;
            }
            const common::CVector3f &origin = bone_origins_[child];
            const double y_squared = static_cast<double>(origin.y) * origin.y;
            const double x_squared = static_cast<double>(origin.x) * origin.x;
            const double z_squared = static_cast<double>(origin.z) * origin.z;
            const double distance = std::sqrt((y_squared + x_squared) + z_squared);
            if (static_cast<double>(farthest) < distance) {
                farthest_child_bone_[i] = static_cast<int>(child);
                farthest = static_cast<float>(distance);
            }
        }
    }
}

// A model of one part has every bone in it, and the root as its dominant bone.
// deferred: weighing each part's triangles by their area on the bones their vertices follow, at
//   the rest pose, to find its dominant bone and then each bone's part, for a model of more than
//   one part, with CDeformableModelInstance::initializeFromModel and computeBoneDominantPart
// nocedit 0x0059d460
void CDeformableModel::computePartDominantBones() {
    if (parts_.size() < 2) {
        for (SPart &part : parts_) {
            part.dominant_bone = 0;
        }
        bone_to_part_map_.assign(kMaxBones, 0);
        return;
    }
    quitNotPorted("CDeformableModel", "computePartDominantBones");
}

} // namespace nocturne::core
