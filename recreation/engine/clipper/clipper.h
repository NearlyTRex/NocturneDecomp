#pragma once

#include "engine/fwd.h"

namespace nocturne::engine {

void interpolateVertexLeftClip(SRenderVertex *v1, SRenderVertex *v2, SRenderVertex *output);
void interpolateVertexRightClip(SRenderVertex *v1, SRenderVertex *v2, SRenderVertex *output);
void interpolateVertexBottomClip(SRenderVertex *v1, SRenderVertex *v2, SRenderVertex *output);
void interpolateVertexTopClip(SRenderVertex *v1, SRenderVertex *v2, SRenderVertex *output);
void clipAndRasterize(int vertex_count, int *vertex_indices);
void clipPolygonToViewport(int vertex_count, int *vertex_indices);

} // namespace nocturne::engine
