#pragma once

// Function prototypes for core/skeleton.cpp
// Generated from Ghidra function signatures

// Original: core_skeleton.cpp_staticInit_FUN_00517140
// Address: 00517140
void __cdecl staticInit(void);

// Original: core_skeleton.cpp_skipToEndOfLine_FUN_00517190
// Address: 00517190
void __cdecl skipToEndOfLine(_FILE *file_ptr);

// Original: core_skeleton.cpp_distancePointToLineSegment_FUN_005171b0
// Address: 005171b0
float __cdecl distancePointToLineSegment(CVector3f *line_start,CVector3f *line_end,CVector3f *test_point);

// Original: core_skeleton.cpp_CSkeleton_ctor_FUN_00517350
// Address: 00517350
CSkeleton * __cdecl CSkeleton::ctor(CSkeleton *this_ptr);

// Original: core_skeleton.cpp_CSkeleton_dtor_FUN_005173a0
// Address: 005173a0
CSkeleton * __cdecl CSkeleton::dtor(CSkeleton *this_ptr,uint flags);

// Original: core_skeleton.cpp_CSkeleton_allocMemory_FUN_005173c0
// Address: 005173c0
void __cdecl CSkeleton::allocMemory(CSkeleton *this_ptr,int bone_count,int frame_count);

// Original: core_skeleton.cpp_CSkeleton_FUN_005174e0
// Address: 005174e0
void __cdecl CSkeleton(CSkeleton *this_ptr);

// Original: core_skeleton.cpp_CSkeleton_load_FUN_00517560
// Address: 00517560
void __cdecl CSkeleton::load(CSkeleton *this_ptr,char *filename);

// Original: core_skeleton.cpp_CSkeleton_loadStream_FUN_005175f0
// Address: 005175f0
void __cdecl CSkeleton::loadStream(CSkeleton *this_ptr,_FILE *file_handle);

// Original: core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0
// Address: 005179d0
int __cdecl CSkeleton::findBone(CSkeleton *this_ptr,char *bone_name,int assert_if_not_found);

// Original: core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00517a60
// Address: 00517a60
CQuaternion4f * __cdecl CSkeleton::getBoneAngleAtFrame(CSkeleton *this_ptr,int bone_index,int frame_index);

// Original: core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_00517a80
// Address: 00517a80
CQuaternion4f * __stack5_esi CSkeleton::getBoneAngleInterpolated(CSkeleton *this_ptr,int bone_index,int frame_index_1,int frame_index_2,float interpolation,CQuaternion4f *result_out);

// Original: core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00517b10
// Address: 00517b10
int __cdecl CSkeleton::getHierarchyDistance(CSkeleton *this_ptr,int start_bone_index,int target_bone_index);

// Original: core_skeleton.cpp_CSkeleton_calculateFrameDataSize_FUN_00517b50
// Address: 00517b50
int __cdecl CSkeleton::calculateFrameDataSize(CSkeleton *this_ptr);

// Original: core_skeleton.cpp_CDeformableModel_ctor_FUN_00517b70
// Address: 00517b70
CDeformableModel * __cdecl CDeformableModel::ctor(CDeformableModel *this_ptr);

// Original: core_skeleton.cpp_CDeformableModel_dtor_FUN_00517c80
// Address: 00517c80
CDeformableModel * __cdecl CDeformableModel::dtor(CDeformableModel *this_ptr,uint flags);

// Original: core_skeleton.cpp_CDeformableModel_free_FUN_00517cc0
// Address: 00517cc0
void __cdecl CDeformableModel::free(CDeformableModel *this_ptr);

// Original: core_skeleton.cpp_CDeformableModel_allocMemory_FUN_00517da0
// Address: 00517da0
void __cdecl CDeformableModel::allocMemory(CDeformableModel *this_ptr,int num_lods,int num_texture_sets,int num_textures,int num_parts);

// Original: core_skeleton.cpp_CDeformableModel_allocLOD_FUN_00517ec0
// Address: 00517ec0
void __cdecl CDeformableModel::allocLOD(CDeformableModel *this_ptr,int lod_index,int vertex_count,int tri_count,int cap_tri_count);

// Original: core_skeleton.cpp_CDeformableModel_captureTextures_FUN_005180a0
// Address: 005180a0
void __cdecl CDeformableModel::captureTextures(CDeformableModel *this_ptr);

// Original: core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_00518130
// Address: 00518130
CSkeleton * __cdecl CDeformableModel::getSkeletonPtr(CDeformableModel *this_ptr);

// Original: core_skeleton.cpp_CDeformableModel_getVertexPoolPtr_FUN_00518180
// Address: 00518180
CVector3f * __cdecl CDeformableModel::getVertexPoolPtr(CDeformableModel *this_ptr,int index);

// Original: core_skeleton.cpp_CDeformableModel_skinVertices_FUN_005181a0
// Address: 005181a0
void __cdecl CDeformableModel::skinVertices(CDeformableModel *this_ptr,int lod_index,CMatrix3x4f *bone_matrices,int *output_buffer,SPartInstanceData *part_data);

// Original: core_skeleton.cpp_CDeformableModel_skinSingleVertex_FUN_00518320
// Address: 00518320
CVector3f * __cdecl CDeformableModel::skinSingleVertex(CDeformableModel *this_ptr,CVector3f *output_pos,int lod_index,int vertex_index,CMatrix3x4f *bone_matrices);

// Original: core_skeleton.cpp_CDeformableModel_rotateVertices_FUN_00518440
// Address: 00518440
void __cdecl CDeformableModel::rotateVertices(CDeformableModel *this_ptr,int lod_index,int *input_vertices);

// Original: core_skeleton.cpp_CDeformableModel_lightVertices_FUN_00518470
// Address: 00518470
void __cdecl CDeformableModel::lightVertices(CDeformableModel *this_ptr,int lod_index,CVector3i *skinned_vertices);

// Original: core_skeleton.cpp_CDeformableModel_initVertexWRecip_FUN_005184b0
// Address: 005184b0
void __cdecl CDeformableModel::initVertexWRecip(CDeformableModel *this_ptr,int lod_index,CVector3i *lod_vertices);

// Original: core_skeleton.cpp_CDeformableModel_renderParts_FUN_00518510
// Address: 00518510
void __cdecl CDeformableModel::renderParts(CDeformableModel *this_ptr,int lod_index,int *part_visibility_flags,int *texture_set_indices,int render_flags,int skip_texture_capture);

// Original: core_skeleton.cpp_CDeformableModel_renderWireframe_FUN_00518ec0
// Address: 00518ec0
void __cdecl CDeformableModel::renderWireframe(CDeformableModel *this_ptr,int lod_level);

// Original: core_skeleton.cpp_CDeformableModel_renderSkeleton_FUN_00518f60
// Address: 00518f60
void __cdecl CDeformableModel::renderSkeleton(CDeformableModel *this_ptr,int color,CMatrix3x4f *bone_matrices,int render_flags);

// Original: core_skeleton.cpp_CDeformableModel_renderBones_FUN_00519120
// Address: 00519120
void __cdecl CDeformableModel::renderBones(CDeformableModel *this_ptr,CMatrix3x4f *bone_matrices);

// Original: core_skeleton.cpp_CDeformableModel_load_FUN_005191f0
// Address: 005191f0
void __cdecl CDeformableModel::load(CDeformableModel *this_ptr,char *filename);

// Original: core_skeleton.cpp_CDeformableModel_loadStream_FUN_00519280
// Address: 00519280
void __cdecl CDeformableModel::loadStream(CDeformableModel *this_ptr,_FILE *file_handle);

// Original: core_skeleton.cpp_CDeformableModel_bindSkeleton_FUN_00519ae0
// Address: 00519ae0
void __cdecl CDeformableModel::bindSkeleton(CDeformableModel *this_ptr,CSkeleton *skeleton_ptr);

// Original: core_skeleton.cpp_CDeformableModel_getPartPtr_FUN_00519b10
// Address: 00519b10
SPart * __cdecl CDeformableModel::getPartPtr(CDeformableModel *this_ptr,int part_index);

// Original: core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30
// Address: 00519b30
int __cdecl CDeformableModel::findPartByName(CDeformableModel *this_ptr,char *part_name,int error_if_not_found);

// Original: core_skeleton.cpp_CDeformableModel_getBonePart_FUN_00519bc0
// Address: 00519bc0
int __cdecl CDeformableModel::getBonePart(CDeformableModel *this_ptr,int bone_index);

// Original: core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_00519be0
// Address: 00519be0
int __cdecl CDeformableModel::computeBoneDominantPart(CDeformableModel *this_ptr,int bone_index);

// Original: core_skeleton.cpp_CDeformableModel_dismember_FUN_00519ec0
// Address: 00519ec0
void __cdecl CDeformableModel::dismember(CDeformableModel *this_ptr,int lod_index,CBodyPart *body_part_ptr,int part_index,CVector3i *skinned_vertices,int texture_set_index);

// Original: core_skeleton.cpp_CDeformableModel_exactRayTrace_FUN_0051a470
// Address: 0051a470
float __cdecl CDeformableModel::exactRayTrace(CDeformableModel *this_ptr,int lod_index,CVector3f *ray_origin,CVector3f *ray_direction,CVector3i *skinned_vertices,byte *part_visibility_flags);

// Original: core_skeleton.cpp_CDeformableModel_selectLOD_FUN_0051a700
// Address: 0051a700
int __cdecl CDeformableModel::selectLOD(CDeformableModel *this_ptr,CBoundingBox3D *bounding_box);

// Original: core_skeleton.cpp_CDeformableModel_shatter_FUN_0051a780
// Address: 0051a780
void __cdecl CDeformableModel::shatter(CDeformableModel *this_ptr,CVector3f *center_position,CVector3f *orientation_vector,int lod_index,CVector3i *skinned_vertices,int *part_visibility_flags,int *texture_set_indices);

// Original: core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_0051ad20
// Address: 0051ad20
void __cdecl CDeformableModel::computePartDominantBones(CDeformableModel *this_ptr);

// Original: core_skeleton.cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_0051b280
// Address: 0051b280
void __cdecl CDeformableModel::computeBoneBoundsAndFlags(CDeformableModel *this_ptr);

// Original: core_skeleton.cpp_CDeformableModel_computeFarthestChildBones_FUN_0051b480
// Address: 0051b480
void __cdecl CDeformableModel::computeFarthestChildBones(CDeformableModel *this_ptr);

// Original: core_skeleton.cpp_CDeformableModel_findMaxWeightBone_FUN_0051b540
// Address: 0051b540
int __cdecl CDeformableModel::findMaxWeightBone(CDeformableModel *this_ptr,int lod_level,int triangle_index);

// Original: core_skeleton.cpp_CDeformableModel_calculateMemorySize_FUN_0051b600
// Address: 0051b600
int __cdecl CDeformableModel::calculateMemorySize(CDeformableModel *this_ptr);

// Original: core_skeleton.cpp_motionBlendWeightFunc_FUN_0051b650
// Address: 0051b650
float __cdecl motionBlendWeightFunc(int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance,CDeformableModelInstance *instance);

// Original: core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0051b660
// Address: 0051b660
CDeformableModelInstance * __cdecl CDeformableModelInstance::ctor(CDeformableModelInstance *this_ptr);

// Original: core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0
// Address: 0051b6e0
CDeformableModelInstance * __cdecl CDeformableModelInstance::dtor(CDeformableModelInstance *this_ptr,uint flags);

// Original: core_skeleton.cpp_CDeformableModelInstance_allocPointList_FUN_0051b750
// Address: 0051b750
void __cdecl CDeformableModelInstance::allocPointList(CDeformableModelInstance *this_ptr);

// Original: core_skeleton.cpp_CDeformableModelInstance_FUN_0051b7d0
// Address: 0051b7d0
void __cdecl CDeformableModelInstance(CDeformableModelInstance *this_ptr);

// Original: core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800
// Address: 0051b800
void __cdecl CDeformableModelInstance::resetToRestPose(CDeformableModelInstance *this_ptr);

// Original: core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880
// Address: 0051b880
void __cdecl CDeformableModelInstance::updateAnimationAndTransforms(CDeformableModelInstance *this_ptr);

// Original: core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0
// Address: 0051b8a0
void __cdecl CDeformableModelInstance::updateAnimation(CDeformableModelInstance *this_ptr);

// Original: core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0051b8f0
// Address: 0051b8f0
void __cdecl CDeformableModelInstance::updateMotionAtFrame(CDeformableModelInstance *this_ptr,int motion_index,float frame_number);

// Original: core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0051b920
// Address: 0051b920
void __cdecl CDeformableModelInstance::updateMotion(CDeformableModelInstance *this_ptr,int motion_index,float frame_number,int bone_index);

// Original: core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
// Address: 0051c3d0
void __cdecl CDeformableModelInstance::blendMotion(CDeformableModelInstance *this_ptr,int target_motion_index,float target_frame_number ,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *callback_func);

// Original: core_skeleton.cpp_CDeformableModelInstance_blendWithPoseData_FUN_0051cab0
// Address: 0051cab0
void __cdecl CDeformableModelInstance::blendWithPoseData(CDeformableModelInstance *this_ptr,SPoseData *pose_data,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback);

// Original: core_skeleton.cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0051cae0
// Address: 0051cae0
void __cdecl CDeformableModelInstance::blendWithQuaternions(CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,CVector3f *source_position,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback);

// Original: core_skeleton.cpp_CDeformableModelInstance_copyBoneRotations_FUN_0051cf60
// Address: 0051cf60
void __cdecl CDeformableModelInstance::copyBoneRotations(CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,int bone_index);

// Original: core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0
// Address: 0051cfd0
void __cdecl CDeformableModelInstance::blendBoneRotations(CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback);

// Original: core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0051d0a0
// Address: 0051d0a0
CMatrix3x4f * __stack2_esi CDeformableModelInstance::getBoneWorldMatrix(CDeformableModelInstance *this_ptr,int bone_index,CMatrix3x4f *out_matrix);

// Original: core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
// Address: 0051d2a0
CVector3f * __cdecl CDeformableModelInstance::getBoneWorldPosition(CDeformableModelInstance *this_ptr,CVector3f *out_position,int bone_index);

// Original: core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
// Address: 0051d380
CVector3f * __cdecl CDeformableModelInstance::getBoneCachedWorldPosition(CDeformableModelInstance *this_ptr,CVector3f *out_position,int bone_index);

// Original: core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0
// Address: 0051d3c0
void __cdecl CDeformableModelInstance::computeBoneTransforms(CDeformableModelInstance *this_ptr);

// Original: core_skeleton.cpp_CDeformableModelInstance_offsetAllBonePositions_FUN_0051d5e0
// Address: 0051d5e0
void __cdecl CDeformableModelInstance::offsetAllBonePositions(CDeformableModelInstance *this_ptr,CVector3f *offset_vector);

// Original: core_skeleton.cpp_CDeformableModelInstance_aimBoneAtTarget_FUN_0051d650
// Address: 0051d650
void __cdecl CDeformableModelInstance::aimBoneAtTarget(CDeformableModelInstance *this_ptr,CVector3f *target_position,float blend_weight,int bone_index,CQuaternion4f *base_orientation,CDeformableModel_MotionBlendWeightFunc *blend_callback);

// Original: core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
// Address: 0051d7a0
void __cdecl CDeformableModelInstance::applyRotationToHierarchy(CDeformableModelInstance *this_ptr,CQuaternion4f *rotation_quat,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback);

// Original: core_skeleton.cpp_CDeformableModelInstance_scalePoseDataForHierarchy_FUN_0051d970
// Address: 0051d970
void __cdecl CDeformableModelInstance::scalePoseDataForHierarchy(CDeformableModelInstance *this_ptr,float scale_factor,int target_bone_index);

// Original: core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0
// Address: 0051d9d0
void __cdecl CDeformableModelInstance::renderWithOptions(CDeformableModelInstance *this_ptr,int lod_index,uint render_flags,int lighting_mode ,int render_pass);

// Original: core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50
// Address: 0051da50
void __cdecl CDeformableModelInstance::skinVerticesForLOD(CDeformableModelInstance *this_ptr,int lod_index);

// Original: core_skeleton.cpp_CDeformableModelInstance_skinSingleVertex_FUN_0051da90
// Address: 0051da90
CVector3f * __cdecl CDeformableModelInstance::skinSingleVertex(CDeformableModelInstance *this_ptr,CVector3f *output_pos,int lod_index,int vertex_index);

// Original: core_skeleton.cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_0051dad0
// Address: 0051dad0
void __cdecl CDeformableModelInstance::skinAndRotateVertices(CDeformableModelInstance *this_ptr,int lod_index);

// Original: core_skeleton.cpp_CDeformableModelInstance_skinAndLightVertices_FUN_0051db20
// Address: 0051db20
void __cdecl CDeformableModelInstance::skinAndLightVertices(CDeformableModelInstance *this_ptr,int lod_index);

// Original: core_skeleton.cpp_CDeformableModelInstance_skinAndInitWRecip_FUN_0051db70
// Address: 0051db70
void __cdecl CDeformableModelInstance::skinAndInitWRecip(CDeformableModelInstance *this_ptr,int lod_index);

// Original: core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_0051dbc0
// Address: 0051dbc0
void __cdecl CDeformableModelInstance::renderPolygons(CDeformableModelInstance *this_ptr,int render_flags,int skip_texture_capture);

// Original: core_skeleton.cpp_CDeformableModelInstance_outlinePolygons_FUN_0051dc30
// Address: 0051dc30
void __cdecl CDeformableModelInstance::outlinePolygons(CDeformableModelInstance *this_ptr);

// Original: core_skeleton.cpp_CDeformableModelInstance_showAllParts_FUN_0051dc90
// Address: 0051dc90
void __cdecl CDeformableModelInstance::showAllParts(CDeformableModelInstance *this_ptr);

// Original: core_skeleton.cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_0051dcb0
// Address: 0051dcb0
void __cdecl CDeformableModelInstance::clearAllTextureSetIndices(CDeformableModelInstance *this_ptr);

// Original: core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0
// Address: 0051dcd0
void __cdecl CDeformableModelInstance::preCache(CDeformableModelInstance *this_ptr);

// Original: core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_0051dd00
// Address: 0051dd00
void __cdecl CDeformableModelInstance::initializeFromModel(CDeformableModelInstance *this_ptr,CDeformableModel *model_ptr);

// Original: core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromVertices_FUN_0051de60
// Address: 0051de60
void __cdecl CDeformableModelInstance::computeBoundingBoxFromVertices(CDeformableModelInstance *this_ptr);

// Original: core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
// Address: 0051e020
CDeformableModel * __cdecl CDeformableModelInstance::getModelPtr(CDeformableModelInstance *this_ptr);

// Original: core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
// Address: 0051e0a0
CSkeleton * __cdecl CDeformableModelInstance::getSkeletonPtr(CDeformableModelInstance *this_ptr);

// Original: core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
// Address: 0051e0c0
void __cdecl CDeformableModelInstance::init(CDeformableModelInstance *this_ptr,char *model_name);

// Original: core_skeleton.cpp_CDeformableModelInstance_findPatchToFrame_FUN_0051e120
// Address: 0051e120
int __cdecl CDeformableModelInstance::findPatchToFrame(CDeformableModelInstance *this_ptr,int source_motion_index,float source_frame,int target_motion_index);

// Original: core_skeleton.cpp_CDeformableModelInstance_computeBoneTransformsForFrame_FUN_0051e350
// Address: 0051e350
void __cdecl CDeformableModelInstance::computeBoneTransformsForFrame(CDeformableModelInstance *this_ptr,int motion_index,float animation_time,SPose *output_bone_data);

// Original: core_skeleton.cpp_CDeformableModelInstance_accumulateScaledRootMotion_FUN_0051e510
// Address: 0051e510
void __cdecl CDeformableModelInstance::accumulateScaledRootMotion(CDeformableModelInstance *this_ptr,float start_frame,float end_frame,float scale_factor);

// Original: core_skeleton.cpp_CDeformableModelInstance_getRootMotionDelta_FUN_0051e590
// Address: 0051e590
CVector3f * __cdecl CDeformableModelInstance::getRootMotionDelta(CDeformableModelInstance *this_ptr,CVector3f *output_buffer,float start_frame,float end_frame);

// Original: core_skeleton.cpp_getRootMotionDeltaForMotion_FUN_0051e7d0
// Address: 0051e7d0
CDeformableModelInstance * __cdecl getRootMotionDeltaForMotion(CMotionController *motion_controller,CDeformableModelInstance *deformable_model,int motion_index,float start_frame,float end_frame);

// Original: core_skeleton.cpp_CDeformableModelInstance_spawnDismemberedBodyPart_FUN_0051e860
// Address: 0051e860
CBodyPart * __cdecl CDeformableModelInstance::spawnDismemberedBodyPart(CDeformableModelInstance *this_ptr,int part_index,CVector3f *position,UOrientationVector *orientation,CVector3f *initial_velocity,CDemonActor *scale_source);

// Original: core_skeleton.cpp_CDeformableModelInstance_dismemberPart_FUN_0051e8c0
// Address: 0051e8c0
void __cdecl CDeformableModelInstance::dismemberPart(CDeformableModelInstance *this_ptr,CBodyPart *body_part,int part_index);

// Original: core_skeleton.cpp_CDeformableModelInstance_rayIntersect_FUN_0051e960
// Address: 0051e960
float __cdecl CDeformableModelInstance::rayIntersect(CDeformableModelInstance *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction);

// Original: core_skeleton.cpp_CDeformableModelInstance_findClosestBone_FUN_0051e9e0
// Address: 0051e9e0
int __cdecl CDeformableModelInstance::findClosestBone(CDeformableModelInstance *this_ptr,CVector3f *point);

// Original: core_skeleton.cpp_CDeformableModelInstance_shatter_FUN_0051ed30
// Address: 0051ed30
void __cdecl CDeformableModelInstance::shatter(CDeformableModelInstance *this_ptr,CVector3f *center_position,CVector3f *orientation_vector,int desired_lod_index);

// Original: core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_0051ed90
// Address: 0051ed90
SPose * __cdecl CDeformableModelInstance::getBoneTransform(CDeformableModelInstance *this_ptr,SPose *bone_transform);

// Original: core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_0051ee60
// Address: 0051ee60
void __cdecl CDeformableModelInstance::setBoneTransform(CDeformableModelInstance *this_ptr,SPose *bone_transform);

// Original: core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0051ef40
// Address: 0051ef40
CBoundingBox3D * __cdecl CDeformableModelInstance::computeBoundingBoxFromBones(CDeformableModelInstance *this_ptr,CBoundingBox3D *output_bbox);

// Original: core_skeleton.cpp_CDeformableModelInstance_renderSkeleton_FUN_0051f030
// Address: 0051f030
void __cdecl CDeformableModelInstance::renderSkeleton(CDeformableModelInstance *this_ptr,int color,int render_flags);

// Original: core_skeleton.cpp_CDeformableModelInstance_renderBones_FUN_0051f060
// Address: 0051f060
void __cdecl CDeformableModelInstance::renderBones(CDeformableModelInstance *this_ptr);

// Original: core_skeleton.cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_0051f080
// Address: 0051f080
void __cdecl CDeformableModelInstance::computeCylindricalUVs(CDeformableModelInstance *this_ptr,int u_offset,int v_offset);

// Original: core_skeleton.cpp_computeBoneWorldMatrices_FUN_0051f1d0
// Address: 0051f1d0
void __cdecl computeBoneWorldMatrices(SPose *bone_data,CDeformableModelInstance *instance_ptr);

// Original: core_skeleton.cpp_blendBoneTransformData_FUN_0051f3f0
// Address: 0051f3f0
void __cdecl blendBoneTransformData(SPose *result_pose,SPose *bone_data_out,SPose *bone_data_in,float blend_weight,CDeformableModelInstance *instance_ptr);

// Original: core_skeleton.cpp_getDeformableModel_FUN_0051f570
// Address: 0051f570
CDeformableModel * __cdecl getDeformableModel(char *model_filename);

// Original: core_skeleton.cpp_freeAllModels_FUN_0051f650
// Address: 0051f650
void __cdecl freeAllModels(void);

// Original: core_skeleton.cpp_loadSkeleton_FUN_0051f680
// Address: 0051f680
CSkeleton * __cdecl loadSkeleton(char *filename);

// Original: core_skeleton.cpp_freeAllSkeletons_FUN_0051f730
// Address: 0051f730
void __cdecl freeAllSkeletons(void);

// Original: core_skeleton.cpp_getMemoryStats_FUN_0051f760
// Address: 0051f760
void __cdecl getMemoryStats(char *output_buffer);

// Original: core_skeleton.cpp_calculateDistanceSquared_FUN_0051f800
// Address: 0051f800
float __cdecl calculateDistanceSquared(CVector3f *point1,CVector3f *point2);

// Original: core_skeleton.cpp_SVert_ctor_FUN_0051f840
// Address: 0051f840
SVert * __cdecl SVert::ctor(SVert *this_ptr);

// Original: core_skeleton.cpp_SVert_dtor_FUN_0051f860
// Address: 0051f860
SVert * __cdecl SVert::dtor(SVert *this_ptr,uint flags);

// Original: core_skeleton.cpp_CSkeleton_arrdtor40_FUN_0051f880
// Address: 0051f880
CSkeleton * __cdecl CSkeleton::arrdtor40(CSkeleton *this_ptr,uint flags);

// Original: core_skeleton.cpp_CDeformableModel_arrdtor64_FUN_0051f8a0
// Address: 0051f8a0
CDeformableModel * __cdecl CDeformableModel::arrdtor64(CDeformableModel *this_ptr,uint flags);

// Original: core_skeleton.cpp_CBoundingBox3D_arrdtor100_FUN_0051f900
// Address: 0051f900
CBoundingBox3D * __cdecl CBoundingBox3D::arrdtor100(CBoundingBox3D *this_ptr,uint flags);
