#pragma once

#include "engine/fwd.h"

namespace nocturne::engine {

void setCullingMode(int culling_mode);
void prepareDepthBuffer(SRenderVertex *vertices, int vertex_count);
void normalizeTextureCoords(SRenderVertex *vertices, int vertex_count);
void adjustNearPlaneTextureCoords(SRenderVertex *vertices, int vertex_count);
void replaceWWithDepth(SRenderVertex *vertices, int vertex_count);
int calculateTriangleWindingOrder(SRenderVertex *v0, SRenderVertex *v1, SRenderVertex *v2);
int getTriangleWindingFromIndices1(SMRGLPrimitiveTriangle *triangle);
int getTriangleWindingFromPackedIndices(STrianglePackedIndices *triangle);
void renderPolygonSoftware(SRenderVertex *vertices, int vertex_count);
void renderIndexedPolygonSoftware(int *vertex_indices, int vertex_count);
void renderScanlinePolygon(SRenderVertex *vertices, int vertex_count);
void renderIndexedPolygonAdvanced(int *vertex_indices, int vertex_count);

} // namespace nocturne::engine
