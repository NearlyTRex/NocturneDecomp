#pragma once

#include "engine/fwd.h"
#include "platform/fwd.h"

namespace nocturne::engine {

void setCullingMode(int culling_mode);
void prepareDepthBuffer(platform::SRenderVertex *vertices, int vertex_count);
void normalizeTextureCoords(platform::SRenderVertex *vertices, int vertex_count);
void adjustNearPlaneTextureCoords(platform::SRenderVertex *vertices, int vertex_count);
void replaceWWithDepth(platform::SRenderVertex *vertices, int vertex_count);
int calculateTriangleWindingOrder(platform::SRenderVertex *v0, platform::SRenderVertex *v1,
                                  platform::SRenderVertex *v2);
int getTriangleWindingFromIndices1(SMRGLPrimitiveTriangle *triangle);
int getTriangleWindingFromPackedIndices(STrianglePackedIndices *triangle);
void renderPolygonSoftware(platform::SRenderVertex *vertices, int vertex_count);
void renderIndexedPolygonSoftware(int *vertex_indices, int vertex_count);
void renderScanlinePolygon(platform::SRenderVertex *vertices, int vertex_count);
void renderIndexedPolygonAdvanced(int *vertex_indices, int vertex_count);

} // namespace nocturne::engine
