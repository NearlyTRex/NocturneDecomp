#include "core/dcube/demoncube.h"

#include "common/error/error.h"
#include "common/serial/binaryreader.h"

#include <algorithm>
#include <array>
#include <cstddef>
#include <cstdint>
#include <optional>
#include <span>

namespace nocturne::core {
namespace {

common::CVector3f readVector(common::CBinaryReader &reader) {
    common::CVector3f vector;
    vector.x = reader.read<float>();
    vector.y = reader.read<float>();
    vector.z = reader.read<float>();
    return vector;
}

} // namespace

// nocedit 0x00456750
CDemonCube::CDemonCube() = default;

// nocedit 0x00456790
CDemonCube::~CDemonCube() = default;

// The original read the vertices into a buffer it hadn't made when the cube had none of its own
// triangles; here they are kept.
// nocedit 0x00457530
void CDemonCube::load(common::CBinaryReader &reader) {
    min_bounds_ = readVector(reader);
    max_bounds_ = readVector(reader);
    const auto vertex_count = reader.read<std::int32_t>();
    const auto triangle_count = reader.read<std::int32_t>();
    if (triangle_count != 0) {
        allocGeometryMemory(vertex_count, triangle_count);
    }
    vertices_.resize(static_cast<std::size_t>(std::max(vertex_count, 0)));
    for (common::CVector3f &vertex : vertices_) {
        vertex = readVector(reader);
    }
    for (CDemonCubeTriangle &triangle : triangles_) {
        triangle.readFromFile(reader);
    }
    if (triangle_count == 0) {
        return;
    }
    for (std::uint8_t &ground_type : ground_types_) {
        ground_type = reader.read<std::uint8_t>();
    }
    SVoxelGrid voxels;
    for (std::array<std::uint8_t, 8> &row : voxels.voxels) {
        for (std::uint8_t &voxel : row) {
            voxel = reader.read<std::uint8_t>();
        }
    }
    voxel_buffer1_ = voxels;
    voxel_buffer2_ = voxels;
}

// nocedit 0x00456840
void CDemonCube::allocGeometryMemory(int vertex_count, int triangle_count) {
    if (vertex_count < 0) {
        common::displayErrorAndQuit("CDemonCube::allocMemory - Out of vertex memory");
    }
    if (triangle_count < 0) {
        common::displayErrorAndQuit("CDemonCube::allocMemory - Out of tri memory");
    }
    triangles_.resize(static_cast<std::size_t>(triangle_count));
    ground_types_.resize(static_cast<std::size_t>(triangle_count));
}

const common::CVector3f &CDemonCube::getMinBounds() const {
    return min_bounds_;
}

const common::CVector3f &CDemonCube::getMaxBounds() const {
    return max_bounds_;
}

std::span<const common::CVector3f> CDemonCube::getVertices() const {
    return vertices_;
}

std::span<const CDemonCubeTriangle> CDemonCube::getTriangles() const {
    return triangles_;
}

std::span<const std::uint8_t> CDemonCube::getGroundTypes() const {
    return ground_types_;
}

const std::optional<SVoxelGrid> &CDemonCube::getVoxelBuffer1() const {
    return voxel_buffer1_;
}

const std::optional<SVoxelGrid> &CDemonCube::getVoxelBuffer2() const {
    return voxel_buffer2_;
}

} // namespace nocturne::core
