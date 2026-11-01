#include "core/dtrace/demonraytrace.h"

#include "common/error/error.h"
#include "common/math/extendedfloat.h"
#include "common/math/matrix3x3f.h"
#include "common/serial/binaryreader.h"
#include "engine/dosio/dosio.h"

#include <cmath>
#include <cstddef>
#include <cstdint>
#include <optional>
#include <span>
#include <string>
#include <string_view>
#include <utility>

namespace nocturne::core {
namespace {

common::CVector3f readVector(common::CBinaryReader &reader) {
    common::CVector3f vector;
    vector.x = reader.read<float>();
    vector.y = reader.read<float>();
    vector.z = reader.read<float>();
    return vector;
}

constexpr double kHalf = 0.5;

// The cell of the size the coordinate falls in, counted from start: the quotient at the x87's
// precision, floored as a double and chopped, the x87's integer indefinite when no int holds it.
int cellOf(float coordinate, float start, float size) {
    const double quotient = ((common::CExtendedFloat(coordinate) - common::CExtendedFloat(start)) /
                             common::CExtendedFloat(size))
                                .toDouble();
    return common::CExtendedFloat(std::floor(quotient)).truncateToInt();
}

// x * y * z, wrapping as the original's 32-bit multiplies do.
std::int32_t cubeCount(const common::CVector3i &grid) {
    return static_cast<std::int32_t>(static_cast<std::uint32_t>(grid.x) *
                                     static_cast<std::uint32_t>(grid.y) *
                                     static_cast<std::uint32_t>(grid.z));
}

} // namespace

// nocedit 0x00494200
CDemonRaytrace::CDemonRaytrace(const engine::CDosIo &dosio) : dosio_(dosio) {}

// nocedit 0x00494240
CDemonRaytrace::~CDemonRaytrace() = default;

// nocedit could then write a converted old file back into its .POD; retail reads only version 4.
// nocedit 0x00494de0
bool CDemonRaytrace::loadAndSyncWithGeoFile(std::string_view filename) {
    const std::optional<std::string> file = dosio_.readFile("data", filename);
    if (!file) {
        return false;
    }
    common::CBinaryReader reader(std::as_bytes(std::span(*file)));
    loadBinary(reader);
    return true;
}

// The original also quit on a read error, which bytes in memory can't have; a short file reads
// as zeros.
// nocedit 0x004947a0
void CDemonRaytrace::loadBinary(common::CBinaryReader &reader) {
    freeNewCubeList();
    const auto version = reader.read<std::int32_t>();
    if (version < 1) {
        common::displayErrorAndQuit("CDemonRaytrace::loadBinary - invalid version");
    }
    if (version > kGeoFileFormatVersion) {
        common::displayErrorAndQuit("CDemonRaytrace::loadBinary - file is newer than .exe!");
    }
    grid_coord_.x = reader.read<std::int32_t>();
    grid_coord_.y = reader.read<std::int32_t>();
    grid_coord_.z = reader.read<std::int32_t>();
    bbox_min_ = readVector(reader);
    bbox_max_ = readVector(reader);
    cell_size_ = readVector(reader);
    adjusted_size_ = {
        .x = cell_size_.x / 8.0F, .y = cell_size_.y * 0.125F, .z = cell_size_.z * 0.125F};
    if (version < kGeoFileFormatVersion) {
        common::displayErrorAndQuit("Release build doesn't support old geometry");
    }
    allocNewCubeList();
    for (CDemonCube &cube : cube_data_) {
        cube.load(reader);
    }
}

// nocedit 0x00494380
void CDemonRaytrace::allocNewCubeList() {
    const std::int32_t count = cubeCount(grid_coord_);
    if (count < 0) {
        common::displayErrorAndQuit("CDemonRaytrace::allocNewCubeList - Out of memory!");
    }
    cube_data_ = std::vector<CDemonCube>(static_cast<std::size_t>(count));
}

// nocedit 0x00494400
void CDemonRaytrace::freeNewCubeList() {
    cube_data_.clear();
    grid_coord_ = {};
}

// A grid whose cube count wrapped has fewer cubes than places; the original read past them.
// nocedit 0x004952b0
const CDemonCube *CDemonRaytrace::getCubeAt(int grid_x, int grid_y, int grid_z) const {
    if (grid_x < 0 || grid_y < 0 || grid_z < 0 || grid_x >= grid_coord_.x ||
        grid_y >= grid_coord_.y || grid_z >= grid_coord_.z) {
        return nullptr;
    }
    const std::int64_t index = (static_cast<std::int64_t>(grid_y) * grid_coord_.z) + grid_z +
                               (static_cast<std::int64_t>(grid_x) * grid_coord_.y * grid_coord_.z);
    if (std::cmp_greater_equal(index, cube_data_.size())) {
        return nullptr;
    }
    return &cube_data_[static_cast<std::size_t>(index)];
}

// nocedit 0x004997d0
common::CVector3i
CDemonRaytrace::worldPositionToGridCoords(const common::CVector3f &world_position) const {
    return {.x = cellOf(world_position.x, bbox_min_.x, cell_size_.x),
            .y = cellOf(world_position.y, bbox_min_.y, cell_size_.y),
            .z = cellOf(world_position.z, bbox_min_.z, cell_size_.z)};
}

// nocedit 0x00499880
common::CVector3i
CDemonRaytrace::worldPositionToVoxelCoords(const common::CVector3f &world_position) const {
    return {.x = cellOf(world_position.x, bbox_min_.x, adjusted_size_.x),
            .y = cellOf(world_position.y, bbox_min_.y, adjusted_size_.y),
            .z = cellOf(world_position.z, bbox_min_.z, adjusted_size_.z)};
}

// The count along each axis is chopped from twice the box's size in voxels, plus one, and the
// lattice's step stored as a float; each sample is worked out at the x87's precision and stored.
// A box whose count comes to 0 or less along an axis marks nothing.
// unverified: each sample's sums, the index's stride, then the corner, then the half stride, as
//   read from the asm, not run against the original's code
// nocedit 0x00499c20
void CDemonRaytrace::markShadowVoxels(const common::CVector3f &position,
                                      const common::CVector3f &rotation,
                                      const common::CVector3f &box_min,
                                      const common::CVector3f &box_max) {
    common::CMatrix3x3f matrix;
    matrix.buildRotationMatrix(rotation);
    const common::CVector3f size = {
        .x = box_max.x - box_min.x, .y = box_max.y - box_min.y, .z = box_max.z - box_min.z};
    const auto count = [](float length, float voxel) {
        const common::CExtendedFloat two(2.0);
        const common::CExtendedFloat one(1.0);
        return (((common::CExtendedFloat(length) / common::CExtendedFloat(voxel)) * two) + one)
            .truncateToInt();
    };
    const int count_x = count(size.x, adjusted_size_.x);
    const int count_y = count(size.y, adjusted_size_.y);
    const int count_z = count(size.z, adjusted_size_.z);
    const auto step = [](float length, int samples) {
        return (common::CExtendedFloat(length) / common::CExtendedFloat(samples)).toFloat();
    };
    const float step_x = step(size.x, count_x);
    const float step_y = step(size.y, count_y);
    const float step_z = step(size.z, count_z);
    const auto sample = [](int index, float step_length, float start) {
        const common::CExtendedFloat stride(step_length);
        return (((common::CExtendedFloat(index) * stride) + common::CExtendedFloat(start)) +
                (stride * common::CExtendedFloat(kHalf)))
            .toFloat();
    };
    for (int i = 0; i < count_x; ++i) {
        for (int j = 0; j < count_y; ++j) {
            for (int k = 0; k < count_z; ++k) {
                const common::CVector3f turned =
                    matrix.transformVector({.x = sample(i, step_x, box_min.x),
                                            .y = sample(j, step_y, box_min.y),
                                            .z = sample(k, step_z, box_min.z)});
                setVoxelShadowBit({.x = turned.x + position.x,
                                   .y = turned.y + position.y,
                                   .z = turned.z + position.z});
            }
        }
    }
}

// A grid whose cube count wrapped has no cube at some of its places, which is fatal, as the
// original's check of its cube is.
// nocedit 0x0049a160
void CDemonRaytrace::setVoxelShadowBit(const common::CVector3f &world_position) {
    const common::CVector3i grid = worldPositionToGridCoords(world_position);
    if (grid.x < 0 || grid.y < 0 || grid.z < 0 || grid.x >= grid_coord_.x ||
        grid.y >= grid_coord_.y || grid.z >= grid_coord_.z) {
        return;
    }
    const common::CVector3i voxel = worldPositionToVoxelCoords(world_position);
    const CDemonCube *cube = getCubeAt(grid.x, grid.y, grid.z);
    if (cube == nullptr) {
        common::displayErrorAndQuit("Parity Check 999");
    }
    cube_data_[static_cast<std::size_t>(cube - cube_data_.data())].setShadowVoxel(voxel);
}

// nocedit 0x00499b40
common::CVector3f CDemonRaytrace::getBBoxMin() const {
    return bbox_min_;
}

// nocedit 0x00499b70
common::CVector3f CDemonRaytrace::getBBoxMax() const {
    return bbox_max_;
}

const common::CVector3i &CDemonRaytrace::getGridSize() const {
    return grid_coord_;
}

const common::CVector3f &CDemonRaytrace::getCellSize() const {
    return cell_size_;
}

const common::CVector3f &CDemonRaytrace::getAdjustedSize() const {
    return adjusted_size_;
}

} // namespace nocturne::core
