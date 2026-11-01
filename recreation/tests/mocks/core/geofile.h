#pragma once

#include "common/math/vector3f.h"
#include "common/math/vector3i.h"
#include "common/serial/binarywriter.h"

#include <array>
#include <cstddef>
#include <cstdint>
#include <span>
#include <string>
#include <vector>

namespace nocturne::core {

struct SGeoTriangle {
    std::array<std::int32_t, 3> indices{};
    common::CVector3f normal;
    float plane_distance = 0.0F;
    std::uint32_t dominant_axis = 0;
    std::uint8_t ground_type = 0;
};

struct SGeoCube {
    common::CVector3f min_bounds;
    common::CVector3f max_bounds;
    std::int32_t vertex_count = 0;
    std::vector<common::CVector3f> vertices;
    std::int32_t triangle_count = 0;
    std::vector<SGeoTriangle> triangles;
    // The first voxel's byte, each after it one more.
    std::uint8_t voxel_base = 0;
};

inline void writeGeoVector(common::CBinaryWriter &writer, const common::CVector3f &vector) {
    writer.write(vector.x);
    writer.write(vector.y);
    writer.write(vector.z);
}

// The voxels follow only when the cube has triangles.
inline void writeGeoCube(common::CBinaryWriter &writer, const SGeoCube &cube) {
    writeGeoVector(writer, cube.min_bounds);
    writeGeoVector(writer, cube.max_bounds);
    writer.write(cube.vertex_count);
    writer.write(cube.triangle_count);
    for (const common::CVector3f &vertex : cube.vertices) {
        writeGeoVector(writer, vertex);
    }
    for (const SGeoTriangle &triangle : cube.triangles) {
        for (const std::int32_t index : triangle.indices) {
            writer.write(index);
        }
        writeGeoVector(writer, triangle.normal);
        writer.write(triangle.plane_distance);
        writer.write(triangle.dominant_axis);
    }
    if (cube.triangle_count == 0) {
        return;
    }
    for (const SGeoTriangle &triangle : cube.triangles) {
        writer.write(triangle.ground_type);
    }
    for (int i = 0; i < 64; ++i) {
        writer.write(static_cast<std::uint8_t>(cube.voxel_base + i));
    }
}

// A .GEO file of the version and grid, its box from (0, 0, 0) to (16, 8, 24) in cubes of
// (8, 16, 24), so voxels of (1, 2, 3), and the cubes.
inline std::string geoFile(std::int32_t version, const common::CVector3i &grid,
                           const std::vector<SGeoCube> &cubes) {
    common::CBinaryWriter writer;
    writer.write(version);
    writer.write(grid.x);
    writer.write(grid.y);
    writer.write(grid.z);
    writeGeoVector(writer, {.x = 0.0F, .y = 0.0F, .z = 0.0F});
    writeGeoVector(writer, {.x = 16.0F, .y = 8.0F, .z = 24.0F});
    writeGeoVector(writer, {.x = 8.0F, .y = 16.0F, .z = 24.0F});
    for (const SGeoCube &cube : cubes) {
        writeGeoCube(writer, cube);
    }
    const std::span<const std::byte> data = writer.getData();
    return {reinterpret_cast<const char *>(data.data()), data.size()};
}

} // namespace nocturne::core
