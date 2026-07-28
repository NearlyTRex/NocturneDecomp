#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "types/classes/CBoundingBox3D.h"
#include "types/classes/CCharacter.h"
#include "types/classes/CDeformableModel.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDemonGlobe.h"
#include "types/classes/CDemonLight.h"
#include "types/classes/CDemonSet.h"
#include "types/classes/CEnemy.h"
#include "types/classes/CMatrix3x3f.h"
#include "types/classes/CScript.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"
#include "types/structs/SCollisionInfo.h"
#include "types/structs/SDamageInfo.h"
#include "types/structs/SInputFace.h"
#include "types/structs/SMRGLHeaderPrimitive.h"
#include "types/structs/SMRGLPrimitiveQuad.h"
#include "types/unions/UOrientationVector.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x500000
// =============================================================================

float core_script_cpp_CScript_getDialogDuration_FUN_005049b0(void *param_1,char *param_2,char *param_3,char *param_4);
int __cdecl core_script_cpp_CScript_processTimer_FUN_00504b70(CScript *this_ptr,float delta_time,float *timer_value);
void __cdecl core_script_cpp_CScript_setSpeaker_FUN_00504bf0(CScript *this_ptr,CDemonActor *actor);
int __cdecl core_script_cpp_CScript_findLabelIndex_FUN_00504c10(CScript *this_ptr,char *label_name);
int core_script_cpp_CScript_skipCommands_FUN_00504c70(int param_1,int param_2,int param_3);
void core_script_cpp_FUN_00504d60(CScript *param_1);
undefined4 core_script_cpp_FUN_00504d90(CScript *param_1);
void __cdecl core_script_cpp_CScript_dbLoad_FUN_00504e70(CScript *this_ptr,char *filename);
int __cdecl core_script_cpp_CScript_findDialogEntry_FUN_00505180(CScript *this_ptr,char *path);
void __cdecl core_script_cpp_readActorReference_FUN_00505200(_FILE *file_handle,CDemonActor *actor_out);
void __cdecl core_script_cpp_writeActorReference_FUN_00505280(_FILE *file_handle,CDemonActor **actor);
void __cdecl core_script_cpp_CScript_loadState_FUN_005052c0(CScript *this_ptr,_FILE *file_handle);
void core_script_cpp_FUN_005055f0(CScript *param_1,_FILE *param_2);
uint __cdecl core_script_cpp_CScript_computeChecksum_FUN_00505820(CScript *this_ptr);
CVector3f * __cdecl core_script_cpp_makeVector_FUN_00505880(CVector3f *out,float x,float y,float z);
char * __cdecl core_script_cpp_getDeformableModelFilename_FUN_005058b0(CDeformableModel *model_ptr);
void __cdecl core_sentinel_cpp_staticInit_FUN_005058c0(void);
void core_sentinel_cpp_FUN_005058f0(void);
CDemonActorType * core_sentinel_cpp_FUN_00505910(void);
CEnemy * core_sentinel_cpp_FUN_00505920(CEnemy *param_1);
void core_sentinel_cpp_CSentinel_setup_FUN_00505990(CEnemy *param_1);
void core_sentinel_cpp_CSentinel_process_FUN_00505ba0(CEnemy *param_1,float param_2);
undefined4 core_sentinel_cpp_CSentinel_attractActorToward_FUN_005066e0(CDemonActor *param_1,int param_2);
void core_sentinel_cpp_CSentinel_archive_FUN_005067e0(CEnemy *param_1);
void core_sentinel_cpp_CSentinel_processDamage_FUN_00506840(CEnemy *param_1,SDamageInfo *param_2);
undefined4 core_sentinel_cpp_CSentinel_getTargetPoints_FUN_00506940(int param_1,CVector3f *param_2);
void core_sentinel_cpp_FUN_00506a60(CCharacter *param_1,SCollisionInfo *param_2);
CDemonActor * core_sentinel_cpp_FUN_00506a80(CDemonActor *param_1,byte param_2);
void __cdecl core_set_cpp_staticInit_FUN_00506b40(void);
CDemonSet * __cdecl core_set_cpp_CDemonSet_ctor_FUN_00506bc0(CDemonSet *this_ptr);
int core_set_cpp_CDemonSet_dtor_FUN_00506e50(CDemonSet *param_1);
void __cdecl core_set_cpp_CDemonSet_clear_FUN_00506ec0(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_load_FUN_00506f10(CDemonSet *this_ptr,char *filename);
void __cdecl core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00507c80(CDemonSet *this_ptr,float frustum_param,int render_mode);
void core_set_cpp_CDemonSet_precomputeLightVisibility_FUN_00507f80(CDemonSet *param_1,int param_2);
void core_set_cpp_CDemonSet_initScene_FUN_005084c0(CDemonSet *param_1);
void __cdecl core_set_cpp_CDemonSet_renderBackgroundActors_FUN_00508750(CDemonSet *this_ptr,int layer_flag);
void core_set_cpp_CDemonSet_snapshotActorTransformState_FUN_00508890(undefined4 param_1,int param_2);
void __cdecl core_set_cpp_CDemonSet_setCameraView_FUN_005088f0(CDemonSet *this_ptr,int index);
int __cdecl core_set_cpp_CDemonSet_findCameraByName_FUN_005090a0(CDemonSet *this_ptr,char *name);
void core_set_cpp_FUN_005090f0(CDemonSet *param_1,undefined4 param_2,undefined4 param_3,int param_4);
void __cdecl core_set_cpp_CDemonSet_processActors_FUN_00509140(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_renderStaticLights_FUN_00509760(CDemonSet *this_ptr);
void core_set_cpp_FUN_00509a80(CDemonSet *param_1,int param_2);
void core_set_cpp_FUN_0050a260(CDemonSet *param_1);
void __cdecl core_set_cpp_CDemonSet_renderOpaqueActors_FUN_0050a640(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_renderTransparentActors_FUN_0050a7e0(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_addDynamicLight_FUN_0050a970(CDemonSet *this_ptr,CDemonLight *light);
void __cdecl core_set_cpp_CDemonSet_addCoronaGlobe_FUN_0050a9f0(CDemonSet *this_ptr,CDemonGlobe *globe);
void __cdecl core_set_cpp_CDemonSet_addQueuedCoronaGlobe_FUN_0050aa20(CDemonSet *this_ptr,CDemonGlobe *globe);
void core_set_cpp_FUN_0050aa70(void);
int core_set_cpp_FUN_0050aba0(CDemonSet *param_1);
void core_set_cpp_FUN_0050ad20(int param_1);
void __cdecl core_set_cpp_CDemonSet_setLightingParameters_FUN_0050adc0(CDemonSet *this_ptr,CVector3f *position,UOrientationVector *orientation,CVector3f *aabb_min,CVector3f *aabb_max,CMatrix3x3f *rotation_matrix);
int __cdecl core_set_cpp_CDemonSet_gatherVisibleLights_FUN_0050aee0(CDemonSet *this_ptr,CVector3f *position,CVector3f *orientation,CVector3f *aabb_min,CVector3f *aabb_max,CMatrix3x3f *rotation_matrix);
int core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_0050b5c0(CDemonSet *param_1,undefined4 param_2,int param_3);
void core_set_cpp_CDemonSet_lightVertexColor_FUN_0050b7f0(int param_1,undefined4 param_2,int *param_3,int param_4,int param_5);
void __cdecl core_set_cpp_CDemonSet_computeLighting_FUN_0050bb50(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal,int start_vertex_index,int vertex_count);
void core_set_cpp_computeTriangleNormal_FUN_0050bbc0(int param_1,int param_2);
void core_set_cpp_computeTriangleNormalIndexed_FUN_0050bcf0(int param_1,ushort *param_2,float *param_3);
void __cdecl core_set_cpp_CDemonSet_computeVertexOmniLighting_FUN_0050be20(CDemonSet *this_ptr,CVector3f *vertex_position,CVector3f *position_offset,int vertex_index);
void __cdecl core_set_cpp_CDemonSet_pushScreenBoundsToCamera_FUN_0050c010(CDemonSet *this_ptr,int vertex_count);
void core_set_cpp_CDemonSet_rotateVerticies_FUN_0050c200(CDemonSet *param_1,int param_2,CVector3i *param_3);
void __cdecl core_set_cpp_CDemonSet_lightVerticies_FUN_0050c2d0(CDemonSet *this_ptr,int vertex_count,int tri_count,void *face_data,CVector3i *vertex_positions,int vertices_per_face,CVector3i *vertex_normals);
void __cdecl core_set_cpp_CDemonSet_process_FUN_0050d040(CDemonSet *this_ptr);
float __cdecl core_set_cpp_CDemonSet_getReverbPresetAtPosition_FUN_0050d1c0(CDemonSet *this_ptr,CVector3f *position);
void __cdecl core_set_cpp_CDemonSet_loadAssets_FUN_0050d280(CDemonSet *this_ptr);
undefined4 core_set_cpp_qsortByDisplayListEntry_FUN_0050d2a0(int param_1,int param_2);
void __cdecl core_set_cpp_CDemonSet_buildDisplayList_FUN_0050d2d0(CDemonSet *this_ptr,uint dirty_flags_mask);
void __cdecl core_set_cpp_CDemonSet_renderEnvMapBatchTri_FUN_0050d640(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prims,int count,int alpha);
void __cdecl core_set_cpp_CDemonSet_renderEnvMapBatchQuad_FUN_0050d670(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prims,int count,int alpha);
void __cdecl core_set_cpp_CDemonSet_renderEnvMapPrimitives_FUN_0050d6a0(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prims,int count,int alpha,int stride);
void core_set_cpp_FUN_0050d910(int param_1,ushort *param_2,int param_3,int param_4);
void core_set_cpp_FUN_0050dd60(void);
void core_set_cpp_FUN_0050ddd0(CDemonSet *param_1,SMRGLPrimitiveQuad *param_2,int param_3,int param_4);
void __cdecl core_set_cpp_CDemonSet_renderFaceListOrEnvMap_FUN_0050ded0(CDemonSet *this_ptr,SInputFace *faces,int count,int flags);
void __cdecl core_set_cpp_CDemonSet_renderPrimitiveList_FUN_0050df40(CDemonSet *this_ptr,SMRGLHeaderPrimitive *primitive_array,int primitive_count);
void __cdecl core_set_cpp_CDemonSet_renderTexturedPrimitiveListVariant_FUN_0050dfe0(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prim,int count);
void core_set_cpp_FUN_0050e080(int param_1,int param_2);
void core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190(int param_1);
void __cdecl core_set_cpp_CDemonSet_buildMirrorList_FUN_0050e210(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_markMirrorCameraDirty_FUN_0050e300(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_restoreCameraView_FUN_0050e310(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_setFlatColor_FUN_0050e340(CDemonSet *this_ptr,int light_scale,int color_scale,int fog_scale);
void core_set_cpp_FUN_0050e370(int param_1,float *param_2);
void __cdecl core_set_cpp_CDemonSet_setGamma_FUN_0050e400(CDemonSet *this_ptr,int gamma);
int __cdecl core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_0050e490(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prim);
void __cdecl core_set_cpp_CDemonSet_setCameraAmbientValue_FUN_0050e4c0(CDemonSet *this_ptr,int index,float value);
void __cdecl core_set_cpp_CDemonSet_setCameraAmbientValueByGroup_FUN_0050e510(CDemonSet *this_ptr,int group_id,float value);
void core_set_cpp_FUN_0050e550(int param_1,int param_2,undefined4 param_3);
void __cdecl core_set_cpp_CDemonSet_setCameraEnabledByGroup_FUN_0050e580(CDemonSet *this_ptr,int group_id,int enabled);
void core_set_cpp_CDemonSet_addLightFilter_FUN_0050e5d0(int param_1,char *param_2,undefined4 *param_3,undefined4 *param_4);
void core_set_cpp_FUN_0050e660(undefined4 param_1,float param_2,float param_3,float param_4,float param_5);
void __cdecl core_set_cpp_CDemonSet_buildActorTypeLists_FUN_0050e6b0(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_loadMasterLightStates_FUN_0050e820(CDemonSet *this_ptr,int *light_state_buffer);
int __cdecl core_set_cpp_CDemonSet_saveMasterLightStates_FUN_0050e860(CDemonSet *this_ptr,int *light_state_buffer);
void __cdecl core_set_cpp_CDemonSet_saveStateInfo_FUN_0050e8a0(CDemonSet *this_ptr,_FILE *file_handle);
void __cdecl core_set_cpp_CDemonSet_loadStateInfo_FUN_0050e920(CDemonSet *this_ptr,_FILE *file_handle);
undefined4 core_set_cpp_CVector3f_equals_FUN_0050ea10(void);
undefined4 core_set_cpp_FUN_0050ea40(undefined4 param_1);
undefined4 core_set_cpp_FUN_0050ea50(undefined4 param_1);
undefined4 core_set_cpp_FUN_0050ea60(undefined4 param_1);
undefined4 core_set_cpp_FUN_0050ea70(undefined4 param_1);
undefined4 core_set_cpp_FUN_0050ea80(undefined4 param_1);
void core_set_cpp_CVector3f_copy_FUN_0050ea90(void);
void core_set_cpp_CVector3f_arrdtor_FUN_0050eae0(void);
void core_set_cpp_FUN_0050eb00(void *param_1);
void core_set_cpp_FUN_0050eb20(void *param_1);
void core_set_cpp_FUN_0050eb40(void *param_1);
void core_set_cpp_FUN_0050eb60(void *param_1);
void __cdecl core_setcolid_cpp_staticInit_FUN_0050eb80(void);
uint core_setcolid_cpp_rayTestQuadFloor_FUN_0050eba0(CVector3f *param_1,float param_2,float *param_3,CVector3f *param_4,CVector3f *param_5,CVector3f *param_6,CVector3f *param_7,float *param_8);
float core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_0050ec80(CDemonSet *param_1,CVector3f *param_2,float param_3);
float core_setcolid_cpp_FUN_0050f910(int param_1,undefined4 *param_2);
int __cdecl core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_0050fa30(CDemonSet *this_ptr,CVector3f *start_pos,CVector3f *end_pos);
float core_setcolid_cpp_CDemonSet_getVoxelHeight_FUN_0050fab0(undefined4 param_1,CVector3f *param_2);
int __cdecl core_setcolid_cpp_CDemonSet_testVoxelRaycast_FUN_0050fae0(CDemonSet *this_ptr,CVector3f *start_pos,CVector3f *end_pos);
undefined4 core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00(int param_1,float *param_2,float *param_3);
undefined4 core_setcolid_cpp_FUN_0050fc90(int param_1);
float core_setcolid_cpp_CDemonSet_iterativeRaycast_FUN_0050fdd0(undefined4 param_1,float *param_2,float *param_3);
float core_setcolid_cpp_CDemonSet_raycastAgainstActors_FUN_0050ffe0(CDemonSet *param_1,float param_2,CBoundingBox3D *param_3,float *param_4,float param_5);

