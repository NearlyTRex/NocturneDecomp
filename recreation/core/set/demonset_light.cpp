#include "common/error/error.h"
#include "common/math/fixed.h"
#include "common/math/vector3f.h"
#include "common/math/vector3i.h"
#include "common/text/ascii.h"
#include "core/cloth/cloth_functions.h"
#include "core/dcamera/cameratables.h"
#include "core/dcamera/demoncamera.h"
#include "core/rect.h"
#include "core/set/demonset.h"
#include "core/set/set.h"
#include "engine/2d/2d.h"
#include "engine/drender/demonrenderer.h"
#include "engine/special/special.h"
#include "platform/mrglprimitivequad.h"
#include "platform/projectedvertex.h"
#include "platform/rendervertex.h"

#include <algorithm>
#include <array>
#include <cmath>
#include <cstddef>
#include <cstdint>
#include <format>
#include <optional>
#include <span>
#include <string_view>
#include <utility>
#include <vector>

namespace nocturne::core {
namespace {

using common::CVector3f;
using common::CVector3i;
using common::wrappingAdd;
using common::wrappingSubtract;
using platform::SRenderVertex;

// A normal's length in the fixed point the lighting dots it in.
constexpr double kUnitNormal = 65535.0;
constexpr int kBrightest = 0xffff;
// Without omni lights a vertex is grey, each channel 128 of 255.
constexpr int kUnlitOmniLevel = 128;
constexpr int kOmniLevelShift = 8;
// The screen's positions are 16.16.
constexpr int kScreenFractionBits = 16;

void checkVertexCount(std::string_view what, int vertex_count, std::size_t capacity) {
    if (std::cmp_greater(vertex_count, capacity)) {
        common::displayErrorAndQuit(
            std::format("CDemonSet::{} {} vertices, but GLOBAL_VERTEX_COUNT = {}", what,
                        vertex_count, capacity));
    }
}

// The face's normal, scaled to about 65535 by the rough reciprocal square root. The edges stay
// whole except where the original rounds a component to a float for one of the products.
CVector3f getFaceNormal(const CVector3i &p0, const CVector3i &p1, const CVector3i &p2) {
    const auto along = [](const CVector3i &to, const CVector3i &from) {
        return std::array{static_cast<double>(wrappingSubtract(to.x, from.x)),
                          static_cast<double>(wrappingSubtract(to.y, from.y)),
                          static_cast<double>(wrappingSubtract(to.z, from.z))};
    };
    const auto [ax, ay, az] = along(p1, p0);
    const auto [bx, by, bz] = along(p2, p1);
    const auto stored = [](double value) { return static_cast<double>(static_cast<float>(value)); };
    const double x = (ay * stored(bz)) - (by * az);
    const double y = (bx * az) - (ax * stored(bz));
    const double z = (ax * by) - (stored(bx) * stored(ay));
    const double scale =
        double{fastInvSqrt(static_cast<float>(((x * x) + (y * y)) + (z * z)))} * kUnitNormal;
    return {.x = static_cast<float>(x * scale),
            .y = static_cast<float>(y * scale),
            .z = static_cast<float>(z * scale)};
}

void addTo(CVector3f &sum, const CVector3f &normal) {
    sum.x += normal.x;
    sum.y += normal.y;
    sum.z += normal.z;
}

// The summed normal brought back to about 65535 long, and rounded to whole numbers by a bare
// FISTP: to nearest, ties to even.
CVector3i toUnitNormal(const CVector3f &sum) {
    const double scale =
        double{fastInvSqrt(static_cast<float>(((double{sum.y} * sum.y) + (double{sum.x} * sum.x)) +
                                              (double{sum.z} * sum.z)))} *
        kUnitNormal;
    const auto nearest = [scale](float component) {
        return static_cast<int>(std::nearbyint(static_cast<float>(component * scale)));
    };
    return {.x = nearest(sum.x), .y = nearest(sum.y), .z = nearest(sum.z)};
}

} // namespace

// nocedit 0x0056e7c0
void CDemonSet::rotateVerticies(std::span<const CVector3i> input_vertices) {
    const std::span<SRenderVertex> buffer = owners_.renderer.getVertexBuffer();
    checkVertexCount("rotateVerticies - tried to rotate", static_cast<int>(input_vertices.size()),
                     buffer.size());
    owners_.renderer.enableFaceCapture(true);
    bool all_in_view = true;
    for (std::size_t i = 0; i < input_vertices.size(); ++i) {
        owners_.special.transformAndProjectPoint(buffer[i].projected_vertex, input_vertices[i]);
        all_in_view = all_in_view && buffer[i].projected_vertex.screen_x >= 0;
    }
    if (all_in_view) {
        owners_.renderer.enableFaceCapture(false);
    }
    pushScreenBoundsToCamera(static_cast<int>(input_vertices.size()));
}

// The box starts inside out, each side at the view's opposite edge, so with no vertex in it the
// rectangle is empty. A vertex out of view reaches where it projects along an axis it is in view
// on, and the view's edge on a side it is past.
// nocedit 0x0056e5d0
void CDemonSet::pushScreenBoundsToCamera(int vertex_count) const {
    CDemonCamera *const camera = owners_.light_owners.camera.tables.kept_camera;
    if (camera == nullptr) {
        return;
    }
    const engine::SProjectionParams &view = owners_.two_d.getProjection();
    int min_x = view.center_x_fixed + view.half_width_fixed;
    int max_x = view.center_x_fixed - view.half_width_fixed;
    int min_y = view.center_y_fixed - view.neg_half_height_fixed;
    int max_y = view.center_y_fixed + view.neg_half_height_fixed;
    const auto widen = [](int &low, int &high, int eye, int depth, int half, int centre) {
        if (-depth < eye && eye < depth) {
            const auto at = static_cast<int>((std::int64_t{eye} * half) / depth) + centre;
            high = std::max(high, at);
            low = std::min(low, at);
        }
    };
    const std::span<const SRenderVertex> buffer = owners_.renderer.getVertexBuffer();
    for (const SRenderVertex &vertex :
         buffer.first(static_cast<std::size_t>(std::max(vertex_count, 0)))) {
        const platform::SProjectedVertex &point = vertex.projected_vertex;
        if (point.screen_x >= 0) {
            min_x = std::min(min_x, point.screen_x);
            max_x = std::max(max_x, point.screen_x);
            min_y = std::min(min_y, point.screen_y);
            max_y = std::max(max_y, point.screen_y);
            continue;
        }
        const int depth = point.transformed_z;
        widen(min_x, max_x, point.transformed_x, depth, view.half_width_fixed, view.center_x_fixed);
        widen(min_y, max_y, point.transformed_y, depth, view.neg_half_height_fixed,
              view.center_y_fixed);
        if (depth <= point.transformed_x) {
            max_x = view.center_x_fixed + view.half_width_fixed;
        }
        if (point.transformed_x <= -depth) {
            min_x = view.center_x_fixed - view.half_width_fixed;
        }
        if (depth <= point.transformed_y) {
            min_y = view.center_y_fixed + view.neg_half_height_fixed;
        }
        if (point.transformed_y <= -depth) {
            max_y = view.center_y_fixed - view.neg_half_height_fixed;
        }
    }
    camera->pushRect({.x_min = min_x >> kScreenFractionBits,
                      .x_max = max_x >> kScreenFractionBits,
                      .y_min = min_y >> kScreenFractionBits,
                      .y_max = max_y >> kScreenFractionBits});
}

// The original used the polygons' planes as scratch space for the face normals, as floats.
// Nothing reads them as planes: every caller draws them with plane culling off or zeroes them.
// deferred: lighting by the spatial lights while rendering_mode is 0, the given normals turned
//   by the camera first, with the scene's lights
// deferred: the quality modes' lighting, with setCameraView and the actors that set
//   lighting_quality_mode
// deferred: the cached mirror colour, with cacheMirrorLighting
// deferred: lighting without the directional light, with the actors that set
//   disable_directional_lighting
// deferred: skipping small normals' normalisation while skip_normal_normalization is set, with
//   CSvetlana::renderOpaque
// deferred: packed and triangle face lists, with the callers that pass them
// nocedit 0x0056eac0
// bw1 0x00553440
// bw2 0x00532190
void CDemonSet::lightVerticies(int vertex_count,
                               std::span<const platform::SMRGLPrimitiveQuad> polygons,
                               std::span<const CVector3i> vertex_normals) {
    const std::span<SRenderVertex> buffer = owners_.renderer.getVertexBuffer();
    checkVertexCount("lightVerticies - tried to light", vertex_count, buffer.size());
    // The shadow pass draws only depths, so the colours are left alone.
    if (owners_.renderer.isShadowPass() != 0) {
        return;
    }
    const auto count = static_cast<std::size_t>(vertex_count);
    if (!vertex_normals.empty()) {
        for (std::size_t i = 0; i < count; ++i) {
            lightVertexColor(vertex_normals[i], buffer[i]);
        }
        return;
    }
    if (polygons.empty()) {
        if (count > 0) {
            common::displayErrorAndQuit(
                "CDemonSet::lightVertexColor - Quick light mode with no normal");
        }
        return;
    }
    std::vector<CVector3i> world(count);
    for (std::size_t i = 0; i < count; ++i) {
        const platform::SProjectedVertex &point = buffer[i].projected_vertex;
        world[i] = transformToWorldSpace(
            {.x = point.transformed_x, .y = point.transformed_y, .z = point.transformed_z},
            owners_.matrix);
    }
    std::vector<CVector3f> sums(count);
    for (const platform::SMRGLPrimitiveQuad &poly : polygons) {
        const auto corner = [&poly](std::size_t i) {
            return static_cast<std::size_t>(poly.vertices[i].vertex_index);
        };
        const CVector3f normal =
            getFaceNormal(world[corner(0)], world[corner(1)], world[corner(2)]);
        // A quad's fourth corner shares the normal; a polygon of more only its first three do.
        const std::size_t corners = poly.vertices.size() == 4 ? 4 : 3;
        for (std::size_t i = 0; i < corners; ++i) {
            addTo(sums[corner(i)], normal);
        }
    }
    for (std::size_t i = 0; i < count; ++i) {
        lightVertexColor(toUnitNormal(sums[i]), buffer[i]);
    }
}

// deferred: the perspective reciprocal as the alpha, 0 until set, with the scene camera's
//   perspective setup
// deferred: the spatial lighting outside quick light, with the scene's lights
// nocedit 0x0056ddb0
// bw1 0x00552710
// bw2 0x00531460
// bw3 0x005380a0
void CDemonSet::lightVertexColor(const CVector3i &surface_normal, SRenderVertex &vertex) const {
    const int facing = wrappingSubtract(
        0, wrappingAdd(wrappingAdd(common::fixedMultiply(light_direction_.x, surface_normal.x),
                                   common::fixedMultiply(light_direction_.y, surface_normal.y)),
                       common::fixedMultiply(light_direction_.z, surface_normal.z)));
    const int level = std::min(wrappingAdd(std::max(facing, 0), ambient_base_quick_), kBrightest);
    vertex.r = common::fixedMultiply(flat_color_.r, level);
    vertex.g = common::fixedMultiply(flat_color_.g, level);
    vertex.b = common::fixedMultiply(flat_color_.b, level);
    vertex.a = 0;
}

// The original's 0 to 255 per channel, in the vertex's 8.8.
// deferred: each omni light the camera sees adding its colour, less with its distance out to its
//   reach and each channel up to 255, with the spatial lights
// nocedit 0x0056e3e0
void CDemonSet::computeVertexOmniLighting(const common::CVector3f & /*vertex_position*/,
                                          const common::CVector3f & /*position_offset*/,
                                          std::size_t vertex_index) const {
    SRenderVertex &vertex = owners_.renderer.getVertexBuffer()[vertex_index];
    vertex.r = kUnlitOmniLevel << kOmniLevelShift;
    vertex.g = kUnlitOmniLevel << kOmniLevelShift;
    vertex.b = kUnlitOmniLevel << kOmniLevelShift;
}

// nocedit 0x00570f10
std::optional<SSpotlight> CDemonSet::addLightFilter(std::string_view light_name) const {
    std::size_t index = 0;
    for (const C3DSLight &light : lights_) {
        if (light.getLightType() != C3DSLight::kSpotlightType) {
            continue;
        }
        if (common::equalsIgnoringAsciiCase(light.getName(), light_name)) {
            return SSpotlight{.light = &light, .index = index};
        }
        ++index;
    }
    return std::nullopt;
}

} // namespace nocturne::core
