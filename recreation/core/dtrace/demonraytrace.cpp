#include "core/dtrace/demonraytrace.h"

#include "common/error/error.h"
#include "common/serial/binaryreader.h"
#include "engine/dosio/dosio.h"

#include <cstddef>
#include <cstdint>
#include <optional>
#include <span>
#include <string>
#include <string_view>

namespace nocturne::core {
namespace {

common::CVector3f readVector(common::CBinaryReader &reader) {
    common::CVector3f vector;
    vector.x = reader.read<float>();
    vector.y = reader.read<float>();
    vector.z = reader.read<float>();
    return vector;
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
    if (index >= static_cast<std::int64_t>(cube_data_.size())) {
        return nullptr;
    }
    return &cube_data_[static_cast<std::size_t>(index)];
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
