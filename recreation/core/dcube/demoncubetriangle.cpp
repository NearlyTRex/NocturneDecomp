#include "core/dcube/demoncubetriangle.h"

#include "common/serial/binaryreader.h"

#include <array>
#include <cstddef>
#include <cstdint>
#include <span>

namespace nocturne::core {

// The original kept pointers into the cube's vertices; these are the indices it built them from.
// nocedit 0x004551d0
void CDemonCubeTriangle::readFromFile(common::CBinaryReader &reader) {
    for (int &index : vertex_indices_) {
        index = reader.read<std::int32_t>();
    }
    normal_.x = reader.read<float>();
    normal_.y = reader.read<float>();
    normal_.z = reader.read<float>();
    plane_distance_ = reader.read<float>();
    dominant_axis_ = reader.read<std::uint32_t>();
}

// The plane is met where the ray runs into it from behind, the way its normal points, within the
// ray's length; the point is then tested against the triangle on the two axes its dominant axis
// leaves. A dominant axis past 2 tests against nothing, as the original's zeros came to.
// unverified: the hit and the barycentric tests, worked in floats where the original kept the
//   x87's precision, against a machine-code oracle
// nocedit 0x00455460
// nocturne 0x00449150
// bw1 0x004560f0
// bw2 0x00444a40
// bw3 0x00452240
float CDemonCubeTriangle::rayTriangleIntersection(std::span<const common::CVector3f> vertices,
                                                  const common::CVector3f &ray_origin,
                                                  const common::CVector3f &ray_direction) const {
    constexpr float kMiss = -1.0F;
    const float facing = (normal_.z * ray_direction.z) + (normal_.x * ray_direction.x) +
                         (normal_.y * ray_direction.y);
    if (facing <= 0.0F) {
        return kMiss;
    }
    const float behind = -((normal_.z * ray_origin.z) + (normal_.y * ray_origin.y) +
                           (normal_.x * ray_origin.x) + plane_distance_);
    if (behind < 0.0F || facing < behind) {
        return kMiss;
    }
    const float along = behind / facing;
    const common::CVector3f hit{.x = (along * ray_direction.x) + ray_origin.x,
                                .y = (along * ray_direction.y) + ray_origin.y,
                                .z = (along * ray_direction.z) + ray_origin.z};
    const common::CVector3f &first = vertices[static_cast<std::size_t>(vertex_indices_[0])];
    const common::CVector3f &second = vertices[static_cast<std::size_t>(vertex_indices_[1])];
    const common::CVector3f &third = vertices[static_cast<std::size_t>(vertex_indices_[2])];
    // The two axes tested on: y and z for dominant axis 0, x and z for 1, x and y for 2.
    const auto across = [this](const common::CVector3f &point) {
        return dominant_axis_ == 0 ? point.y : point.x;
    };
    const auto down = [this](const common::CVector3f &point) {
        return dominant_axis_ == 2 ? point.y : point.z;
    };
    if (dominant_axis_ > 2) {
        return kMiss;
    }
    const float point_across = across(hit) - across(first);
    const float point_down = down(hit) - down(first);
    const float second_across = across(second) - across(first);
    const float second_down = down(second) - down(first);
    const float third_across = across(third) - across(first);
    const float third_down = down(third) - down(first);
    const float inverse = 1.0F / ((second_across * third_down) - (second_down * third_across));
    const float u = ((point_across * third_down) - (third_across * point_down)) * inverse;
    if (!(0.0F <= u)) {
        return kMiss;
    }
    const float v = ((second_across * point_down) - (second_down * point_across)) * inverse;
    if (0.0F <= v && u + v <= 1.0F) {
        return along;
    }
    return kMiss;
}

const std::array<int, 3> &CDemonCubeTriangle::getVertexIndices() const {
    return vertex_indices_;
}

const common::CVector3f &CDemonCubeTriangle::getNormal() const {
    return normal_;
}

float CDemonCubeTriangle::getPlaneDistance() const {
    return plane_distance_;
}

std::uint32_t CDemonCubeTriangle::getDominantAxis() const {
    return dominant_axis_;
}

} // namespace nocturne::core
