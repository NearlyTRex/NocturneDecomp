#pragma once

#include "engine/fwd.h"
#include "engine/polygonstate.h"
#include "engine/softwareedge.h"
#include "platform/fwd.h"

#include <cstdint>
#include <span>

namespace nocturne::engine {

// Gives each vertex its reciprocal depth as its depth, and the largest to one from 0 to 15 deep.
void prepareDepthBuffer(std::span<platform::SRenderVertex> vertices);
// Scales each vertex's texture coordinates by the nearest depth over its own, and its depth to
// that ratio in 8.24. A vertex at no depth is left as it is.
void normalizeTextureCoords(std::span<platform::SRenderVertex> vertices);
// Gives each vertex a reciprocal of its depth in sixteenths, the largest within 256 of the eye,
// and takes the texture coordinates through it.
void adjustNearPlaneTextureCoords(std::span<platform::SRenderVertex> vertices);
// Gives each vertex its reciprocal depth as its depth, and the largest to one at no depth.
void replaceWWithDepth(std::span<platform::SRenderVertex> vertices);
// Whether the triangle is kept: clockwise on screen with culling mode 1, anticlockwise
// otherwise. A degenerate one is not.
[[nodiscard]] bool calculateTriangleWindingOrder(const platform::SRenderVertex &v0,
                                                 const platform::SRenderVertex &v1,
                                                 const platform::SRenderVertex &v2,
                                                 int culling_mode);
// calculateTriangleWindingOrder over the polygon's first three corners in the buffer.
[[nodiscard]] bool
calculateTriangleWindingOrderFromIndices(std::span<const platform::SRenderVertex> vertices,
                                         const platform::SMRGLPrimitiveQuad &triangle,
                                         int culling_mode);
int getTriangleWindingFromPackedIndices(platform::STrianglePackedIndices *triangle);
// The first edge whose top row is y_value, other than edge_ptr; none if there is none.
[[nodiscard]] SSoftwareEdge *findEdgeInBuffer(std::span<SSoftwareEdge> edges, int y_value,
                                              const SSoftwareEdge *edge_ptr);

// prim.c's polygon rasterisers: a polygon is culled, handed to the hardware renderer when that
// draws, or stepped down the screen row by row, one pair of edges at a time, through the
// polygon's scanline. The rows run to the first edge pair to end, so only a convex polygon
// draws whole.
class CPrim {
public:
    CPrim(CSpecial &special, const C2d &two_d, const C3d &three_d, const SCurrentTexture &texture);

    // Projects vertices the clip left in eye space and preprocesses them for the mode first.
    void renderPolygonSoftware(std::span<platform::SRenderVertex> vertices,
                               const SPolygonState &state);
    // With preprocessing 1 the edges take the reciprocal depth as it is.
    void renderIndexedPolygonSoftware(std::span<platform::SRenderVertex> vertex_buffer,
                                      std::span<const int> vertex_indices,
                                      const SPolygonState &state);
    // The advanced pair also carry green and blue down the edges, for vertex colour, and run
    // the rows to the polygon's end however far down the screen.
    void renderScanlinePolygon(std::span<platform::SRenderVertex> vertices,
                               const SPolygonState &state);
    // Preprocesses each corner in the buffer on its own, so normalising takes each corner's own
    // depth as the nearest, and a corner shared with another polygon is preprocessed again.
    void renderIndexedPolygonAdvanced(std::span<platform::SRenderVertex> vertex_buffer,
                                      std::span<const int> vertex_indices,
                                      const SPolygonState &state);

private:
    enum class EVariant : std::uint8_t { Simple, Advanced };

    void renderPolygon(std::span<platform::SRenderVertex> vertices, const SPolygonState &state,
                       EVariant variant);
    void renderIndexedPolygon(std::span<platform::SRenderVertex> vertex_buffer,
                              std::span<const int> vertex_indices, const SPolygonState &state,
                              EVariant variant);

    [[nodiscard]] bool drawsInHardware() const;

    CSpecial &special_;
    const C2d &two_d_;
    const C3d &three_d_;
    const SCurrentTexture &texture_;
};

} // namespace nocturne::engine
