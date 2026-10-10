#include "common/render/polygonbatch.h"

#include <gtest/gtest.h>

#include <array>
#include <cstddef>
#include <cstdint>
#include <string>
#include <vector>

namespace nocturne::common {
namespace {

// The index loop of APIDLLdrawPolygon2, in its own form.
std::vector<std::uint16_t> oracleFan(std::size_t base, std::size_t vertex_count) {
    std::vector<std::uint16_t> out;
    for (std::size_t i = 0; i + 2 < vertex_count; ++i) {
        out.push_back(static_cast<std::uint16_t>(base));
        out.push_back(static_cast<std::uint16_t>(base + 1 + i));
        out.push_back(static_cast<std::uint16_t>(base + 2 + i));
    }
    return out;
}

TEST(CPolygonBatch, FanIndicesMatchTheEngine) {
    CPolygonBatch batch(4096, 8192);
    std::size_t base = 0;
    for (std::size_t n = 1; n <= 24; ++n) {
        SCOPED_TRACE("polygon of " + std::to_string(n));
        const std::size_t before = batch.getIndices().size();
        const std::span<SScreenVertex> slots = batch.addPolygon(n);
        EXPECT_EQ(slots.size(), n);
        const std::span<const std::uint16_t> added = batch.getIndices().subspan(before);
        EXPECT_EQ(std::vector<std::uint16_t>(added.begin(), added.end()), oracleFan(base, n));
        base += n;
        EXPECT_EQ(batch.getVertices().size(), base);
    }
}

TEST(CPolygonBatch, SlotsAreTheBatchsOwnVerticesInOrder) {
    CPolygonBatch batch(64, 64);
    batch.addPolygon(3)[0].x = 1.0F;
    batch.addPolygon(4)[0].x = 2.0F;
    EXPECT_EQ(batch.getVertices()[0].x, 1.0F);
    EXPECT_EQ(batch.getVertices()[3].x, 2.0F);
}

constexpr std::size_t kFanVertices = 9;

std::vector<std::uint16_t> fanOfNine() {
    CPolygonBatch batch(4096, 8192);
    static_cast<void>(batch.addPolygon(kFanVertices));
    const std::span<const std::uint16_t> indices = batch.getIndices();
    return {indices.begin(), indices.end()};
}

TEST(CPolygonBatch, EveryTriangleKeepsTheFirstVertex) {
    const std::vector<std::uint16_t> indices = fanOfNine();
    ASSERT_EQ(indices.size(), (kFanVertices - 2) * 3);
    for (std::size_t t = 0; t < kFanVertices - 2; ++t) {
        EXPECT_EQ(indices.at(t * 3), 0);
        EXPECT_EQ(indices.at((t * 3) + 2), indices.at((t * 3) + 1) + 1);
        EXPECT_LT(indices.at((t * 3) + 2), kFanVertices);
    }
}

TEST(CPolygonBatch, EachTriangleSharesAnEdgeWithTheLast) {
    const std::vector<std::uint16_t> indices = fanOfNine();
    for (std::size_t t = 1; t < kFanVertices - 2; ++t) {
        EXPECT_EQ(indices.at((t * 3) + 1), indices.at((t * 3) - 1));
    }
}

TEST(CPolygonBatch, DegeneratePolygonsTakeSlotsAndEmitNothing) {
    CPolygonBatch batch(64, 64);
    EXPECT_EQ(batch.addPolygon(1).size(), 1U);
    EXPECT_EQ(batch.addPolygon(2).size(), 2U);
    EXPECT_EQ(batch.getVertices().size(), 3U);
    EXPECT_TRUE(batch.getIndices().empty());
    EXPECT_TRUE(batch.addPolygon(0).empty());
}

TEST(CPolygonBatch, ARefusedPolygonLeavesTheBatchUntouched) {
    CPolygonBatch batch(10, 64);
    EXPECT_FALSE(batch.addPolygon(8).empty());
    const std::size_t indices = batch.getIndices().size();
    EXPECT_TRUE(batch.addPolygon(5).empty());
    EXPECT_EQ(batch.getVertices().size(), 8U);
    EXPECT_EQ(batch.getIndices().size(), indices);
    // Exactly filling it is allowed.
    EXPECT_FALSE(batch.addPolygon(2).empty());
    EXPECT_EQ(batch.getVertices().size(), 10U);
    batch.reset();
    EXPECT_TRUE(batch.getVertices().empty());
    EXPECT_TRUE(batch.getIndices().empty());
    EXPECT_FALSE(batch.addPolygon(5).empty());
}

TEST(CPolygonBatch, IndexCapacityBindsOnItsOwn) {
    CPolygonBatch batch(4096, 6);
    EXPECT_FALSE(batch.addPolygon(4).empty());
    EXPECT_TRUE(batch.addPolygon(3).empty());
    // A polygon needing no indices still fits.
    EXPECT_FALSE(batch.addPolygon(2).empty());
}

TEST(CPolygonBatch, VertexCapacityStopsAtWhatSixteenBitIndicesAddress) {
    CPolygonBatch batch(100000, 300000);
    EXPECT_FALSE(batch.addPolygon(65536).empty());
    EXPECT_TRUE(batch.addPolygon(1).empty());
}

TEST(CPolygonBatch, FlushIsSignalledBeforeTheBatchIsFull) {
    CPolygonBatch batch(128, 4096);
    EXPECT_FALSE(batch.shouldFlush());
    while (!batch.shouldFlush()) {
        ASSERT_FALSE(batch.addPolygon(4).empty());
    }
    EXPECT_LT(batch.getVertices().size(), 128U);
    EXPECT_FALSE(batch.addPolygon(4).empty());
}

TEST(CPolygonBatch, FlushIsSignalledWhenIndicesRunLow) {
    // Fewer indices than the headroom of 32 triangles' worth.
    const CPolygonBatch batch(4096, 95);
    EXPECT_TRUE(batch.shouldFlush());
}

TEST(PolygonBatch, RhwScaleIsTheFarthestDepth) {
    EXPECT_EQ(getFarthestDepth(std::array{400, 1200, 800, 90}), 1200);
    EXPECT_EQ(getFarthestDepth(std::array{5, 6, 7}), 7);
    EXPECT_EQ(getFarthestDepth(std::array{7, 6, 5}), 7);
    EXPECT_EQ(getFarthestDepth(std::array{42}), 42);
    EXPECT_EQ(getFarthestDepth({}), 0);
}

} // namespace
} // namespace nocturne::common
