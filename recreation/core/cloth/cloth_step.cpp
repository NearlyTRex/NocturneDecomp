#include "common/math/extendedfloat.h"
#include "common/math/matrix3x3f.h"
#include "common/math/matrix3x4f.h"
#include "common/math/vector3f.h"
#include "core/actor/actor_functions.h"
#include "core/chain/chain_functions.h"
#include "core/cloth/cloth.h"
#include "core/cloth/cloth_functions.h"
#include "core/skeleton/deformablemodelinstance.h"
#include "core/skeleton/pose.h"
#include "core/xform/xform.h"

#include <algorithm>
#include <cmath>
#include <cstddef>
#include <utility>

namespace nocturne::core {
namespace {

using X = common::CExtendedFloat;

// A floor this high or higher is none.
constexpr float kNoFloor = 9999.0F;
constexpr float kFarBelow = -9999.0F;
// The shortest step the cloth takes, a double in the original's comparison.
constexpr double kShortestStep = 0.01;
// How many times the ties are pulled back into shape after the points move.
constexpr int kConstraintPasses = 5;
// A point pushed out of a bone lands this much past its surface, a double in the original.
constexpr double kBoneClearance = 1.05;
// The wind of the cloth's own the original adds to the fog's, which nothing sets; added still, so
// a zero's sign comes out as the original's does.
constexpr float kUnsetWind = 0.0F;

X widen(float value) {
    return X(static_cast<double>(value));
}

// y, then x, then z, as the original sums each row's products on the x87.
X dotYXZ(const common::CVector3f &v, float x, float y, float z) {
    return ((widen(v.y) * widen(y)) + (widen(v.x) * widen(x))) + (widen(v.z) * widen(z));
}

// The bone's frame within its parent bone as the model is now posed.
// nocedit 0x0043a2b0
void computeBoneTransform(SClothBone &bone, const CDeformableModelInstance &model) {
    const common::CMatrix3x4f in_parent = multiplyMatrix3x4(
        inverse(
            model.getPose().bone_model_matrices[static_cast<std::size_t>(bone.parent_bone_index)]),
        bone.world_matrix);
    for (std::size_t r = 0; r < 3; ++r) {
        bone.local_matrix.m[r] = {
            .x = in_parent.m[0][r], .y = in_parent.m[1][r], .z = in_parent.m[2][r]};
    }
    const common::CMatrix3x4f back = inverse(in_parent);
    bone.position_offset = {.x = back.m[0][3], .y = back.m[1][3], .z = back.m[2][3]};
}

} // namespace

// nocedit 0x0043ab80
void CCloth::process(const common::CVector3f &position, const common::CVector3f &euler,
                     float delta_time, float floor_y, CDeformableModelInstance *model_ptr,
                     const common::CVector3f &wind) {
    step(position, euler, delta_time, floor_y, model_ptr, wind);
}

// The original also keeps each point's last position, which nothing reads.
// deferred: a point held by a bone's end, at the bone's end, with CCloth::grabCloth
// deferred: the model's vertices at the points, with CCloth::render
// unverified: the pins' skinned sums, not run against the original with a model
// nocedit 0x0043abb0
void CCloth::step(const common::CVector3f &position, const common::CVector3f &euler,
                  float delta_time, float floor_y, CDeformableModelInstance *model_ptr,
                  const common::CVector3f &wind) {
    if (floor_y >= kNoFloor) {
        floor_y = kFarBelow;
    }
    if (static_cast<double>(delta_time) < kShortestStep) {
        delta_time = static_cast<float>(kShortestStep);
    }
    inv_delta_time_ = 1.0F / delta_time;
    floor_y_ = floor_y - position.y;
    if (model_ptr != nullptr) {
        followBones(*model_ptr);
    }
    common::CMatrix3x3f turn;
    turn.buildRotationMatrix(euler);
    const double wind_length = std::sqrt(dotYXZ(wind, wind.x, wind.y, wind.z).toDouble());
    common::CVector3f wind_direction;
    if (!(wind_length <= 0.0)) {
        const X inverse_length = X(1.0) / widen(static_cast<float>(wind_length));
        wind_direction = {.x = (widen(wind.x) * inverse_length).toFloat(),
                          .y = (widen(wind.y) * inverse_length).toFloat(),
                          .z = (widen(wind.z) * inverse_length).toFloat()};
    }
    // Only the wind blowing against the character's facing blows the cloth.
    const float facing =
        std::min(dotYXZ(wind_direction, turn.m[0].z, turn.m[1].z, turn.m[2].z).toFloat(), 0.0F);
    const float against = facing * -1.0F;
    const common::CVector3f blown = turn.transformVectorTranspose(
        {.x = wind.x * against, .y = wind.y * against, .z = wind.z * against});
    const common::CVector3f moved =
        turn.transformVectorTranspose({.x = position.x - last_position_.x,
                                       .y = position.y - last_position_.y,
                                       .z = position.z - last_position_.z});
    last_position_ = position;
    const X per_second = X(1.0) / widen(delta_time);
    const auto accelerate = [&per_second](const X &speed, float blow) {
        return ((speed - widen(blow + kUnsetWind)) * per_second).toFloat();
    };
    // y's speed is stored as a float before the wind is taken from it; x's and z's are not.
    const common::CVector3f acceleration = {
        .x = accelerate(widen(moved.x) * per_second, blown.x),
        .y = accelerate(widen((widen(moved.y) * per_second).toFloat()), blown.y),
        .z = accelerate(widen(moved.z) * per_second, blown.z)};
    const float yaw_change = normalizeAngleToPi(euler.y - last_euler_.y);
    const float yaw_rate = ((widen(yaw_change) * per_second) * per_second).toFloat();
    last_euler_ = euler;
    for (SClothVertex &vertex : vertices_) {
        vertex.force = {};
        vertex.body_collision = false;
        vertex.floor_collision = false;
    }
    const common::CVector3f gravity = turn.transformVectorTranspose({.y = -weight_});
    const float mass = weight_ / gravity_;
    const float spin = yaw_rate * mass * mom_inert_;
    const X inverse_mass = X(1.0) / widen(mass);
    for (const int index : vertex_order_) {
        SClothVertex &vertex = vertices_[static_cast<std::size_t>(index)];
        if (vertex.locked) {
            continue;
        }
        vertex.secondary_velocity = {.x = dampen_ * vertex.secondary_velocity.x,
                                     .y = dampen_ * vertex.secondary_velocity.y,
                                     .z = dampen_ * vertex.secondary_velocity.z};
        vertex.force = {.x = vertex.force.x - (acceleration.x * mass * wind_area_),
                        .y = vertex.force.y - (acceleration.y * mass * wind_area_),
                        .z = vertex.force.z - (acceleration.z * mass * wind_area_)};
        vertex.force = {.x = vertex.force.x + gravity.x,
                        .y = vertex.force.y + gravity.y,
                        .z = vertex.force.z + gravity.z};
        const common::CVector3f &p = vertex.position;
        vertex.force = {.x = vertex.force.x + ((0.0F * p.y) - (p.z * spin)),
                        .y = vertex.force.y + ((0.0F * p.z) - (0.0F * p.x)),
                        .z = vertex.force.z + ((p.x * spin) - (0.0F * p.y))};
        vertex.velocity = {.x = (widen(vertex.force.x) * inverse_mass).toFloat(),
                           .y = (widen(vertex.force.y) * inverse_mass).toFloat(),
                           .z = (inverse_mass * widen(vertex.force.z)).toFloat()};
        vertex.secondary_velocity = {
            .x = vertex.secondary_velocity.x + (vertex.velocity.x * delta_time),
            .y = vertex.secondary_velocity.y + (vertex.velocity.y * delta_time),
            .z = vertex.secondary_velocity.z + (vertex.velocity.z * delta_time)};
        vertex.position = {.x = vertex.position.x + (vertex.secondary_velocity.x * delta_time),
                           .y = vertex.position.y + (vertex.secondary_velocity.y * delta_time),
                           .z = vertex.position.z + (delta_time * vertex.secondary_velocity.z)};
        applyConstraints(vertex);
    }
    for (int pass = 0; pass < kConstraintPasses; ++pass) {
        for (const int index : vertex_order_) {
            SClothVertex &vertex = vertices_[static_cast<std::size_t>(index)];
            if (!vertex.locked) {
                applyConstraints(vertex);
            }
        }
    }
    applyFriction();
}

void CCloth::followBones(const CDeformableModelInstance &model) {
    const SPose &pose = model.getPose();
    for (const int index : locked_vertex_indices_) {
        SClothVertex &pin = vertices_[static_cast<std::size_t>(index)];
        pin.position = {};
        for (std::size_t k = 0; std::cmp_less(k, pin.bone_influence_count); ++k) {
            const common::CVector3f p = transformVector3x4(
                pin.bone_positions[k],
                pose.bone_model_matrices[static_cast<std::size_t>(pin.bone_index[k])]);
            const float weight = pin.bone_weights[k];
            pin.position = {.x = pin.position.x + (p.x * weight),
                            .y = pin.position.y + (p.y * weight),
                            .z = pin.position.z + (p.z * weight)};
        }
    }
    for (SClothBone &bone : collide_bones_) {
        computeBoneTransform(bone, model);
    }
}

// Points against a bone or the floor are slowed by its friction.
void CCloth::applyFriction() {
    for (const int index : vertex_order_) {
        SClothVertex &vertex = vertices_[static_cast<std::size_t>(index)];
        common::CVector3f &v = vertex.secondary_velocity;
        if (vertex.body_collision) {
            v = {.x = body_friction_ * v.x, .y = body_friction_ * v.y, .z = body_friction_ * v.z};
        }
        if (vertex.floor_collision) {
            v = {
                .x = floor_friction_ * v.x, .y = floor_friction_ * v.y, .z = floor_friction_ * v.z};
        }
    }
}

// The floor and the ties hold the point, then each bone it has gone into pushes it out. A point
// whose place along a bone isn't a number passes the original's range checks.
// unverified: the push out of a bone, as its assembly reads, not run against the original with a
//   model
// nocedit 0x0043a420
void CCloth::applyConstraints(SClothVertex &vertex) {
    if (vertex.position.y < floor_y_) {
        vertex.secondary_velocity.y = 0.0F;
        vertex.position.y = floor_y_;
        vertex.floor_collision = true;
    }
    for (std::size_t i = 0; i < vertex.connected_indices.size(); ++i) {
        const SClothVertex &tied = vertices_[static_cast<std::size_t>(vertex.connected_indices[i])];
        const common::CVector3f d = {.x = vertex.position.x - tied.position.x,
                                     .y = vertex.position.y - tied.position.y,
                                     .z = vertex.position.z - tied.position.z};
        const float length = fastSqrt(dotYXZ(d, d.x, d.y, d.z).toFloat());
        const float rest = vertex.rest_lengths[i];
        const X inverse_length = X(1.0) / widen(length);
        // The offset along the tie, by the amount, as the x87 holds it before the store.
        const auto along = [&d, &inverse_length](float amount) {
            return common::CVector3f{.x = (widen(d.x) * widen(amount) * inverse_length).toFloat(),
                                     .y = (widen(d.y) * widen(amount) * inverse_length).toFloat(),
                                     .z = (widen(d.z) * widen(amount) * inverse_length).toFloat()};
        };
        if (rest < length) {
            const common::CVector3f pull = along(length - rest);
            vertex.position = {.x = vertex.position.x - pull.x,
                               .y = vertex.position.y - pull.y,
                               .z = vertex.position.z - pull.z};
            vertex.secondary_velocity = {
                .x = vertex.secondary_velocity.x - (pull.x * inv_delta_time_),
                .y = vertex.secondary_velocity.y - (pull.y * inv_delta_time_),
                .z = vertex.secondary_velocity.z - (pull.z * inv_delta_time_)};
        }
        if (length < rest) {
            const common::CVector3f slack = along(rest - length);
            const common::CVector3f push = {
                .x = slack.x * spring_, .y = slack.y * spring_, .z = slack.z * spring_};
            vertex.position = {.x = vertex.position.x + push.x,
                               .y = vertex.position.y + push.y,
                               .z = vertex.position.z + push.z};
            vertex.secondary_velocity = {
                .x = vertex.secondary_velocity.x + (push.x * inv_delta_time_),
                .y = vertex.secondary_velocity.y + (push.y * inv_delta_time_),
                .z = vertex.secondary_velocity.z + (push.z * inv_delta_time_)};
        }
    }
    for (const SClothBone &bone : collide_bones_) {
        const common::CMatrix3x3f &m = bone.local_matrix;
        const common::CVector3f r = {.x = vertex.position.x - bone.position_offset.x,
                                     .y = vertex.position.y - bone.position_offset.y,
                                     .z = vertex.position.z - bone.position_offset.z};
        const X along_exact = dotYXZ(r, m.m[0].z, m.m[1].z, m.m[2].z);
        const float along = along_exact.toFloat();
        if (along_exact < X(0.0) || along > bone.child_distance) {
            continue;
        }
        const float across = dotYXZ(r, m.m[0].x, m.m[1].x, m.m[2].x).toFloat();
        const float up = dotYXZ(r, m.m[0].y, m.m[1].y, m.m[2].y).toFloat();
        const X a = widen(across) * widen(bone.inv_radius1);
        const X b = widen(up) * widen(bone.inv_radius2);
        if (!(fastSqrt(((a * a) + (b * b)).toFloat()) < 1.0F)) {
            continue;
        }
        const float scale =
            fastInvSqrt(((widen(up) * widen(up)) + (widen(across) * widen(across))).toFloat());
        const X clearance(kBoneClearance);
        const common::CVector3f out = m.transformVector(
            {.x = (widen(bone.radius1) * clearance * widen(across * scale)).toFloat(),
             .y = (clearance * widen(bone.radius2) * widen(up * scale)).toFloat(),
             .z = along});
        const common::CVector3f surface = {.x = bone.position_offset.x + out.x,
                                           .y = bone.position_offset.y + out.y,
                                           .z = bone.position_offset.z + out.z};
        vertex.secondary_velocity = {
            .x = vertex.secondary_velocity.x + ((surface.x - vertex.position.x) * inv_delta_time_),
            .y = vertex.secondary_velocity.y + ((surface.y - vertex.position.y) * inv_delta_time_),
            .z = vertex.secondary_velocity.z + ((surface.z - vertex.position.z) * inv_delta_time_)};
        vertex.position = surface;
        vertex.body_collision = true;
    }
}

} // namespace nocturne::core
