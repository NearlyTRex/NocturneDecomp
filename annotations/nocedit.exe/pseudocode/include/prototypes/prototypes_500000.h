#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "types/classes/CActorPropertyList.h"
#include "types/classes/CBoundingBox3D.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDemonFileManager.h"
#include "types/classes/CDemonRenderer.h"
#include "types/classes/CDemonTriangle.h"
#include "types/classes/CInventory.h"
#include "types/classes/CKeyActor.h"
#include "types/classes/CKeys.h"
#include "types/classes/CLadder.h"
#include "types/classes/CLarva.h"
#include "types/classes/CLeakChecker.h"
#include "types/classes/CLevelLoader.h"
#include "types/classes/CLever.h"
#include "types/classes/CLightCone.h"
#include "types/classes/CLightGun.h"
#include "types/classes/CMansionPuzzleCircle.h"
#include "types/classes/CMarquee.h"
#include "types/classes/CMelee.h"
#include "types/classes/CMirrorHack.h"
#include "types/classes/COrientation.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"
#include "types/structs/SCollisionInfo.h"
#include "types/structs/SGem.h"
#include "types/structs/SInteractionInfo.h"
#include "types/structs/SInteractionState.h"
#include "types/structs/SIntersectXZCylinder.h"
#include "types/structs/SMRGLHeaderExtended.h"
#include "types/structs/SMRGLKeyframeModel.h"
#include "types/structs/SMemHead.h"
#include "types/structs/SPanel.h"
#include "types/structs/SProjectedVertex.h"
#include "types/structs/SReflector.h"
#include "types/structs/SSurfaceInfo.h"
#include "types/structs/SSurfaceNormal.h"
#include "types/structs/SSurfacePackedNormal.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x500000
// =============================================================================

void __cdecl core_inv_cpp_CInventory_resetInventoryDisplayTimer_FUN_00500020(CInventory * this_ptr);
void __cdecl core_inv_cpp_drawWeaponIconBackground_FUN_00500050(int x1, int y1, int x2, int y2, int alpha);
void __cdecl core_inv_cpp_drawItemIconBackground_FUN_005001e0(int x1, int y1, int x2, int y2, int alpha);
void __cdecl core_inv_cpp_CInventory_renderSelectedItems_FUN_00500370(CInventory * this_ptr);
void __cdecl core_inv_cpp_CInventory_renderAllItems_FUN_00500690(CInventory * this_ptr);
int __cdecl core_inv_cpp_CInventory_checkHasMatchingKey_FUN_005013d0(CInventory * this_ptr, uint key_mask, int show_message);
void __cdecl core_inv_cpp_CInventory_removeMatchingKeys_FUN_005014a0(CInventory * this_ptr, uint key_mask);
void __cdecl core_inv_cpp_CInventory_toggleDetailView_FUN_00501500(CInventory * this_ptr);
void __cdecl core_inv_cpp_CInventory_autoUseHealthItem_FUN_00501570(CInventory * this_ptr);
void __cdecl core_keyactor_cpp_staticInit_FUN_00501620(void);
undefined __unknown core_keyactor_cpp_FUN_00501650();
undefined __unknown core_keyactor_cpp_FUN_00501680();
undefined __unknown core_keyactor_cpp_FUN_00501690();
undefined __unknown core_keyactor_cpp_FUN_005016f0();
undefined __unknown core_keyactor_cpp_FUN_00501710();
undefined __unknown core_keyactor_cpp_FUN_005017c0();
undefined __unknown core_keyactor_cpp_FUN_00501830();
void __cdecl core_keyactor_cpp_CKeyActor_serialize_FUN_00501880(CKeyActor * this_ptr);
undefined __unknown core_keyactor_cpp_FUN_005018f0();
undefined __unknown core_keyactor_cpp_FUN_00501900();
undefined __unknown core_keyactor_cpp_FUN_00501920();
undefined __unknown core_keyactor_cpp_FUN_00501940();
undefined __unknown core_keyactor_cpp_FUN_00501990();
undefined __unknown core_keyactor_cpp_FUN_005019b0();
void __cdecl engine_keyframe_c_calculatePackedSurfaceNormal_FUN_00501a00(CVector3i * vertex_data, SSurfacePackedNormal * data);
void __cdecl engine_keyframe_c_calculateSurfaceNormal_FUN_00501bc0(CVector3i * vertex_data, SSurfaceNormal * output);
void __cdecl engine_keyframe_c_loadAndInterpolateKeyframes_FUN_00501d40(SMRGLKeyframeModel * keyframe_model);
SMRGLHeaderExtended * __cdecl engine_keyframe_c_interpolateCubicKeyframes_FUN_00501f30(SMRGLHeaderExtended * header);
void __cdecl engine_keyframe_c_recomputeKeyFrameNormals_FUN_00502320(void);
void __cdecl engine_keys_cpp_staticInit_FUN_00502410(void);
int __cdecl engine_keys_cpp_CKeys_getKeyState_FUN_00502420(CKeys * this_ptr, int key_code);
int __cdecl engine_keys_cpp_CKeys_getAndClearKeyState_FUN_00502430(CKeys * this_ptr, int key_code);
void __cdecl engine_keys_cpp_CKeys_clearKeypresses_FUN_00502450(void);
int __cdecl engine_keys_cpp_CKeys_getInputKey_FUN_00502460(CKeys * this_ptr);
int __cdecl engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(CKeys * this_ptr);
void __cdecl engine_keys_cpp_CKeys_setKeyAsPressed_FUN_00502490(CKeys * this_ptr, int key_code);
void __cdecl engine_keys_cpp_CKeys_clearKeyPressState_FUN_005024a0(CKeys * this_ptr, int key_code);
void __cdecl engine_keys_cpp_CKeys_toggleInputMask_FUN_005024b0(CKeys * this_ptr, int enable_extended);
CDemonActorType * __cdecl core_ladder_cpp_staticInit_FUN_005024d0(void);
undefined __unknown core_ladder_cpp_FUN_00502500();
CDemonActorType * __cdecl core_ladder_cpp_CLadder_FUN_00502530(CLadder * this_ptr);
CLadder * __cdecl core_ladder_cpp_FUN_00502540(CLadder * this_ptr);
void __cdecl core_ladder_cpp_CLadder_FUN_005025f0(CLadder * this_ptr);
void __cdecl core_ladder_cpp_CLadder_FUN_00502610(CLadder * this_ptr);
int __cdecl core_ladder_cpp_CLadder_FUN_00502620(CLadder * this_ptr);
float * __cdecl core_ladder_cpp_CLadder_FUN_005028c0(CLadder * this_ptr);
void __cdecl core_ladder_cpp_CLadder_serialize_FUN_005029c0(CLadder * this_ptr);
int __cdecl core_ladder_cpp_CLadder_FUN_00502a40(CLadder * this_ptr);
undefined __unknown core_ladder_cpp_FUN_00502a70();
undefined __unknown core_ladder_cpp_FUN_00502b80();
int __cdecl core_ladder_cpp_CLadder_FUN_00502c90(CLadder * this_ptr);
void __cdecl core_ladder_cpp_CLadder_FUN_00502ca0(CLadder * this_ptr);
void __cdecl core_ladder_cpp_CLadder_FUN_00502d00(CLadder * this_ptr);
void __cdecl core_ladder_cpp_CLadder_FUN_00502e50(CLadder * this_ptr);
void __cdecl core_ladder_cpp_CLadder_FUN_00502e90(CLadder * this_ptr);
void __cdecl core_ladder_cpp_CLadder_FUN_00502eb0(CLadder * this_ptr);
CLadder * __cdecl core_ladder_cpp_CLadder_dtor_FUN_00502ed0(CLadder * this_ptr, uint d1, uint d2);
CDemonActorType * __cdecl core_larva_cpp_staticInit_FUN_00502f20(void);
undefined __unknown core_larva_cpp_FUN_00502f50();
undefined __unknown core_larva_cpp_FUN_00502f80();
CLarva * __cdecl core_larva_cpp_CLarva_ctor_FUN_00502f90(CLarva * this_ptr);
undefined __unknown core_larva_cpp_FUN_00503020();
undefined __unknown core_larva_cpp_FUN_00503080();
undefined __unknown core_larva_cpp_CLarva_load_FUN_00503960();
undefined __unknown core_larva_cpp_FUN_005039d0();
undefined __unknown core_larva_cpp_FUN_00503a20();
undefined __unknown core_larva_cpp_FUN_00503c00();
undefined __unknown core_larva_cpp_FUN_00503c50();
undefined __unknown core_larva_cpp_FUN_00503c90();
CDemonActor * __cdecl core_larva_cpp_FUN_00503cc0(CLarva * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8);
void __cdecl core_level_cpp_staticInit_FUN_00503d80(void);
void __cdecl core_level_cpp_CLevelLoader_reset_FUN_00503db0(CLevelLoader * this_ptr);
void __cdecl core_level_cpp_CLevelLoader_show_FUN_00503dc0(CLevelLoader * this_ptr, int total_frames, int use_custom_viewport, int image_variant);
void __cdecl core_level_cpp_CLevelLoader_update_FUN_00504160(CLevelLoader * this_ptr, char * text, int clear_screen);
void __cdecl core_level_cpp_CLevelLoader_cleanup_FUN_00504720(CLevelLoader * this_ptr);
void __cdecl core_level_cpp_CLevelLoader_setVersion_FUN_00504750(CLevelLoader * this_ptr, int value);
CDemonActorType * __cdecl core_lever_cpp_staticInit_FUN_00504760(void);
undefined __unknown core_lever_cpp_FUN_00504790();
undefined __unknown core_lever_cpp_FUN_005047c0();
CLever * __cdecl core_lever_cpp_FUN_005047d0(CLever * this_ptr);
undefined __unknown core_lever_cpp_FUN_005048a0();
undefined __unknown core_lever_cpp_FUN_00504920();
undefined __unknown core_lever_cpp_FUN_00504b20();
undefined __unknown core_lever_cpp_FUN_00504c90();
undefined __unknown core_lever_cpp_FUN_00504cf0();
undefined __unknown core_lever_cpp_FUN_00504d80();
undefined __unknown core_lever_cpp_FUN_00504dd0();
undefined __unknown core_lever_cpp_CLever_load_FUN_00504e80();
undefined __unknown core_lever_cpp_FUN_00505060();
undefined __unknown core_lever_cpp_FUN_00505080();
undefined __unknown core_lever_cpp_FUN_00505100();
undefined __unknown core_lever_cpp_FUN_00505160();
undefined __unknown core_lever_cpp_FUN_005051a0();
undefined __unknown core_lever_cpp_FUN_00505210();
undefined __unknown core_lever_cpp_FUN_00505240();
undefined __unknown core_lever_cpp_FUN_00505370();
undefined __unknown core_lever_cpp_FUN_00505390();
CLever * __cdecl core_lever_cpp_FUN_00505430(CLever * this_ptr, uint d1, uint d2);
void __cdecl engine_light_cpp_doNothing_FUN_00505480(void);
void __cdecl engine_light_cpp_setAmbientLightLevel_FUN_00505490(int light_level);
int __cdecl engine_light_cpp_getAmbientLightLevel_FUN_005054c0(void);
void __cdecl engine_light_cpp_setDirectionalLightVector_FUN_005054d0(int dir_x, int dir_y, int dir_z);
void __cdecl engine_light_cpp_setSpecularEnabled_FUN_00505500(int enabled);
void __cdecl engine_light_cpp_setLightingMultipliers_FUN_00505510(int diffuse_multiplier, int specular_multiplier);
int __cdecl engine_light_cpp_calculatePhongLighting_FUN_00505530(int world_x, int world_y, int world_z);
int __cdecl engine_light_cpp_calculateLighting_FUN_00505780(int normal_x, int normal_y, int normal_z);
int __cdecl engine_light_cpp_calculateVertexLighting_FUN_00505830(int unused_param, CVector3i * vertex_position);
void __cdecl engine_light_cpp_calculateAndStoreVertexLight_FUN_00505850(int vertex_index, CVector3i * vertex_position);
CDemonActorType * __cdecl core_lightgun_cpp_staticInit_FUN_00505890(void);
undefined __unknown core_lightgun_cpp_FUN_005058c0();
undefined __unknown core_lightgun_cpp_FUN_005058f0();
CLightGun * __cdecl core_lightgun_cpp_FUN_00505900(CLightGun * this_ptr);
undefined __unknown core_lightgun_cpp_FUN_005059c0();
undefined __unknown core_lightgun_cpp_FUN_00505a20();
undefined __unknown core_lightgun_cpp_FUN_00505ac0();
undefined __unknown core_lightgun_cpp_FUN_00505b70();
undefined __unknown core_lightgun_cpp_FUN_00505c70();
undefined __unknown core_lightgun_cpp_ChargedRadianceEmitterGunMaybe_FUN_00506450();
undefined __unknown core_lightgun_cpp_FUN_00506670();
undefined __unknown core_lightgun_cpp_FUN_005066b0();
undefined __unknown core_lightgun_cpp_FUN_005066f0();
CLightGun * __cdecl core_lightgun_cpp_FUN_00506a50(CLightGun * this_ptr, uint d1, uint d2);
CDemonActorType * __cdecl core_litecone_cpp_staticInit_FUN_00506aa0(void);
undefined __unknown core_litecone_cpp_FUN_00506ad0();
undefined __unknown core_litecone_cpp_FUN_00506b00();
CLightCone * __cdecl core_litecone_cpp_FUN_00506b10(CLightCone * this_ptr);
undefined __unknown core_litecone_cpp_FUN_00506bb0();
undefined __unknown core_litecone_cpp_FUN_00506bc0();
undefined __unknown core_litecone_cpp_FUN_00506c20();
undefined __unknown core_litecone_cpp_FUN_00506cb0();
undefined __unknown core_litecone_cpp_FUN_00506d00();
undefined __unknown core_litecone_cpp_FUN_00506d90();
undefined __unknown core_litecone_cpp_FUN_00506da0();
CLightCone * __cdecl core_litecone_cpp_FUN_00506e30(CLightCone * this_ptr, uint d1, uint d2);
void __cdecl core_main_c_staticInit_FUN_00506e80(void);
void __cdecl core_main_c_displayErrorAndQuit_FUN_00506f10(char * format, ...);
int __cdecl core_main_c_showLicenseAgreement_FUN_005070f0(void);
void __cdecl core_main_c_showDeveloperToolsMenu_FUN_005073a0(void);
int __cdecl core_main_c_enterMainGameMenu_FUN_00512f40(void);
void __cdecl core_main_c_initializeGameSystems_FUN_00507a60(void);
void __cdecl core_main_c_drawCenteredText_FUN_00508250(char * text, int y_pos, int color);
void __cdecl core_main_c_waitWithSkip_FUN_005082a0(int duration_ms);
void __cdecl core_main_c_showPromoScreen_FUN_00508340(void);
undefined __unknown core_main_c_finalizeGameSystems_FUN_00508570();
CDemonFileManager * __cdecl core_fileman_cpp_CDemonFileManager_ctor_FUN_00508860(CDemonFileManager * this_ptr);
CDemonFileManager * __cdecl core_fileman_cpp_CDemonFileManager_dtor_FUN_00508880(CDemonFileManager * this_ptr);
void __cdecl core_manpuz_cpp_staticInit_FUN_00508890(void);
CMansionPuzzleCircle * __cdecl core_manpuz_cpp_CMansionPuzzleCircle_factoryFunc_FUN_005088e0(void);
CDemonActorType * __cdecl core_manpuz_cpp_CMansionPuzzleCircle_getActorType_FUN_00508910(CMansionPuzzleCircle * this_ptr);
CMansionPuzzleCircle * __cdecl core_manpuz_cpp_CMansionPuzzleCircle_ctor_FUN_00508920(CMansionPuzzleCircle * this_ptr);
void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_setup_FUN_00508a70(CMansionPuzzleCircle * this_ptr);
int __cdecl core_manpuz_cpp_CMansionPuzzleCircle_renderOpaque_FUN_005090d0(CMansionPuzzleCircle * this_ptr);
void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_process_FUN_005091d0(CMansionPuzzleCircle * this_ptr, float delta_time);
CBoundingBox3D * __cdecl core_manpuz_cpp_CMansionPuzzleCircle_getBoundingBox_FUN_005092e0(CMansionPuzzleCircle * this_ptr, CBoundingBox3D * out_box);
int __cdecl core_manpuz_cpp_CMansionPuzzleCircle_hasCollision_FUN_00509320(CMansionPuzzleCircle * this_ptr, SCollisionInfo * collision_info);
float __cdecl core_manpuz_cpp_CMansionPuzzleCircle_customRayIntersect_FUN_00509330(CMansionPuzzleCircle * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction, CVector3f * out_normal);
void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_customIntersectCylinderXZ_FUN_00509720(CMansionPuzzleCircle * this_ptr, SIntersectXZCylinder * cylinder);
int __cdecl core_manpuz_cpp_CMansionPuzzleCircle_customGetFloorHeight_FUN_005097d0(CMansionPuzzleCircle * this_ptr, float x_pos, float z_pos, float * out_floor_height);
void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_getSurfaceProperties_FUN_005097e0(CMansionPuzzleCircle * this_ptr, SSurfaceInfo * surface_info);
void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_FUN_005098f0(CMansionPuzzleCircle * this_ptr);
void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_FUN_00509b20(CMansionPuzzleCircle * this_ptr);
void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_FUN_00509bf0(CMansionPuzzleCircle * this_ptr);
void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_FUN_00509c60(CMansionPuzzleCircle * this_ptr);
void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_FUN_00509d50(CMansionPuzzleCircle * this_ptr);
void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_FUN_0050a1f0(CMansionPuzzleCircle * this_ptr);
void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_processPanel_FUN_0050a290(CMansionPuzzleCircle * this_ptr);
void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_FUN_0050a420(CMansionPuzzleCircle * this_ptr);
undefined __unknown core_manpuz_cpp_FUN_0050a490();
int __cdecl core_manpuz_cpp_FUN_0050a4f0(void * ptr);
void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_FUN_0050a610(CMansionPuzzleCircle * this_ptr);
void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_FUN_0050a8d0(CMansionPuzzleCircle * this_ptr);
void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_0050aba0(CMansionPuzzleCircle * this_ptr);
void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_0050ad40(CMansionPuzzleCircle * this_ptr);
void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_serialize_FUN_0050adf0(CMansionPuzzleCircle * this_ptr);
int __cdecl core_manpuz_cpp_CMansionPuzzleCircle_FUN_0050aee0(CMansionPuzzleCircle * this_ptr);
int __cdecl core_manpuz_cpp_CMansionPuzzleCircle_FUN_0050aef0(CMansionPuzzleCircle * this_ptr);
void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_FUN_0050af00(CMansionPuzzleCircle * this_ptr);
void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_FUN_0050af80(CMansionPuzzleCircle * this_ptr);
int __cdecl core_manpuz_cpp_CMansionPuzzleCircle_panelOccupied_FUN_0050b040(CMansionPuzzleCircle * this_ptr);
CMirrorHack * __cdecl core_manpuz_cpp_CMirrorHack_factoryFunc_FUN_0050b0d0(void);
CDemonActorType * __cdecl core_manpuz_cpp_CMirrorHack_getActorType_FUN_0050b100(CMirrorHack * this_ptr);
CMirrorHack * __cdecl core_manpuz_cpp_CMirrorHack_ctor_FUN_0050b110(CMirrorHack * this_ptr);
void __cdecl core_manpuz_cpp_CMirrorHack_setup_FUN_0050b160(CMirrorHack * this_ptr);
int __cdecl core_manpuz_cpp_CMirrorHack_renderOpaque_FUN_0050b180(CMirrorHack * this_ptr);
void __cdecl core_manpuz_cpp_CMirrorHack_process_FUN_0050b1d0(CMirrorHack * this_ptr, float delta_time);
CBoundingBox3D * __cdecl core_manpuz_cpp_CMirrorHack_getBoundingBox_FUN_0050b260(CMirrorHack * this_ptr, CBoundingBox3D * out_box);
int __cdecl core_manpuz_cpp_CMirrorHack_hasCollision_FUN_0050b2b0(CMirrorHack * this_ptr, SCollisionInfo * collision_info);
void __cdecl core_manpuz_cpp_CMirrorHack_getSurfaceProperties_FUN_0050b2c0(CMirrorHack * this_ptr, SSurfaceInfo * surface_info);
void __cdecl core_manpuz_cpp_CMirrorHack_getInteractionInfo_FUN_0050b2f0(CMirrorHack * this_ptr, SInteractionInfo * out_info);
int __cdecl core_manpuz_cpp_CMirrorHack_startInteraction_FUN_0050b340(CMirrorHack * this_ptr, CDemonActor * user);
int __cdecl core_manpuz_cpp_CMirrorHack_updateInteraction_FUN_0050b360(CMirrorHack * this_ptr, COrientation * user_orientation, SInteractionState * interaction_state);
void __cdecl core_manpuz_cpp_CMirrorHack_stopUsing_FUN_0050b3c0(CMirrorHack * this_ptr, CDemonActor * user);
void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_getPropertyList_FUN_0050b3e0(CMansionPuzzleCircle * this_ptr, CActorPropertyList * property_list);
void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_processInEditor_FUN_0050b440(CMansionPuzzleCircle * this_ptr);
void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_writeDependencies_FUN_0050b7d0(CMansionPuzzleCircle * this_ptr, FILE * file_handle);
void __cdecl core_manpuz_cpp_CMirrorHack_writeDependencies_FUN_0050b810(CMirrorHack * this_ptr, FILE * file_handle);
CMirrorHack * __cdecl core_manpuz_cpp_CMirrorHack_dtor_FUN_0050b840(CMirrorHack * this_ptr, uint d1, uint d2);
CMansionPuzzleCircle * __cdecl core_manpuz_cpp_CMansionPuzzleCircle_dtor_FUN_0050b890(CMansionPuzzleCircle * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5);
SReflector * __cdecl core_manpuz_cpp_SReflector_ctor_FUN_0050b920(SReflector * this_ptr);
SReflector * __cdecl core_manpuz_cpp_SReflector_dtor_FUN_0050b930(SReflector * this_ptr);
SGem * __cdecl core_manpuz_cpp_SGem_ctor_FUN_0050b940(SGem * this_ptr);
SGem * __cdecl core_manpuz_cpp_SGem_dtor_FUN_0050b960(SGem * this_ptr);
SPanel * __cdecl core_manpuz_cpp_SPanel_ctor_FUN_0050b980(SPanel * this_ptr);
SPanel * __cdecl core_manpuz_cpp_SPanel_dtor_FUN_0050b990(SPanel * this_ptr);
undefined __unknown core_manpuz_cpp_FUN_0050b9a0();
void __cdecl core_manpuz_cpp_freeTriangles_FUN_0050ba70(CDemonTriangle * * objs);
void __cdecl core_manpuz_cpp_freePanels_FUN_0050ba90(SPanel * * objs);
void __cdecl core_manpuz_cpp_freeGems_FUN_0050bab0(SGem * * objs);
void __cdecl core_manpuz_cpp_freeReflectors_FUN_0050bad0(SReflector * * objs);
CDemonActorType * __cdecl core_marquee_cpp_staticInit_FUN_0050baf0(void);
undefined __unknown core_marquee_cpp_FUN_0050bb20();
undefined __unknown core_marquee_cpp_FUN_0050bb50();
CMarquee * __cdecl core_marquee_cpp_FUN_0050bb60(CMarquee * this_ptr);
undefined __unknown core_marquee_cpp_FUN_0050bc30();
undefined __unknown core_marquee_cpp_FUN_0050bd60();
undefined __unknown core_marquee_cpp_FUN_0050bda0();
undefined __unknown core_marquee_cpp_FUN_0050be50();
undefined __unknown core_marquee_cpp_FUN_0050bec0();
undefined __unknown core_marquee_cpp_FUN_0050c050();
undefined __unknown core_marquee_cpp_CMarquee_load_FUN_0050c2f0();
undefined __unknown core_marquee_cpp_FUN_0050c370();
undefined __unknown core_marquee_cpp_FUN_0050c380();
undefined __unknown core_marquee_cpp_FUN_0050c3e0();
undefined __unknown core_marquee_cpp_FUN_0050c480();
CMarquee * __cdecl core_marquee_cpp_FUN_0050c4c0(CMarquee * this_ptr, uint d1, uint d2, uint d3);
void __cdecl engine_matrix_c_initializeTrigTables_FUN_0050c530(void);
void __cdecl engine_matrix_c_doNothing_FUN_0050c5b0(void);
int __cdecl engine_matrix_c_interpolatedSin_FUN_0050c5c0(int angle);
int __cdecl engine_matrix_c_interpolatedCos_FUN_0050c600(int angle);
void __cdecl engine_matrix_c_invertTransformMatrix_FUN_0050c640(void);
void __cdecl engine_matrix_c_buildRotationMatrix_FUN_0050c920(int pitch, int yaw, int roll);
void __stack_esi engine_matrix_c_transformWorldToView_FUN_0050cc40(CVector3i * input_coords, CVector3i * output_coords);
int __cdecl engine_matrix_c_calculateTransformedZ_FUN_0050cd10(int * input_coords);
void __cdecl engine_matrix_c_transformToCache_FUN_0050cd70(int cacheIndex, CVector3i * inputPoint);
void __cdecl engine_matrix_c_projectCachedPoint_FUN_0050cda0(int cacheIndex);
void __cdecl engine_matrix_c_projectTransformedPoint_FUN_0050cdc0(SProjectedVertex * point);
void __cdecl engine_matrix_c_projectCachedPointUnchecked_FUN_0050ce60(int cache_index);
void __cdecl engine_matrix_c_matrixPushAndTransform_FUN_0050cee0(int rot_x, int rot_y, int rot_z, int translate_x, int translate_y, int translate_z);
void __cdecl engine_matrix_c_matrixPush_FUN_0050d620(void);
void __cdecl engine_matrix_c_pop_FUN_0050d720(void);
int __cdecl engine_matrix_c_calculate3DDistance_FUN_0050d830(int x1, int y1, int z1, int x2, int y2, int z2);
int __cdecl engine_matrix_c_integerSquareRoot_FUN_0050d890(int value);
CVector3i * __stack_esi engine_matrix_c_normalizeVector3DFixed_FUN_0050d970(CVector3i * input_vector, CVector3i * output_vector);
CVector3i * __stack_esi engine_matrix_c_normalizeVector3DFloat_FUN_0050d9f0(CVector3i * input_vector, CVector3i * output_vector);
int __cdecl engine_matrix_c_vectorLength3DToInt_FUN_0050dad0(CVector3i * vector_ptr);
void __cdecl engine_matrix_c_matrixPushAndTransform_FUN_0050db00(int rotation_x, int rotation_y, int rotation_z);
void __cdecl engine_matrix_c_setCameraOrigin_FUN_0050e270(int x, int y, int z);
void __cdecl engine_matrix_c_setCameraRotation_FUN_0050e290(int pitch, int yaw, int roll);
void __cdecl engine_matrix_c_getCameraOrigin_FUN_0050e2c0(CVector3i * output);
void __cdecl engine_matrix_c_getCameraRotation_FUN_0050e2f0(CVector3i * output);
void __cdecl engine_matrix_c_pushViewport_FUN_0050e320(int x, int y, int width, int height);
void __cdecl engine_matrix_c_popViewport_FUN_0050e480(CDemonRenderer * this_ptr);
int __cdecl engine_matrix_c_projectToScreen_FUN_0050e5b0(int input_value);
void __cdecl engine_matrix_c_pushMatrixRelativeOffset_FUN_0050e640(int offset_x, int offset_y, int offset_z);
void __cdecl engine_matrix_c_popMatrixRelativeOffset_FUN_0050e6f0(void);
CDemonActorType * __cdecl core_melee_cpp_staticInit_FUN_0050e760(void);
undefined __unknown core_melee_cpp_FUN_0050e790();
undefined __unknown core_melee_cpp_FUN_0050e7c0();
CMelee * __cdecl core_melee_cpp_FUN_0050e7d0(CMelee * this_ptr);
undefined __unknown core_melee_cpp_CMelee_load_FUN_0050e920();
undefined __unknown core_melee_cpp_CMelee_fire_FUN_0050ea40();
undefined __unknown core_melee_cpp_FUN_0050ea70();
undefined __unknown core_melee_cpp_FUN_0050eaa0();
undefined __unknown core_melee_cpp_FUN_0050eab0();
undefined __unknown core_melee_cpp_FUN_0050eae0();
undefined __unknown core_melee_cpp_FUN_0050eaf0();
undefined __unknown core_melee_cpp_FUN_0050eb50();
undefined __unknown core_melee_cpp_FUN_0050ebe0();
undefined __unknown core_melee_cpp_FUN_0050ec10();
undefined __unknown core_melee_cpp_FUN_0050ecd0();
undefined __unknown core_melee_cpp_FUN_0050ecf0();
CMelee * __cdecl core_melee_cpp_FUN_0050edf0(CMelee * this_ptr, uint d1, uint d2);
void __cdecl shape_memdbg_cpp_staticInit_FUN_0050ee40(void);
void __cdecl shape_memdbg_cpp_acquireDebugMutex_FUN_0050ee5e(void);
void __cdecl shape_memdbg_cpp_releaseDebugMutex_FUN_0050ee90(void);
void __cdecl shape_memdbg_cpp_SMemHead_recordSourceFile_FUN_0050eea0(SMemHead * header, char * source_filename);
void __cdecl shape_memdbg_cpp_SMemHead_add_FUN_0050eef0(SMemHead * header);
void __cdecl shape_memdbg_cpp_SMemHead_remove_FUN_0050ef20(SMemHead * header);
SMemHead * __cdecl shape_memdbg_cpp_getMemoryHeaderFromPtr_FUN_0050efa0(void * user_ptr);
void __cdecl shape_memdbg_cpp_SMemHead_checkAllMemory_FUN_0050efe0(char * filename, int context);
void __cdecl shape_memdbg_cpp_SMemHead_checkMemory_FUN_0050f020(SMemHead * header, char * filename, int line_number);
void __cdecl shape_memdbg_cpp_traceMemory_FUN_0050f150(char * format, ...);
void __cdecl shape_memdbg_cpp_traceFile_FUN_0050f180(char * format, ...);
void * __cdecl shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number);
void * __cdecl shape_memdbg_cpp_debugAlloc_FUN_0050f1d0(int size);
void * __cdecl shape_memdbg_cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number);
void __cdecl shape_memdbg_cpp_debugFree_FUN_0050f210(void * ptr);
void * __cdecl shape_memdbg_cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number);
void * __cdecl shape_memdbg_cpp_debugCalloc_FUN_0050f350(SIZE_T count, SIZE_T size, char * filename, int line_number);
void __cdecl shape_memdbg_cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number);
void * __cdecl shape_memdbg_cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number);
void __cdecl shape_memdbg_cpp_debugMemdump_FUN_0050f6c0(FILE * output_file);
FILE * __cdecl shape_memdbg_cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, int line_number);
int __cdecl shape_memdbg_cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number);
CLeakChecker * __cdecl shape_memdbg_cpp_CLeakChecker_ctor_FUN_0050fba0(CLeakChecker * this_ptr);
CLeakChecker * __cdecl shape_memdbg_cpp_CLeakChecker_dtor_FUN_0050fbc0(CLeakChecker * this_ptr, uint d1, uint d2, uint d3, uint d4);
void __cdecl core_menu_cpp_staticInit_FUN_0050fdb0(void);
void __cdecl core_menu_cpp_cleanupMenuTransition_FUN_0050fe60(void);
void __cdecl core_menu_cpp_renderAudioSpectrumBar_FUN_0050fe70(int x_center, int y_top, int height_half);

