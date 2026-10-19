#pragma once

#include "common/fwd.h"
#include "common/math/vector3f.h"
#include "core/dcube/demoncubetriangle.h"
#include "core/fwd.h"

#include <array>
#include <cstdint>
#include <optional>
#include <span>
#include <vector>

namespace nocturne::core {

// A cube's voxels, eight by eight.
struct SVoxelGrid {
    std::array<std::array<std::uint8_t, 8>, 8> voxels{};

    bool operator==(const SVoxelGrid &) const = default;
};

// One cell of the set's raytrace grid: its bounds, and the geometry and voxels inside it.
class CDemonCube {
public:
    CDemonCube();
    ~CDemonCube();
    CDemonCube(const CDemonCube &) = delete;
    CDemonCube &operator=(const CDemonCube &) = delete;
    CDemonCube(CDemonCube &&) = delete;
    CDemonCube &operator=(CDemonCube &&) = delete;

    void allocVoxelMemory();
    // The bounds, the vertices, the triangles, each triangle's ground type and the voxels, the
    // last three only when the cube has triangles. A negative count where memory is needed is
    // fatal, as the allocation it asked for failed.
    void load(common::CBinaryReader &reader);
    void rotateVertices(std::uint32_t rendering_mode);
    float rayIntersectTriangles(common::CVector3f *ray_origin, common::CVector3f *ray_direction,
                                common::CVector3f *hit_normal, std::uint32_t *hit_material);
    void testCylinderCollision(SIntersectXZCylinder *cylinder);
    int testCylinderGroundCollision(common::CVector3f *cylinder_position, float cylinder_radius,
                                    common::CVector3f *output_height,
                                    common::CVector3f *output_normal,
                                    std::uint32_t *output_material);

    [[nodiscard]] const common::CVector3f &getMinBounds() const;
    [[nodiscard]] const common::CVector3f &getMaxBounds() const;
    [[nodiscard]] std::span<const common::CVector3f> getVertices() const;
    [[nodiscard]] std::span<const CDemonCubeTriangle> getTriangles() const;
    [[nodiscard]] std::span<const std::uint8_t> getGroundTypes() const;
    // Both empty for a cube with no triangles.
    [[nodiscard]] const std::optional<SVoxelGrid> &getVoxelBuffer1() const;
    [[nodiscard]] const std::optional<SVoxelGrid> &getVoxelBuffer2() const;

private:
    void allocGeometryMemory(int vertex_count, int triangle_count);

    common::CVector3f min_bounds_;
    common::CVector3f max_bounds_;
    std::vector<common::CVector3f> vertices_;
    std::vector<CDemonCubeTriangle> triangles_;
    std::vector<std::uint8_t> ground_types_;
    // Two copies of the voxels the cube loaded; commitShadowBuffer copies the second over the
    // first.
    std::optional<SVoxelGrid> voxel_buffer1_;
    std::optional<SVoxelGrid> voxel_buffer2_;
};

} // namespace nocturne::core
