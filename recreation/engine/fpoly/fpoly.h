#pragma once

#include "platform/fwd.h"

namespace nocturne::engine {

void rasterizePolygonHardware(platform::SRenderVertex **vertices, int vertex_count);

} // namespace nocturne::engine
