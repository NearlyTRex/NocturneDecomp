#include "common/error/error.h"
#include "common/math/vector3f.h"
#include "common/math/vector3i.h"
#include "core/dcube/cubedrawowners.h"
#include "core/dcube/demoncube.h"
#include "core/dcube/demoncubetriangle.h"
#include "core/set/demonset.h"
#include "engine/drender/demonrenderer.h"
#include "engine/special/special.h"
#include "platform/mrglheaderprimitive.h"
#include "platform/rendervertex.h"

#include <array>
#include <cmath>
#include <cstddef>
#include <cstdint>
#include <format>
#include <span>

namespace nocturne::core {
namespace {

// World units to the renderer's 24.8.
constexpr double kWorldToFixed = 256.0;
// A normal's components to colour levels, each wrapped to its low byte.
constexpr double kNormalToLevel = 127.0;
constexpr std::uint32_t kLevelMask = 0xffU;
// A projected corner's screen_x holds its clip flags instead when this is set.
constexpr std::uint32_t kClipped = 0x80000000U;

// FISTP under the default control word: to nearest, ties to even.
int roundToInt(double value) {
    return static_cast<int>(std::nearbyint(value));
}

int toLevel(float component) {
    return static_cast<int>(
        static_cast<std::uint32_t>(roundToInt(static_cast<double>(component) * kNormalToLevel)) &
        kLevelMask);
}

// The triangle as a polygon of three of the cube's corners in the renderer's buffer, which
// rotateVertices fills in the cube's vertex order.
// nocedit 0x004566e0
void buildAndRenderTrianglePrimitive(const CDemonCubeTriangle &triangle, CDemonSet &set) {
    const std::array<int, 3> &corners = triangle.getVertexIndices();
    const platform::SMRGLHeaderPrimitive primitive{
        .surface_normal = {}, .vertex_indices = {corners[0], corners[1], corners[2]}};
    set.renderPrimitiveList(std::span(&primitive, 1));
}

} // namespace

// Only the editor colours a cube's triangles by their ground type; the game always draws them
// coloured by their normals. The original also set a constant colour vector nothing reads.
// deferred: keeping every corner clipped while advanced culling is on, with
//   enableAdvancedCulling's callers
// nocedit 0x00457650
void CDemonCube::rotateVertices(const SCubeDrawOwners &owners) const {
    engine::CDemonRenderer &renderer = owners.renderer;
    renderer.processCameraRelativeVertex({});
    const std::span<platform::SRenderVertex> buffer = renderer.getVertexBuffer();
    if (vertices_.size() > buffer.size()) {
        common::displayErrorAndQuit(std::format("CDemonCube::rotateVerticies - tried to rotate {} "
                                                "vertices, but GLOBAL_VERTEX_COUNT = {}",
                                                vertices_.size(), buffer.size()));
    }
    renderer.enableFaceCapture(true);
    renderer.setRenderingState(true);
    bool all_on_screen = true;
    for (std::size_t i = 0; i < vertices_.size(); ++i) {
        const common::CVector3f &vertex = vertices_[i];
        const common::CVector3i fixed{
            .x = roundToInt(static_cast<double>(vertex.x) * kWorldToFixed),
            .y = roundToInt(static_cast<double>(vertex.y) * kWorldToFixed),
            .z = roundToInt(static_cast<double>(vertex.z) * kWorldToFixed)};
        platform::SProjectedVertex &projected = buffer[i].projected_vertex;
        owners.special.transformAndProjectPoint(projected, fixed);
        if ((static_cast<std::uint32_t>(projected.screen_x) & kClipped) != 0) {
            all_on_screen = false;
        }
    }
    if (all_on_screen) {
        renderer.enableFaceCapture(false);
    }
    for (const CDemonCubeTriangle &triangle : triangles_) {
        const common::CVector3f &normal = triangle.getNormal();
        renderer.setRGBAColor(toLevel(normal.x), toLevel(normal.y), toLevel(normal.z));
        buildAndRenderTrianglePrimitive(triangle, owners.set);
    }
    renderer.enableFaceCapture(true);
    renderer.setRenderingState(false);
}

} // namespace nocturne::core
