#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "types/classes/C3DSCamera.h"
#include "types/classes/C3DSLight.h"
#include "types/classes/CBodyPart.h"
#include "types/classes/CBoundingBox3D.h"
#include "types/classes/CCharacter.h"
#include "types/classes/CDeformableModel.h"
#include "types/classes/CDeformableModelInstance.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDemonCamera.h"
#include "types/classes/CDemonLight.h"
#include "types/classes/CDemonSet.h"
#include "types/classes/CEnemy.h"
#include "types/classes/CMatrix3x3f.h"
#include "types/classes/CMatrix3x4f.h"
#include "types/classes/CMotionController.h"
#include "types/classes/CQuaternion4f.h"
#include "types/classes/CShotgun.h"
#include "types/classes/CShovel.h"
#include "types/classes/CSimBox.h"
#include "types/classes/CSkeleton.h"
#include "types/classes/CSlew.h"
#include "types/classes/CSmiley.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"
#include "types/funcdefs/CDeformableModel_MotionBlendWeightFunc.h"
#include "types/structs/SCollisionInfo.h"
#include "types/structs/SCollisionReturnInfo.h"
#include "types/structs/SDamageInfo.h"
#include "types/structs/SIntersectXZCylinder.h"
#include "types/structs/SMRGLPrimitivePoly.h"
#include "types/structs/SPart.h"
#include "types/structs/SPartInstanceData.h"
#include "types/structs/SPose.h"
#include "types/structs/SPoseData.h"
#include "types/structs/SRaytraceState.h"
#include "types/structs/SVDBox.h"
#include "types/structs/SVert.h"
#include "types/unions/UOrientationVector.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x510000
// =============================================================================

int __cdecl core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_005103f0(CDemonSet *this_ptr,CDemonActor *actor);
int __cdecl core_setcolid_cpp_intersectXZCylinder_FUN_00510450(SIntersectXZCylinder *cylinder,float obstacle_x,float obstacle_y,SCollisionInfo *collision_info);
void __cdecl core_setcolid_cpp_testCylinderQuadCollision_FUN_005106a0(SIntersectXZCylinder *cylinder,CVector3f *vertex1,CVector3f *vertex2,CVector3f *vertex3,CVector3f *vertex4);
int __cdecl core_setcolid_cpp_CDemonSet_testOBBCylinderCollision_FUN_00510710(CDemonSet *this_ptr,SIntersectXZCylinder *cylinder,CBoundingBox3D *bounding_box,CVector3f *position,CMatrix3x3f *orientation_matrix);
float __cdecl core_setcolid_cpp_CDemonSet_testCylinderCollision_FUN_00510a40(CDemonSet *this_ptr,float start_x,float start_z,float dir_x,float dir_z,float radius,float bottom_y,float top_y);
void __cdecl core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_005113e0(CDemonSet *this_ptr);
void __cdecl core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00511590(CDemonSet *this_ptr);
void __cdecl core_setcolid_cpp_FUN_00511740(CDemonSet *this_ptr);
void __cdecl core_setcolid_cpp_CDemonSet_init_FUN_00511750(CDemonSet *this_ptr);
void __cdecl core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(CDemonSet *this_ptr,CDemonActor *actor);
void __cdecl core_setcolid_cpp_CDemonSet_disableIgnore_FUN_005117e0(CDemonSet *this_ptr);
void __cdecl core_setcolid_cpp_FUN_005117f0(CDemonSet *this_ptr);
void __cdecl core_setcolid_cpp_CDemonSet_setRayType_FUN_00511800(CDemonSet *this_ptr,int ray_type);
void __cdecl core_setcolid_cpp_CDemonSet_setRayTypeLaser_FUN_00511840(CDemonSet *this_ptr,int laser_type,int color_r,int color_g,int color_b);
void __cdecl core_setcolid_cpp_CDemonSet_notifyDamageListeners_FUN_00511880(CDemonSet *this_ptr,CVector3f *position,CVector3f *actor_position,SDamageInfo *damage_info);
SCollisionInfo * __cdecl core_setcolid_cpp_SCollisionInfo_ctor_FUN_00511990(SCollisionInfo *this_ptr);
void __cdecl core_setcolid_cpp_CDemonSet_buildCollidableActorList_FUN_005119b0(CDemonSet *this_ptr);
void __cdecl core_setcolid_cpp_FUN_00511a10(CDemonSet *this_ptr,CDemonActor *actor);
void __cdecl core_setcolid_cpp_FUN_00511aa0(CDemonSet *this_ptr,CDemonActor *actor);
void __cdecl core_setcolid_cpp_CDemonSet_commitVoxelBuffer_FUN_00511b30(CDemonSet *this_ptr);
int __cdecl core_setcolid_cpp_CDemonSet_isPointInWater_FUN_00511b50(CDemonSet *this_ptr,CVector3f *point);
SRaytraceState * __cdecl core_setcolid_cpp_SRaytraceState_ctor_FUN_00511c60(SRaytraceState *this_ptr);
SRaytraceState * __cdecl core_setcolid_cpp_SRaytraceState_dtor_FUN_00511c70(SRaytraceState *this_ptr,uint flags);
SIntersectXZCylinder * __cdecl core_setcolid_cpp_SIntersectXZCylinder_ctor_FUN_00511c80(SIntersectXZCylinder *this_ptr);
SIntersectXZCylinder * __cdecl core_setcolid_cpp_SIntersectXZCylinder_dtor_FUN_00511c90(SIntersectXZCylinder *this_ptr,uint flags);
void __cdecl core_setcolid_cpp_SDamageInfo_copy_FUN_00511ca0(SDamageInfo *this_ptr,SDamageInfo *other);
SCollisionReturnInfo * __cdecl core_setcolid_cpp_SCollisionReturnInfo_ctor_FUN_00511d20(SCollisionReturnInfo *this_ptr);
SCollisionReturnInfo * __cdecl core_setcolid_cpp_SCollisionReturnInfo_dtor_FUN_00511d30(SCollisionReturnInfo *this_ptr,uint flags);
void __cdecl core_setdir_cpp_staticInit_FUN_00511d60(void);
float core_setdir_cpp_FUN_00511d80(CDemonActor *param_1,CVector3i *param_2,SMRGLPrimitivePoly *param_3,int param_4,C3DSCamera *param_5,float param_6);
undefined4 core_setdir_cpp_FUN_005125a0(CDemonSet *param_1,CDemonActor *param_2,int param_3);
void __cdecl core_setdir_cpp_CDemonSet_setPendingCamera_FUN_005135d0(CDemonSet *this_ptr,int camera_index,float hold_time);
void __cdecl core_setdir_cpp_CDemonSet_clearCameraSwitchCooldown_FUN_005135f0(CDemonSet *this_ptr);
void __cdecl core_setdir_cpp_CDemonSet_refreshThumbs_FUN_00513610(CDemonSet *this_ptr,char *filename);
void core_setdir_cpp_FUN_00513670(SIZE_T *param_1,char *param_2);
void core_setdir_cpp_FUN_00513720(CDemonSet *param_1);
void core_setdir_cpp_FUN_005138e0(int *param_1);
void __cdecl core_setdir_cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_00513ce0(CDemonSet *this_ptr,_FILE *file_handle);
int __cdecl core_setdir_cpp_CDemonSet_isPointInVdirBox_FUN_00513d80(CDemonSet *this_ptr,int box_index,CVector3f *point);
undefined4 core_setdir_cpp_FUN_00513e20(CDemonSet *param_1,int param_2,CVector3f *param_3);
int __cdecl core_setdir_cpp_testOBBIntersection_FUN_00513e80(SVDBox *obb_a,SVDBox *obb_b);
int __cdecl core_setdir_cpp_CDemonSet_buildVdirBoxGroups_FUN_005141f0(CDemonSet *this_ptr);
int __cdecl core_setdir_cpp_CDemonSet_findVdirBoxRoot_FUN_00514300(CDemonSet *this_ptr,int box_index);
int core_setdir_cpp_CDemonSet_findVdirBoxAtPosition_FUN_00514340(CDemonSet *param_1,CVector3f *param_2);
undefined4 * core_setdir_cpp_FUN_00514390(void);
undefined4 * core_setdir_cpp_FUN_005143a0(void);
undefined4 * core_setdir_cpp_FUN_005143b0(void);
void core_setdir_cpp_FUN_005143c0(void);
C3DSCamera * __cdecl core_setutil_cpp_C3DSCamera_ctor_FUN_005143e0(C3DSCamera *this_ptr);
C3DSCamera * __cdecl core_setutil_cpp_C3DSCamera_dtor_FUN_00514410(C3DSCamera *this_ptr,uint flags);
void core_setutil_cpp_FUN_00514430(int param_1);
void core_setutil_cpp_FUN_00514470(void *param_1);
void __cdecl core_setutil_cpp_C3DSCamera_load_FUN_005144e0(C3DSCamera *this_ptr,_FILE *file_handle);
void __cdecl core_setutil_cpp_C3DSCamera_loadPVS_FUN_00514800(C3DSCamera *this_ptr,_FILE *file_handle);
void __cdecl core_setutil_cpp_FUN_005148b0(C3DSCamera *this_ptr,CDemonCamera *camera);
int __cdecl core_setutil_cpp_C3DSCamera_testSphereInFrustum_FUN_00514980(C3DSCamera *this_ptr,CVector3f *world_position,float radius);
C3DSLight * __cdecl core_setutil_cpp_C3DSLight_ctor_FUN_00514a50(C3DSLight *this_ptr);
void __cdecl core_setutil_cpp_C3DSLight_load_FUN_00514a70(C3DSLight *this_ptr,_FILE *file_handle);
CDemonLight * __cdecl core_setutil_cpp_C3DSLight_create_FUN_005151f0(C3DSLight *this_ptr);
undefined4 core_setutil_cpp_C3DSLight_apply_FUN_00515350(int param_1,CDemonLight *param_2);
void __cdecl core_setutil_cpp_FUN_00515410(C3DSLight *this_ptr);
void __cdecl core_setutil_cpp_C3DSLight_process_FUN_00515420(C3DSLight *this_ptr,CDemonLight *light,int apply_filter_flag);
void __cdecl core_setutil_cpp_C3DSLight_advanceFilter_FUN_005155e0(C3DSLight *this_ptr,CDemonLight *light);
void __cdecl core_setutil_cpp_C3DSLight_setFilterFrame_FUN_00515670(C3DSLight *this_ptr,int frame_index,CDemonLight *light);
void __cdecl core_setutil_cpp_C3DSLight_addFilter_FUN_00515710(C3DSLight *this_ptr,char *filter_name,float duration,int filter_mode);
void __cdecl core_setutil_cpp_C3DSLight_reset_FUN_00515800(C3DSLight *this_ptr);
void __cdecl core_setutil_cpp_generateSphereVertex_FUN_00515890(int longitude_index,int latitude_index,int vertex_buffer_index,float radius);
int __cdecl core_setutil_cpp_calculateVertexIndex_FUN_00515980(int row_index,int column_index);
void __cdecl core_setutil_cpp_C3DSLight_renderVolumetricSphere_FUN_005159a0(C3DSLight *this_ptr);
int core_setutil_cpp_FUN_00515c40(int param_1);
void __cdecl core_shotgun_cpp_staticInit_FUN_00515cc0(void);
CShotgun * __cdecl core_shotgun_cpp_factoryFunc_FUN_00515cf0(void);
CDemonActorType * core_shotgun_cpp_CShotgun_getActorType_FUN_00515d10(void);
CShotgun * __cdecl core_shotgun_cpp_CShotgun_ctor_FUN_00515d20(CShotgun *this_ptr);
void __cdecl core_shotgun_cpp_CShotgun_process_FUN_00515db0(CShotgun *this_ptr,float delta_time);
undefined4 core_shotgun_cpp_FUN_00515ea0(CCharacter *param_1);
void core_shotgun_cpp_CShotgun_onFired_FUN_00516620(CDemonActor *param_1);
float __cdecl core_shotgun_cpp_CShotgun_getDamage_FUN_00516730(CShotgun *this_ptr);
void __cdecl core_shotgun_cpp_CShotgun_fireProjectile_FUN_00516770(CShotgun *this_ptr);
CShotgun * __cdecl core_shotgun_cpp_CShotgun_dtor_FUN_00516960(CShotgun *this_ptr,uint flags);
void __cdecl core_shovel_cpp_staticInit_FUN_005169b0(void);
CShovel * __cdecl core_shovel_cpp_factoryFunc_FUN_005169e0(void);
CDemonActorType * core_shovel_cpp_CShovel_getActorType_FUN_00516a00(void);
CShovel * __cdecl core_shovel_cpp_CShovel_ctor_FUN_00516a10(CShovel *this_ptr);
int __cdecl core_shovel_cpp_CShovel_fire_FUN_00516a90(CShovel *this_ptr);
float core_shovel_cpp_FUN_00516ab0(void);
void core_shovel_cpp_FUN_00516ae0(void);
CShovel * __cdecl core_shovel_cpp_CShovel_dtor_FUN_00516af0(CShovel *this_ptr,uint flags);
void __cdecl core_simbox_cpp_staticInit_FUN_00516b40(void);
CSimBox * __cdecl core_simbox_cpp_factoryFunc_FUN_00516b70(void);
CDemonActorType * core_simbox_cpp_CSimBox_getActorType_FUN_00516b90(void);
CSimBox * __cdecl core_simbox_cpp_CSimBox_ctor_FUN_00516ba0(CSimBox *this_ptr);
void core_simbox_cpp_CSimBox_setup_FUN_00516c60(CDemonActor *param_1);
void core_simbox_cpp_CSimBox_process_FUN_00516d80(int param_1,float param_2);
int core_simbox_cpp_CSimBox_renderOpaque_FUN_00516f50(CDemonActor *param_1);
float * core_simbox_cpp_CSimBox_getBoundingBox_FUN_00516fc0(int param_1,float *param_2);
void core_simbox_cpp_CSimBox_archive_FUN_00517010(CDemonActor *param_1);
undefined4 core_simbox_cpp_CSimBox_getCollisionType_FUN_005170c0(void);
CSimBox * __cdecl core_simbox_cpp_CSimBox_dtor_FUN_005170d0(CSimBox *this_ptr,uint flags);
void __cdecl core_skeleton_cpp_staticInit_FUN_00517140(void);
void core_skeleton_cpp_FUN_00517190(_FILE *param_1);
float __cdecl core_skeleton_cpp_distancePointToLineSegment_FUN_005171b0(CVector3f *line_start,CVector3f *line_end,CVector3f *test_point);
CSkeleton * __cdecl core_skeleton_cpp_CSkeleton_ctor_FUN_00517350(CSkeleton *this_ptr);
CSkeleton * __cdecl core_skeleton_cpp_CSkeleton_dtor_FUN_005173a0(CSkeleton *this_ptr,uint flags);
void __cdecl core_skeleton_cpp_CSkeleton_allocMemory_FUN_005173c0(CSkeleton *this_ptr,int bone_count,int frame_count);
void core_skeleton_cpp_FUN_005174e0(int param_1);
void __cdecl core_skeleton_cpp_CSkeleton_load_FUN_00517560(CSkeleton *this_ptr,char *filename);
void __cdecl core_skeleton_cpp_CSkeleton_loadStream_FUN_005175f0(CSkeleton *this_ptr,_FILE *file_handle);
int __cdecl core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton *this_ptr,char *bone_name,int assert_if_not_found);
CQuaternion4f * __cdecl core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_00517a60(CSkeleton *this_ptr,int bone_index,int frame_index);
CQuaternion4f * __stack5_esi core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_00517a80(CSkeleton *this_ptr,int bone_index,int frame_index_1,int frame_index_2,float interpolation,CQuaternion4f *result_out);
int __cdecl core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_00517b10(CSkeleton *this_ptr,int start_bone_index,int target_bone_index);
int __cdecl core_skeleton_cpp_CSkeleton_calculateFrameDataSize_FUN_00517b50(CSkeleton *this_ptr);
CDeformableModel * __cdecl core_skeleton_cpp_CDeformableModel_ctor_FUN_00517b70(CDeformableModel *this_ptr);
CDeformableModel * __cdecl core_skeleton_cpp_CDeformableModel_dtor_FUN_00517c80(CDeformableModel *this_ptr,uint flags);
void __cdecl core_skeleton_cpp_CDeformableModel_free_FUN_00517cc0(CDeformableModel *this_ptr);
void __cdecl core_skeleton_cpp_CDeformableModel_allocMemory_FUN_00517da0(CDeformableModel *this_ptr,int num_lods,int num_texture_sets,int num_textures,int num_parts);
void core_skeleton_cpp_CDeformableModel_allocLOD_FUN_00517ec0(CDeformableModel *param_1,int param_2,int param_3,int param_4,int param_5);
void __cdecl core_skeleton_cpp_CDeformableModel_captureTextures_FUN_005180a0(CDeformableModel *this_ptr);
CSkeleton * __cdecl core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_00518130(CDeformableModel *this_ptr);
CVector3f * __cdecl core_skeleton_cpp_CDeformableModel_getVertexPoolPtr_FUN_00518180(CDeformableModel *this_ptr,int index);
void __cdecl core_skeleton_cpp_CDeformableModel_skinVertices_FUN_005181a0(CDeformableModel *this_ptr,int lod_index,CMatrix3x4f *bone_matrices,int *output_buffer,SPartInstanceData *part_data);
CVector3f * __cdecl core_skeleton_cpp_CDeformableModel_skinSingleVertex_FUN_00518320(CDeformableModel *this_ptr,CVector3f *output_pos,int lod_index,int vertex_index,CMatrix3x4f *bone_matrices);
void __cdecl core_skeleton_cpp_CDeformableModel_rotateVertices_FUN_00518440(CDeformableModel *this_ptr,int lod_index,int *input_vertices);
void __cdecl core_skeleton_cpp_CDeformableModel_lightVertices_FUN_00518470(CDeformableModel *this_ptr,int lod_index,CVector3i *skinned_vertices);
void __cdecl core_skeleton_cpp_CDeformableModel_initVertexWRecip_FUN_005184b0(CDeformableModel *this_ptr,int lod_index,CVector3i *lod_vertices);
void __cdecl core_skeleton_cpp_CDeformableModel_renderParts_FUN_00518510(CDeformableModel *this_ptr,int lod_index,int *part_visibility_flags,int *texture_set_indices,int render_flags,int skip_texture_capture);
void __cdecl core_skeleton_cpp_CDeformableModel_renderWireframe_FUN_00518ec0(CDeformableModel *this_ptr,int lod_level);
void __cdecl core_skeleton_cpp_CDeformableModel_renderSkeleton_FUN_00518f60(CDeformableModel *this_ptr,int color,CMatrix3x4f *bone_matrices,int render_flags);
void __cdecl core_skeleton_cpp_CDeformableModel_renderBones_FUN_00519120(CDeformableModel *this_ptr,CMatrix3x4f *bone_matrices);
void __cdecl core_skeleton_cpp_CDeformableModel_load_FUN_005191f0(CDeformableModel *this_ptr,char *filename);
void __cdecl core_skeleton_cpp_CDeformableModel_loadStream_FUN_00519280(CDeformableModel *this_ptr,_FILE *file_handle);
void core_skeleton_cpp_CDeformableModel_bindSkeleton_FUN_00519ae0(CDeformableModel *param_1,CSkeleton *param_2);
SPart * __cdecl core_skeleton_cpp_CDeformableModel_getPartPtr_FUN_00519b10(CDeformableModel *this_ptr,int part_index);
int __cdecl core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30(CDeformableModel *this_ptr,char *part_name,int error_if_not_found);
int __cdecl core_skeleton_cpp_CDeformableModel_getBonePart_FUN_00519bc0(CDeformableModel *this_ptr,int bone_index);
int __cdecl core_skeleton_cpp_CDeformableModel_computeBoneDominantPart_FUN_00519be0(CDeformableModel *this_ptr,int bone_index);
void __cdecl core_skeleton_cpp_CDeformableModel_dismember_FUN_00519ec0(CDeformableModel *this_ptr,int lod_index,CBodyPart *body_part_ptr,int part_index,CVector3i *skinned_vertices,int texture_set_index);
float core_skeleton_cpp_CDeformableModel_exactRayTrace_FUN_0051a470(int param_1,int param_2,CVector3f *param_3,CVector3f *param_4,int *param_5,byte *param_6);
int __cdecl core_skeleton_cpp_CDeformableModel_selectLOD_FUN_0051a700(CDeformableModel *this_ptr,CBoundingBox3D *bounding_box);
void __cdecl core_skeleton_cpp_CDeformableModel_shatter_FUN_0051a780(CDeformableModel *this_ptr,CVector3f *center_position,CVector3f *orientation_vector,int lod_index,CVector3i *skinned_vertices,int *part_visibility_flags,int *texture_set_indices);
void __cdecl core_skeleton_cpp_CDeformableModel_computePartDominantBones_FUN_0051ad20(CDeformableModel *this_ptr);
void __cdecl core_skeleton_cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_0051b280(CDeformableModel *this_ptr);
void __cdecl core_skeleton_cpp_CDeformableModel_computeFarthestChildBones_FUN_0051b480(CDeformableModel *this_ptr);
int __cdecl core_skeleton_cpp_CDeformableModel_findMaxWeightBone_FUN_0051b540(CDeformableModel *this_ptr,int lod_level,int triangle_index);
int __cdecl core_skeleton_cpp_CDeformableModel_calculateMemorySize_FUN_0051b600(CDeformableModel *this_ptr);
undefined4 core_skeleton_cpp_FUN_0051b650(undefined4 param_1,undefined4 param_2,undefined4 param_3);
CDeformableModelInstance * __cdecl core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0051b660(CDeformableModelInstance *this_ptr);
CDeformableModelInstance * __cdecl core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0051b6e0(CDeformableModelInstance *this_ptr,uint flags);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_allocPointList_FUN_0051b750(CDeformableModelInstance *this_ptr);
void core_skeleton_cpp_FUN_0051b7d0(int param_1);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800(CDeformableModelInstance *this_ptr);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880(CDeformableModelInstance *this_ptr);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(CDeformableModelInstance *this_ptr);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0051b8f0(CDeformableModelInstance *this_ptr,int motion_index,float frame_number);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_0051b920(CDeformableModelInstance *this_ptr,int motion_index,float frame_number,int bone_index);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0(CDeformableModelInstance *this_ptr,int target_motion_index,float target_frame_number ,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *callback_func);
template<typename T_func0>
inline void core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0(CDeformableModelInstance *this_ptr,int target_motion_index,float target_frame_number,float blend_weight,int bone_index,T_func0 callback_func) {
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0(this_ptr, target_motion_index, target_frame_number, blend_weight, bone_index, (CDeformableModel_MotionBlendWeightFunc *)callback_func);
}
void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendWithPoseData_FUN_0051cab0(CDeformableModelInstance *this_ptr,SPoseData *pose_data,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback);
template<typename T_func0>
inline void core_skeleton_cpp_CDeformableModelInstance_blendWithPoseData_FUN_0051cab0(CDeformableModelInstance *this_ptr,SPoseData *pose_data,float blend_weight,int bone_index,T_func0 blend_callback) {
    core_skeleton_cpp_CDeformableModelInstance_blendWithPoseData_FUN_0051cab0(this_ptr, pose_data, blend_weight, bone_index, (CDeformableModel_MotionBlendWeightFunc *)blend_callback);
}
void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0051cae0(CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,CVector3f *source_position,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback);
template<typename T_func0>
inline void core_skeleton_cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0051cae0(CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,CVector3f *source_position,float blend_weight,int bone_index,T_func0 blend_callback) {
    core_skeleton_cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0051cae0(this_ptr, source_quaternions, source_position, blend_weight, bone_index, (CDeformableModel_MotionBlendWeightFunc *)blend_callback);
}
void __cdecl core_skeleton_cpp_CDeformableModelInstance_copyBoneRotations_FUN_0051cf60(CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,int bone_index);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0(CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback);
template<typename T_func0>
inline void core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0(CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,float blend_weight,int bone_index,T_func0 blend_callback) {
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0(this_ptr, source_quaternions, blend_weight, bone_index, (CDeformableModel_MotionBlendWeightFunc *)blend_callback);
}
void core_skeleton_cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0051d0a0(CDeformableModelInstance *param_1,int param_2);
CVector3f * __cdecl core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0(CDeformableModelInstance *this_ptr,CVector3f *out_position,int bone_index);
CVector3f * __cdecl core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380(CDeformableModelInstance *this_ptr,CVector3f *out_position,int bone_index);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0(CDeformableModelInstance *this_ptr);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_offsetAllBonePositions_FUN_0051d5e0(CDeformableModelInstance *this_ptr,CVector3f *offset_vector);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_aimBoneAtTarget_FUN_0051d650(CDeformableModelInstance *this_ptr,CVector3f *target_position,float blend_weight,int bone_index,CQuaternion4f *base_orientation,CDeformableModel_MotionBlendWeightFunc *blend_callback);
template<typename T_func0>
inline void core_skeleton_cpp_CDeformableModelInstance_aimBoneAtTarget_FUN_0051d650(CDeformableModelInstance *this_ptr,CVector3f *target_position,float blend_weight,int bone_index,CQuaternion4f *base_orientation,T_func0 blend_callback) {
    core_skeleton_cpp_CDeformableModelInstance_aimBoneAtTarget_FUN_0051d650(this_ptr, target_position, blend_weight, bone_index, base_orientation, (CDeformableModel_MotionBlendWeightFunc *)blend_callback);
}
void __cdecl core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0(CDeformableModelInstance *this_ptr,CQuaternion4f *rotation_quat,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback);
template<typename T_func0>
inline void core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0(CDeformableModelInstance *this_ptr,CQuaternion4f *rotation_quat,float blend_weight,int bone_index,T_func0 blend_callback) {
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0(this_ptr, rotation_quat, blend_weight, bone_index, (CDeformableModel_MotionBlendWeightFunc *)blend_callback);
}
void __cdecl core_skeleton_cpp_CDeformableModelInstance_scalePoseDataForHierarchy_FUN_0051d970(CDeformableModelInstance *this_ptr,float scale_factor,int target_bone_index);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0(CDeformableModelInstance *this_ptr,int lod_index,uint render_flags,int lighting_mode ,int render_pass);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50(CDeformableModelInstance *this_ptr,int lod_index);
CVector3f * __cdecl core_skeleton_cpp_CDeformableModelInstance_skinSingleVertex_FUN_0051da90(CDeformableModelInstance *this_ptr,CVector3f *output_pos,int lod_index,int vertex_index);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_0051dad0(CDeformableModelInstance *this_ptr,int lod_index);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_skinAndLightVertices_FUN_0051db20(CDeformableModelInstance *this_ptr,int lod_index);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_skinAndInitWRecip_FUN_0051db70(CDeformableModelInstance *this_ptr,int lod_index);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_renderPolygons_FUN_0051dbc0(CDeformableModelInstance *this_ptr,int render_flags,int skip_texture_capture);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_outlinePolygons_FUN_0051dc30(CDeformableModelInstance *this_ptr);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_showAllParts_FUN_0051dc90(CDeformableModelInstance *this_ptr);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_0051dcb0(CDeformableModelInstance *this_ptr);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(CDeformableModelInstance *this_ptr);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_initializeFromModel_FUN_0051dd00(CDeformableModelInstance *this_ptr,CDeformableModel *model_ptr);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromVertices_FUN_0051de60(CDeformableModelInstance *this_ptr);
CDeformableModel * __cdecl core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(CDeformableModelInstance *this_ptr);
CSkeleton * __cdecl core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(CDeformableModelInstance *this_ptr);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(CDeformableModelInstance *this_ptr,char *model_name);
int __cdecl core_skeleton_cpp_CDeformableModelInstance_findPatchToFrame_FUN_0051e120(CDeformableModelInstance *this_ptr,int source_motion_index,float source_frame,int target_motion_index);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_computeBoneTransformsForFrame_FUN_0051e350(CDeformableModelInstance *this_ptr,int motion_index,float animation_time,SPose *output_bone_data);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_accumulateScaledRootMotion_FUN_0051e510(CDeformableModelInstance *this_ptr,float start_frame,float end_frame,float scale_factor);
CVector3f * __cdecl core_skeleton_cpp_CDeformableModelInstance_getRootMotionDelta_FUN_0051e590(CDeformableModelInstance *this_ptr,CVector3f *output_buffer,float start_frame,float end_frame);
CDeformableModelInstance * __cdecl core_skeleton_cpp_getRootMotionDeltaForMotion_FUN_0051e7d0(CMotionController *motion_controller,CDeformableModelInstance *deformable_model,int motion_index,float start_frame,float end_frame);
CBodyPart * __cdecl core_skeleton_cpp_CDeformableModelInstance_spawnDismemberedBodyPart_FUN_0051e860(CDeformableModelInstance *this_ptr,int part_index,CVector3f *position,UOrientationVector *orientation,CVector3f *initial_velocity,CDemonActor *scale_source);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_dismemberPart_FUN_0051e8c0(CDeformableModelInstance *this_ptr,CBodyPart *body_part,int part_index);
float __cdecl core_skeleton_cpp_CDeformableModelInstance_rayIntersect_FUN_0051e960(CDeformableModelInstance *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction);
int __cdecl core_skeleton_cpp_CDeformableModelInstance_findClosestBone_FUN_0051e9e0(CDeformableModelInstance *this_ptr,CVector3f *point);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_shatter_FUN_0051ed30(CDeformableModelInstance *this_ptr,CVector3f *center_position,CVector3f *orientation_vector,int desired_lod_index);
SPose * __cdecl core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_0051ed90(CDeformableModelInstance *this_ptr,SPose *bone_transform);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_0051ee60(CDeformableModelInstance *this_ptr,SPose *bone_transform);
CBoundingBox3D * __cdecl core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0051ef40(CDeformableModelInstance *this_ptr,CBoundingBox3D *output_bbox);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_renderSkeleton_FUN_0051f030(CDeformableModelInstance *this_ptr,int color,int render_flags);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_renderBones_FUN_0051f060(CDeformableModelInstance *this_ptr);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_0051f080(CDeformableModelInstance *this_ptr,int u_offset,int v_offset);
void __cdecl core_skeleton_cpp_computeBoneWorldMatrices_FUN_0051f1d0(SPose *bone_data,CDeformableModelInstance *instance_ptr);
void __cdecl core_skeleton_cpp_blendBoneTransformData_FUN_0051f3f0(SPose *result_pose,SPose *bone_data_out,SPose *bone_data_in,float blend_weight,CDeformableModelInstance *instance_ptr);
CDeformableModel * __cdecl core_skeleton_cpp_getDeformableModel_FUN_0051f570(char *model_filename);
void __cdecl core_skeleton_cpp_FUN_0051f650(void);
CSkeleton * __cdecl core_skeleton_cpp_FUN_0051f680(char *filename);
void __cdecl core_skeleton_cpp_freeAllSkeletons_FUN_0051f730(void);
void __cdecl core_skeleton_cpp_FUN_0051f760(char *output_buffer);
float core_skeleton_cpp_FUN_0051f800(void);
SVert * __cdecl core_skeleton_cpp_SVert_ctor_FUN_0051f840(SVert *this_ptr);
SVert * __cdecl core_skeleton_cpp_SVert_dtor_FUN_0051f860(SVert *this_ptr,uint flags);
CSkeleton * __cdecl core_skeleton_cpp_CSkeleton_arrdtor_FUN_0051f880(CSkeleton *this_ptr,uint flags);
CDeformableModel * __cdecl core_skeleton_cpp_CDeformableModel_arrdtor_FUN_0051f8a0(CDeformableModel *this_ptr,uint flags);
CBoundingBox3D * __cdecl core_skeleton_cpp_FUN_0051f900(CBoundingBox3D *objs,uint flags);
void __cdecl core_slew_cpp_staticInit_FUN_0051f920(void);
undefined8 core_slew_cpp_FUN_0051f930(undefined4 *param_1);
void __cdecl core_slew_cpp_CSlew_processInput_FUN_0051f980(CSlew *this_ptr);
void __cdecl core_smiley_cpp_staticInit_FUN_0051fc90(void);
CSmiley * __cdecl core_smiley_cpp_factoryFunc_FUN_0051fcc0(void);
CDemonActorType * core_smiley_cpp_CSmiley_getActorType_FUN_0051fce0(void);
CSmiley * __cdecl core_smiley_cpp_CSmiley_ctor_FUN_0051fcf0(CSmiley *this_ptr);
void core_smiley_cpp_CSmiley_setup_FUN_0051fd90(CEnemy *param_1);

