#pragma once

#include "platform/fwd.h"

namespace nocturne::engine {

void interpolateVertexLeftClip(platform::SRenderVertex *v1, platform::SRenderVertex *v2,
                               platform::SRenderVertex *output);
void interpolateVertexRightClip(platform::SRenderVertex *v1, platform::SRenderVertex *v2,
                                platform::SRenderVertex *output);
void interpolateVertexBottomClip(platform::SRenderVertex *v1, platform::SRenderVertex *v2,
                                 platform::SRenderVertex *output);
void interpolateVertexTopClip(platform::SRenderVertex *v1, platform::SRenderVertex *v2,
                              platform::SRenderVertex *output);
void clipAndRasterize(int vertex_count, int *vertex_indices);
void clipPolygonToViewport(int vertex_count, int *vertex_indices);

} // namespace nocturne::engine
