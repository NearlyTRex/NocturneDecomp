#pragma once

#include "engine/fwd.h"
#include "engine/polygonstate.h"
#include "platform/fwd.h"

#include <span>

namespace nocturne::engine {

// zraster.c's rasterisers, which step only x and depth (and red for the custom one) down the
// edges, with depth in 24.8, and run the rows to the polygon's end. Back-face culling tests the
// first three corners alone.
class CZRaster {
public:
    CZRaster(CSpecial &special, const C2d &two_d, const C3d &three_d,
             const SCurrentTexture &texture);

    // For depth passes: depth is offset by the state's bias, and a row may stop the polygon. A
    // vertex the clip left gets its reciprocal depth only when the preprocessing mode has one of
    // its low three bits set, and of the preprocessing only the depth modes 1 and 6 run.
    void rasterizeTriangle(std::span<platform::SRenderVertex> vertex_buffer,
                           const SPolygonState &state);
    // Draws through the caller's row routine and never through the hardware renderer.
    void rasterizePolygonCustom(std::span<platform::SRenderVertex> vertex_buffer,
                                const SPolygonState &state,
                                const CustomScanlineDrawer &scanline_renderer);

private:
    [[nodiscard]] bool isCulled(std::span<const platform::SRenderVertex> vertices) const;

    CSpecial &special_;
    const C2d &two_d_;
    const C3d &three_d_;
    const SCurrentTexture &texture_;
};

} // namespace nocturne::engine
