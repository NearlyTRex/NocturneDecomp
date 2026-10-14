#pragma once

namespace nocturne::engine {

// Where a polygon edge crosses the current row, as the software rasteriser steps it.
struct SSoftwareEdge {
    // 16.16 pixels.
    int x_current = 0;
    // Red, or the light level for smooth shading, with 0x100 as black.
    int red_current = 0;
    int u_current = 0;
    int v_current = 0;
    // The reciprocal depth the depth buffer holds.
    int depth_current = 0;
    int alpha_current = 0;
    int green_current = 0;
    int blue_current = 0;
};

} // namespace nocturne::engine
