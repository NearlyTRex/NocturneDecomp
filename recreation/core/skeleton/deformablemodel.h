#pragma once

#include "core/fwd.h"

#include <cstdint>

namespace nocturne::core {

class CDeformableModel {
public:
    using MotionBlendWeightFunc = float(int, int, float, int, CDeformableModelInstance *);

    CDeformableModel();
    ~CDeformableModel();

    void free();
    void captureTextures();
    CSkeleton *getSkeletonPtr();
    CVector3f *getVertexPoolPtr(int index);
    void skinVertices(int lod_index, CMatrix3x4f *bone_matrices, int *output_buffer,
                      SPartInstanceData *part_data);
    CVector3f *skinSingleVertex(CVector3f *output_pos, int lod_index, int vertex_index,
                                CMatrix3x4f *bone_matrices);
    void rotateVertices(int lod_index, int *input_vertices);
    void lightVertices(int lod_index, CVector3i *skinned_vertices);
    void initVertexWRecip(int lod_index, CVector3i *lod_vertices);
    void renderParts(int lod_index, int *part_visibility_flags, int *texture_set_indices,
                     int render_flags, int skip_texture_capture);
    void renderWireframe(int lod_level);
    void renderSkeleton(int color, CMatrix3x4f *bone_matrices, int render_flags);
    void renderBones(CMatrix3x4f *bone_matrices);
    void load(char *filename);
    SPart *getPartPtr(int part_index);
    int findPartByName(char *part_name, int error_if_not_found);
    int getBonePart(int bone_index);
    void dismember(int lod_index, CBodyPart *body_part_ptr, int part_index,
                   CVector3i *skinned_vertices, int texture_set_index);
    float exactRayTrace(int lod_index, CVector3f *ray_origin, CVector3f *ray_direction,
                        CVector3i *skinned_vertices, std::uint8_t *part_visibility_flags);
    int selectLOD(CBoundingBox3D *bounding_box);
    void shatter(CVector3f *center_position, CVector3f *orientation_vector, int lod_index,
                 CVector3i *skinned_vertices, int *part_visibility_flags, int *texture_set_indices);
    int findMaxWeightBone(int lod_level, int triangle_index);
    int calculateMemorySize();
};

} // namespace nocturne::core
