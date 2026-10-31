#pragma once

#include "common/fwd.h"
#include "common/math/vector3f.h"
#include "common/math/vector3i.h"
#include "core/box/boundingbox3d.h"
#include "core/fwd.h"
#include "core/motion/motioncontroller.h"
#include "core/skeleton/boneupdatemode.h"
#include "core/skeleton/deformablemodel.h"
#include "core/skeleton/partvisibility.h"
#include "core/skeleton/pose.h"

#include <array>
#include <cstddef>
#include <cstdint>
#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::core {

// A character's skinned model as it plays its motions, found by name among the models once it is
// precached. The virtual functions not ported yet quit when called.
class CDeformableModelInstance : public CMotionController {
public:
    explicit CDeformableModelInstance(IDeformableModels &models);
    ~CDeformableModelInstance() override;
    CDeformableModelInstance(const CDeformableModelInstance &) = delete;
    CDeformableModelInstance &operator=(const CDeformableModelInstance &) = delete;
    CDeformableModelInstance(CDeformableModelInstance &&) = delete;
    CDeformableModelInstance &operator=(CDeformableModelInstance &&) = delete;

    // The target motion's frame whose bones sit nearest where the source frame has them, -1 for a
    // motion with no frames.
    int findPatchToFrame(int source_motion_index, float source_frame,
                         int target_motion_index) override;
    // Adds the root motion between the frames, scaled, to the accumulated root motion.
    void accumulateScaledRootMotion(float start_frame, float end_frame,
                                    float scale_factor) override;

    // Every bone unturned at its rest scale, the root unmoved.
    void resetToRestPose();
    void updateAnimationAndTransforms();
    // Poses the model at its motion's frame, blended towards the tween's target while one runs.
    void updateAnimation();
    void updateMotionAtFrame(int motion_index, float frame_number);
    // Every bone, for a bone_index below 0, as the motion turns it at the frame, and the root
    // moved as far along as the frames' root offsets are, scaled. Otherwise the bone and those
    // below it only, as the bone update mode takes the motion's turns.
    void updateMotion(int motion_index, float frame_number, int bone_index);
    // Turns the bones part of the way to the motion's frame: for a bone_index below 0 every bone,
    // and the root as far, otherwise the bone and those below it. Absolute, the callback gives
    // each bone's share. Nothing for a weight of 0.001 or less; additively it is fatal.
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
    // The pose's bone matrices, as computeBoneModelMatrices makes them.
    void computeBoneTransforms();
    // Each bone's matrix from its rotation and scale, carried to its origin: a root's offset by
    // the root's position, any other's moved by its parent's matrix, which comes first.
    void computeBoneModelMatrices(SPose &bone_data);
    // The motion's turns at the frame, every bone unscaled, and its root moved as updateMotion
    // moves it.
    void computeBoneTransformsForFrame(int motion_index, float animation_time,
                                       SPose &output_bone_data);
    void applyRotationToHierarchy(common::CQuaternion4f *rotation_quat, float blend_weight,
                                  int bone_index,
                                  CDeformableModel::MotionBlendWeightFunc *blend_callback);
    void scalePoseDataForHierarchy(float scale_factor, int target_bone_index);
    void renderWithOptions(int lod_index, std::uint32_t render_flags, int lighting_mode,
                           int render_pass);
    // The level's vertices as the pose has them, into the skinned vertices.
    void skinVerticesForLOD(int lod_index);
    void skinAndRotateVertices(int lod_index);
    void renderPolygons(int render_flags, int skip_texture_capture);
    void showAllParts();
    void clearAllTextureSetIndices();
    // Finds the model named and starts from it.
    void preCache();
    // Plays the skeleton's motions, the root bone's origin scaled as the model is, every bone at
    // that scale, with room for the first level's skinned vertices and the box they take up at
    // the first frame of the first motion; then poses the model.
    void initializeFromModel(CDeformableModel &model);
    // Fatal before preCache.
    CDeformableModel *getModelPtr();
    CSkeleton *getSkeletonPtr();
    // Names the model, from the models folder, with every part shown in its first texture set,
    // to be found again by preCache.
    void init(std::string_view model_name);
    // Room for the first level's skinned vertices, none skinned yet.
    void allocPointList();
    void free();
    // The first motion's first frame skinned, its whole fixed-point vertices' extent, padded by
    // a twentieth of it on each side.
    void computeBoundingBoxFromVertices();
    // How far the root moves between the frames, over the skeleton's canceled movements: each
    // whole frame's, less the parts of the first and last frames outside them, scaled as the
    // root offsets are. None unless the end is after the start.
    [[nodiscard]] common::CVector3f getRootMotionDelta(float start_frame, float end_frame);
    void dismemberPart(CBodyPart *body_part, int part_index);
    float rayIntersect(common::CVector3f *ray_origin, common::CVector3f *ray_direction);
    int findClosestBone(common::CVector3f *point);
    void shatter(common::CVector3f *center_position, common::CVector3f *orientation_vector,
                 int desired_lod_index);
    SPose *getBoneTransform(SPose *bone_transform);
    void setBoneTransform(SPose *bone_transform);
    // The box the posed bones that end chains take up: each one's box, carried by its matrix, by
    // all eight corners. The empty box when there are none.
    [[nodiscard]] CBoundingBox3D computeBoundingBoxFromBones();
    void computeCylindricalUVs(int u_offset, int v_offset);

    [[nodiscard]] const std::string &getModelName() const;
    // What the model is drawn at, 1 unless set before it is precached.
    [[nodiscard]] float getScaleFactor() const;
    void setScaleFactor(float scale_factor);
    [[nodiscard]] const SPose &getPose() const;
    // In 24.8 fixed point.
    [[nodiscard]] std::span<const common::CVector3i> getSkinnedVertices() const;
    // The level last skinned, or -1 once the pose has changed.
    [[nodiscard]] int getCachedSkinnedLodIndex() const;
    [[nodiscard]] const CBoundingBox3D &getBoundingBox() const;
    // Absolute unless set.
    [[nodiscard]] EBoneUpdateMode getBoneUpdateMode() const;
    // Gathered as the motions play, none to start with.
    [[nodiscard]] const common::CVector3f &getAccumulatedRootMotion() const;
    void setBoneUpdateMode(EBoneUpdateMode mode);
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
    // No level skinned since the pose last changed.
    static constexpr int kNoSkinnedLod = -1;

    // The motion's turns, relative to their parents', carried onto the pose's: for the bone and
    // those below it, the share of the way there the weight gives.
    void poseRelativeToParents(const CSkeleton &skeleton, const SInterpolationFrames &frames,
                               int bone_index, float blend_weight);
    // The bone and those below it turned further by as much as the motion has turned each from
    // its first frame, each relative to its parent.
    void poseAdditively(const CSkeleton &skeleton, const SInterpolationFrames &frames,
                        int motion_index, int bone_index);

    IDeformableModels &models_;
    float scale_factor_ = 1.0F;
    // Each bone's origin, the root's scaled.
    std::array<common::CVector3f, kMaxPoseBones> bone_origins_{};
    // The model's root offset scale, scaled.
    common::CVector3f root_offset_scale_;
    // What each bone's scale comes back to.
    std::array<float, kMaxPoseBones> rest_bone_scales_{};
    SPose bone_transform_;
    std::array<EPartVisibility, kMaxParts> part_visibility_{};
    std::array<int, kMaxParts> part_texture_sets_{};
    int cached_skinned_lod_index_ = kNoSkinnedLod;
    std::vector<common::CVector3i> skinned_vertices_;
    CBoundingBox3D bounding_box_;
    std::string model_name_;
    CDeformableModel *model_ptr_ = nullptr;
    EBoneUpdateMode bone_update_mode_ = EBoneUpdateMode::kAbsolute;
    common::CVector3f accumulated_root_motion_;
};

// The blend's weight, the same for every bone.
float blendWeightCallback(int current_bone_index, int target_bone_index, float blend_weight,
                          int hierarchy_distance, CDeformableModelInstance &instance);

} // namespace nocturne::core
