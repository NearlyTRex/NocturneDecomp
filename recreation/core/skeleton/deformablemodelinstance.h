#pragma once

#include "common/fwd.h"
#include "core/fwd.h"
#include "core/skeleton/deformablemodel.h"

#include <cstdint>

namespace nocturne::core {

class CDeformableModelInstance {
public:
    CDeformableModelInstance();
    virtual ~CDeformableModelInstance();

    virtual int findPatchToFrame(int source_motion_index, float source_frame,
                                 int target_motion_index);
    virtual void accumulateScaledRootMotion(float start_frame, float end_frame, float scale_factor);

    void resetToRestPose();
    void updateAnimationAndTransforms();
    void updateAnimation();
    void updateMotionAtFrame(int motion_index, float frame_number);
    void updateMotion(int motion_index, float frame_number, int bone_index);
    void blendMotion(int target_motion_index, float target_frame_number, float blend_weight,
                     int bone_index, CDeformableModel::MotionBlendWeightFunc *callback_func);
    void blendWithPoseData(SPoseData *pose_data, float blend_weight, int bone_index,
                           CDeformableModel::MotionBlendWeightFunc *blend_callback);
    void blendBoneRotations(common::CQuaternion4f *source_quaternions, float blend_weight,
                            int bone_index,
                            CDeformableModel::MotionBlendWeightFunc *blend_callback);
    common::CMatrix3x4f *getBoneModelMatrix(int bone_index, common::CMatrix3x4f *out_matrix);
    common::CVector3f *getBoneModelPosition(common::CVector3f *out_position, int bone_index);
    common::CVector3f *getBoneCachedModelPosition(common::CVector3f *out_position, int bone_index);
    void computeBoneTransforms();
    void applyRotationToHierarchy(common::CQuaternion4f *rotation_quat, float blend_weight,
                                  int bone_index,
                                  CDeformableModel::MotionBlendWeightFunc *blend_callback);
    void scalePoseDataForHierarchy(float scale_factor, int target_bone_index);
    void renderWithOptions(int lod_index, std::uint32_t render_flags, int lighting_mode,
                           int render_pass);
    void skinVerticesForLOD(int lod_index);
    void skinAndRotateVertices(int lod_index);
    void renderPolygons(int render_flags, int skip_texture_capture);
    void showAllParts();
    void clearAllTextureSetIndices();
    void preCache();
    void initializeFromModel(CDeformableModel *model_ptr);
    CDeformableModel *getModelPtr();
    CSkeleton *getSkeletonPtr();
    void init(char *model_name);
    common::CVector3f *getRootMotionDelta(common::CVector3f *output_buffer, float start_frame,
                                          float end_frame);
    void dismemberPart(CBodyPart *body_part, int part_index);
    float rayIntersect(common::CVector3f *ray_origin, common::CVector3f *ray_direction);
    int findClosestBone(common::CVector3f *point);
    void shatter(common::CVector3f *center_position, common::CVector3f *orientation_vector,
                 int desired_lod_index);
    SPose *getBoneTransform(SPose *bone_transform);
    void setBoneTransform(SPose *bone_transform);
    CBoundingBox3D *computeBoundingBoxFromBones(CBoundingBox3D *output_bbox);
    void computeCylindricalUVs(int u_offset, int v_offset);
};

} // namespace nocturne::core
