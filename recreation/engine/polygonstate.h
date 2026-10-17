#pragma once

#include "engine/softwareedge.h"
#include "engine/special/scanlinemode.h"

#include <functional>

namespace nocturne::engine {

// Draws one row between two edges, and says whether to stop drawing the polygon. Only zraster's
// and drender's triangles listen; the original's scanlines asked for that through a global flag.
using ScanlineDrawer =
    std::function<bool(const SSoftwareEdge &left, const SSoftwareEdge &right, int scanline_y)>;

// A caller's own row routine for zraster's custom polygons, given the edges in the order found.
using CustomScanlineDrawer =
    std::function<void(int scanline_y, const SSoftwareEdge &first, const SSoftwareEdge &second)>;

// What the polygon being drawn asks of the software rasteriser.
struct SPolygonState {
    SScanlineMode mode;
    // Some vertices may have come through the clip, still in eye space with screen_x negative.
    bool vertex_processing = false;
    // The row routine the polygon's render mode selects.
    ScanlineDrawer draw_scanline;
    // What zraster's triangle takes off each depth, which a light's shadow pass sets.
    int depth_bias = 0;
};

} // namespace nocturne::engine
