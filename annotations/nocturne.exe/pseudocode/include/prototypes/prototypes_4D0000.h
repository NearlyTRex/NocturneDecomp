#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "types/classes/CAlphaBitmap.h"
#include "types/classes/CCharacter.h"
#include "types/classes/CCourse.h"
#include "types/classes/CDeformableModelInstance.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDemonMission.h"
#include "types/classes/CKeyFramedModel.h"
#include "types/classes/CLocation.h"
#include "types/classes/CMatrix3x4f.h"
#include "types/classes/CMimic.h"
#include "types/classes/CMineCar.h"
#include "types/classes/CMirror.h"
#include "types/classes/CMirrorReflection.h"
#include "types/classes/CMobster.h"
#include "types/classes/CMoloch.h"
#include "types/classes/CMoon.h"
#include "types/classes/CMorphModel.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"
#include "types/enums/ECollisionType.h"
#include "types/enums/EDeathState.h"
#include "types/enums/EInputCodeType.h"
#include "types/structs/SBat.h"
#include "types/structs/SCPUInfo.h"
#include "types/structs/SClipPlane.h"
#include "types/structs/SCollisionInfo.h"
#include "types/structs/SDamageInfo.h"
#include "types/structs/SInputFace.h"
#include "types/structs/SMRGLHeaderBasic.h"
#include "types/structs/SMRGLHeaderExtended.h"
#include "types/structs/SMRGLHeaderPrimitive.h"
#include "types/structs/SMRGLModelBounds.h"
#include "types/structs/SMRGLTextureLod.h"
#include "types/structs/SMorphPoint.h"
#include "types/structs/STextureSet.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x4D0000
// =============================================================================

void __cdecl core_menu_cpp_configureGraphicsOptions_FUN_004d0080(void);
void __cdecl core_menu_cpp_configureCustomKeys_FUN_004d0d20(void);
void __cdecl core_menu_cpp_renderAudioSpectrumBarByBounds_FUN_004d1290(int x_center,int y_bottom,int y_top);
void __cdecl core_menu_cpp_configureSoundOptions_FUN_004d12e0(void);
void __cdecl core_menu_cpp_showOptionsScreen_FUN_004d21c0(int initialize_systems);
int __cdecl core_menu_cpp_showMainGameMenu_FUN_004d23d0(void);
void __cdecl core_menu_cpp_addCustomKeyBinding_FUN_004d2880(int *key_code_ptr,char *key_name);
char * __cdecl core_menu_cpp_getKeyDisplayName_FUN_004d2900(EInputCodeType key_code);
int __cdecl core_menu_cpp_isKeyCodeValidForMode_FUN_004d2b40(EInputCodeType *key_code_ptr,char *description);
int __cdecl core_menu_cpp_getSinglePressedKey_FUN_004d2c80(void);
void __cdecl core_menu_cpp_configureCustomKeyBindings_FUN_004d2d00(void);
CAlphaBitmap * __cdecl core_menu_cpp_CAlphaBitmap_arrdtor8_FUN_004d4370(CAlphaBitmap *this_ptr,uint flags);
void __cdecl core_mimic_cpp_staticInit_FUN_004d4390(void);
void __cdecl core_mimic_cpp_mirrorXTransform_FUN_004d43c0(void);
CMimic * __cdecl core_mimic_cpp_factoryFuncMimic_FUN_004d4420(void);
CDemonActorType * __cdecl core_mimic_cpp_CMimic_getActorType_FUN_004d4440(CMimic *this_ptr);
CMimic * __cdecl core_mimic_cpp_CMimic_ctor_FUN_004d4450(CMimic *this_ptr);
CMimic * __cdecl core_mimic_cpp_CMimic_dtor_FUN_004d4540(CMimic *this_ptr,uint flags);
void __cdecl core_mimic_cpp_CMimic_setup_FUN_004d4650(CMimic *this_ptr);
void __cdecl core_mimic_cpp_CMimic_process_FUN_004d49f0(CMimic *this_ptr,float delta_time);
void __cdecl core_mimic_cpp_CMimic_updatePose_FUN_004d4ba0(CMimic *this_ptr);
void __cdecl core_mimic_cpp_CMimic_processAnimation_FUN_004d4f30(CMimic *this_ptr,float delta_time);
void __cdecl core_mimic_cpp_CMimic_setupCloth_FUN_004d5770(CMimic *this_ptr);
int __cdecl core_mimic_cpp_CMimic_renderMirrored_FUN_004d5860(CMimic *this_ptr);
int __cdecl core_mimic_cpp_CMimic_renderOpaque_FUN_004d5ae0(CMimic *this_ptr);
int __cdecl core_mimic_cpp_CMimic_renderTransparent_FUN_004d5b00(CMimic *this_ptr);
EDeathState __cdecl core_mimic_cpp_CMimic_getDeathState_FUN_004d5b10(CMimic *this_ptr);
void __cdecl core_mimic_cpp_CMimic_renderBackground_FUN_004d5b20(CMimic *this_ptr,int layer_flag);
void __cdecl core_mimic_cpp_CMimic_archive_FUN_004d5bb0(CMimic *this_ptr);
ECollisionType __cdecl core_mimic_cpp_CMimic_getCollisionType_FUN_004d5c80(CMimic *this_ptr,SCollisionInfo *collision_info);
void __cdecl core_mimic_cpp_CMimic_beginMorph_FUN_004d5d00(CMimic *this_ptr);
void __cdecl core_mimic_cpp_CMimic_processMorph_FUN_004d5e20(CMimic *this_ptr,float delta_time);
void __cdecl core_minecar_cpp_staticInit_FUN_004d5fb0(void);
CMineCar * __cdecl core_minecar_cpp_factoryFuncMineCar_FUN_004d5fe0(void);
CDemonActorType * __cdecl core_minecar_cpp_CMineCar_getActorType_FUN_004d6010(CMineCar *this_ptr);
void __cdecl core_minecar_cpp_CMineCar_setup_FUN_004d6020(CMineCar *this_ptr);
void __cdecl core_minecar_cpp_CMineCar_process_FUN_004d6040(CMineCar *this_ptr,float delta_time);
CMineCar * __cdecl core_minecar_cpp_CMineCar_ctor_FUN_004d60b0(CMineCar *this_ptr);
CMineCar * __cdecl core_minecar_cpp_CMineCar_dtor_FUN_004d60d0(CMineCar *this_ptr,uint flags);
void __cdecl core_mirror_cpp_staticInit_FUN_004d6140(void);
void __cdecl core_mirror_cpp_computePlaneFromTriangle_FUN_004d6170(SClipPlane *out_plane,CVector3f *vertex_a,CVector3f *vertex_b,CVector3f *vertex_c);
void __cdecl core_mirror_cpp_computePlaneIntersection_FUN_004d62f0(SClipPlane *clip_plane,CVector3f *vertex_a,CVector3f *vertex_b,CVector3f *out_intersection);
void __cdecl core_mirror_cpp_clipPolygonAgainstPlane_FUN_004d6420(SClipPlane *clip_plane,CVector3f *input_vertices,int input_count,CVector3f *output_vertices,int *output_count);
CMirror * __cdecl core_mirror_cpp_CMirror_ctor_FUN_004d6550(CMirror *this_ptr);
CMirror * __cdecl core_mirror_cpp_CMirror_dtor_FUN_004d6570(CMirror *this_ptr,uint flags);
void __cdecl core_mirror_cpp_CMirror_setupCorners_FUN_004d6590(CMirror *this_ptr,CVector3f *corner1,CVector3f *corner2,CVector3f *corner3,CVector3f *corner4);
void __cdecl core_mirror_cpp_CMirrorReflection_setupMirrorCamera_FUN_004d6610(CMirrorReflection *this_ptr);
void __cdecl core_mirror_cpp_CMirrorReflection_setupMirrorReflection_FUN_004d6650(CMirrorReflection *this_ptr,CVector3f *camera_position,CVector3f *camera_rotation,float projection_scale);
CVector3f * __cdecl core_mirror_cpp_CMirrorReflection_applyMirrorTransform_FUN_004d7480(CMirrorReflection *this_ptr,CVector3f *output_buffer,CVector3f *input_vector);
uint __cdecl core_mirror_cpp_CMirror_reflectAndClipPrimitive_FUN_004d74a0(CMirror *this_ptr,SMRGLHeaderPrimitive *primitive);
void __cdecl core_mirror_cpp_CMirror_clipAndRenderReflectedPrimitive_FUN_004d76e0(CMirror *this_ptr,SMRGLHeaderPrimitive *prim);
int __cdecl core_mirror_cpp_CMirror_renderReflectedPrimitive_FUN_004d7720(CMirror *this_ptr,SMRGLHeaderPrimitive *prim);
void __cdecl core_mirror_cpp_CMirror_renderMirroredPrimitive_FUN_004d7760(CMirror *this_ptr,SMRGLHeaderPrimitive *prim);
int __cdecl core_mirror_cpp_CMirror_renderMirrorQuad_FUN_004d77f0(CMirror *this_ptr);
void __cdecl core_mirror_cpp_CMirror_renderMirrorQuadDepth_FUN_004d7980(CMirror *this_ptr);
CVector3i * __stack2_esi core_mirror_cpp_CMirrorReflection_transformMirrorVertex_FUN_004d7b30(CMirrorReflection *this_ptr,CVector3i *input_vertex,CVector3i *output_vertex);
CVector3i * __stack3_esi core_mirror_cpp_CMirrorReflection_transformMirrorEdgeToIntegerSpace_FUN_004d7bd0(CMirrorReflection *this_ptr,CVector3i *point_a,CVector3i *point_b,CVector3i *output);
SClipPlane * __cdecl core_mirror_cpp_SClipPlane_ctor_FUN_004d7d70(SClipPlane *this_ptr);
SClipPlane * __cdecl core_mirror_cpp_SClipPlane_dtor_FUN_004d7d80(SClipPlane *this_ptr,uint flags);
SClipPlane * __cdecl core_mirror_cpp_SClipPlane_arrdtor5_FUN_004d7d90(SClipPlane *this_ptr,uint flags);
CVector3f * __cdecl core_mirror_cpp_CVector3f_arrdtor32_FUN_004d7db0(CVector3f *this_ptr,uint flags);
void __cdecl core_mission_cpp_staticInit_FUN_004d7dd0(void);
void __cdecl core_mission_cpp_skipLine_FUN_004d7de0(_FILE *file_handle);
void __cdecl core_mission_cpp_CDemonMission_reset_FUN_004d7e00(CDemonMission *this_ptr);
void __cdecl core_mission_cpp_CDemonMission_clearMission_FUN_004d7e90(CDemonMission *this_ptr);
void __cdecl core_mission_cpp_CDemonMission_FUN_004d7ea0(CDemonMission *this_ptr);
void __cdecl core_mission_cpp_CDemonMission_load_FUN_004d7ee0(CDemonMission *this_ptr,char *mission_filename,int load_flags);
void __cdecl core_mission_cpp_CDemonMission_save_FUN_004d7f80(CDemonMission *this_ptr,char *filename);
void __cdecl core_mission_cpp_CDemonMission_readMissionFile_FUN_004d7fe0(CDemonMission *this_ptr,_FILE *file_handle,int load_flags);
CDemonActor * __cdecl core_mission_cpp_CDemonMission_getNextLoadedInventoryActor_FUN_004d8640(CDemonMission *this_ptr,char *actor_name);
int __cdecl core_mission_cpp_CDemonMission_loadScript_FUN_004d86d0(CDemonMission *this_ptr,int is_loading);
void __cdecl core_mission_cpp_CDemonMission_writeFile_FUN_004d8720(CDemonMission *this_ptr,_FILE *file_handle);
CDemonActor * __cdecl core_mission_cpp_CDemonMission_loadActor_FUN_004d8aa0(CDemonMission *this_ptr,_FILE *file,CDemonActor *current_actor,char *property_description );
void __cdecl core_mission_cpp_CDemonMission_saveActor_FUN_004d8c00(CDemonMission *this_ptr,CDemonActor *actor_ptr,_FILE *file,CDemonActor *current_actor,char *description);
void __cdecl core_mission_cpp_CDemonMission_addActorToList_FUN_004d8c60(CDemonMission *this_ptr,CDemonActor *actor);
void __cdecl core_mission_cpp_CDemonMission_FUN_004d8cd0(CDemonMission *this_ptr,CDemonActor *param_2);
int __cdecl core_mission_cpp_CDemonMission_countActors_FUN_004d8d80(CDemonMission *this_ptr);
void __cdecl core_mission_cpp_CDemonMission_prepareAllActors_FUN_004d8db0(CDemonMission *this_ptr);
void __cdecl core_mission_cpp_CDemonMission_buildSetActorList_FUN_004d8ee0(CDemonMission *this_ptr);
void __cdecl core_mission_cpp_CDemonMission_removeActor_FUN_004d8f90(CDemonMission *this_ptr,CDemonActor *actor,int should_delete);
void __cdecl core_mission_cpp_CDemonMission_removeAllActors_FUN_004d8fc0(CDemonMission *this_ptr);
void __cdecl core_mission_cpp_CDemonMission_loadSet_FUN_004d9020(CDemonMission *this_ptr,int set_index);
CDemonActor * __cdecl core_mission_cpp_CDemonMission_findActorByName_FUN_004d90a0(CDemonMission *this_ptr,char *name);
void __cdecl core_mission_cpp_CDemonMission_setTeleportTarget_FUN_004d90e0(CDemonMission *this_ptr,CLocation *teleport_target);
void __cdecl core_mission_cpp_CDemonMission_markActorToDelete_FUN_004d9110(CDemonMission *this_ptr,CDemonActor *actor,uint flags);
void __cdecl core_mission_cpp_CDemonMission_buildActiveSetActorList_FUN_004d9180(CDemonMission *this_ptr);
void __cdecl core_mission_cpp_CDemonMission_process_FUN_004d92a0(CDemonMission *this_ptr);
void __cdecl core_mission_cpp_CDemonMission_createFromSingleSet_FUN_004d93d0(CDemonMission *this_ptr,char *param_2);
void __cdecl core_mission_cpp_CDemonMission_run_FUN_004d9440(CDemonMission *this_ptr);
void __cdecl core_mission_cpp_CDemonMission_setMissionName_FUN_004d9650(CDemonMission *this_ptr,char *name);
void __cdecl core_mission_cpp_CDemonMission_generateUniqueActorName_FUN_004d9680(CDemonMission *this_ptr,char *out_buf,char *base_name);
void __cdecl core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720(CDemonMission *this_ptr,CDemonActor *actor);
int __cdecl core_mission_cpp_CDemonMission_startMission_FUN_004d9780(CDemonMission *this_ptr);
void __cdecl core_mission_cpp_CDemonMission_calculateAllActorChecksums_FUN_004d98c0(CDemonMission *this_ptr,uint *checksum);
void __cdecl core_mission_cpp_CDemonMission_freeAllAssets_FUN_004d9900(CDemonMission *this_ptr);
int __cdecl core_mission_cpp_CDemonMission_createOneHero_FUN_004d9920(CDemonMission *this_ptr,int index,int hero_type,CCharacter *existing_actor);
int __cdecl core_mission_cpp_CDemonMission_createHeros_FUN_004d9a80(CDemonMission *this_ptr,CCharacter *existing_hero);
void __cdecl core_mission_cpp_CDemonMission_ensureHeroPlaceholder_FUN_004d9c20(CDemonMission *this_ptr);
int __cdecl core_mission_cpp_CDemonMission_countDamageableEnemies_FUN_004d9df0(CDemonMission *this_ptr);
CDemonMission * __cdecl core_mission_cpp_CDemonMission_ctor_FUN_004d9e50(CDemonMission *this_ptr);
CDemonMission * __cdecl core_mission_cpp_CDemonMission_dtor_FUN_004d9e60(CDemonMission *this_ptr,uint flags);
void __cdecl core_mmx_c_detectCPUFeatures_FUN_004d9e70(void);
void __cdecl core_mmx_c_detectIntelProcessor_FUN_004d9eac(void);
void __cdecl core_mmx_c_detectMMXSupport_FUN_004d9f59(void);
int __cdecl core_mmx_c_getCPUInfo_FUN_004d9f6f(SCPUInfo *cpu_info);
void __cdecl core_mobster_cpp_staticInit_FUN_004d9fd0(void);
CVector3f * __cdecl core_mobster_cpp_getObjectGrabPointLocal_FUN_004da000(CVector3f *out,CDemonActor *actor);
CVector3f * __cdecl core_mobster_cpp_getObjectGrabPointWorld_FUN_004da070(CVector3f *out,CDemonActor *actor);
CMobster * __cdecl core_mobster_cpp_factoryFuncMobster_FUN_004da120(void);
CDemonActorType * __cdecl core_mobster_cpp_CMobster_getActorType_FUN_004da140(CMobster *this_ptr);
CMobster * __cdecl core_mobster_cpp_CMobster_ctor_FUN_004da150(CMobster *this_ptr);
void __cdecl core_mobster_cpp_CMobster_setup_FUN_004da290(CMobster *this_ptr);
void __cdecl core_mobster_cpp_CMobster_positionOnVehicle_FUN_004da5a0(CMobster *this_ptr);
void __cdecl core_mobster_cpp_CMobster_dismountVehicle_FUN_004da670(CMobster *this_ptr);
void __cdecl core_mobster_cpp_CMobster_process_FUN_004da790(CMobster *this_ptr,float delta_time);
void __cdecl core_mobster_cpp_CMobster_aimTommyGun_FUN_004db6f0(CMobster *this_ptr,float delta_time);
CVector3f * __cdecl core_mobster_cpp_setEulerAngles_FUN_004dba50(CVector3f *out,float x,float z,float y);
void __stack2_esi core_mobster_cpp_CMobster_getCarryObjToBodyXForm_FUN_004dba70(CMobster *this_ptr,int hand_index,CMatrix3x4f *out_matrix);
int __cdecl core_mobster_cpp_CMobster_processWeaponPickup_FUN_004dbce0(CMobster *this_ptr,float delta_time);
void __cdecl core_mobster_cpp_CMobster_startFiringAttack_FUN_004dc110(CMobster *this_ptr);
void __cdecl core_mobster_cpp_CMobster_archive_FUN_004dc180(CMobster *this_ptr);
void __cdecl core_mobster_cpp_CMobster_reset_FUN_004dc2b0(CMobster *this_ptr);
void __cdecl core_mobster_cpp_CMobster_processDismemberment_FUN_004dc2d0(CMobster *this_ptr,SDamageInfo *damage_info);
void __cdecl core_mobster_cpp_CMobster_processDamage_FUN_004dc690(CMobster *this_ptr,SDamageInfo *damage_info);
int __cdecl core_mobster_cpp_CMobster_getTargetPoints_FUN_004dc820(CMobster *this_ptr,CVector3f *out_points_array);
ECollisionType __cdecl core_mobster_cpp_CMobster_getCollisionType_FUN_004dc920(CMobster *this_ptr,SCollisionInfo *collision_info);
void __cdecl core_mobster_cpp_CMobster_playTaunt_FUN_004dc940(CMobster *this_ptr,int taunt_category);
CMobster * __cdecl core_mobster_cpp_CMobster_dtor_FUN_004dcac0(CMobster *this_ptr,uint flags);
void __cdecl engine_model_c_byteswapMRGLData_FUN_004dcc90(SMRGLHeaderExtended *mrgl_data,int data_size);
SMRGLHeaderExtended * __cdecl engine_model_c_loadModelFile_FUN_004dcd10(char *filename);
void __cdecl engine_model_c_freeMRGLData_FUN_004dcee0(SMRGLHeaderExtended *mrgl_data);
SMRGLModelBounds * __stack_esi engine_model_c_getMRGLBounds_FUN_004dcf60(SMRGLHeaderBasic *mrgl_data,SMRGLModelBounds *output_bounds);
int __cdecl engine_model_c_getMRGLSize_FUN_004dd520(SMRGLHeaderExtended *header);
void __cdecl engine_model_c_loadMRGLTextures_FUN_004dd690(SMRGLHeaderExtended *mrgl);
void __cdecl engine_model_c_initializeMRGLModel_FUN_004dd760(SMRGLHeaderExtended *mrgl);
SMRGLHeaderExtended * __cdecl engine_model_c_loadModelChunk_FUN_004dd790(char *filename,int model_size);
void __cdecl core_moloch_cpp_staticInit_FUN_004dd8d0(void);
CMoloch * __cdecl core_moloch_cpp_factoryFuncMoloch_FUN_004dd900(void);
CDemonActorType * __cdecl core_moloch_cpp_CMoloch_getActorType_FUN_004dd920(CMoloch *this_ptr);
CMoloch * __cdecl core_moloch_cpp_CMoloch_ctor_FUN_004dd930(CMoloch *this_ptr);
CMoloch * __cdecl core_moloch_cpp_CMoloch_dtor_FUN_004dd9f0(CMoloch *this_ptr,uint flags);
void __cdecl core_moloch_cpp_CMoloch_setup_FUN_004dda70(CMoloch *this_ptr);
void __cdecl core_moloch_cpp_CMoloch_process_FUN_004ddb20(CMoloch *this_ptr,float delta_time);
void __cdecl core_moloch_cpp_CMoloch_processAI_FUN_004de1b0(CMoloch *this_ptr,float delta_time);
int __cdecl core_moloch_cpp_CMoloch_renderOpaque_FUN_004de550(CMoloch *this_ptr);
void __cdecl core_moloch_cpp_CMoloch_archive_FUN_004de680(CMoloch *this_ptr);
void __cdecl core_moloch_cpp_CMoloch_startMorph_FUN_004de700(CMoloch *this_ptr);
void __cdecl core_moloch_cpp_CMoloch_drawWeapon_FUN_004de750(CMoloch *this_ptr,int drawn);
int __cdecl core_moloch_cpp_CMoloch_isWeaponDrawn_FUN_004de760(CMoloch *this_ptr);
void __cdecl core_moon_cpp_staticInit_FUN_004de770(void);
CMoon * __cdecl core_moon_cpp_CMoon_ctor_FUN_004de800(CMoon *this_ptr);
CMoon * __cdecl core_moon_cpp_CMoon_dtor_FUN_004de830(CMoon *this_ptr,uint flags);
void __cdecl core_moon_cpp_CMoon_init_FUN_004de860(CMoon *this_ptr);
void __cdecl core_moon_cpp_CMoon_free_FUN_004dea60(CMoon *this_ptr);
void __cdecl core_moon_cpp_CMoon_update_FUN_004deae0(CMoon *this_ptr,float delta_time);
void __cdecl core_moon_cpp_CMoon_render_FUN_004dec50(CMoon *this_ptr);
void __cdecl core_moon_cpp_CMoon_renderJoystickCalibration_FUN_004df040(CMoon *this_ptr);
int __cdecl core_moon_cpp_CMoon_isAnimationFirstHalf_FUN_004df170(CMoon *this_ptr);
SBat * __cdecl core_moon_cpp_SBat_ctor_FUN_004df190(SBat *this_ptr);
SBat * __cdecl core_moon_cpp_SBat_dtor_FUN_004df1a0(SBat *this_ptr,uint flags);
SBat * __cdecl core_moon_cpp_SBat_arrdtor30_FUN_004df1b0(SBat *this_ptr,uint flags);
CCourse * __cdecl core_moon_cpp_CCourse_arrdtor3_FUN_004df1d0(CCourse *this_ptr,uint flags);
CAlphaBitmap * __cdecl core_moon_cpp_CAlphaBitmap_arrdtor30_FUN_004df1f0(CAlphaBitmap *this_ptr,uint flags);
int __cdecl core_morph_cpp_countTrianglesFromPolygons_FUN_004df210(int poly_count,SMRGLHeaderPrimitive *poly_headers,int poly_stride);
CMorphModel * __cdecl core_morph_cpp_CMorphModel_ctor_FUN_004df240(CMorphModel *this_ptr);
CMorphModel * __cdecl core_morph_cpp_CMorphModel_dtor_FUN_004df270(CMorphModel *this_ptr,uint flags);
void __cdecl core_morph_cpp_CMorphModel_free_FUN_004df290(CMorphModel *this_ptr);
void __cdecl core_morph_cpp_CMorphModel_addPartFromPolygon_FUN_004df2f0(CMorphModel *this_ptr,int vertex_count,CVector3i *vertex_data,int poly_count,SMRGLHeaderPrimitive *poly_data,int poly_stride,SMRGLTextureLod *texture_list,int *texture_index_list);
void __cdecl core_morph_cpp_CMorphModel_addPartFromVertexBuffer_FUN_004df460(CMorphModel *this_ptr,int vertex_count,CVector3i *skinned_vertices,int tri_count,SInputFace *tri_data,STextureSet *texture_sets,int *index_data);
void __cdecl core_morph_cpp_CMorphModel_addPartFromDeformableModel_FUN_004df5b0(CMorphModel *this_ptr,CDeformableModelInstance *model_ptr);
void __cdecl core_morph_cpp_CMorphModel_addPartFromKeyFramedModel_FUN_004df610(CMorphModel *this_ptr,CKeyFramedModel *model_ptr,int frame_index);
void __cdecl core_morph_cpp_CMorphModel_animateFromVertexBuffer_FUN_004df660(CMorphModel *this_ptr,int part_index,CVector3i *vertex_buffer,int start_offset,int vertex_count);
void __cdecl core_morph_cpp_CMorphModel_animateFromPartVertexBuffer_FUN_004df740(CMorphModel *this_ptr,int part_index,CVector3i *vertex_buffer);
void __cdecl core_morph_cpp_CMorphModel_animateFromDeformableModel_FUN_004df770(CMorphModel *this_ptr,int part_index,CDeformableModelInstance *model_ptr);
void __cdecl core_morph_cpp_CMorphModel_animateFromKeyframedModel_FUN_004df7c0(CMorphModel *this_ptr,int part_index,CKeyFramedModel *model_ptr,int frame_index);
void __cdecl core_morph_cpp_CMorphModel_setFaceListFromPolygon_FUN_004df800(CMorphModel *this_ptr,int part_index,SMRGLHeaderPrimitive *poly_data,int poly_stride ,SMRGLTextureLod *texture_list,int *texture_index_list,int start_face,int poly_count);
void __cdecl core_morph_cpp_CMorphModel_setFaceListFromTriangles_FUN_004df9e0(CMorphModel *this_ptr,int part_index,SInputFace *face_data,STextureSet *texture_sets ,int *index_data,int start_face,int face_count);
int __cdecl core_morph_cpp_CMorphModel_findOrAddTexture_FUN_004dfba0(CMorphModel *this_ptr,char *filename);
void __cdecl core_morph_cpp_CMorphModel_render_FUN_004dfc70(CMorphModel *this_ptr,float morph_t,SMorphPoint *ref_points);
void __cdecl core_morph_cpp_CMorphModel_rotatePoints_FUN_004dfcb0(CMorphModel *this_ptr,float blend_factor,SMorphPoint *ref_points);
void __cdecl core_morph_cpp_CMorphModel_renderFaces_FUN_004dfea0(CMorphModel *this_ptr,float morph_t);
int __cdecl core_morph_cpp_CMorphModel_findNearestPoint_FUN_004dffc0(CMorphModel *this_ptr,CVector3f *position);

