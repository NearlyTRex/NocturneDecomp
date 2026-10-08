#pragma once

#include "core/fwd.h"

namespace nocturne::core {

class CDemonRaytrace {
public:
    CDemonRaytrace();
    ~CDemonRaytrace();

    int loadAndSyncWithGeoFile(char *filename);
    CVector3f *rayIntersection(CVector3f *output_point, CVector3f *ray_start, CVector3f *ray_end);
    float rayVoxelIntersection(CVector3f *ray_start, CVector3f *ray_end,
                               CVector3f *out_intersection_point, int *out_intersection_type);
    int rayVoxelGridTest(CVector3f *start_pos, CVector3f *end_pos);
    float getGroundHeight(CVector3f *pos, int *hit_flag, CVector3f *normal_out);
    float cylinderGroundCheck(CVector3f *pos, float radius, int *hit_flag, CVector3f *normal_out);
    void testCylinderCollision(SIntersectXZCylinder *cylinder);
    void renderFrustumCubes(float fov_or_radius, int render_mode);
    void setPVS(int visible_cube_count, int *visible_cube_indices);
    void savePVS(int *output_count, int **input_indices_array);
    float getVoxelHeightAtPosition(CVector3f *world_position);
    int voxelRaycast3D(CVector3f *start_position, CVector3f *end_position);
    CVector3i *worldPositionToVoxelCoords(CVector3f *world_position,
                                          CVector3i *output_voxel_coords);
    int getVoxelHeightAtVoxelCoords(CVector3i *voxel_coords);
    CVector3f *getBBoxMin(CVector3f *output_vector);
    CVector3f *getBBoxMax(CVector3f *output_vector);
    void markShadowVoxels(CVector3f *offset, CVector3f *rotation, CVector3f *extent,
                          CVector3f *light_position);
    void commitShadowBuffer();
    void transferShadowVoxels(CVector3f *offset, CVector3f *rotation, CVector3f *start,
                              CVector3f *end);
};

} // namespace nocturne::core
