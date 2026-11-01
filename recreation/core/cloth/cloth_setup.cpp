#include "common/error/error.h"
#include "common/math/matrix3x4f.h"
#include "common/math/vector3f.h"
#include "common/math/vector3i.h"
#include "core/cloth/cloth.h"
#include "core/skeleton/deformablemodel.h"
#include "core/skeleton/deformablemodelinstance.h"
#include "core/skeleton/pose.h"
#include "core/skeleton/skeleton.h"
#include "core/vecdir/vecdir.h"
#include "core/xform/xform.h"

#include <algorithm>
#include <cmath>
#include <cstddef>
#include <cstdlib>
#include <numeric>
#include <optional>
#include <span>
#include <utility>

namespace nocturne::core {
namespace {

// Farther than any vertex of a model.
constexpr float kFarthest = 1e30F;

// The vertex where the pose's bones take it.
common::CVector3f skin(const SVert &vertex, const SPose &pose) {
    common::CVector3f sum;
    for (std::size_t k = 0; k < vertex.num_bone_influences; ++k) {
        const common::CVector3f p = transformVector3x4(
            vertex.bone_offsets[k], pose.bone_model_matrices[vertex.bone_indices[k]]);
        const auto weight = static_cast<double>(vertex.bone_weights[k]);
        sum = {.x = static_cast<float>(sum.x + (p.x * weight)),
               .y = static_cast<float>(sum.y + (p.y * weight)),
               .z = static_cast<float>(sum.z + (p.z * weight))};
    }
    return sum;
}

float distanceSquared(const common::CVector3f &a, const common::CVector3f &b) {
    const auto dx = static_cast<double>(a.x - b.x);
    const auto dy = static_cast<double>(a.y - b.y);
    const auto dz = static_cast<double>(a.z - b.z);
    return static_cast<float>(((dz * dz) + (dx * dx)) + (dy * dy));
}

// The vertex the pose puts nearest the point; none of none.
std::optional<std::size_t> nearestVertex(const common::CVector3f &point,
                                         std::span<const SVert> vertices, const SPose &pose) {
    float nearest_distance = kFarthest;
    std::optional<std::size_t> nearest;
    for (std::size_t v = 0; v < vertices.size(); ++v) {
        const float distance = distanceSquared(point, skin(vertices[v], pose));
        if (distance < nearest_distance) {
            nearest = v;
            nearest_distance = distance;
        }
    }
    return nearest;
}

// The bone's axis runs to its farthest child, turned and moved by the file's two angles; a length
// in the file overrides the child's distance.
// unverified: the children's lengths and the radii's reciprocals, worked in double here, not run
//   against the original with a model
// nocedit 0x0043a110
void orientBoneToChild(SClothBone &bone, CDeformableModelInstance &model) {
    const CSkeleton &skeleton = *model.getSkeletonPtr();
    bone.parent_bone_index = skeleton.findBone(bone.name, true);
    bone.child_distance = 0.0F;
    const std::span<const SBone> bones = skeleton.getBones();
    const std::span<const common::CVector3f> origins = model.getBoneOrigins();
    std::optional<std::size_t> child;
    for (std::size_t i = 0; i < bones.size(); ++i) {
        if (bones[i].parent_index != bone.parent_bone_index) {
            continue;
        }
        const common::CVector3f &o = origins[i];
        const auto length = static_cast<float>(
            std::sqrt(((static_cast<double>(o.z) * o.z) + (static_cast<double>(o.x) * o.x)) +
                      (static_cast<double>(o.y) * o.y)));
        if (bone.child_distance < length) {
            bone.child_distance = length;
            child = i;
        }
    }
    if (!child) {
        common::displayErrorAndQuit("Can't orient bone with no children!");
    }
    const common::CMatrix3x4f to_child =
        buildMatrixFromEulerAndPosition({}, convertDirectionVectorToEulerAngles(origins[*child]));
    bone.world_matrix =
        multiplyMatrix3x4(to_child, buildMatrixFromEulerAndPosition(bone.euler1, bone.euler2));
    bone.inv_radius1 = static_cast<float>(1.0 / static_cast<double>(bone.radius1));
    bone.inv_radius2 = static_cast<float>(1.0 / static_cast<double>(bone.radius2));
    if (bone.length > 0.0F) {
        bone.child_distance = bone.length;
    }
}

} // namespace

// Ties are taken again from the points at rest.
// deferred: the model's vertices at the points, with CCloth::render
// deferred: no point held by a bone's end, with CCloth::grabCloth
// deferred: each pin's nearest vertex at each of the model's levels, with CCloth::render
// unverified: the pins' skinned sums and distances, worked in double here, not run against the
//   original with a model
// nocedit 0x00439710
void CCloth::setup(const common::CVector3f &position, const common::CVector3f &euler,
                   CDeformableModelInstance *model_ptr) {
    orderFromTheTop();
    last_position_ = position;
    last_euler_ = euler;
    for (SClothVertex &vertex : vertices_) {
        vertex.position = vertex.offset_pos;
        vertex.force = {};
        vertex.velocity = {};
        vertex.secondary_velocity = {};
    }
    initializeConnections();
    for (const int index : locked_vertex_indices_) {
        vertices_[static_cast<std::size_t>(index)].locked = true;
    }
    if (model_ptr != nullptr) {
        pinToModel(*model_ptr);
    }
}

// The original's own exchange sort, by the model's vertices as loaded.
void CCloth::orderFromTheTop() {
    const std::span<const common::CVector3i> model_vertices = model_.getFrameVertices(0);
    std::ranges::iota(vertex_order_, 0);
    const auto at = [&model_vertices](int index) {
        return model_vertices[static_cast<std::size_t>(index)];
    };
    for (std::size_t i = 0; i + 1 < vertex_order_.size(); ++i) {
        for (std::size_t j = i + 1; j < vertex_order_.size(); ++j) {
            const int first = vertex_order_[i];
            const int second = vertex_order_[j];
            if (at(first).y < at(second).y) {
                std::swap(vertex_order_[i], vertex_order_[j]);
            }
            if (at(first).y == at(second).y && std::abs(at(second).x) < std::abs(at(first).x)) {
                vertex_order_[i] = second;
                vertex_order_[j] = first;
            }
        }
    }
}

// The points take the model's bias, and the model is posed at rest to find each pin's vertex,
// then by its motion again. A model with no vertices leaves the pins on no bones, where the
// original read past its end.
void CCloth::pinToModel(CDeformableModelInstance &model) {
    CDeformableModel &mesh = *model.getModelPtr();
    static_cast<void>(mesh.getSkeletonPtr());
    const common::CVector3f &bias = mesh.getBias();
    for (SClothVertex &vertex : vertices_) {
        vertex.position = {.x = vertex.offset_pos.x + bias.x,
                           .y = vertex.offset_pos.y + bias.y,
                           .z = vertex.offset_pos.z + bias.z};
    }
    model.resetToRestPose();
    model.computeBoneTransforms();
    const std::span<const SLodMesh> lods = mesh.getLodMeshes();
    const std::span<const SVert> skinned =
        lods.empty() ? std::span<const SVert>{} : std::span<const SVert>(lods.front().vertices);
    for (const int index : locked_vertex_indices_) {
        SClothVertex &pin = vertices_[static_cast<std::size_t>(index)];
        const std::optional<std::size_t> nearest =
            nearestVertex(pin.position, skinned, model.getPose());
        if (!nearest) {
            continue;
        }
        const SVert &source = skinned[*nearest];
        pin.bone_influence_count = source.num_bone_influences;
        for (std::size_t k = 0; k < source.num_bone_influences; ++k) {
            pin.bone_index[k] = source.bone_indices[k];
            pin.bone_positions[k] = source.bone_offsets[k];
            pin.bone_weights[k] = source.bone_weights[k];
        }
    }
    for (SClothBone &bone : collide_bones_) {
        orientBoneToChild(bone, model);
    }
    model.updateAnimationAndTransforms();
}

} // namespace nocturne::core
