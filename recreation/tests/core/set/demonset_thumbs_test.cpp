#include "common/serial/binarywriter.h"
#include "core/set/demonset.h"
#include "tests/mocks/core/setfilefixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstddef>
#include <cstdint>
#include <span>
#include <string>

namespace nocturne::core {
namespace {

using ::testing::Each;

using CDemonSetThumbsTest = CSetFileFixture;

constexpr std::size_t kThumbDepths = CDemonSet::kThumbWidth * CDemonSet::kThumbHeight;

// count little-endian depths counting up from first.
std::string depths(std::size_t count, std::uint32_t first) {
    common::CBinaryWriter writer;
    for (std::size_t i = 0; i < count; ++i) {
        writer.write(static_cast<std::uint32_t>(first + i));
    }
    const std::span<const std::byte> data = writer.getData();
    return {reinterpret_cast<const char *>(data.data()), data.size()};
}

SSetFile twoCameras(const std::string &geometry) {
    return {.geometry = geometry,
            .cameras = "2\n" + cameraText("first") + cameraText("second"),
            .pvs = "0\n0\n"};
}

TEST_F(CDemonSetThumbsTest, EachCameraHasItsThumbFromTheGeometrysZthFile) {
    givenFile("data\\pier.zth", depths(2 * kThumbDepths, 100));
    load(twoCameras("pier.geo"));
    EXPECT_EQ(set_.getThumb(0).size(), kThumbDepths);
    EXPECT_EQ(set_.getThumb(0)[1], 101U);
    EXPECT_EQ(set_.getThumb(1)[0], 100U + kThumbDepths);
}

TEST_F(CDemonSetThumbsTest, AGeometryNameWithoutAnExtensionGetsOne) {
    givenFile("data\\pier.zth", depths(2 * kThumbDepths, 1));
    load(twoCameras("pier"));
    EXPECT_EQ(set_.getThumb(1)[0], 1U + kThumbDepths);
}

TEST_F(CDemonSetThumbsTest, AShortFileLeavesTheRestZero) {
    givenFile("data\\pier.zth", depths(kThumbDepths + 1, 5));
    load(twoCameras("pier.geo"));
    EXPECT_EQ(set_.getThumb(1)[0], 5U + kThumbDepths);
    EXPECT_THAT(set_.getThumb(1).subspan(1), Each(0U));
}

TEST_F(CDemonSetThumbsTest, WithoutAFileEveryThumbIsZero) {
    load(twoCameras("pier.geo"));
    EXPECT_THAT(set_.getThumb(0), Each(0U));
    EXPECT_THAT(set_.getThumb(1), Each(0U));
}

} // namespace
} // namespace nocturne::core
