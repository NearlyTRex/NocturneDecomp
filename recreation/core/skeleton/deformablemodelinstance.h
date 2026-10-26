#pragma once

#include "common/fwd.h"
#include "core/fwd.h"
#include "core/motion/motioncontroller.h"
#include "core/skeleton/deformablemodel.h"
#include "core/skeleton/partvisibility.h"

#include <array>
#include <cstddef>
#include <cstdint>

namespace nocturne::core {

// A character's skinned model as it plays its motions. The virtual functions not ported yet quit
// when called.
class CDeformableModelInstance : public CMotionController {
public:
    CDeformableModelInstance();
    ~CDeformableModelInstance() override;
    CDeformableModelInstance(const CDeformableModelInstance &) = delete;
    CDeformableModelInstance &operator=(const CDeformableModelInstance &) = delete;
    CDeformableModelInstance(CDeformableModelInstance &&) = delete;
    CDeformableModelInstance &operator=(CDeformableModelInstance &&) = delete;

    int findPatchToFrame(int source_motion_index, float source_frame,
                         int target_motion_index) override;
    void accumulateScaledRootMotion(float start_frame, float end_frame,
                                    float scale_factor) override;

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

    [[nodiscard]] EPartVisibility getPartVisibility(std::size_t part) const;
    void setPartVisibility(std::size_t part, EPartVisibility visibility);
    // Which of its texture sets the part wears.
    [[nodiscard]] int getPartTextureSet(std::size_t part) const;
    void setPartTextureSet(std::size_t part, int texture_set);

    // The most parts a model can have.
    static constexpr std::size_t kMaxParts = 30;
    // The texture set each part wears unless told otherwise.
    static constexpr int kFirstTextureSet = 0;

private:
    std::array<EPartVisibility, kMaxParts> part_visibility_{};
    std::array<int, kMaxParts> part_texture_sets_{};
};

} // namespace nocturne::core
