#include "common/math/vector3f.h"
#include "common/math/vector3i.h"
#include "core/actor/actorrenderowners.h"
#include "core/box/boundingbox3d.h"
#include "core/dcamera/cameratables.h"
#include "core/dcamera/demoncamera.h"
#include "core/set/demonset.h"
#include "engine/3d/3d.h"
#include "engine/drender/demonrenderer.h"
#include "engine/special/special.h"
#include "platform/clipplane.h"
#include "platform/mrglheaderprimitive.h"
#include "platform/projectedvertex.h"
#include "platform/rendervertex.h"

#include <array>
#include <cstddef>
#include <cstdint>
#include <span>

namespace nocturne::core {
namespace {

// A face's outward normal and its corners, wound as the original draws them.
struct SBoxFace {
    common::CVector3i normal;
    std::array<int, 4> corners;
};

constexpr std::array<SBoxFace, 6> kFaces{{
    {.normal = {.x = -1, .y = 0, .z = 0}, .corners = {0, 4, 6, 2}},
    {.normal = {.x = 1, .y = 0, .z = 0}, .corners = {1, 3, 7, 5}},
    {.normal = {.x = 0, .y = -1, .z = 0}, .corners = {0, 1, 5, 4}},
    {.normal = {.x = 0, .y = 1, .z = 0}, .corners = {2, 6, 7, 3}},
    {.normal = {.x = 0, .y = 0, .z = -1}, .corners = {0, 2, 3, 1}},
    {.normal = {.x = 0, .y = 0, .z = 1}, .corners = {4, 5, 7, 6}},
}};

// Every side bit a projected corner can carry.
constexpr std::uint32_t kAllSides = 0xff;
// Past this the fog in front of the box hides it.
constexpr int kFoggedOut = 65000;
// 24.8 to world units.
constexpr float kFixedToWorld = 1.0F / 256.0F;

// The face's plane through the box's corner on its side, in 24.8.
platform::SClipPlane facePlane(const SBoxFace &face, const common::CVector3i &low,
                               const common::CVector3i &high) {
    const bool on_max = face.normal.x + face.normal.y + face.normal.z > 0;
    const common::CVector3i &on_plane = on_max ? high : low;
    return {.a = face.normal.x,
            .b = face.normal.y,
            .c = face.normal.z,
            .d = (face.normal.x * on_plane.x) + (face.normal.y * on_plane.y) +
                 (face.normal.z * on_plane.z)};
}

} // namespace

// deferred: the light's shadow-map test in place of the fog test while the renderer draws the
//   shadow pass, with setShadowPass's callers and isVisibleWithShadow
// nocedit 0x004204f0
bool CBoundingBox3D::isVisible(const SActorRenderOwners &owners) const {
    if (!isVisibleWithCamera(owners)) {
        return false;
    }
    const common::CVector3f centre{
        .x = (min.x + max.x) * 0.5F, .y = (min.y + max.y) * 0.5F, .z = (min.z + max.z) * 0.5F};
    const common::CVector3i &stored = owners.three_d.getStoredPoint();
    common::CVector3f world_centre{.x = (static_cast<float>(stored.x) * kFixedToWorld) + centre.x,
                                   .y = (static_cast<float>(stored.y) * kFixedToWorld) + centre.y,
                                   .z = (static_cast<float>(stored.z) * kFixedToWorld) + centre.z};
    platform::SProjectedVertex projected_centre;
    owners.special.transformAndProjectPoint(projected_centre, centre.toFixed8());
    SCameraTables &tables = owners.camera_tables;
    if (tables.scene_camera == nullptr) {
        tables.perspective_reciprocal = 0;
        return true;
    }
    tables.scene_camera->setupPerspectiveAndFog(&world_centre, &projected_centre);
    return tables.perspective_reciprocal <= kFoggedOut;
}

// Retail's body. The editor's went through the scene camera's testVisibility, which swapped in
// the background camera and so tested a mirrored character as if it stood inside the wall.
// nocedit 0x00420680
// nocturne 0x0041d050
bool CBoundingBox3D::isVisibleWithCamera(const SActorRenderOwners &owners) const {
    const std::span<platform::SRenderVertex> vertices = owners.renderer.getVertexBuffer();
    std::uint32_t shared_sides = kAllSides;
    bool any_outside = false;
    for (std::uint32_t corner = 0; corner < kCorners; ++corner) {
        platform::SProjectedVertex &projected = vertices[corner].projected_vertex;
        owners.special.transformAndProjectPoint(projected, getCorner(corner).toFixed8());
        if (projected.screen_x >= 0) {
            shared_sides = 0;
        } else {
            any_outside = true;
            shared_sides &= static_cast<std::uint32_t>(projected.screen_x);
        }
    }
    if (shared_sides != 0) {
        return false;
    }
    owners.renderer.enableFaceCapture(any_outside);
    owners.renderer.setPlaneCullingEnabled(false);
    const common::CVector3i low = min.toFixed8();
    const common::CVector3i high = max.toFixed8();
    // With the eye inside every face's plane, the box is around it.
    bool visible = true;
    for (const SBoxFace &face : kFaces) {
        const platform::SClipPlane plane = facePlane(face, low, high);
        if (!owners.three_d.isVisiblePlane(plane)) {
            continue;
        }
        if (owners.set.renderSinglePrimitive(
                {.surface_normal = plane,
                 .vertex_indices = {face.corners.begin(), face.corners.end()}})) {
            visible = true;
            break;
        }
        visible = false;
    }
    owners.renderer.enableFaceCapture(true);
    owners.renderer.setPlaneCullingEnabled(true);
    return visible;
}

} // namespace nocturne::core
