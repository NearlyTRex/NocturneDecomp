#pragma once

#include "engine/fwd.h"
#include "platform/fwd.h"

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
int getTriangleWindingFromIndices1(SMRGLPrimitiveTriangle *triangle);
int getTriangleWindingFromPackedIndices(platform::STrianglePackedIndices *triangle);
void renderPolygonSoftware(platform::SRenderVertex *vertices, int vertex_count);
void renderIndexedPolygonSoftware(int *vertex_indices, int vertex_count);
void renderScanlinePolygon(platform::SRenderVertex *vertices, int vertex_count);
void renderIndexedPolygonAdvanced(int *vertex_indices, int vertex_count);

} // namespace nocturne::engine
