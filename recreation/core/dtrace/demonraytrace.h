#pragma once

#include "common/fwd.h"
#include "common/math/vector3f.h"
#include "common/math/vector3i.h"
#include "core/dcube/demoncube.h"
#include "core/fwd.h"
#include "engine/fwd.h"

#include <string_view>
#include <vector>

namespace nocturne::core {

// The set's geometry for rays and collisions: a grid of cubes over the set's bounding box, each
// holding the triangles and voxels inside it.
class CDemonRaytrace {
public:
    // The .GEO version this game reads, and the only one.
    static constexpr int kGeoFileFormatVersion = 4;

    explicit CDemonRaytrace(const engine::CDosIo &dosio);
    ~CDemonRaytrace();
    CDemonRaytrace(const CDemonRaytrace &) = delete;
    CDemonRaytrace &operator=(const CDemonRaytrace &) = delete;
    CDemonRaytrace(CDemonRaytrace &&) = delete;
    CDemonRaytrace &operator=(CDemonRaytrace &&) = delete;

    // Reads data\filename, replacing the grid; false, leaving it as it was, when there's no such
    // file. A version other than 4, or a grid too big to make, is fatal.
    bool loadAndSyncWithGeoFile(std::string_view filename);
    common::CVector3f *rayIntersection(common::CVector3f *output_point,
                                       common::CVector3f *ray_start, common::CVector3f *ray_end);
    float rayVoxelIntersection(common::CVector3f *ray_start, common::CVector3f *ray_end,
                               common::CVector3f *out_intersection_point,
                               int *out_intersection_type);
    int rayVoxelGridTest(common::CVector3f *start_pos, common::CVector3f *end_pos);
    float getGroundHeight(common::CVector3f *pos, int *hit_flag, common::CVector3f *normal_out);
    float cylinderGroundCheck(common::CVector3f *pos, float radius, int *hit_flag,
                              common::CVector3f *normal_out);
    void testCylinderCollision(SIntersectXZCylinder *cylinder);
    void renderFrustumCubes(float fov_or_radius, int render_mode);
    void setPVS(int visible_cube_count, int *visible_cube_indices);
    void savePVS(int *output_count, int **input_indices_array);
    float getVoxelHeightAtPosition(common::CVector3f *world_position);
    int voxelRaycast3D(common::CVector3f *start_position, common::CVector3f *end_position);
    common::CVector3i *worldPositionToVoxelCoords(common::CVector3f *world_position,
                                                  common::CVector3i *output_voxel_coords);
    int getVoxelHeightAtVoxelCoords(common::CVector3i *voxel_coords);
    [[nodiscard]] common::CVector3f getBBoxMin() const;
    [[nodiscard]] common::CVector3f getBBoxMax() const;
    void markShadowVoxels(common::CVector3f *offset, common::CVector3f *rotation,
                          common::CVector3f *extent, common::CVector3f *light_position);
    void commitShadowBuffer();
    void transferShadowVoxels(common::CVector3f *offset, common::CVector3f *rotation,
                              common::CVector3f *start, common::CVector3f *end);

    // The cube at a grid position; null outside the grid.
    [[nodiscard]] const CDemonCube *getCubeAt(int grid_x, int grid_y, int grid_z) const;
    // The grid's size in cubes, x, y and z.
    [[nodiscard]] const common::CVector3i &getGridSize() const;
    [[nodiscard]] const common::CVector3f &getCellSize() const;
    // An eighth of a cube, a voxel's size.
    [[nodiscard]] const common::CVector3f &getAdjustedSize() const;

private:
    void loadBinary(common::CBinaryReader &reader);
    void allocNewCubeList();
    void freeNewCubeList();

    const engine::CDosIo &dosio_;
    common::CVector3f bbox_min_;
    common::CVector3f bbox_max_;
    common::CVector3f cell_size_;
    common::CVector3f adjusted_size_;
    common::CVector3i grid_coord_;
    std::vector<CDemonCube> cube_data_;
};

} // namespace nocturne::core
