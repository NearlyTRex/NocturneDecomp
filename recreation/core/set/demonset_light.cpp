#include "common/error/error.h"
#include "common/math/fixed.h"
#include "common/math/vector3f.h"
#include "common/math/vector3i.h"
#include "core/cloth/cloth_functions.h"
#include "core/set/demonset.h"
#include "core/set/set.h"
#include "engine/drender/demonrenderer.h"
#include "engine/special/special.h"
#include "platform/mrglprimitivequad.h"
#include "platform/rendervertex.h"

#include <algorithm>
#include <array>
#include <cmath>
#include <cstddef>
#include <format>
#include <span>
#include <string_view>
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

void checkVertexCount(std::string_view what, int vertex_count, std::size_t capacity) {
    if (vertex_count > static_cast<int>(capacity)) {
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

// deferred: pushing the vertices' screen bounds to the scene camera, with the scene camera
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
// deferred: leaving the colours alone in the shadow pass, with setShadowPass's callers
// deferred: skipping small normals' normalisation while skip_normal_normalization is set, with
//   CSvetlana::renderOpaque
// deferred: packed and triangle face lists, with the callers that pass them
// nocedit 0x0056eac0
void CDemonSet::lightVerticies(int vertex_count,
                               std::span<const platform::SMRGLPrimitiveQuad> polygons,
                               std::span<const CVector3i> vertex_normals) {
    const std::span<SRenderVertex> buffer = owners_.renderer.getVertexBuffer();
    checkVertexCount("lightVerticies - tried to light", vertex_count, buffer.size());
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

} // namespace nocturne::core
