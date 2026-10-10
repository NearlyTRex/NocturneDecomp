#include "common/render/polygonbatch.h"

#include <algorithm>
#include <limits>

namespace nocturne::common {
namespace {

// Indices are 16-bit, so a batch addresses this many vertices at most.
constexpr std::size_t kMaxAddressableVertices =
    std::size_t{std::numeric_limits<std::uint16_t>::max()} + 1;
constexpr std::size_t kFlushHeadroom = 32;

} // namespace

CPolygonBatch::CPolygonBatch(std::size_t vertex_capacity, std::size_t index_capacity)
    : vertices_(std::min(vertex_capacity, kMaxAddressableVertices)), indices_(index_capacity) {}

void CPolygonBatch::reset() {
    vertex_count_ = 0;
    index_count_ = 0;
}

std::span<SScreenVertex> CPolygonBatch::addPolygon(std::size_t vertex_count) {
    const std::size_t triangles = vertex_count >= 3 ? vertex_count - 2 : 0;
    const std::size_t needed_indices = triangles * 3;
    if (vertex_count == 0 || vertex_count_ + vertex_count > vertices_.size() ||
        index_count_ + needed_indices > indices_.size()) {
        return {};
    }
    const auto base = static_cast<std::uint16_t>(vertex_count_);
    const std::span<std::uint16_t> fan = std::span(indices_).subspan(index_count_, needed_indices);
    for (std::size_t i = 0; i < triangles; ++i) {
        fan[i * 3] = base;
        fan[(i * 3) + 1] = static_cast<std::uint16_t>(base + 1 + i);
        fan[(i * 3) + 2] = static_cast<std::uint16_t>(base + 2 + i);
    }
    index_count_ += needed_indices;
    const std::span<SScreenVertex> slots =
        std::span(vertices_).subspan(vertex_count_, vertex_count);
    vertex_count_ += vertex_count;
    return slots;
}

bool CPolygonBatch::shouldFlush() const {
    return vertex_count_ + kFlushHeadroom > vertices_.size() ||
           index_count_ + (kFlushHeadroom * 3) > indices_.size();
}

std::span<const SScreenVertex> CPolygonBatch::getVertices() const {
    return std::span(vertices_).first(vertex_count_);
}

std::span<const std::uint16_t> CPolygonBatch::getIndices() const {
    return std::span(indices_).first(index_count_);
}

int getFarthestDepth(std::span<const int> depths) {
    return depths.empty() ? 0 : std::ranges::max(depths);
}

} // namespace nocturne::common
