#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDemonRenderer.h"
#include "types/classes/CDemonTriangle.h"
#include "types/classes/CEnemy.h"
#include "types/classes/CInventory.h"
#include "types/classes/CKeys.h"
#include "types/classes/CLadder.h"
#include "types/classes/CLarva.h"
#include "types/classes/CLevelLoader.h"
#include "types/classes/CLever.h"
#include "types/classes/CLightGun.h"
#include "types/classes/CMansionPuzzleCircle.h"
#include "types/classes/CMarquee.h"
#include "types/classes/CPathMap.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"
#include "types/classes/CWeapon.h"
#include "types/enums/EInputCodeType.h"
#include "types/structs/SDamageInfo.h"
#include "types/structs/SIntersectXZCylinder.h"
#include "types/structs/SMRGLKeyframeModel.h"
#include "types/structs/SMRGLPrimitiveTriangle.h"
#include "types/structs/SMRGLPrimitiveTriangleIndex.h"
#include "types/structs/SProjectedVertex.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x4C0000
// =============================================================================

void core_inv_cpp_FUN_004c0640(void);
CDemonActor * __cdecl core_inv_cpp_CInventory_findItemByName_FUN_004c0710(CInventory *this_ptr,char *item_name);
int __cdecl core_inv_cpp_CInventory_hasItemOfClass_FUN_004c0760(CInventory *this_ptr,char *class_name);
void __cdecl core_inv_cpp_CInventory_removeItem_FUN_004c07b0(CInventory *this_ptr,CDemonActor *item_to_remove,int should_delete_actor);
void __cdecl core_inv_cpp_CInventory_selectWeapon_FUN_004c0850(CInventory *this_ptr,CDemonActor *specific_weapon,int weapon_category,int direction);
void __cdecl core_inv_cpp_CInventory_selectItem_FUN_004c0950(CInventory *this_ptr,int direction);
void __cdecl core_inv_cpp_CInventory_cycleWeaponOfSameClass_FUN_004c0a50(CInventory *this_ptr,int direction);
void __cdecl core_inv_cpp_CInventory_renderItemModel_FUN_004c0b40(CInventory *this_ptr,CDemonActor *item,int viewport_x,int viewport_y,int viewport_size,float rotation_y,int alpha);
void __cdecl core_inv_cpp_CInventory_save_FUN_004c0fa0(CInventory *this_ptr,_FILE *file_handle);
void __cdecl core_inv_cpp_CInventory_saveItems_FUN_004c1140(CInventory *this_ptr,_FILE *file_handle);
void __cdecl core_inv_cpp_CInventory_load_FUN_004c1190(CInventory *this_ptr,_FILE *file_handle);
void __cdecl core_inv_cpp_CInventory_loadItems_FUN_004c14d0(CInventory *this_ptr);
void __cdecl core_inv_cpp_CInventory_setupItems_FUN_004c1510(CInventory *this_ptr);
int __cdecl core_inv_cpp_CInventory_select_FUN_004c1580(CInventory *this_ptr,CDemonActor *actor_ptr);
CLightGun * __cdecl core_inv_cpp_CInventory_getActiveLightGun_FUN_004c1830(CInventory *this_ptr);
void __cdecl core_inv_cpp_CInventory_updateInventory_FUN_004c1850(CInventory *this_ptr);
float __cdecl core_inv_cpp_CInventory_calculateTotalBatteryCharge_FUN_004c1b20(CInventory *inventory_ptr,float max_charge);
void __cdecl core_inv_cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004c1b90(CInventory *this_ptr,int ammo_type);
int __cdecl core_inv_cpp_CInventory_isWeaponInCategory_FUN_004c1bf0(CInventory *this_ptr,CDemonActor *weapon_actor,int weapon_category);
void __cdecl core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004c1d20(CInventory *this_ptr,int reset_both);
void __cdecl core_inv_cpp_CInventory_resetItemSwitchTimers_FUN_004c1d70(CInventory *this_ptr);
void __cdecl core_inv_cpp_CInventory_resetInventoryDisplayTimer_FUN_004c1da0(CInventory *this_ptr);
void core_inv_cpp_drawWeaponIconBackground_FUN_004c1dd0(int param_1,int param_2,int param_3,int param_4,int param_5);
void __cdecl core_inv_cpp_drawItemIconBackground_FUN_004c1f90(int x1,int y1,int x2,int y2,int alpha);
void __cdecl core_inv_cpp_CInventory_renderSelectedItems_FUN_004c2150(CInventory *this_ptr);
void core_inv_cpp_FUN_004c2470(CInventory *param_1);
int __cdecl core_inv_cpp_CInventory_checkHasMatchingKey_FUN_004c31b0(CInventory *this_ptr,uint key_mask,int show_message);
void __cdecl core_inv_cpp_CInventory_removeMatchingKeys_FUN_004c3280(CInventory *this_ptr,uint key_mask);
void __cdecl core_inv_cpp_CInventory_toggleDetailView_FUN_004c32e0(CInventory *this_ptr);
void __cdecl core_inv_cpp_CInventory_autoUseHealthItem_FUN_004c3350(CInventory *this_ptr);
void __cdecl core_keyactor_cpp_staticInit_FUN_004c3400(void);
void core_keyactor_cpp_FUN_004c3430(void);
CDemonActorType * core_keyactor_cpp_FUN_004c3450(void);
int * core_keyactor_cpp_FUN_004c3460(undefined4 param_1);
void core_keyactor_cpp_FUN_004c34c0(CDemonActor *param_1);
void core_keyactor_cpp_CKeyActor_process_FUN_004c34e0(int param_1,float param_2);
int core_keyactor_cpp_FUN_004c3590(CDemonActor *param_1);
undefined4 * core_keyactor_cpp_FUN_004c3600(int param_1,undefined4 *param_2);
void core_keyactor_cpp_CKeyActor_archive_FUN_004c3650(CDemonActor *param_1);
undefined4 core_keyactor_cpp_FUN_004c36c0(void);
undefined4 core_keyactor_cpp_FUN_004c36d0(undefined4 param_1,CDemonActor *param_2);
void core_keyactor_cpp_FUN_004c36f0(undefined4 param_1,undefined4 param_2);
CDemonActor * core_keyactor_cpp_FUN_004c3710(CDemonActor *param_1,byte param_2);
void __cdecl engine_keyframe_c_calculatePackedSurfaceNormal_FUN_004c3760(CVector3i *vertex_data,SMRGLPrimitiveTriangleIndex *texture);
void __cdecl engine_keyframe_c_calculateSurfaceNormal_FUN_004c3920(CVector3i *vertex_data,SMRGLPrimitiveTriangle *texture);
void __cdecl engine_keyframe_c_loadAndInterpolateKeyframes_FUN_004c3aa0(SMRGLKeyframeModel *keyframe_model);
SMRGLKeyframeModel * engine_keyframe_c_interpolateCubicKeyframes_FUN_004c3c90(SMRGLKeyframeModel *param_1);
void engine_keyframe_c_recomputeKeyFrameNormals_FUN_004c4080(SMRGLPrimitiveTriangle *param_1);
void __cdecl engine_keys_cpp_staticInit_FUN_004c4170(void);
undefined1 engine_keys_cpp_CKeys_getKeyState_FUN_004c4180(undefined4 param_1,int param_2);
undefined1 engine_keys_cpp_CKeys_getAndClearKeyState_FUN_004c4190(undefined4 param_1,int param_2);
void __cdecl engine_keys_cpp_CKeys_clearKeypresses_FUN_004c41b0(void);
int __cdecl engine_keys_cpp_CKeys_getInputKey_FUN_004c41c0(CKeys *this_ptr);
int __cdecl engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_004c41d0(CKeys *this_ptr);
void __cdecl engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004c41f0(CKeys *this_ptr,EInputCodeType key_code);
void engine_keys_cpp_CKeys_clearKeyPressState_FUN_004c4200(undefined4 param_1,int param_2);
void __cdecl engine_keys_cpp_CKeys_toggleInputMask_FUN_004c4210(CKeys *this_ptr,int enable_extended);
void __cdecl core_ladder_cpp_staticInit_FUN_004c4230(void);
void core_ladder_cpp_FUN_004c4260(void);
CDemonActorType * core_ladder_cpp_FUN_004c4280(void);
CLadder * __cdecl core_ladder_cpp_CLadder_ctor_FUN_004c4290(CLadder *this_ptr);
void core_ladder_cpp_FUN_004c4340(CDemonActor *param_1);
void core_ladder_cpp_FUN_004c4360(undefined4 param_1);
int core_ladder_cpp_FUN_004c4370(CDemonActor *param_1);
float * core_ladder_cpp_CLadder_getBoundingBox_FUN_004c43f0(int param_1,float *param_2);
void core_ladder_cpp_CLadder_archive_FUN_004c44f0(CDemonActor *param_1);
undefined4 core_ladder_cpp_CLadder_getCollisionType_FUN_004c4570(int param_1);
void core_ladder_cpp_FUN_004c45a0(CDemonActor *param_1);
void core_ladder_cpp_FUN_004c46b0(int param_1);
undefined4 core_ladder_cpp_FUN_004c47c0(int param_1);
CDemonActor * core_ladder_cpp_FUN_004c47d0(CDemonActor *param_1,byte param_2);
void __cdecl core_larva_cpp_staticInit_FUN_004c4820(void);
void core_larva_cpp_FUN_004c4850(void);
CDemonActorType * core_larva_cpp_FUN_004c4870(void);
CLarva * __cdecl core_larva_cpp_CLarva_ctor_FUN_004c4880(CLarva *this_ptr);
void core_larva_cpp_CLarva_setup_FUN_004c4910(CEnemy *param_1);
void core_larva_cpp_FUN_004c4970(CPathMap *param_1,float param_2);
void core_larva_cpp_FUN_004c5250(CEnemy *param_1);
void core_larva_cpp_CLarva_processDamage_FUN_004c5310(CEnemy *param_1,SDamageInfo *param_2);
undefined4 core_larva_cpp_FUN_004c54f0(int param_1,CVector3f *param_2);
CDemonActor * core_larva_cpp_FUN_004c5540(CDemonActor *param_1,byte param_2);
void __cdecl core_level_cpp_staticInit_FUN_004c5600(void);
void core_larva_cpp_FUN_004c5630(int param_1);
void __cdecl core_level_cpp_CLevelLoader_show_FUN_004c5640(CLevelLoader *this_ptr,int total_frames,int use_custom_viewport,int image_variant);
void __cdecl core_level_cpp_CLevelLoader_update_FUN_004c59e0(CLevelLoader *this_ptr,char *text,int clear_screen);
void __cdecl core_level_cpp_CLevelLoader_cleanup_FUN_004c5fa0(CLevelLoader *this_ptr);
void __cdecl core_lever_cpp_staticInit_FUN_004c5fe0(void);
void core_lever_cpp_FUN_004c6010(void);
CDemonActorType * core_lever_cpp_FUN_004c6030(void);
CLever * __cdecl core_lever_cpp_CLever_ctor_FUN_004c6040(CLever *this_ptr);
void core_lever_cpp_CLever_setup_FUN_004c6110(CDemonActor *param_1);
void core_lever_cpp_CLever_process_FUN_004c6190(CLever *param_1,float param_2);
void __cdecl core_lever_cpp_CLever_setState_FUN_004c6390(CLever *this_ptr,float new_state);
void __cdecl core_lever_cpp_CLever_activate_FUN_004c6500(CLever *this_ptr);
int core_lever_cpp_FUN_004c6560(CDemonActor *param_1);
undefined4 * core_lever_cpp_FUN_004c65f0(int param_1,undefined4 *param_2);
CVector3f * __cdecl core_lever_cpp_CLever_getHandlePosition_FUN_004c6640(CLever *this_ptr,CVector3f *out_position);
void core_lever_cpp_CLever_archive_FUN_004c66f0(CDemonActor *param_1);
bool core_lever_cpp_FUN_004c68d0(int param_1);
int __cdecl core_lever_cpp_CLever_isAccessibleFrom_FUN_004c68f0(CLever *this_ptr,CVector3f *world_position);
CDemonActor * core_lever_cpp_FUN_004c6970(CDemonActor *param_1,byte param_2);
void __cdecl engine_light_cpp_setAmbientLightLevel_FUN_004c69d0(int light_level);
undefined4 engine_light_cpp_FUN_004c6a00(void);
void __cdecl engine_light_cpp_setDirectionalLightVector_FUN_004c6a10(int dir_x,int dir_y,int dir_z);
void engine_light_cpp_FUN_004c6a40(void);
void engine_light_cpp_setLightingMultipliers_FUN_004c6a50(void);
int __cdecl engine_light_cpp_calculatePhongLighting_FUN_004c6a70(int world_x,int world_y,int world_z);
int __cdecl engine_light_cpp_calculateLighting_FUN_004c6cc0(int normal_x,int normal_y,int normal_z);
void engine_light_cpp_FUN_004c6d70(void);
void engine_light_cpp_calculateAndStoreVertexLight_FUN_004c6d90(int param_1,int *param_2);
void __cdecl core_lightgun_cpp_staticInit_FUN_004c6dd0(void);
void core_lightgun_cpp_FUN_004c6e00(void);
CDemonActorType * core_lightgun_cpp_FUN_004c6e20(void);
CLightGun * __cdecl core_lightgun_cpp_CLightGun_ctor_FUN_004c6e30(CLightGun *this_ptr);
undefined4 core_lightgun_cpp_CLightGun_isVampireType_FUN_004c6ef0(void);
undefined4 core_lightgun_cpp_FUN_004c6f50(void);
void __cdecl core_lightgun_cpp_CLightGun_updateBeamLight_FUN_004c6ff0(CLightGun *this_ptr);
undefined4 core_lightgun_cpp_CLightGun_canSeeTarget_FUN_004c70a0(undefined4 param_1,CDemonActor *param_2);
undefined4 core_lightgun_cpp_FUN_004c71a0(CLightGun *param_1);
void core_lightgun_cpp_FUN_004c79a0(CLightGun *param_1,float param_2);
undefined4 core_lightgun_cpp_FUN_004c7c60(int param_1);
void core_lightgun_cpp_FUN_004c7ca0(CDemonActor *param_1);
CWeapon * core_lightgun_cpp_FUN_004c8040(CWeapon *param_1,byte param_2);
void __cdecl core_litecone_cpp_staticInit_FUN_004c8090(void);
void core_litecone_cpp_FUN_004c80c0(void);
CDemonActorType * core_litecone_cpp_FUN_004c80e0(void);
int __cdecl core_litecone_cpp_CLightCone_ctor_FUN_004c80f0(undefined4 param_1);
void core_litecone_cpp_FUN_004c8190(CDemonActor *param_1);
void core_litecone_cpp_CLightCone_process_FUN_004c81a0(int param_1);
int core_litecone_cpp_FUN_004c8200(CDemonActor *param_1);
void core_litecone_cpp_CLightCone_getBoundingBox_FUN_004c8290(int param_1,float *param_2);
void core_litecone_cpp_CLightCone_archive_FUN_004c82e0(CDemonActor *param_1);
undefined4 core_litecone_cpp_FUN_004c8370(void);
CDemonActor * core_litecone_cpp_FUN_004c8380(CDemonActor *param_1,byte param_2);
void __cdecl core_main_c_staticInit_FUN_004c83d0(void);
void core_main_c_FUN_004c8440(char *param_1);
void core_main_c_FUN_004c8510(void);
int __cdecl core_main_c_enterMainGameMenu_FUN_004c85e0(void);
void core_main_c_FUN_004c85f0(void);
void core_main_c_drawCenteredText_FUN_004c8dc0(char *param_1,undefined4 param_2,int param_3,int param_4);
void core_main_c_waitWithSkip_FUN_004c8e10(int param_1);
void core_main_c_showPromoScreen_FUN_004c8eb0(void);
void core_main_c_FUN_004c90e0(void);
void __cdecl core_manpuz_cpp_staticInit_FUN_004c93b0(void);
void core_manpuz_cpp_FUN_004c9400(void);
CDemonActorType * core_manpuz_cpp_FUN_004c9420(void);
int core_manpuz_cpp_FUN_004c9430(undefined4 param_1);
void core_manpuz_cpp_FUN_004c9580(CDemonActor *param_1);
int core_manpuz_cpp_FUN_004c9be0(CMansionPuzzleCircle *param_1);
void core_manpuz_cpp_FUN_004c9cf0(CMansionPuzzleCircle *param_1,float param_2);
void core_manpuz_cpp_CMansionPuzzleCircle_getBoundingBox_FUN_004c9e00(int param_1,float *param_2);
undefined4 core_manpuz_cpp_FUN_004c9e40(void);
float core_manpuz_cpp_CMansionPuzzleCircle_customRayIntersect_FUN_004c9e50(int param_1,float *param_2,undefined4 param_3,float *param_4);
void core_manpuz_cpp_FUN_004ca240(int param_1,SIntersectXZCylinder *param_2);
undefined4 core_manpuz_cpp_FUN_004ca2f0(void);
void core_manpuz_cpp_CMansionPuzzleCircle_onLaserHit_FUN_004ca300(int param_1,float *param_2);
void core_manpuz_cpp_FUN_004ca410(int param_1);
void core_manpuz_cpp_CMansionPuzzleCircle_updatePanelTransform_FUN_004ca640(CDemonActor *param_1,int param_2);
void core_manpuz_cpp_FUN_004ca710(int param_1,int param_2);
void core_manpuz_cpp_FUN_004ca790(int param_1,int param_2);
void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_renderReflector_FUN_004cabf0(CMansionPuzzleCircle *this_ptr,int reflector_index);
void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_processPanel_FUN_004cac90(CMansionPuzzleCircle *this_ptr,int panel_index,float delta_time);
void core_manpuz_cpp_CMansionPuzzleCircle_getPanelColor_FUN_004cae20(int param_1,int param_2,float *param_3,float *param_4,float *param_5);
int __cdecl core_manpuz_cpp_updateGemHumChannel_FUN_004caef0(float *hum_value,float target,float max_step,uint *sfx_handle,char *wav_filename,CVector3f *world_position);
void core_manpuz_cpp_FUN_004cb010(CMansionPuzzleCircle *param_1,int param_2,float param_3);
void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_updateLaser_FUN_004cb2d0(CMansionPuzzleCircle *this_ptr,int panel_index,float delta_time);
void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_004cb5a0(CMansionPuzzleCircle *this_ptr,int panel_index);
void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_004cb740(CMansionPuzzleCircle *this_ptr,int panel_index);
void core_manpuz_cpp_CMansionPuzzleCircle_archive_FUN_004cb7f0(CDemonActor *param_1);
int core_manpuz_cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_004cb8e0(undefined4 param_1,int param_2);
int __cdecl core_manpuz_cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_004cb8f0(CMansionPuzzleCircle *this_ptr,int panel_index);
void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_updateReflector_FUN_004cb900(CMansionPuzzleCircle *this_ptr,int reflector_index,float delta_time);
void core_manpuz_cpp_CMansionPuzzleCircle_updateReflectorPosition_FUN_004cb980(int param_1,int param_2);
int __cdecl core_manpuz_cpp_CMansionPuzzleCircle_panelOccupied_FUN_004cba40(CMansionPuzzleCircle *this_ptr,int panel_index);
void core_manpuz_cpp_FUN_004cbad0(void);
CDemonActorType * core_manpuz_cpp_FUN_004cbaf0(void);
int * core_manpuz_cpp_FUN_004cbb00(undefined4 param_1);
void core_manpuz_cpp_FUN_004cbb50(CDemonActor *param_1);
undefined4 core_manpuz_cpp_CMirrorHack_renderOpaque_FUN_004cbb70(CDemonActor *param_1);
void core_manpuz_cpp_CMirrorHack_process_FUN_004cbbc0(CDemonActor *param_1,float param_2);
int * core_manpuz_cpp_CMirrorHack_getBoundingBox_FUN_004cbc50(int param_1,int *param_2);
undefined4 core_manpuz_cpp_FUN_004cbca0(void);
void core_manpuz_cpp_CMirrorHack_onLaserHit_FUN_004cbcb0(undefined4 param_1,int param_2);
void core_manpuz_cpp_CMirrorHack_getInteractionInfo_FUN_004cbce0(int param_1,undefined4 *param_2);
undefined4 core_manpuz_cpp_FUN_004cbd30(int param_1,undefined4 param_2);
undefined4 core_manpuz_cpp_CMirrorHack_updateInteraction_FUN_004cbd50(CDemonActor *param_1,float *param_2,int param_3);
void core_manpuz_cpp_FUN_004cbdb0(int param_1,int param_2);
CDemonActor * core_manpuz_cpp_CMirrorHack_dtor_FUN_004cbdd0(CDemonActor *param_1,byte param_2);
CDemonActor * core_manpuz_cpp_CMansionPuzzleCircle_dtor_FUN_004cbe20(CDemonActor *param_1,byte param_2);
undefined4 core_manpuz_cpp_FUN_004cbeb0(undefined4 param_1);
undefined4 core_manpuz_cpp_FUN_004cbec0(undefined4 param_1);
int core_manpuz_cpp_SGem_ctor_FUN_004cbed0(int param_1);
int * core_manpuz_cpp_SGem_dtor_FUN_004cbef0(int param_1);
undefined4 core_manpuz_cpp_FUN_004cbf10(undefined4 param_1);
undefined4 core_manpuz_cpp_FUN_004cbf20(undefined4 param_1);
void core_manpuz_cpp_copyPanel_FUN_004cbf30(undefined4 *param_1,undefined4 *param_2);
CDemonTriangle * __cdecl core_manpuz_cpp_CDemonTriangle_arrdtor_FUN_004cc000(CDemonTriangle *objs,uint flags);
void core_manpuz_cpp_FUN_004cc020(void *param_1);
void core_manpuz_cpp_FUN_004cc040(void *param_1);
void core_manpuz_cpp_FUN_004cc060(void *param_1);
void __cdecl core_marquee_cpp_staticInit_FUN_004cc080(void);
void core_marquee_cpp_FUN_004cc0b0(void);
CDemonActorType * core_marquee_cpp_FUN_004cc0d0(void);
CMarquee * __cdecl core_marquee_cpp_CMarquee_ctor_FUN_004cc0e0(CMarquee *this_ptr);
void __cdecl core_marquee_cpp_CMarquee_computeBoundingBox_FUN_004cc1b0(CMarquee *this_ptr);
void core_marquee_cpp_CMarquee_setup_FUN_004cc2e0(CMarquee *param_1);
void core_marquee_cpp_CMarquee_process_FUN_004cc320(int param_1,float param_2);
float core_marquee_cpp_FUN_004cc3d0(CDemonActor *param_1);
void __cdecl core_marquee_cpp_CMarquee_renderLightBulb_FUN_004cc440(CMarquee *this_ptr,CVector3f *position);
undefined4 core_marquee_cpp_CMarquee_renderTransparent_FUN_004cc5d0(CMarquee *param_1);
void core_marquee_cpp_FUN_004cc870(CDemonActor *param_1);
undefined4 core_marquee_cpp_FUN_004cc8f0(void);
void core_marquee_cpp_CMarquee_getBoundingBox_FUN_004cc900(int param_1,undefined4 *param_2);
CDemonActor * core_marquee_cpp_FUN_004cc960(CDemonActor *param_1,byte param_2);
void __cdecl engine_matrix_c_initializeTrigTables_FUN_004cc9d0(void);
void engine_matrix_c_FUN_004cca50(void);
int __cdecl engine_matrix_c_interpolatedSin_FUN_004cca60(uint param_1);
int engine_matrix_c_interpolatedCos_FUN_004ccaa0(uint param_1);
void __cdecl engine_matrix_c_invertTransformMatrix_FUN_004ccae0(void);
void __cdecl engine_matrix_c_buildRotationMatrix_FUN_004ccdc0(int pitch,int yaw,int roll);
void engine_matrix_c_transformWorldToView_FUN_004cd0e0(int *param_1);
int engine_matrix_c_calculateTransformedZ_FUN_004cd1b0(void);
void __cdecl engine_matrix_c_transformToCache_FUN_004cd210(int cacheIndex,CVector3i *inputPoint);
void __cdecl engine_matrix_c_projectCachedPoint_FUN_004cd240(int cacheIndex);
void __cdecl engine_matrix_c_projectTransformedPoint_FUN_004cd260(SProjectedVertex *point);
void __cdecl engine_matrix_c_projectCachedPointUnchecked_FUN_004cd300(int cache_index);
void __cdecl engine_matrix_c_matrixPushAndTransform_FUN_004cd380(int rot_x,int rot_y,int rot_z,int translate_x,int translate_y,int translate_z);
void __cdecl engine_matrix_c_matrixPush_FUN_004cdac0(void);
void __cdecl engine_matrix_c_pop_FUN_004cdbc0(void);
int engine_matrix_c_calculate3DDistance_FUN_004cdcd0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6);
int __cdecl engine_matrix_c_integerSquareRoot_FUN_004cdd30(int value);
void engine_matrix_c_normalizeVector3DFixed_FUN_004cde10(int *param_1);
int * engine_matrix_c_normalizeVector3DFloat_FUN_004cde90(int *param_1);
int engine_matrix_c_vectorLength3DToInt_FUN_004cdf70(void);
void engine_matrix_c_FUN_004cdfa0(int param_1,undefined4 param_2,int param_3);
void __cdecl engine_matrix_c_setCameraOrigin_FUN_004ce710(int x,int y,int z);
void __cdecl engine_matrix_c_setCameraRotation_FUN_004ce730(int pitch,int yaw,int roll);
void __esi engine_matrix_c_getCameraOrigin_FUN_004ce760(CVector3i *output);
void __esi engine_matrix_c_getCameraRotation_FUN_004ce790(CVector3i *output);
void __cdecl engine_matrix_c_pushViewport_FUN_004ce7c0(int x,int y,int width,int height);
void __cdecl engine_matrix_c_popViewport_FUN_004ce920(CDemonRenderer *this_ptr);
int engine_matrix_c_projectToScreen_FUN_004cea50(int param_1);
void engine_matrix_c_FUN_004ceae0(int param_1,int param_2,int param_3);
void engine_matrix_c_FUN_004ceb90(void);
void __cdecl core_melee_cpp_staticInit_FUN_004cec00(void);
void core_melee_cpp_FUN_004cec30(void);
CDemonActorType * core_melee_cpp_FUN_004cec50(void);
CWeapon * __cdecl core_melee_cpp_CMelee_ctor_FUN_004cec60(CWeapon *param_1);
void core_melee_cpp_CMelee_archive_FUN_004cedb0(CWeapon *param_1);
undefined4 core_melee_cpp_CMelee_fire_FUN_004ceed0(void);
undefined4 core_melee_cpp_FUN_004cef00(int param_1);
void core_melee_cpp_FUN_004cef30(void);
undefined4 core_melee_cpp_CMelee_canPickup_FUN_004cef40(int param_1,CDemonActor *param_2);
undefined4 core_melee_cpp_FUN_004cef70(int param_1);
void core_melee_cpp_FUN_004cef80(int param_1,undefined4 param_2,int param_3,undefined4 param_4);
void core_melee_cpp_FUN_004cefe0(int param_1,int param_2,undefined4 param_3,CDemonActor *param_4);
void __cdecl core_melee_cpp_CMelee_initBloodSpurtEffects_FUN_004cf090(int param_1,undefined4 param_2,undefined4 param_3);
void core_melee_cpp_CMelee_process_FUN_004cf0c0(CWeapon *param_1,float param_2);
void core_melee_cpp_CMelee_setWeaponState_FUN_004cf180(CWeapon *param_1,int param_2);
CWeapon * core_melee_cpp_FUN_004cf1a0(CWeapon *param_1,byte param_2);
void __cdecl core_menu_cpp_staticInit_FUN_004cf1f0(void);
void __cdecl core_menu_cpp_renderAudioSpectrumBar_FUN_004cf2b0(int x_center,int y_top,int height_half);
int __cdecl core_menu_cpp_renderMenuAndGetChoice_FUN_004cf440(char **menu_text_array,int menu_count,int *selected_index_ptr,int y_position,char *title);
void core_menu_cpp_showJoystickCalibrationScreen_FUN_004cf810(char *param_1);
int __cdecl core_menu_cpp_calibrateGamepad_FUN_004cf8d0(void);
void __cdecl core_menu_cpp_adjustMouseSensitivity_FUN_004cfbc0(int *sensitivity_value_ptr,char *window_title);
void __cdecl core_menu_cpp_showCalibrationTestPattern_FUN_004cfe50(char *message_text);
void __cdecl core_menu_cpp_showCalibrationTest_FUN_004cffa0(void);

