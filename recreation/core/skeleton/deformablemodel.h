#pragma once

#include "common/fwd.h"
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
    common::CVector3f *getVertexPoolPtr(int index);
    void skinVertices(int lod_index, common::CMatrix3x4f *bone_matrices, int *output_buffer,
                      SPartInstanceData *part_data);
    common::CVector3f *skinSingleVertex(common::CVector3f *output_pos, int lod_index,
                                        int vertex_index, common::CMatrix3x4f *bone_matrices);
    void rotateVertices(int lod_index, int *input_vertices);
    void lightVertices(int lod_index, common::CVector3i *skinned_vertices);
    void initVertexWRecip(int lod_index, common::CVector3i *lod_vertices);
    void renderParts(int lod_index, int *part_visibility_flags, int *texture_set_indices,
                     int render_flags, int skip_texture_capture);
    void renderWireframe(int lod_level);
    void renderSkeleton(int color, common::CMatrix3x4f *bone_matrices, int render_flags);
    void renderBones(common::CMatrix3x4f *bone_matrices);
    void load(char *filename);
    SPart *getPartPtr(int part_index);
    int findPartByName(char *part_name, int error_if_not_found);
    int getBonePart(int bone_index);
    void dismember(int lod_index, CBodyPart *body_part_ptr, int part_index,
                   common::CVector3i *skinned_vertices, int texture_set_index);
    float exactRayTrace(int lod_index, common::CVector3f *ray_origin,
                        common::CVector3f *ray_direction, common::CVector3i *skinned_vertices,
                        std::uint8_t *part_visibility_flags);
    int selectLOD(CBoundingBox3D *bounding_box);
    void shatter(common::CVector3f *center_position, common::CVector3f *orientation_vector,
                 int lod_index, common::CVector3i *skinned_vertices, int *part_visibility_flags,
                 int *texture_set_indices);
    int findMaxWeightBone(int lod_level, int triangle_index);
    int calculateMemorySize();
};

} // namespace nocturne::core
