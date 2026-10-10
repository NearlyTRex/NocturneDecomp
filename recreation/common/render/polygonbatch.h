#pragma once

#include "common/render/screenvertex.h"

#include <cstddef>
#include <cstdint>
#include <span>
#include <vector>

namespace nocturne::common {

// Convex polygons gathered into one indexed triangle list, each a fan from its first vertex, so
// a run of polygons sharing a state is one draw.
class CPolygonBatch {
public:
    CPolygonBatch(std::size_t vertex_capacity, std::size_t index_capacity);

    void reset();
    // Room for one polygon's vertices, with its fan emitted; empty when the batch cannot take
    // it whole, so the caller draws, resets and asks again. A polygon of one or two vertices
    // takes its slots and emits no triangle, as the engine does.
    [[nodiscard]] std::span<SScreenVertex> addPolygon(std::size_t vertex_count);
    // True with room still left for a polygon of the size the engine submits, so a draw lands
    // on a boundary instead of on a refusal.
    [[nodiscard]] bool shouldFlush() const;

    [[nodiscard]] std::span<const SScreenVertex> getVertices() const;
    [[nodiscard]] std::span<const std::uint16_t> getIndices() const;

private:
    std::vector<SScreenVertex> vertices_;
    std::vector<std::uint16_t> indices_;
    std::size_t vertex_count_ = 0;
    std::size_t index_count_ = 0;
};

// The reciprocal-w scale a polygon submits with: its farthest depth, so every vertex divides by
// the same one. Zero for no vertices.
[[nodiscard]] int getFarthestDepth(std::span<const int> depths);

} // namespace nocturne::common
