#pragma once

#include "engine/drender/drender.h"
#include "platform/fwd.h"

namespace nocturne::engine {

void rasterizeTriangle(platform::SRenderVertex *vertex_buffer, int vertex_count);
void rasterizePolygonCustom(platform::SRenderVertex *vertex_buffer, int vertex_count,
                            CustomScanlineFunc *scanline_renderer);

} // namespace nocturne::engine
