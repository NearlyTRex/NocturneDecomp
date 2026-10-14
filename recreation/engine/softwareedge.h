#pragma once

namespace nocturne::engine {

// A polygon edge as the software rasteriser steps it down the rows, each value with what it
// gains a row.
struct SSoftwareEdge {
    // The rows the edge spans, the top included and the bottom not; the top is -1 once the
    // rasteriser has finished with the edge.
    int y_min = 0;
    int y_max = 0;
    // 16.16 pixels.
    int x_current = 0;
    int x_gradient = 0;
    // Red, or the light level for smooth shading, with 0x100 as black.
    int red_current = 0;
    int red_gradient = 0;
    int u_current = 0;
    int u_gradient = 0;
    int v_current = 0;
    int v_gradient = 0;
    // The reciprocal depth the depth buffer holds.
    int depth_current = 0;
    int depth_gradient = 0;
    int alpha_current = 0;
    int alpha_gradient = 0;
    int green_current = 0;
    int green_gradient = 0;
    int blue_current = 0;
    int blue_gradient = 0;
};

} // namespace nocturne::engine
