#pragma once

#include "engine/drender/drender.h"
#include "engine/fwd.h"

namespace nocturne::engine {

void rasterizeTriangle(SRenderVertex *vertex_buffer, int vertex_count);
void rasterizePolygonCustom(SRenderVertex *vertex_buffer, int vertex_count,
                            CustomScanlineFunc *scanline_renderer);

} // namespace nocturne::engine
