#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "types/classes/CBodyPart.h"
#include "types/classes/CBoundingBox3D.h"
#include "types/classes/CDeformableModel.h"
#include "types/classes/CDeformableModelInstance.h"
#include "types/classes/CLodVert.h"
#include "types/classes/CMatrix3x4f.h"
#include "types/classes/CQuaternion4f.h"
#include "types/classes/CSkeleton.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"
#include "types/funcdefs/CDeformableModel_MotionBlendWeightFunc.h"
#include "types/structs/SPart.h"
#include "types/structs/SPoseData.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x590000
// =============================================================================

undefined __unknown core_skeledit_cpp_FUN_00592520();
undefined __unknown core_skeledit_cpp_FUN_005925c0();
undefined __unknown core_skeledit_cpp_FUN_00592690();
undefined __unknown core_skeledit_cpp_FUN_00595f30();
void __cdecl core_skeledit_cpp_CDeformableModel_exportModelToS3D_FUN_00595fc0(CDeformableModel * this_ptr, char * output_filename, int lod_level, CMatrix3x4f * bone_matrices);
undefined __unknown core_skeledit_cpp_FUN_00596860();
void __cdecl core_skeledit_cpp_CDeformableModelInstance_viewModel_FUN_005968b0(CDeformableModelInstance * this_ptr);
void __cdecl core_skeledit_cpp_CDeformableModelInstance_exportModelToS3D_FUN_00598ee0(CDeformableModelInstance * this_ptr, char * filename);
void __cdecl core_skeledit_cpp_FUN_00598f10(void);
undefined __unknown core_skeledit_cpp_viewModel_FUN_00598fc0();
undefined __unknown core_skeledit_cpp_FUN_00599480();
CLodVert * __cdecl core_skeledit_cpp_LodVert_copy_FUN_00599550(void * n1, void * n2, CLodVert * other2, CLodVert * other3);
CLodVert * __cdecl core_skeledit_cpp_LodVert_dtor_FUN_005995c0(CLodVert * this_ptr, CLodVert * other, CLodVert * other2);
undefined __unknown core_skeledit_cpp_FUN_005995d0();
undefined __unknown core_skeledit_cpp_FUN_00599630();
undefined __unknown core_skeledit_cpp_FUN_00599650();
void __cdecl core_skeleton_cpp_staticInit_FUN_00599670(void);
void __cdecl core_skeleton_cpp_skipToEndOfLine_FUN_005996c0(FILE * file_ptr);
float __cdecl core_skeleton_cpp_distancePointToLineSegment_FUN_005996e0(CVector3f * line_start, CVector3f * line_end, CVector3f * test_point);
CSkeleton * __cdecl core_skeleton_cpp_CSkeleton_ctor_FUN_00599880(CSkeleton * this_ptr);
CSkeleton * __cdecl core_skeleton_cpp_CSkeleton_dtor_FUN_005998e0(CSkeleton * this_ptr);
void __cdecl core_skeleton_cpp_CSkeleton_allocMemory_FUN_00599910(CSkeleton * this_ptr, int bone_count, int frame_count);
void __cdecl core_skeleton_cpp_CSkeleton_free_FUN_00599a50(CSkeleton * this_ptr);
void __cdecl core_skeleton_cpp_CSkeleton_load_FUN_00599b10(CSkeleton * this_ptr, char * filename);
void __cdecl core_skeleton_cpp_CSkeleton_loadStream_FUN_00599bb0(CSkeleton * this_ptr, FILE * file_handle);
int __cdecl core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name);
CQuaternion4f * __cdecl core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_0059a050(CSkeleton * this_ptr, int bone_index, int frame_index);
CQuaternion4f * __cdecl core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070(CSkeleton * this_ptr, int bone_index, int frame_index_1, int frame_index_2, float interpolation);
int __cdecl core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100(CSkeleton * this_ptr, int start_bone_index, int target_bone_index);
int __cdecl core_skeleton_cpp_CSkeleton_calculateFrameDataSize_FUN_0059a140(CSkeleton * this_ptr);
CDeformableModel * __cdecl core_skeleton_cpp_CDeformableModel_ctor_FUN_0059a160(CDeformableModel * this_ptr);
CDeformableModel * __cdecl core_skeleton_cpp_CDeformableModel_dtor_FUN_0059a270(CDeformableModel * this_ptr);
void __cdecl core_skeleton_cpp_CDeformableModel_free_FUN_0059a2b0(CDeformableModel * this_ptr);
void __cdecl core_skeleton_cpp_CDeformableModel_allocMemory_FUN_0059a3f0(CDeformableModel * this_ptr, int num_lods, int num_texture_sets, int num_textures, int num_parts);
void __cdecl core_skeleton_cpp_CDeformableModel_allocLOD_FUN_0059a510(CDeformableModel * this_ptr, int lod_index, int vertex_count, int tri_count, int cap_tri_count);
void __cdecl core_skeleton_cpp_CDeformableModel_setModelName_FUN_0059a740(CDeformableModel * this_ptr, char * model_name);
void __cdecl core_skeleton_cpp_CDeformableModel_captureTextures_FUN_0059a780(CDeformableModel * this_ptr);
CSkeleton * __cdecl core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(CDeformableModel * this_ptr);
CVector3f * __cdecl core_skeleton_cpp_CDeformableModel_getVertexPoolPtr_FUN_0059a860(CDeformableModel * this_ptr, int index);
void __cdecl core_skeleton_cpp_CDeformableModel_skinVertices_FUN_0059a880(CDeformableModel * this_ptr, int lod_index, CMatrix3x4f * bone_matrices, int * output_buffer);
CVector3f * __cdecl core_skeleton_cpp_CDeformableModel_skinSingleVertex_FUN_0059aa00(CDeformableModel * this_ptr, CVector3f * output_pos, int lod_index, int vertex_index, CMatrix3x4f * bone_matrices);
void __cdecl core_skeleton_cpp_CDeformableModel_rotateVertices_FUN_0059ab20(CDeformableModel * this_ptr, int lod_index, int * input_vertices);
void __cdecl core_skeleton_cpp_CDeformableModel_lightVertices_FUN_0059ab50(CDeformableModel * this_ptr, int lod_index, int render_flags);
void __cdecl core_skeleton_cpp_CDeformableModel_initVertexWRecip_FUN_0059ab90(CDeformableModel * this_ptr, int lod_index);
void __cdecl core_skeleton_cpp_CDeformableModel_renderParts_FUN_0059abf0(CDeformableModel * this_ptr, int lod_index, byte * part_visibility_flags, int * texture_set_indices, int render_flags, int special_render_mode);
void __cdecl core_skeleton_cpp_CDeformableModel_renderWireframe_FUN_0059b5a0(CDeformableModel * this_ptr, int lod_level);
void __cdecl core_skeleton_cpp_CDeformableModel_renderSkeleton_FUN_0059b640(CDeformableModel * this_ptr, int color, CMatrix3x4f * bone_matrices, int render_flags);
void __cdecl core_skeleton_cpp_CDeformableModel_renderBones_FUN_0059b800(CDeformableModel * this_ptr, CMatrix3x4f * bone_matrices);
void __cdecl core_skeleton_cpp_CDeformableModel_load_FUN_0059b8d0(CDeformableModel * this_ptr, char * filename);
void __cdecl core_skeleton_cpp_CDeformableModel_loadStream_FUN_0059b970(CDeformableModel * this_ptr, FILE * file_handle);
void __cdecl core_skeleton_cpp_CDeformableModel_bindSkeleton_FUN_0059c1f0(CDeformableModel * this_ptr, CSkeleton * skeleton_ptr);
SPart * __cdecl core_skeleton_cpp_CDeformableModel_getPartPtr_FUN_0059c220(CDeformableModel * this_ptr, int part_index);
int __cdecl core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found);
int __cdecl core_skeleton_cpp_CDeformableModel_getBonePart_FUN_0059c2d0(CDeformableModel * this_ptr, int bone_index);
int __cdecl core_skeleton_cpp_CDeformableModel_computeBoneDominantPart_FUN_0059c2f0(CDeformableModel * this_ptr, int bone_index, CVector3f * reference_position);
void __cdecl core_skeleton_cpp_CDeformableModel_dismember_FUN_0059c5e0(CDeformableModel * this_ptr, int lod_index, CBodyPart * body_part_ptr, int part_index, int num_parts_to_dismember, int texture_set_index, CVector3i * skinned_vertices);
float __cdecl core_skeleton_cpp_CDeformableModel_exactRayTrace_FUN_0059cba0(CDeformableModel * this_ptr, int lod_index, CVector3f * ray_origin, CVector3f * ray_direction, CVector3i * skinned_vertices, byte * part_visibility_flags);
int __cdecl core_skeleton_cpp_CDeformableModel_selectLOD_FUN_0059ce40(CDeformableModel * this_ptr, CBoundingBox3D * bounding_box);
void __cdecl core_skeleton_cpp_CDeformableModel_shatter_FUN_0059cec0(CDeformableModel * this_ptr, CVector3f * center_position, CVector3f * orientation_vector, int lod_index, CVector3i * skinned_vertices, int * part_visibility_flags, int * texture_set_indices, int particle_lifetime);
int __cdecl core_skeleton_cpp_CDeformableModel_computePartDominantBones_FUN_0059d460(CDeformableModel * this_ptr);
void __cdecl core_skeleton_cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_0059d9e0(CDeformableModel * this_ptr);
void __cdecl core_skeleton_cpp_CDeformableModel_computeFarthestChildBones_FUN_0059dbe0(CDeformableModel * this_ptr);
int __cdecl core_skeleton_cpp_CDeformableModel_findMinWeightBone_FUN_0059dca0(CDeformableModel * this_ptr, int lod_level, int triangle_index);
int __cdecl core_skeleton_cpp_CDeformableModel_calculateMemorySize_FUN_0059dd60(CDeformableModel * this_ptr);
float __cdecl core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0(int current_bone_index, int target_bone_index, float blend_weight, int hierarchy_distance, CDeformableModelInstance * instance);
CDeformableModelInstance * __cdecl core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0059ddc0(CDeformableModelInstance * this_ptr);
CDeformableModelInstance * __cdecl core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40(CDeformableModelInstance * this_ptr, uint d1, uint d2, uint d3, uint d4);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_allocPointList_FUN_0059deb0(CDeformableModelInstance * this_ptr);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_free_FUN_0059df40(CDeformableModelInstance * this_ptr);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(CDeformableModelInstance * this_ptr);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(CDeformableModelInstance * this_ptr);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(CDeformableModelInstance * this_ptr);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0059e070(CDeformableModelInstance * this_ptr, int motion_index, float frame_number);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0(CDeformableModelInstance * this_ptr, int motion_index, float frame_number, int bone_index);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50(CDeformableModelInstance * this_ptr, int target_motion_index, float target_frame_number, float blend_weight, int bone_index, CDeformableModel_MotionBlendWeightFunc * callback_func);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendWithPoseData_FUN_0059f230(CDeformableModelInstance * this_ptr, SPoseData * pose_data, float blend_weight, int bone_index, CDeformableModel_MotionBlendWeightFunc * blend_callback);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0059f260(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, CVector3f * source_position, float blend_weight, int bone_index, CDeformableModel_MotionBlendWeightFunc * blend_callback);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_copyBoneRotations_FUN_0059f6e0(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, int bone_index);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, float blend_weight, int bone_index, CDeformableModel_MotionBlendWeightFunc * blend_callback);
CMatrix3x4f * __stack2_esi core_skeleton_cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820(CDeformableModelInstance * this_ptr, int bone_index, CMatrix3x4f * out_matrix);
CVector3f * __cdecl core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index);
CVector3f * __cdecl core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(CDeformableModelInstance * this_ptr);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_offsetAllBonePositions_FUN_0059fd60(CDeformableModelInstance * this_ptr, CVector3f * offset_vector);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_aimBoneAtTarget_FUN_0059fdd0(CDeformableModelInstance * this_ptr, CVector3f * target_position, float blend_weight, int bone_index, CDeformableModel_MotionBlendWeightFunc * blend_callback);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, CDeformableModel_MotionBlendWeightFunc * blend_callback);

