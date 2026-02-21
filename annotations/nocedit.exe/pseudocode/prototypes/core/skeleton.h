#pragma once

// Function prototypes for core/skeleton.cpp
// Generated from Ghidra function signatures

// Original: core_skeleton.cpp_staticInit_FUN_00599670
// Address: 00599670
void __cdecl staticInit(void);

// Original: core_skeleton.cpp_skipToEndOfLine_FUN_005996c0
// Address: 005996c0
void __cdecl skipToEndOfLine(_FILE *file_ptr);

// Original: core_skeleton.cpp_distancePointToLineSegment_FUN_005996e0
// Address: 005996e0
float __cdecl distancePointToLineSegment(CVector3f *line_start,CVector3f *line_end,CVector3f *test_point);

// Original: core_skeleton.cpp_CSkeleton_ctor_FUN_00599880
// Address: 00599880
CSkeleton * __cdecl CSkeleton::ctor(CSkeleton *this_ptr);

// Original: core_skeleton.cpp_CSkeleton_dtor_FUN_005998e0
// Address: 005998e0
CSkeleton * __cdecl CSkeleton::dtor(CSkeleton *this_ptr,uint flags);

// Original: core_skeleton.cpp_CSkeleton_allocMemory_FUN_00599910
// Address: 00599910
void __cdecl CSkeleton::allocMemory(CSkeleton *this_ptr,int bone_count,int frame_count);

// Original: core_skeleton.cpp_CSkeleton_free_FUN_00599a50
// Address: 00599a50
void __cdecl CSkeleton::free(CSkeleton *this_ptr);

// Original: core_skeleton.cpp_CSkeleton_load_FUN_00599b10
// Address: 00599b10
void __cdecl CSkeleton::load(CSkeleton *this_ptr,char *filename);

// Original: core_skeleton.cpp_CSkeleton_loadStream_FUN_00599bb0
// Address: 00599bb0
void __cdecl CSkeleton::loadStream(CSkeleton *this_ptr,_FILE *file_handle);

// Original: core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
// Address: 00599fc0
int __cdecl CSkeleton::findBone(CSkeleton *this_ptr,char *bone_name);

// Original: core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_0059a050
// Address: 0059a050
CQuaternion4f * __cdecl CSkeleton::getBoneAngleAtFrame(CSkeleton *this_ptr,int bone_index,int frame_index);

// Original: core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
// Address: 0059a070
CQuaternion4f * __cdecl CSkeleton::getBoneAngleInterpolated(CSkeleton *this_ptr,int bone_index,int frame_index_1,int frame_index_2,float interpolation);

// Original: core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
// Address: 0059a100
int __cdecl CSkeleton::getHierarchyDistance(CSkeleton *this_ptr,int start_bone_index,int target_bone_index);

// Original: core_skeleton.cpp_CSkeleton_calculateFrameDataSize_FUN_0059a140
// Address: 0059a140
int __cdecl CSkeleton::calculateFrameDataSize(CSkeleton *this_ptr);

// Original: core_skeleton.cpp_CDeformableModel_ctor_FUN_0059a160
// Address: 0059a160
CDeformableModel * __cdecl CDeformableModel::ctor(CDeformableModel *this_ptr);

// Original: core_skeleton.cpp_CDeformableModel_dtor_FUN_0059a270
// Address: 0059a270
CDeformableModel * __cdecl CDeformableModel::dtor(CDeformableModel *this_ptr,uint flags);

// Original: core_skeleton.cpp_CDeformableModel_free_FUN_0059a2b0
// Address: 0059a2b0
void __cdecl CDeformableModel::free(CDeformableModel *this_ptr);

// Original: core_skeleton.cpp_CDeformableModel_allocMemory_FUN_0059a3f0
// Address: 0059a3f0
void __cdecl CDeformableModel::allocMemory(CDeformableModel *this_ptr,int num_lods,int num_texture_sets,int num_textures,int num_parts);

// Original: core_skeleton.cpp_CDeformableModel_allocLOD_FUN_0059a510
// Address: 0059a510
void __cdecl CDeformableModel::allocLOD(CDeformableModel *this_ptr,int lod_index,int vertex_count,int tri_count,int cap_tri_count);

// Original: core_skeleton.cpp_CDeformableModel_setModelName_FUN_0059a740
// Address: 0059a740
void __cdecl CDeformableModel::setModelName(CDeformableModel *this_ptr,char *model_name);

// Original: core_skeleton.cpp_CDeformableModel_captureTextures_FUN_0059a780
// Address: 0059a780
void __cdecl CDeformableModel::captureTextures(CDeformableModel *this_ptr);

// Original: core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810
// Address: 0059a810
CSkeleton * __cdecl CDeformableModel::getSkeletonPtr(CDeformableModel *this_ptr);

// Original: core_skeleton.cpp_CDeformableModel_getVertexPoolPtr_FUN_0059a860
// Address: 0059a860
CVector3f * __cdecl CDeformableModel::getVertexPoolPtr(CDeformableModel *this_ptr,int index);

// Original: core_skeleton.cpp_CDeformableModel_skinVertices_FUN_0059a880
// Address: 0059a880
void __cdecl CDeformableModel::skinVertices(CDeformableModel *this_ptr,int lod_index,CMatrix3x4f *bone_matrices,int *output_buffer);

// Original: core_skeleton.cpp_CDeformableModel_skinSingleVertex_FUN_0059aa00
// Address: 0059aa00
CVector3f * __cdecl CDeformableModel::skinSingleVertex(CDeformableModel *this_ptr,CVector3f *output_pos,int lod_index,int vertex_index,CMatrix3x4f *bone_matrices);

// Original: core_skeleton.cpp_CDeformableModel_rotateVertices_FUN_0059ab20
// Address: 0059ab20
void __cdecl CDeformableModel::rotateVertices(CDeformableModel *this_ptr,int lod_index,int *input_vertices);

// Original: core_skeleton.cpp_CDeformableModel_lightVertices_FUN_0059ab50
// Address: 0059ab50
void __cdecl CDeformableModel::lightVertices(CDeformableModel *this_ptr,int lod_index,int render_flags);

// Original: core_skeleton.cpp_CDeformableModel_initVertexWRecip_FUN_0059ab90
// Address: 0059ab90
void __cdecl CDeformableModel::initVertexWRecip(CDeformableModel *this_ptr,int lod_index);

// Original: core_skeleton.cpp_CDeformableModel_renderParts_FUN_0059abf0
// Address: 0059abf0
void __cdecl CDeformableModel::renderParts(CDeformableModel *this_ptr,int lod_index,byte *part_visibility_flags,int *texture_set_indices,int render_flags,int special_render_mode);

// Original: core_skeleton.cpp_CDeformableModel_renderWireframe_FUN_0059b5a0
// Address: 0059b5a0
void __cdecl CDeformableModel::renderWireframe(CDeformableModel *this_ptr,int lod_level);

// Original: core_skeleton.cpp_CDeformableModel_renderSkeleton_FUN_0059b640
// Address: 0059b640
void __cdecl CDeformableModel::renderSkeleton(CDeformableModel *this_ptr,int color,CMatrix3x4f *bone_matrices,int render_flags);

// Original: core_skeleton.cpp_CDeformableModel_renderBones_FUN_0059b800
// Address: 0059b800
void __cdecl CDeformableModel::renderBones(CDeformableModel *this_ptr,CMatrix3x4f *bone_matrices);

// Original: core_skeleton.cpp_CDeformableModel_load_FUN_0059b8d0
// Address: 0059b8d0
void __cdecl CDeformableModel::load(CDeformableModel *this_ptr,char *filename);

// Original: core_skeleton.cpp_CDeformableModel_loadStream_FUN_0059b970
// Address: 0059b970
void __cdecl CDeformableModel::loadStream(CDeformableModel *this_ptr,_FILE *file_handle);

// Original: core_skeleton.cpp_CDeformableModel_bindSkeleton_FUN_0059c1f0
// Address: 0059c1f0
void __cdecl CDeformableModel::bindSkeleton(CDeformableModel *this_ptr,CSkeleton *skeleton_ptr);

// Original: core_skeleton.cpp_CDeformableModel_getPartPtr_FUN_0059c220
// Address: 0059c220
SPart * __cdecl CDeformableModel::getPartPtr(CDeformableModel *this_ptr,int part_index);

// Original: core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
// Address: 0059c240
int __cdecl CDeformableModel::findPartByName(CDeformableModel *this_ptr,char *part_name,int error_if_not_found);

// Original: core_skeleton.cpp_CDeformableModel_getBonePart_FUN_0059c2d0
// Address: 0059c2d0
int __cdecl CDeformableModel::getBonePart(CDeformableModel *this_ptr,int bone_index);

// Original: core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_0059c2f0
// Address: 0059c2f0
int __cdecl CDeformableModel::computeBoneDominantPart(CDeformableModel *this_ptr,int bone_index,CVector3f *reference_position);

// Original: core_skeleton.cpp_CDeformableModel_dismember_FUN_0059c5e0
// Address: 0059c5e0
void __cdecl CDeformableModel::dismember(CDeformableModel *this_ptr,int lod_index,CBodyPart *body_part_ptr,int part_index,int num_parts_to_dismember,int texture_set_index,CVector3i *skinned_vertices);

// Original: core_skeleton.cpp_CDeformableModel_exactRayTrace_FUN_0059cba0
// Address: 0059cba0
float __cdecl CDeformableModel::exactRayTrace(CDeformableModel *this_ptr,int lod_index,CVector3f *ray_origin,CVector3f *ray_direction,CVector3i *skinned_vertices,byte *part_visibility_flags);

// Original: core_skeleton.cpp_CDeformableModel_selectLOD_FUN_0059ce40
// Address: 0059ce40
int __cdecl CDeformableModel::selectLOD(CDeformableModel *this_ptr,CBoundingBox3D *bounding_box);

// Original: core_skeleton.cpp_CDeformableModel_shatter_FUN_0059cec0
// Address: 0059cec0
void __cdecl CDeformableModel::shatter(CDeformableModel *this_ptr,CVector3f *center_position,CVector3f *orientation_vector,int lod_index,CVector3i *skinned_vertices,int *part_visibility_flags,int *texture_set_indices,int particle_lifetime);

// Original: core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_0059d460
// Address: 0059d460
int __cdecl CDeformableModel::computePartDominantBones(CDeformableModel *this_ptr);

// Original: core_skeleton.cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_0059d9e0
// Address: 0059d9e0
void __cdecl CDeformableModel::computeBoneBoundsAndFlags(CDeformableModel *this_ptr);

// Original: core_skeleton.cpp_CDeformableModel_computeFarthestChildBones_FUN_0059dbe0
// Address: 0059dbe0
void __cdecl CDeformableModel::computeFarthestChildBones(CDeformableModel *this_ptr);

// Original: core_skeleton.cpp_CDeformableModel_findMinWeightBone_FUN_0059dca0
// Address: 0059dca0
int __cdecl CDeformableModel::findMinWeightBone(CDeformableModel *this_ptr,int lod_level,int triangle_index);

// Original: core_skeleton.cpp_CDeformableModel_calculateMemorySize_FUN_0059dd60
// Address: 0059dd60
int __cdecl CDeformableModel::calculateMemorySize(CDeformableModel *this_ptr);

// Original: core_skeleton.cpp_defaultBlendWeight_FUN_0059ddb0
// Address: 0059ddb0
float __cdecl defaultBlendWeight(int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance,CDeformableModelInstance *instance);

// Original: core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
// Address: 0059ddc0
CDeformableModelInstance * __cdecl CDeformableModelInstance::ctor(CDeformableModelInstance *this_ptr);

// Original: core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
// Address: 0059de40
CDeformableModelInstance * __cdecl CDeformableModelInstance::dtor(CDeformableModelInstance *this_ptr,uint flags);

// Original: core_skeleton.cpp_CDeformableModelInstance_allocPointList_FUN_0059deb0
// Address: 0059deb0
void __cdecl CDeformableModelInstance::allocPointList(CDeformableModelInstance *this_ptr);

// Original: core_skeleton.cpp_CDeformableModelInstance_free_FUN_0059df40
// Address: 0059df40
void __cdecl CDeformableModelInstance::free(CDeformableModelInstance *this_ptr);

// Original: core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
// Address: 0059df80
void __cdecl CDeformableModelInstance::resetToRestPose(CDeformableModelInstance *this_ptr);

// Original: core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
// Address: 0059e000
void __cdecl CDeformableModelInstance::updateAnimationAndTransforms(CDeformableModelInstance *this_ptr);

// Original: core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
// Address: 0059e020
void __cdecl CDeformableModelInstance::updateAnimation(CDeformableModelInstance *this_ptr);

// Original: core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0059e070
// Address: 0059e070
void __cdecl CDeformableModelInstance::updateMotionAtFrame(CDeformableModelInstance *this_ptr,int motion_index,float frame_number);

// Original: core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0
// Address: 0059e0a0
void __cdecl CDeformableModelInstance::updateMotion(CDeformableModelInstance *this_ptr,int motion_index,float frame_number,int bone_index);

// Original: core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
// Address: 0059eb50
void __cdecl CDeformableModelInstance::blendMotion(CDeformableModelInstance *this_ptr,int target_motion_index,float target_frame_number ,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *callback_func);

// Original: core_skeleton.cpp_CDeformableModelInstance_blendWithPoseData_FUN_0059f230
// Address: 0059f230
void __cdecl CDeformableModelInstance::blendWithPoseData(CDeformableModelInstance *this_ptr,SPoseData *pose_data,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback);

// Original: core_skeleton.cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0059f260
// Address: 0059f260
void __cdecl CDeformableModelInstance::blendWithQuaternions(CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,CVector3f *source_position,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback);

// Original: core_skeleton.cpp_CDeformableModelInstance_copyBoneRotations_FUN_0059f6e0
// Address: 0059f6e0
void __cdecl CDeformableModelInstance::copyBoneRotations(CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,int bone_index);

// Original: core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
// Address: 0059f750
void __cdecl CDeformableModelInstance::blendBoneRotations(CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback);

// Original: core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820
// Address: 0059f820
CMatrix3x4f * __stack2_esi CDeformableModelInstance::getBoneWorldMatrix(CDeformableModelInstance *this_ptr,int bone_index,CMatrix3x4f *out_matrix);

// Original: core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
// Address: 0059fa20
CVector3f * __cdecl CDeformableModelInstance::getBoneWorldPosition(CDeformableModelInstance *this_ptr,CVector3f *out_position,int bone_index);

// Original: core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
// Address: 0059fb00
CVector3f * __cdecl CDeformableModelInstance::getBoneCachedWorldPosition(CDeformableModelInstance *this_ptr,CVector3f *out_position,int bone_index);

// Original: core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
// Address: 0059fb40
void __cdecl CDeformableModelInstance::computeBoneTransforms(CDeformableModelInstance *this_ptr);

// Original: core_skeleton.cpp_CDeformableModelInstance_offsetAllBonePositions_FUN_0059fd60
// Address: 0059fd60
void __cdecl CDeformableModelInstance::offsetAllBonePositions(CDeformableModelInstance *this_ptr,CVector3f *offset_vector);

// Original: core_skeleton.cpp_CDeformableModelInstance_aimBoneAtTarget_FUN_0059fdd0
// Address: 0059fdd0
void __cdecl CDeformableModelInstance::aimBoneAtTarget(CDeformableModelInstance *this_ptr,CVector3f *target_position,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback);

// Original: core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
// Address: 0059ff20
void __cdecl CDeformableModelInstance::applyRotationToHierarchy(CDeformableModelInstance *this_ptr,CQuaternion4f *rotation_quat,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback);

// Original: core_skeleton.cpp_CDeformableModelInstance_scalePoseDataForHierarchy_FUN_005a00f0
// Address: 005a00f0
void __cdecl CDeformableModelInstance::scalePoseDataForHierarchy(CDeformableModelInstance *this_ptr,float scale_factor,int target_bone_index);

// Original: core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
// Address: 005a0150
void __cdecl CDeformableModelInstance::renderWithOptions(CDeformableModelInstance *this_ptr,int lod_index,uint render_flags,int lighting_mode ,int render_pass);

// Original: core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0
// Address: 005a01d0
void __cdecl CDeformableModelInstance::skinVerticesForLOD(CDeformableModelInstance *this_ptr,int lod_index);

// Original: core_skeleton.cpp_CDeformableModelInstance_skinSingleVertex_FUN_005a0210
// Address: 005a0210
CVector3f * __cdecl CDeformableModelInstance::skinSingleVertex(CDeformableModelInstance *this_ptr,CVector3f *output_pos,int lod_index,int vertex_index);

// Original: core_skeleton.cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_005a0250
// Address: 005a0250
void __cdecl CDeformableModelInstance::skinAndRotateVertices(CDeformableModelInstance *this_ptr,int lod_index);

// Original: core_skeleton.cpp_CDeformableModelInstance_skinAndLightVertices_FUN_005a02a0
// Address: 005a02a0
void __cdecl CDeformableModelInstance::skinAndLightVertices(CDeformableModelInstance *this_ptr,int lod_index);

// Original: core_skeleton.cpp_CDeformableModelInstance_skinAndInitWRecip_FUN_005a02f0
// Address: 005a02f0
void __cdecl CDeformableModelInstance::skinAndInitWRecip(CDeformableModelInstance *this_ptr,int lod_index);

// Original: core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_005a0340
// Address: 005a0340
void __cdecl CDeformableModelInstance::renderPolygons(CDeformableModelInstance *this_ptr);

// Original: core_skeleton.cpp_CDeformableModelInstance_outlinePolygons_FUN_005a03b0
// Address: 005a03b0
void __cdecl CDeformableModelInstance::outlinePolygons(CDeformableModelInstance *this_ptr);

// Original: core_skeleton.cpp_CDeformableModelInstance_showAllParts_FUN_005a0410
// Address: 005a0410
void __cdecl CDeformableModelInstance::showAllParts(CDeformableModelInstance *this_ptr);

// Original: core_skeleton.cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_005a0430
// Address: 005a0430
void __cdecl CDeformableModelInstance::clearAllTextureSetIndices(CDeformableModelInstance *this_ptr);

// Original: core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
// Address: 005a0450
void __cdecl CDeformableModelInstance::preCache(CDeformableModelInstance *this_ptr);

// Original: core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480
// Address: 005a0480
void __cdecl CDeformableModelInstance::initializeFromModel(CDeformableModelInstance *this_ptr,CDeformableModel *model_ptr);

// Original: core_skeleton.cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a05e0
// Address: 005a05e0
void __cdecl CDeformableModelInstance::computeBoundingBox(CDeformableModelInstance *this_ptr);

// Original: core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
// Address: 005a07a0
CDeformableModel * __cdecl CDeformableModelInstance::getModelPtr(CDeformableModelInstance *this_ptr);

// Original: core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
// Address: 005a0820
CSkeleton * __cdecl CDeformableModelInstance::getSkeletonPtr(CDeformableModelInstance *this_ptr);

// Original: core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
// Address: 005a0840
void __cdecl CDeformableModelInstance::init(CDeformableModelInstance *this_ptr,char *model_name);

// Original: core_skeleton.cpp_CDeformableModelInstance_findPatchToFrame_FUN_005a08a0
// Address: 005a08a0
int __cdecl CDeformableModelInstance::findPatchToFrame(CMotionController *this_ptr,int source_motion_index,float source_frame,int target_motion_index);

// Original: core_skeleton.cpp_CDeformableModelInstance_computeBoneTransformsForFrame_FUN_005a0ad0
// Address: 005a0ad0
void __cdecl CDeformableModelInstance::computeBoneTransformsForFrame(CDeformableModelInstance *this_ptr,int motion_index,float animation_time,SPose *output_bone_data);

// Original: core_skeleton.cpp_CDeformableModelInstance_accumulateScaledRootMotion_FUN_005a0c90
// Address: 005a0c90
void __cdecl CDeformableModelInstance::accumulateScaledRootMotion(CDeformableModelInstance *this_ptr,float start_frame,float end_frame,float scale_factor);

// Original: core_skeleton.cpp_CDeformableModelInstance_getRootMotionDelta_FUN_005a0d10
// Address: 005a0d10
CVector3f * __cdecl CDeformableModelInstance::getRootMotionDelta(CDeformableModelInstance *this_ptr,CVector3f *output_buffer,float start_frame,float end_frame);

// Original: core_skeleton.cpp_getRootMotionDeltaForMotion_FUN_005a0f50
// Address: 005a0f50
CDeformableModelInstance * __cdecl getRootMotionDeltaForMotion(CMotionController *motion_controller,CDeformableModelInstance *deformable_model,int motion_index,float start_frame,float end_frame);

// Original: core_skeleton.cpp_CDeformableModelInstance_spawnDismemberedBodyPart_FUN_005a0fe0
// Address: 005a0fe0
CBodyPart * __cdecl CDeformableModelInstance::spawnDismemberedBodyPart(CDeformableModelInstance *this_ptr,int part_index,COrientation *orientation,CVector3f *velocity,CDemonActor *source_actor,int unknown);

// Original: core_skeleton.cpp_CDeformableModelInstance_dismemberPart_FUN_005a1040
// Address: 005a1040
void __cdecl CDeformableModelInstance::dismemberPart(CDeformableModelInstance *this_ptr,CBodyPart *body_part,int part_index);

// Original: core_skeleton.cpp_CDeformableModelInstance_rayIntersect_FUN_005a10e0
// Address: 005a10e0
float __cdecl CDeformableModelInstance::rayIntersect(CDeformableModelInstance *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction);

// Original: core_skeleton.cpp_CDeformableModelInstance_findClosestBone_FUN_005a1160
// Address: 005a1160
int __cdecl CDeformableModelInstance::findClosestBone(CDeformableModelInstance *this_ptr,CVector3f *point);

// Original: core_skeleton.cpp_CDeformableModelInstance_shatter_FUN_005a14b0
// Address: 005a14b0
void __cdecl CDeformableModelInstance::shatter(CDeformableModelInstance *this_ptr,CVector3f *center_position,CVector3f *orientation_vector,int desired_lod_index);

// Original: core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510
// Address: 005a1510
void __cdecl CDeformableModelInstance::getBoneTransform(CDeformableModelInstance *this_ptr,SPose *bone_transform);

// Original: core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_005a15e0
// Address: 005a15e0
void __cdecl CDeformableModelInstance::setBoneTransform(CDeformableModelInstance *this_ptr,SPose *bone_transform);

// Original: core_skeleton.cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0
// Address: 005a16c0
CBoundingBox3D * __cdecl CDeformableModelInstance::computeBoundingBox(CDeformableModelInstance *this_ptr,CBoundingBox3D *output_bbox);

// Original: core_skeleton.cpp_CDeformableModelInstance_renderSkeleton_FUN_005a17b0
// Address: 005a17b0
void __cdecl CDeformableModelInstance::renderSkeleton(CDeformableModelInstance *this_ptr,int color,int render_flags);

// Original: core_skeleton.cpp_CDeformableModelInstance_renderBones_FUN_005a17e0
// Address: 005a17e0
void __cdecl CDeformableModelInstance::renderBones(CDeformableModelInstance *this_ptr);

// Original: core_skeleton.cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_005a1800
// Address: 005a1800
void __cdecl CDeformableModelInstance::computeCylindricalUVs(CDeformableModelInstance *this_ptr,int param_2,int param_3);

// Original: core_skeleton.cpp_computeBoneWorldMatrices_FUN_005a1950
// Address: 005a1950
void __cdecl computeBoneWorldMatrices(SPose *bone_data,CDeformableModelInstance *instance_ptr);

// Original: core_skeleton.cpp_blendBoneTransformData_FUN_005a1b70
// Address: 005a1b70
void __cdecl blendBoneTransformData(CVector3f *result_root_pos,SPose *bone_data_out,SPose *bone_data_in,float blend_weight,CDeformableModelInstance *instance_ptr);

// Original: core_skeleton.cpp_getDeformableModel_FUN_005a1cf0
// Address: 005a1cf0
CDeformableModel * __cdecl getDeformableModel(char *model_filename);

// Original: core_skeleton.cpp_freeAllModels_FUN_005a1dc0
// Address: 005a1dc0
void __cdecl freeAllModels(void);

// Original: core_skeleton.cpp_loadSkeleton_FUN_005a1df0
// Address: 005a1df0
CSkeleton * __cdecl loadSkeleton(char *filename);

// Original: core_skeleton.cpp_freeAllSkeletons_FUN_005a1ea0
// Address: 005a1ea0
void __cdecl freeAllSkeletons(void);

// Original: core_skeleton.cpp_getMemoryStats_FUN_005a1ed0
// Address: 005a1ed0
void __cdecl getMemoryStats(char *output_buffer);

// Original: core_skeleton.cpp_SVert_ctor_FUN_005a1f70
// Address: 005a1f70
SVert * __cdecl SVert::ctor(SVert *this_ptr);

// Original: core_skeleton.cpp_SVert_dtor_FUN_005a1f90
// Address: 005a1f90
SVert * __cdecl SVert::dtor(SVert *this_ptr,uint flags);

// Original: core_skeleton.cpp_CSkeleton_arrdtor_FUN_005a1fb0
// Address: 005a1fb0
CSkeleton * __cdecl CSkeleton::arrdtor(CSkeleton *objs,uint flags);

// Original: core_skeleton.cpp_CDeformableModel_arrdtor_FUN_005a1fd0
// Address: 005a1fd0
CDeformableModel * __cdecl CDeformableModel::arrdtor(CDeformableModel *objs,uint flags);

// Original: core_skeleton.cpp_CVector3f_arrdtor_FUN_005a1ff0
// Address: 005a1ff0
CVector3f * __cdecl CVector3f::arrdtor(CVector3f *objs,uint flags);

// Original: core_skeleton.cpp_CVector3f_arrdtor_FUN_005a2010
// Address: 005a2010
CVector3f * __cdecl CVector3f::arrdtor(CVector3f *objs,uint flags);

// Original: core_skeleton.cpp_CBoundingBox3D_arrdtor_FUN_005a2030
// Address: 005a2030
CBoundingBox3D * __cdecl CBoundingBox3D::arrdtor(CBoundingBox3D *objs,uint flags);
