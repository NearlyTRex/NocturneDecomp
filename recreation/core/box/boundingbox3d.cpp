#include "core/box/boundingbox3d.h"

#include "common/math/extendedfloat.h"

#include <algorithm>
#include <array>
#include <cmath>
#include <cstddef>
#include <optional>

namespace nocturne::core {
namespace {

using common::CExtendedFloat;

constexpr float kMiss = -1.0F;
constexpr std::array<float common::CVector3f::*, 3> kAxes = {
    &common::CVector3f::x, &common::CVector3f::y, &common::CVector3f::z};

// How the segment meets one axis's pair of planes.
struct SSlabEntry {
    // The fraction along the segment where it crosses the plane the origin is outside of; kMiss
    // when the origin lies between the two.
    float distance = kMiss;
    // -1 for the min plane, 1 for the max.
    float side = 0.0F;
};

// No entry when the segment stops short of the plane. An origin unordered with min takes the min
// side, as the original's does, so a NaN misses rather than counting as inside.
std::optional<SSlabEntry> enterSlab(float origin, float direction, float min, float max) {
    if (!std::isgreaterequal(origin, min)) {
        const CExtendedFloat gap = CExtendedFloat(min) + CExtendedFloat(-origin);
        if (gap > CExtendedFloat(direction)) {
            return std::nullopt;
        }
        return SSlabEntry{.distance = gap.toFloat() / direction, .side = -1.0F};
    }
    if (origin > max) {
        const CExtendedFloat gap = CExtendedFloat(max) + CExtendedFloat(-origin);
        if (gap < CExtendedFloat(direction)) {
            return std::nullopt;
        }
        return SSlabEntry{.distance = gap.toFloat() / direction, .side = 1.0F};
    }
    return SSlabEntry{};
}

// The min side is tested before the point is stored as a float, the max side after, and an
// unordered max lets the point through.
bool isWithinSlab(float origin, float direction, float distance, float min, float max) {
    const CExtendedFloat point =
        (CExtendedFloat(direction) * CExtendedFloat(distance)) + CExtendedFloat(origin);
    return point >= CExtendedFloat(min) && !(point.toFloat() > max);
}

common::CVector3f reversedAndNormalised(const common::CVector3f &direction) {
    const common::CVector3f reversed{.x = -direction.x, .y = -direction.y, .z = -direction.z};
    const float length = reversed.length();
    if (0.0F >= length) {
        return {};
    }
    const double scale = 1.0 / static_cast<double>(length);
    return {.x = static_cast<float>(reversed.x * scale),
            .y = static_cast<float>(reversed.y * scale),
            .z = static_cast<float>(reversed.z * scale)};
}

} // namespace

// A NaN on either side of a min test stores the point, as the original's unordered compare does.
// nocedit 0x00420240
void CBoundingBox3D::expand(const common::CVector3f &point) {
    if (!std::isgreaterequal(point.x, min.x)) {
        min.x = point.x;
    }
    max.x = std::max(max.x, point.x);
    if (!std::isgreaterequal(point.y, min.y)) {
        min.y = point.y;
    }
    max.y = std::max(max.y, point.y);
    if (!std::isgreaterequal(point.z, min.z)) {
        min.z = point.z;
    }
    max.z = std::max(max.z, point.z);
}

// nocedit 0x00420940
float CBoundingBox3D::doesRayIntersect(const common::CVector3f &ray_origin,
                                       const common::CVector3f &ray_direction,
                                       common::CVector3f *out_normal) const {
    std::array<SSlabEntry, kAxes.size()> entries;
    for (std::size_t axis = 0; axis < kAxes.size(); ++axis) {
        const auto member = kAxes.at(axis);
        const std::optional<SSlabEntry> entry =
            enterSlab(ray_origin.*member, ray_direction.*member, min.*member, max.*member);
        if (!entry) {
            return kMiss;
        }
        entries.at(axis) = *entry;
    }
    if (std::ranges::all_of(entries, [](const SSlabEntry &entry) { return entry.side == 0.0F; })) {
        if (out_normal != nullptr) {
            *out_normal = reversedAndNormalised(ray_direction);
        }
        return 0.0F;
    }

    // The segment enters by the plane it reaches last.
    std::size_t plane = 0;
    for (std::size_t axis = 1; axis < kAxes.size(); ++axis) {
        if (entries.at(axis).distance > entries.at(plane).distance) {
            plane = axis;
        }
    }
    const float distance = entries.at(plane).distance;
    for (std::size_t axis = 0; axis < kAxes.size(); ++axis) {
        const auto member = kAxes.at(axis);
        if (axis != plane && !isWithinSlab(ray_origin.*member, ray_direction.*member, distance,
                                           min.*member, max.*member)) {
            return kMiss;
        }
    }
    if (out_normal != nullptr) {
        *out_normal = {};
        out_normal->*kAxes.at(plane) = entries.at(plane).side;
    }
    return distance;
}

} // namespace nocturne::core
