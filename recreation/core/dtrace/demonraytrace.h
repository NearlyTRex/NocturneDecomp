#pragma once

#include "common/fwd.h"
#include "common/math/vector3f.h"
#include "common/math/vector3i.h"
#include "core/dcube/demoncube.h"
#include "core/fwd.h"
#include "engine/fwd.h"

#include <cstdint>
#include <span>
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
    // Draws the cubes in the view reach_distance out from the camera into the depth, nearest
    // first, each a cube past the first two slabs tested against the depth so far before it is
    // drawn; the cubes drawn become the PVS. With use_pvs, a PVS already set is drawn instead.
    void renderFrustumCubes(float reach_distance, bool use_pvs, const SCubeDrawOwners &owners);
    // The cubes a camera saved as the ones it sees, as indices into the grid. An empty list
    // leaves no PVS set.
    void setPVS(std::span<const int> cube_indices);
    // The cubes the last frustum draw drew, for the camera to keep. Fatal unless one has run and
    // drawn a cube.
    [[nodiscard]] std::vector<int> savePVS() const;
    float getVoxelHeightAtPosition(common::CVector3f *world_position);
    int voxelRaycast3D(common::CVector3f *start_position, common::CVector3f *end_position);
    // The voxel the position is in, counted from the grid's corner; outside the grid, a voxel
    // outside it.
    [[nodiscard]] common::CVector3i
    worldPositionToVoxelCoords(const common::CVector3f &world_position) const;
    int getVoxelHeightAtVoxelCoords(common::CVector3i *voxel_coords);
    [[nodiscard]] common::CVector3f getBBoxMin() const;
    [[nodiscard]] common::CVector3f getBBoxMax() const;
    // Marks the voxels a box fills, turned by the angles and moved to the position: the box is
    // sampled at the middles of a lattice about two to a voxel along each axis, and each sample's
    // voxel is set.
    void markShadowVoxels(const common::CVector3f &position, const common::CVector3f &rotation,
                          const common::CVector3f &box_min, const common::CVector3f &box_max);
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
    void renderPVSCubes(const SCubeDrawOwners &owners) const;
    // distance counts the cube's slab out from the camera's along the view's main axis.
    void renderCubeForPVS(const common::CVector3i &cell, std::int64_t distance,
                          const SCubeDrawOwners &owners);
    // Whether any face of the cube whose corners are in the renderer's buffer's first eight
    // would show in front of the depth.
    [[nodiscard]] bool isCubeFaceVisible(const common::CVector3i &cell,
                                         engine::CDemonRenderer &renderer) const;
    void loadBinary(common::CBinaryReader &reader);
    // The cube the position is in; outside the grid, a cube outside it.
    [[nodiscard]] common::CVector3i
    worldPositionToGridCoords(const common::CVector3f &world_position) const;
    // Sets the shadow bit of the voxel the position is in; nothing outside the grid.
    void setVoxelShadowBit(const common::CVector3f &world_position);
    void allocNewCubeList();
    void freeNewCubeList();

    const engine::CDosIo &dosio_;
    common::CVector3f bbox_min_;
    common::CVector3f bbox_max_;
    common::CVector3f cell_size_;
    common::CVector3f adjusted_size_;
    common::CVector3i grid_coord_;
    std::vector<CDemonCube> cube_data_;
    // Indices into cube_data_.
    std::vector<int> pvs_cubes_;
    bool pvs_ready_ = false;
};

} // namespace nocturne::core
