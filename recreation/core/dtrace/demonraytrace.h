#pragma once

#include "common/fwd.h"
#include "core/fwd.h"

namespace nocturne::core {

class CDemonRaytrace {
public:
    CDemonRaytrace();
    ~CDemonRaytrace();

    int loadAndSyncWithGeoFile(char *filename);
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
    common::CVector3f *getBBoxMin(common::CVector3f *output_vector);
    common::CVector3f *getBBoxMax(common::CVector3f *output_vector);
    void markShadowVoxels(common::CVector3f *offset, common::CVector3f *rotation,
                          common::CVector3f *extent, common::CVector3f *light_position);
    void commitShadowBuffer();
    void transferShadowVoxels(common::CVector3f *offset, common::CVector3f *rotation,
                              common::CVector3f *start, common::CVector3f *end);
};

} // namespace nocturne::core
