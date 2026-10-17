#include "common/math/fixed.h"
#include "common/math/matrix3x3f.h"
#include "core/dmodel/keyframedmodel.h"
#include "engine/keyframe/keyframe.h"

#include <algorithm>
#include <cmath>
#include <cstddef>

namespace nocturne::core {
namespace {

// Model positions are 24.8.
constexpr float kWorldScale = 1.0F / 256.0F;
// The length vertex normals are scaled to.
constexpr double kUnitLength = 65535.0;

common::CVector3f toWorld(const common::CVector3i &vertex) {
    return {.x = static_cast<float>(vertex.x) * kWorldScale,
            .y = static_cast<float>(vertex.y) * kWorldScale,
            .z = static_cast<float>(vertex.z) * kWorldScale};
}

// A corner off the frame's vertices, which the original read past them for, is the origin.
common::CVector3f toWorld(std::span<const common::CVector3i> vertices, int index) {
    if (index < 0 || static_cast<std::size_t>(index) >= vertices.size()) {
        return {};
    }
    return toWorld(vertices[static_cast<std::size_t>(index)]);
}

} // namespace

// Each vertex takes the sum of the planes of the polygons using it, scaled to unit length. A
// corner off the vertex list, a stray write in the original, adds to nothing.
// unverified: the scale and its products, which the x87 kept in extended precision before the
//   chop, by running calcNormals against nocedit's own code with axis-aligned and large sums
// nocedit 0x00477e60
void CKeyFramedModel::calcNormals() {
    if (frame_count_ != 1) {
        return;
    }
    std::ranges::fill(vertex_normals_, common::CVector3i{});
    for (platform::SMRGLPrimitiveQuad &polygon : polygons_) {
        polygon.surface_normal = engine::calculateSurfaceNormal(vertices_, polygon);
        for (const platform::SMRGLVertex &corner : polygon.vertices) {
            if (corner.vertex_index < 0 || corner.vertex_index >= vertex_count_) {
                continue;
            }
            common::CVector3i &normal =
                vertex_normals_[static_cast<std::size_t>(corner.vertex_index)];
            normal = {.x = common::wrappingAdd(normal.x, polygon.surface_normal.a),
                      .y = common::wrappingAdd(normal.y, polygon.surface_normal.b),
                      .z = common::wrappingAdd(normal.z, polygon.surface_normal.c)};
        }
    }
    for (common::CVector3i &normal : vertex_normals_) {
        const double x = normal.x;
        const double y = normal.y;
        const double z = normal.z;
        const double length = std::sqrt((x * x) + (y * y) + (z * z));
        if (length > 0.0) {
            // The CRT round the original calls chops toward zero.
            const double scale = kUnitLength / length;
            normal = {.x = static_cast<int>(std::trunc(x * scale)),
                      .y = static_cast<int>(std::trunc(y * scale)),
                      .z = static_cast<int>(std::trunc(z * scale))};
        } else {
            normal = {};
        }
    }
}

// A frame without vertices keeps an empty box, where the original read past its list.
// nocedit 0x00478010
void CKeyFramedModel::calculateFrameBounds() {
    for (int frame = 0; frame < frame_count_; ++frame) {
        CBoundingBox3D &box = frame_bounds_[static_cast<std::size_t>(frame)];
        const std::span<const common::CVector3i> vertices = getFrameVertices(frame);
        if (!vertices.empty()) {
            box.min = toWorld(vertices.front());
            box.max = box.min;
            for (const common::CVector3i &vertex : vertices.subspan(1)) {
                box.expand(toWorld(vertex));
            }
        }
        if (frame == 0) {
            bounds_.min = box.min;
            bounds_.max = box.min;
        }
        bounds_.expand(box.min);
        bounds_.expand(box.max);
    }
}

// A polygon of fewer than three corners makes no triangles; the original counted it as making
// a negative number and overran the list.
// nocedit 0x00478830
void CKeyFramedModel::buildCollisionTriList() {
    collision_triangles_.clear();
    collision_triangle_count_ = 0;
    if (polygons_.empty() || frame_count_ == 0) {
        return;
    }
    for (const platform::SMRGLPrimitiveQuad &polygon : polygons_) {
        collision_triangle_count_ += std::max(static_cast<int>(polygon.vertices.size()) - 2, 0);
    }
    collision_triangles_.resize(static_cast<std::size_t>(frame_count_) *
                                static_cast<std::size_t>(collision_triangle_count_));
    populateCollisionList({});
}

// Each polygon fans from its first corner, in world units turned by the angles.
// deferred: keeping the angles and their rotation in the model, which getFloorHeight and
//   intersectCylinder compare to rebuild the list and intersectRay turns its ray by, with
//   CKeyFramedModel::getFloorHeight, intersectCylinder and intersectRay
// nocedit 0x00478950
void CKeyFramedModel::populateCollisionList(const common::CVector3f &transform_vector) {
    common::CMatrix3x3f rotation;
    rotation.buildRotationMatrix(transform_vector);
    auto triangle = collision_triangles_.begin();
    for (int frame = 0; frame < frame_count_; ++frame) {
        const std::span<const common::CVector3i> vertices = getFrameVertices(frame);
        const auto corner = [&](const platform::SMRGLVertex &vertex) {
            return rotation.transformVector(toWorld(vertices, vertex.vertex_index));
        };
        for (const platform::SMRGLPrimitiveQuad &polygon : polygons_) {
            if (polygon.vertices.size() < 3) {
                continue;
            }
            const common::CVector3f first = corner(polygon.vertices[0]);
            common::CVector3f previous = corner(polygon.vertices[1]);
            for (const platform::SMRGLVertex &vertex : std::span(polygon.vertices).subspan(2)) {
                const common::CVector3f next = corner(vertex);
                triangle->buildCollision(first, previous, next);
                ++triangle;
                previous = next;
            }
        }
    }
}

} // namespace nocturne::core
