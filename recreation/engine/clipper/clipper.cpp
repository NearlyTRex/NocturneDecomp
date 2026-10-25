#include "engine/clipper/clipper.h"

#include "common/math/fixed.h"
#include "engine/3d/3d.h"
#include "engine/clipper/clipplane.h"
#include "engine/polygonstate.h"
#include "engine/prim/prim.h"
#include "engine/rasteredges.h"
#include "engine/special/special.h"
#include "engine/texture/currenttexture.h"
#include "platform/rendervertex.h"

#include <algorithm>
#include <array>
#include <cstddef>
#include <cstdint>
#include <limits>
#include <optional>
#include <span>
#include <vector>

namespace nocturne::engine {
namespace {

using common::interpolateFraction31;
using platform::SRenderVertex;

void carryColorAndTexture(const SRenderVertex &v1, const SRenderVertex &v2, int fraction,
                          SRenderVertex &output) {
    output.r = interpolateFraction31(v1.r, v2.r, fraction);
    output.a = interpolateFraction31(v1.a, v2.a, fraction);
    output.u = interpolateFraction31(v1.u, v2.u, fraction);
    output.v = interpolateFraction31(v1.v, v2.v, fraction);
}

void carryEverything(const SRenderVertex &v1, const SRenderVertex &v2, int fraction,
                     SRenderVertex &output) {
    carryColorAndTexture(v1, v2, fraction, output);
    output.g = interpolateFraction31(v1.g, v2.g, fraction);
    output.b = interpolateFraction31(v1.b, v2.b, fraction);
}

void clipBasic(const SRenderVertex &v1, const SRenderVertex &v2, const SFrustumPlane &plane,
               SRenderVertex &output) {
    carryColorAndTexture(
        v1, v2,
        clipEdgeToPlane(v1.projected_vertex, v2.projected_vertex, plane, output.projected_vertex),
        output);
}

void clipAdvanced(const SRenderVertex &v1, const SRenderVertex &v2, const SFrustumPlane &plane,
                  SRenderVertex &output) {
    carryEverything(
        v1, v2,
        clipEdgeToPlane(v1.projected_vertex, v2.projected_vertex, plane, output.projected_vertex),
        output);
}

constexpr std::size_t kSmallestPolygon = 3;
// Both builds have a setter for the far plane that nothing calls.
constexpr int kFarPlaneDistance = std::numeric_limits<int>::max();

using Interpolator = void (*)(const SRenderVertex &, const SRenderVertex &, SRenderVertex &);

struct SSidePass {
    const SFrustumPlane *plane;
    Interpolator interpolate;
};

constexpr std::array kBasicPasses{
    SSidePass{.plane = &kPositiveXPlane, .interpolate = interpolateVertexRightClip},
    SSidePass{.plane = &kNegativeXPlane, .interpolate = interpolateVertexLeftClip},
    SSidePass{.plane = &kPositiveYPlane, .interpolate = interpolateVertexTopClip},
    SSidePass{.plane = &kNegativeYPlane, .interpolate = interpolateVertexBottomClip}};
constexpr std::array kAdvancedPasses{
    SSidePass{.plane = &kPositiveXPlane, .interpolate = interpolateVertexRightClipAdvanced},
    SSidePass{.plane = &kNegativeXPlane, .interpolate = interpolateVertexLeftClipAdvanced},
    SSidePass{.plane = &kPositiveYPlane, .interpolate = interpolateVertexTopClipAdvanced},
    SSidePass{.plane = &kNegativeYPlane, .interpolate = interpolateVertexBottomClipAdvanced}};

// Which corner each side's pass starts from, which decides the clipped polygon's first corner.
enum class EPassStart : std::uint8_t { First, Last };

// What tells the frustum clip from the viewport's.
struct SClipStyle {
    std::span<const SSidePass> passes;
    EPassStart start;
    bool far_plane;
    bool hardware_needs_textures;
};

constexpr SClipStyle kFrustumClip{.passes = kBasicPasses,
                                  .start = EPassStart::Last,
                                  .far_plane = true,
                                  .hardware_needs_textures = true};
constexpr SClipStyle kViewportClip{.passes = kAdvancedPasses,
                                   .start = EPassStart::First,
                                   .far_plane = false,
                                   .hardware_needs_textures = false};

enum class EPlacement : std::uint8_t { PastASide, InView, Across };

EPlacement getPlacement(std::span<const SRenderVertex *const> corners) {
    if (isWhollyPastASide(corners)) {
        return EPlacement::PastASide;
    }
    const bool any_outside = std::ranges::any_of(
        corners, [](const SRenderVertex *corner) { return corner->projected_vertex.screen_x < 0; });
    return any_outside ? EPlacement::Across : EPlacement::InView;
}

std::vector<SRenderVertex> copyCorners(std::span<const SRenderVertex *const> corners) {
    std::vector<SRenderVertex> polygon;
    polygon.reserve(corners.size());
    for (const SRenderVertex *corner : corners) {
        polygon.push_back(*corner);
    }
    return polygon;
}

// The original tested stale pointers for a polygon of fewer than three corners, which is culled.
void drawInHardware(std::span<SRenderVertex *> corners,
                    std::span<const SRenderVertex *const> read_corners, const SPolygonState &state,
                    CSpecial &special, const C3d &three_d) {
    if (raster::isBackFacing(read_corners, raster::ETriangles::Fan, three_d.getCullingMode())) {
        return;
    }
    special.drawPolygon2(corners, static_cast<int>(state.mode.render_flags));
}

// Fewer than three corners left after a side leaves nothing.
bool clipToSides(std::vector<SRenderVertex> &polygon, const SClipStyle &style) {
    std::vector<SRenderVertex> clipped;
    for (const SSidePass &pass : style.passes) {
        const std::size_t first = style.start == EPassStart::Last ? polygon.size() - 1 : 0;
        clipPolygonToPlane(polygon, *pass.plane, pass.interpolate, first, clipped);
        polygon.swap(clipped);
        if (polygon.size() < kSmallestPolygon) {
            return false;
        }
    }
    return true;
}

void clipToFarPlane(std::vector<SRenderVertex> &polygon) {
    const auto reaches_far = [](const SRenderVertex &vertex) {
        return vertex.projected_vertex.transformed_z >= kFarPlaneDistance;
    };
    if (std::ranges::none_of(polygon, reaches_far)) {
        return;
    }
    std::vector<SRenderVertex> clipped;
    clipPolygonToPlane(
        polygon, reaches_far,
        [](const SRenderVertex &inside, const SRenderVertex &outside, SRenderVertex &cut) {
            interpolateVertexFarClip(inside, outside, kFarPlaneDistance, cut);
        },
        0, clipped);
    polygon.swap(clipped);
}

// The polygon left to rasterise, or none when it is dropped or the hardware renderer draws it.
// One wholly in view is copied whole, however few its corners.
std::optional<std::vector<SRenderVertex>>
clipToView(std::span<SRenderVertex *> corners, const SClipStyle &style, const SPolygonState &state,
           CSpecial &special, const C3d &three_d, const SCurrentTexture &texture) {
    const std::vector<const SRenderVertex *> read_corners(corners.begin(), corners.end());
    const EPlacement placement = getPlacement(read_corners);
    if (placement == EPlacement::PastASide) {
        return std::nullopt;
    }
    if (placement == EPlacement::InView) {
        if (special.getUseExternalRenderer() &&
            !(style.hardware_needs_textures && texture.textures_disabled)) {
            drawInHardware(corners, read_corners, state, special, three_d);
            return std::nullopt;
        }
        return copyCorners(read_corners);
    }
    std::vector<SRenderVertex> polygon = copyCorners(read_corners);
    if (!clipToSides(polygon, style)) {
        return std::nullopt;
    }
    if (style.far_plane) {
        clipToFarPlane(polygon);
    }
    if (polygon.size() < kSmallestPolygon) {
        return std::nullopt;
    }
    for (SRenderVertex &vertex : polygon) {
        pullOntoView(vertex.projected_vertex);
    }
    return polygon;
}

} // namespace

// nocedit 0x00435a00
void interpolateVertexRightClip(const SRenderVertex &v1, const SRenderVertex &v2,
                                SRenderVertex &output) {
    clipBasic(v1, v2, kPositiveXPlane, output);
}

// nocedit 0x00435b00
void interpolateVertexLeftClip(const SRenderVertex &v1, const SRenderVertex &v2,
                               SRenderVertex &output) {
    clipBasic(v1, v2, kNegativeXPlane, output);
}

// nocedit 0x00435c00
void interpolateVertexTopClip(const SRenderVertex &v1, const SRenderVertex &v2,
                              SRenderVertex &output) {
    clipBasic(v1, v2, kPositiveYPlane, output);
}

// nocedit 0x00435d00
void interpolateVertexBottomClip(const SRenderVertex &v1, const SRenderVertex &v2,
                                 SRenderVertex &output) {
    clipBasic(v1, v2, kNegativeYPlane, output);
}

// The original read the far distance from clipper.c's global.
// nocedit 0x00435e00
void interpolateVertexFarClip(const SRenderVertex &v1, const SRenderVertex &v2, int far_distance,
                              SRenderVertex &output) {
    const platform::SProjectedVertex &p1 = v1.projected_vertex;
    const platform::SProjectedVertex &p2 = v2.projected_vertex;
    const int fraction =
        common::clipFraction(common::wrappingSubtract(far_distance, p1.transformed_z),
                             common::wrappingSubtract(p2.transformed_z, p1.transformed_z));
    platform::SProjectedVertex &out = output.projected_vertex;
    out.transformed_z = interpolateFraction31(p1.transformed_z, p2.transformed_z, fraction);
    out.transformed_y = interpolateFraction31(p1.transformed_y, p2.transformed_y, fraction);
    out.transformed_x = interpolateFraction31(p1.transformed_x, p2.transformed_x, fraction);
    out.screen_x = -1;
    carryColorAndTexture(v1, v2, fraction, output);
}

// nocedit 0x00437230
void interpolateVertexRightClipAdvanced(const SRenderVertex &v1, const SRenderVertex &v2,
                                        SRenderVertex &output) {
    clipAdvanced(v1, v2, kPositiveXPlane, output);
}

// nocedit 0x00437360
void interpolateVertexLeftClipAdvanced(const SRenderVertex &v1, const SRenderVertex &v2,
                                       SRenderVertex &output) {
    clipAdvanced(v1, v2, kNegativeXPlane, output);
}

// nocedit 0x00437490
void interpolateVertexTopClipAdvanced(const SRenderVertex &v1, const SRenderVertex &v2,
                                      SRenderVertex &output) {
    clipAdvanced(v1, v2, kPositiveYPlane, output);
}

// nocedit 0x004375c0
void interpolateVertexBottomClipAdvanced(const SRenderVertex &v1, const SRenderVertex &v2,
                                         SRenderVertex &output) {
    clipAdvanced(v1, v2, kNegativeYPlane, output);
}

namespace {

// The original quit with "Ran out of clipped verts!" when the frustum clip's passes made more
// than 12 corners, which a polygon that is not convex can.
// deferred: adding the corner count less two to the rendered-triangle count before the hardware
//  draw, with CGame::processFrame's statistics
// nocedit 0x004366e0
std::optional<std::vector<SRenderVertex>>
clipPolygonToViewFrustum(std::span<SRenderVertex *> corners, const SPolygonState &state,
                         CSpecial &special, const C3d &three_d, const SCurrentTexture &texture) {
    return clipToView(corners, kFrustumClip, state, special, three_d, texture);
}

} // namespace

// nocedit's frustum clip also quit on more than 16 corners; retail inlines the clip here, without
// that check.
// deferred: adding to the rendered-triangle count, with CGame::processFrame's statistics
// nocedit 0x004371b0
void clipAndRasterize(std::span<SRenderVertex> vertex_buffer, std::span<const int> vertex_indices,
                      const SPolygonState &state, CPrim &prim, CSpecial &special,
                      const C3d &three_d, const SCurrentTexture &texture) {
    if (!state.vertex_processing) {
        prim.renderIndexedPolygonSoftware(vertex_buffer, vertex_indices, state);
        return;
    }
    std::vector<SRenderVertex *> corners = raster::getCorners(vertex_buffer, vertex_indices);
    std::optional<std::vector<SRenderVertex>> clipped =
        clipPolygonToViewFrustum(corners, state, special, three_d, texture);
    if (clipped && clipped->size() >= kSmallestPolygon) {
        prim.renderPolygonSoftware(*clipped, state);
    }
}

// deferred: adding to the rendered-triangle count, with CGame::processFrame's statistics
// nocedit 0x00438420
void clipPolygonToViewport(std::span<SRenderVertex> vertex_buffer,
                           std::span<const int> vertex_indices, const SPolygonState &state,
                           CPrim &prim, CSpecial &special, const C3d &three_d,
                           const SCurrentTexture &texture) {
    if (!state.vertex_processing) {
        prim.renderIndexedPolygonAdvanced(vertex_buffer, vertex_indices, state);
        return;
    }
    std::vector<SRenderVertex *> corners = raster::getCorners(vertex_buffer, vertex_indices);
    std::optional<std::vector<SRenderVertex>> clipped =
        clipToView(corners, kViewportClip, state, special, three_d, texture);
    if (clipped && clipped->size() >= kSmallestPolygon) {
        prim.renderScanlinePolygon(*clipped, state);
    }
}

} // namespace nocturne::engine
