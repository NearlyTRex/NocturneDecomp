#include "core/dstrender/dstrender.h"

#include "common/math/fixed.h"
#include "engine/2d/2d.h"
#include "engine/scanlinespan.h"
#include "engine/screendevice.h"
#include "engine/softwareedge.h"
#include "engine/texture/currenttexture.h"

#include <bit>
#include <cstddef>
#include <cstdint>
#include <span>

namespace nocturne::core {
namespace {

using engine::SRowSpan;

std::uint16_t *getDepthRow(engine::IScreenDevice &screen, int scanline_y, int left_x) {
    return static_cast<std::uint16_t *>(
               screen.getScreenRows()[static_cast<std::size_t>(scanline_y)]) +
           left_x;
}

std::uint32_t getReciprocal(const engine::C2d &two_d, int count) {
    return two_d.getReciprocalLookupTable()[static_cast<std::size_t>(count) + 1];
}

} // namespace

// nocedit 0x0049072f
void renderDepthOnlyStandard(const engine::SSoftwareEdge &left_edge,
                             const engine::SSoftwareEdge &right_edge, int scanline_y,
                             engine::IScreenDevice &screen, const engine::C2d &two_d) {
    const SRowSpan span = engine::getRowSpan(left_edge, right_edge);
    if (span.count <= 0) {
        return;
    }
    std::uint16_t *row = getDepthRow(screen, scanline_y, span.left_x);
    const int step = engine::getStep(span.lo->depth_current, span.hi->depth_current,
                                     getReciprocal(two_d, span.count));
    int depth = span.lo->depth_current;
    for (int x = 0; x < span.count; ++x) {
        // A depth below zero compares as unsigned, so it is never nearer.
        const auto level = static_cast<std::uint32_t>(depth >> 8);
        if (level < row[x]) {
            row[x] = static_cast<std::uint16_t>(level);
        }
        depth = common::wrappingAdd(depth, step);
    }
}

// The original's loop ran while its byte offset was at most twice the count, one pixel past the
// row's end.
// nocedit 0x004907e7
void renderTexturedAlphaMMXScanline(const engine::SSoftwareEdge &left_edge,
                                    const engine::SSoftwareEdge &right_edge, int scanline_y,
                                    engine::IScreenDevice &screen, const engine::C2d &two_d,
                                    const engine::SCurrentTexture &texture) {
    const SRowSpan span = engine::getRowSpan(left_edge, right_edge);
    if (span.count <= 0) {
        return;
    }
    std::uint16_t *row = getDepthRow(screen, scanline_y, span.left_x);
    const std::uint32_t reciprocal = getReciprocal(two_d, span.count);
    const engine::SSoftwareEdge &lo = *span.lo;
    const engine::SSoftwareEdge &hi = *span.hi;
    const int u_step = engine::getStep(lo.u_current, hi.u_current, reciprocal);
    const int v_step = engine::getStep(lo.v_current, hi.v_current, reciprocal);
    const int depth_step = engine::getStep(lo.depth_current, hi.depth_current, reciprocal);
    const std::span<const std::uint8_t> coverage =
        texture.opacity.empty() ? texture.data : texture.opacity;
    int u = lo.u_current;
    int v = lo.v_current;
    int depth = lo.depth_current;
    for (int x = 0; x <= span.count; ++x) {
        // Unsigned, so a depth stepped below zero is behind everything.
        if (std::bit_cast<std::uint32_t>(depth) < row[x] &&
            coverage[engine::getTexelIndex(static_cast<std::uint32_t>(u),
                                           static_cast<std::uint32_t>(v), texture)] != 0) {
            row[x] = static_cast<std::uint16_t>(depth);
        }
        u = common::wrappingAdd(u, u_step);
        v = common::wrappingAdd(v, v_step);
        depth = common::wrappingAdd(depth, depth_step);
    }
}

} // namespace nocturne::core
