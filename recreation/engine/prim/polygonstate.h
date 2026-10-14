#pragma once

#include "engine/softwareedge.h"
#include "engine/special/scanlinemode.h"

#include <functional>

namespace nocturne::engine {

// Draws one row between two edges.
using ScanlineDrawer =
    std::function<void(const SSoftwareEdge &left, const SSoftwareEdge &right, int scanline_y)>;

// What the polygon being drawn asks of the software rasteriser.
struct SPolygonState {
    SScanlineMode mode;
    // Some vertices may have come through the clip, still in eye space with screen_x negative.
    bool vertex_processing = false;
    // The row routine the polygon's render mode selects.
    ScanlineDrawer draw_scanline;
};

} // namespace nocturne::engine
