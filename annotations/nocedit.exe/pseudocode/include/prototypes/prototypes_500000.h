#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDemonFileManager.h"
#include "types/classes/CDemonRenderer.h"
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
#include "types/classes/CVector3i.h"
#include "types/structs/SGem.h"
#include "types/structs/SMRGLHeaderExtended.h"
#include "types/structs/SMRGLKeyframeModel.h"
#include "types/structs/SMemHead.h"
#include "types/structs/SPanel.h"
#include "types/structs/SProjectedVertex.h"
#include "types/structs/SReflector.h"
#include "types/structs/SSurfaceNormal.h"
#include "types/structs/SSurfacePackedNormal.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x500000
// =============================================================================

void core_inv_cpp_CInventory_resetInventoryDisplayTimer_FUN_00500020(CInventory * this_ptr);
void core_inv_cpp_drawWeaponIconBackground_FUN_00500050(int x1, int y1, int x2, int y2, int alpha);
void core_inv_cpp_drawItemIconBackground_FUN_005001e0(int x1, int y1, int x2, int y2, int alpha);
void core_inv_cpp_CInventory_renderSelectedItems_FUN_00500370(CInventory * this_ptr);
void core_inv_cpp_CInventory_renderAllItems_FUN_00500690(CInventory * this_ptr);
int core_inv_cpp_CInventory_checkHasMatchingKey_FUN_005013d0(CInventory * this_ptr, uint key_mask, int show_message);
void core_inv_cpp_CInventory_removeMatchingKeys_FUN_005014a0(CInventory * this_ptr, uint key_mask);
void core_inv_cpp_CInventory_toggleDetailView_FUN_00501500(CInventory * this_ptr);
void core_inv_cpp_CInventory_autoUseHealthItem_FUN_00501570(CInventory * this_ptr);
void core_keyactor_cpp_staticInit_FUN_00501620(void);
undefined core_keyactor_cpp_FUN_00501650();
undefined core_keyactor_cpp_FUN_00501680();
undefined core_keyactor_cpp_FUN_00501690();
undefined core_keyactor_cpp_FUN_005016f0();
undefined core_keyactor_cpp_FUN_00501710();
undefined core_keyactor_cpp_FUN_005017c0();
undefined core_keyactor_cpp_FUN_00501830();
void core_keyactor_cpp_CKeyActor_serialize_FUN_00501880(CKeyActor * this_ptr);
undefined core_keyactor_cpp_FUN_005018f0();
undefined core_keyactor_cpp_FUN_00501900();
undefined core_keyactor_cpp_FUN_00501920();
undefined core_keyactor_cpp_FUN_00501940();
undefined core_keyactor_cpp_FUN_00501990();
undefined core_keyactor_cpp_FUN_005019b0();
void engine_keyframe_c_calculatePackedSurfaceNormal_FUN_00501a00(CVector3i * vertex_data, SSurfacePackedNormal * data);
void engine_keyframe_c_calculateSurfaceNormal_FUN_00501bc0(CVector3i * vertex_data, SSurfaceNormal * output);
void engine_keyframe_c_loadAndInterpolateKeyframes_FUN_00501d40(SMRGLKeyframeModel * keyframe_model);
SMRGLHeaderExtended * engine_keyframe_c_interpolateCubicKeyframes_FUN_00501f30(SMRGLHeaderExtended * header);
void engine_keyframe_c_recomputeKeyFrameNormals_FUN_00502320(void);
void engine_keys_cpp_staticInit_FUN_00502410(void);
int engine_keys_cpp_CKeys_getKeyState_FUN_00502420(CKeys * this_ptr, int key_code);
int engine_keys_cpp_CKeys_getAndClearKeyState_FUN_00502430(CKeys * this_ptr, int key_code);
void engine_keys_cpp_CKeys_clearKeypresses_FUN_00502450(void);
int engine_keys_cpp_CKeys_getInputKey_FUN_00502460(CKeys * this_ptr);
int engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(CKeys * this_ptr);
void engine_keys_cpp_CKeys_setKeyAsPressed_FUN_00502490(CKeys * this_ptr, int key_code);
void engine_keys_cpp_CKeys_clearKeyPressState_FUN_005024a0(CKeys * this_ptr, int key_code);
void engine_keys_cpp_CKeys_toggleInputMask_FUN_005024b0(CKeys * this_ptr, int enable_extended);
CDemonActorType * core_ladder_cpp_staticInit_FUN_005024d0(void);
undefined core_ladder_cpp_FUN_00502500();
undefined core_ladder_cpp_FUN_00502530();
CLadder * core_ladder_cpp_FUN_00502540(CLadder * this_ptr);
undefined core_ladder_cpp_FUN_005025f0();
undefined core_ladder_cpp_FUN_00502610();
undefined core_ladder_cpp_FUN_00502620();
undefined core_ladder_cpp_FUN_005028c0();
undefined core_ladder_cpp_CLadder_load_FUN_005029c0();
undefined core_ladder_cpp_FUN_00502a40();
undefined core_ladder_cpp_FUN_00502a70();
undefined core_ladder_cpp_FUN_00502b80();
undefined core_ladder_cpp_FUN_00502c90();
undefined core_ladder_cpp_FUN_00502ca0();
undefined core_ladder_cpp_FUN_00502d00();
undefined core_ladder_cpp_FUN_00502e50();
undefined core_ladder_cpp_FUN_00502e90();
undefined core_ladder_cpp_FUN_00502eb0();
CLadder * core_ladder_cpp_FUN_00502ed0(CLadder * this_ptr, uint d1, uint d2);
CDemonActorType * core_larva_cpp_staticInit_FUN_00502f20(void);
undefined core_larva_cpp_FUN_00502f50();
undefined core_larva_cpp_FUN_00502f80();
CLarva * core_larva_cpp_FUN_00502f90(CLarva * this_ptr);
undefined core_larva_cpp_FUN_00503020();
undefined core_larva_cpp_FUN_00503080();
undefined core_larva_cpp_CLarva_load_FUN_00503960();
undefined core_larva_cpp_FUN_005039d0();
undefined core_larva_cpp_FUN_00503a20();
undefined core_larva_cpp_FUN_00503c00();
undefined core_larva_cpp_FUN_00503c50();
undefined core_larva_cpp_FUN_00503c90();
CDemonActor * core_larva_cpp_FUN_00503cc0(CLarva * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8);
void core_level_cpp_staticInit_FUN_00503d80(void);
void core_level_cpp_CLevelLoader_reset_FUN_00503db0(CLevelLoader * this_ptr);
void core_level_cpp_CLevelLoader_show_FUN_00503dc0(CLevelLoader * this_ptr, int total_frames, int use_custom_viewport, int image_variant);
void core_level_cpp_CLevelLoader_update_FUN_00504160(CLevelLoader * this_ptr, char * text, int clear_screen);
void core_level_cpp_CLevelLoader_cleanup_FUN_00504720(CLevelLoader * this_ptr);
void core_level_cpp_CLevelLoader_setVersion_FUN_00504750(CLevelLoader * this_ptr, int value);
CDemonActorType * core_lever_cpp_staticInit_FUN_00504760(void);
undefined core_lever_cpp_FUN_00504790();
undefined core_lever_cpp_FUN_005047c0();
CLever * core_lever_cpp_FUN_005047d0(CLever * this_ptr);
undefined core_lever_cpp_FUN_005048a0();
undefined core_lever_cpp_FUN_00504920();
undefined core_lever_cpp_FUN_00504b20();
undefined core_lever_cpp_FUN_00504c90();
undefined core_lever_cpp_FUN_00504cf0();
undefined core_lever_cpp_FUN_00504d80();
undefined core_lever_cpp_FUN_00504dd0();
undefined core_lever_cpp_CLever_load_FUN_00504e80();
undefined core_lever_cpp_FUN_00505060();
undefined core_lever_cpp_FUN_00505080();
undefined core_lever_cpp_FUN_00505100();
undefined core_lever_cpp_FUN_00505160();
undefined core_lever_cpp_FUN_005051a0();
undefined core_lever_cpp_FUN_00505210();
undefined core_lever_cpp_FUN_00505240();
undefined core_lever_cpp_FUN_00505370();
undefined core_lever_cpp_FUN_00505390();
CLever * core_lever_cpp_FUN_00505430(CLever * this_ptr, uint d1, uint d2);
void engine_light_cpp_doNothing_FUN_00505480(void);
void engine_light_cpp_setAmbientLightLevel_FUN_00505490(int light_level);
int engine_light_cpp_getAmbientLightLevel_FUN_005054c0(void);
void engine_light_cpp_setDirectionalLightVector_FUN_005054d0(int dir_x, int dir_y, int dir_z);
void engine_light_cpp_setSpecularEnabled_FUN_00505500(int enabled);
void engine_light_cpp_setLightingMultipliers_FUN_00505510(int diffuse_multiplier, int specular_multiplier);
int engine_light_cpp_calculatePhongLighting_FUN_00505530(int world_x, int world_y, int world_z);
int engine_light_cpp_calculateLighting_FUN_00505780(int normal_x, int normal_y, int normal_z);
int engine_light_cpp_calculateVertexLighting_FUN_00505830(int unused_param, CVector3i * vertex_position);
void engine_light_cpp_calculateAndStoreVertexLight_FUN_00505850(int vertex_index, CVector3i * vertex_position);
CDemonActorType * core_lightgun_cpp_staticInit_FUN_00505890(void);
undefined core_lightgun_cpp_FUN_005058c0();
undefined core_lightgun_cpp_FUN_005058f0();
CLightGun * core_lightgun_cpp_FUN_00505900(CLightGun * this_ptr);
undefined core_lightgun_cpp_FUN_005059c0();
undefined core_lightgun_cpp_FUN_00505a20();
undefined core_lightgun_cpp_FUN_00505ac0();
undefined core_lightgun_cpp_FUN_00505b70();
undefined core_lightgun_cpp_FUN_00505c70();
undefined core_lightgun_cpp_ChargedRadianceEmitterGunMaybe_FUN_00506450();
undefined core_lightgun_cpp_FUN_00506670();
undefined core_lightgun_cpp_FUN_005066b0();
undefined core_lightgun_cpp_FUN_005066f0();
CLightGun * core_lightgun_cpp_FUN_00506a50(CLightGun * this_ptr, uint d1, uint d2);
CDemonActorType * core_litecone_cpp_staticInit_FUN_00506aa0(void);
undefined core_litecone_cpp_FUN_00506ad0();
undefined core_litecone_cpp_FUN_00506b00();
CLightCone * core_litecone_cpp_FUN_00506b10(CLightCone * this_ptr);
undefined core_litecone_cpp_FUN_00506bb0();
undefined core_litecone_cpp_FUN_00506bc0();
undefined core_litecone_cpp_FUN_00506c20();
undefined core_litecone_cpp_FUN_00506cb0();
undefined core_litecone_cpp_FUN_00506d00();
undefined core_litecone_cpp_FUN_00506d90();
undefined core_litecone_cpp_FUN_00506da0();
CLightCone * core_litecone_cpp_FUN_00506e30(CLightCone * this_ptr, uint d1, uint d2);
void core_main_c_staticInit_FUN_00506e80(void);
void core_main_c_displayErrorAndQuit_FUN_00506f10(char * format, ...);
int core_main_c_showLicenseAgreement_FUN_005070f0(void);
void core_main_c_showDeveloperToolsMenu_FUN_005073a0(void);
int core_main_c_enterMainGameMenu_FUN_00512f40(void);
void core_main_c_initializeGameSystems_FUN_00507a60(void);
void core_main_c_drawCenteredText_FUN_00508250(char * text, int y_pos, int color);
void core_main_c_waitWithSkip_FUN_005082a0(int duration_ms);
void core_main_c_showPromoScreen_FUN_00508340(void);
undefined core_main_c_finalizeGameSystems_FUN_00508570();
CDemonFileManager * core_fileman_cpp_CDemonFileManager_ctor_FUN_00508860(CDemonFileManager * this_ptr);
CDemonFileManager * core_fileman_cpp_CDemonFileManager_dtor_FUN_00508880(CDemonFileManager * this_ptr);
CDemonActorType * core_manpuz_cpp_staticInit_FUN_00508890(void);
undefined core_manpuz_cpp_FUN_005088e0();
undefined core_manpuz_cpp_FUN_00508910();
CMansionPuzzleCircle * core_manpuz_cpp_FUN_00508920(CMansionPuzzleCircle * this_ptr);
undefined core_manpuz_cpp_FUN_00508a70();
undefined core_manpuz_cpp_FUN_005090d0();
undefined core_manpuz_cpp_FUN_005091d0();
undefined core_manpuz_cpp_FUN_005092e0();
undefined core_manpuz_cpp_FUN_00509320();
undefined core_manpuz_cpp_FUN_00509330();
undefined core_manpuz_cpp_FUN_00509720();
undefined core_manpuz_cpp_FUN_005097d0();
undefined core_manpuz_cpp_FUN_005097e0();
undefined core_manpuz_cpp_FUN_005098f0();
undefined core_manpuz_cpp_FUN_00509b20();
undefined core_manpuz_cpp_FUN_00509bf0();
undefined core_manpuz_cpp_FUN_00509c60();
undefined core_manpuz_cpp_FUN_00509d50();
undefined core_manpuz_cpp_FUN_0050a1f0();
undefined core_manpuz_cpp_CMansionPuzzleCircle_processPanel_FUN_0050a290();
undefined core_manpuz_cpp_FUN_0050a420();
undefined core_manpuz_cpp_FUN_0050a490();
undefined core_manpuz_cpp_FUN_0050a4f0();
undefined core_manpuz_cpp_FUN_0050a610();
undefined core_manpuz_cpp_FUN_0050a8d0();
undefined core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_0050aba0();
undefined core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_0050ad40();
undefined core_manpuz_cpp_CMansionPuzzleCircle_load_FUN_0050adf0();
undefined core_manpuz_cpp_FUN_0050aee0();
undefined core_manpuz_cpp_FUN_0050aef0();
undefined core_manpuz_cpp_FUN_0050af00();
undefined core_manpuz_cpp_FUN_0050af80();
undefined core_manpuz_cpp_CMansionPuzzleCircle_panelOccupied_FUN_0050b040();
undefined core_manpuz_cpp_FUN_0050b0d0();
undefined core_manpuz_cpp_FUN_0050b100();
CMirrorHack * core_manpuz_cpp_FUN_0050b110(CMirrorHack * this_ptr);
undefined core_manpuz_cpp_FUN_0050b160();
undefined core_manpuz_cpp_FUN_0050b180();
undefined core_manpuz_cpp_FUN_0050b1d0();
undefined core_manpuz_cpp_FUN_0050b260();
undefined core_manpuz_cpp_FUN_0050b2b0();
undefined core_manpuz_cpp_FUN_0050b2c0();
undefined core_manpuz_cpp_FUN_0050b2f0();
undefined core_manpuz_cpp_FUN_0050b340();
undefined core_manpuz_cpp_FUN_0050b360();
undefined core_manpuz_cpp_FUN_0050b3c0();
undefined core_manpuz_cpp_FUN_0050b3e0();
undefined core_manpuz_cpp_FUN_0050b440();
undefined core_manpuz_cpp_FUN_0050b7d0();
undefined core_manpuz_cpp_FUN_0050b810();
CMirrorHack * core_manpuz_cpp_FUN_0050b840(CMirrorHack * this_ptr, uint d1, uint d2);
CMansionPuzzleCircle * core_manpuz_cpp_FUN_0050b890(CMansionPuzzleCircle * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5);
SReflector * core_manpuz_cpp_FUN_0050b920(SReflector * this_ptr);
SReflector * core_manpuz_cpp_FUN_0050b930(SReflector * this_ptr);
SGem * core_manpuz_cpp_FUN_0050b940(SGem * this_ptr);
SGem * core_manpuz_cpp_FUN_0050b960(SGem * this_ptr);
SPanel * core_manpuz_cpp_FUN_0050b980(SPanel * this_ptr);
SPanel * core_manpuz_cpp_FUN_0050b990(SPanel * this_ptr);
undefined core_manpuz_cpp_FUN_0050b9a0();
undefined core_manpuz_cpp_FUN_0050ba70();
undefined core_manpuz_cpp_FUN_0050ba90();
undefined core_manpuz_cpp_FUN_0050bab0();
undefined core_manpuz_cpp_FUN_0050bad0();
CDemonActorType * core_marquee_cpp_staticInit_FUN_0050baf0(void);
undefined core_marquee_cpp_FUN_0050bb20();
undefined core_marquee_cpp_FUN_0050bb50();
CMarquee * core_marquee_cpp_FUN_0050bb60(CMarquee * this_ptr);
undefined core_marquee_cpp_FUN_0050bc30();
undefined core_marquee_cpp_FUN_0050bd60();
undefined core_marquee_cpp_FUN_0050bda0();
undefined core_marquee_cpp_FUN_0050be50();
undefined core_marquee_cpp_FUN_0050bec0();
undefined core_marquee_cpp_FUN_0050c050();
undefined core_marquee_cpp_CMarquee_load_FUN_0050c2f0();
undefined core_marquee_cpp_FUN_0050c370();
undefined core_marquee_cpp_FUN_0050c380();
undefined core_marquee_cpp_FUN_0050c3e0();
undefined core_marquee_cpp_FUN_0050c480();
CMarquee * core_marquee_cpp_FUN_0050c4c0(CMarquee * this_ptr, uint d1, uint d2, uint d3);
void engine_matrix_c_initializeTrigTables_FUN_0050c530(void);
void engine_matrix_c_doNothing_FUN_0050c5b0(void);
int engine_matrix_c_interpolatedSin_FUN_0050c5c0(ushort angle);
int engine_matrix_c_interpolatedCos_FUN_0050c600(ushort angle);
void engine_matrix_c_invertTransformMatrix_FUN_0050c640(void);
void engine_matrix_c_buildRotationMatrix_FUN_0050c920(ushort pitch, ushort yaw, ushort roll);
void engine_matrix_c_transformWorldToView_FUN_0050cc40(int * input_coords, int * output_coords);
int engine_matrix_c_calculateTransformedZ_FUN_0050cd10(int * input_coords);
void engine_matrix_c_transformToCache_FUN_0050cd70(int cacheIndex, CVector3i * inputPoint);
void engine_matrix_c_projectCachedPoint_FUN_0050cda0(int cacheIndex);
void engine_matrix_c_projectTransformedPoint_FUN_0050cdc0(SProjectedVertex * point);
void engine_matrix_c_projectCachedPointUnchecked_FUN_0050ce60(int cacheIndex);
void engine_matrix_c_matrixPushAndTransform_FUN_0050cee0(ushort rotX, ushort rotY, ushort rotZ, int translateX, int translateY, int translateZ);
void engine_matrix_c_matrixPush_FUN_0050d620(void);
void engine_matrix_c_pop_FUN_0050d720(void);
int engine_matrix_c_calculate3DDistance_FUN_0050d830(int x1, int y1, int z1, int x2, int y2, int z2);
int engine_matrix_c_integerSquareRoot_FUN_0050d890(int value);
void engine_matrix_c_normalizeVector3DFixed_FUN_0050d970(CVector3i vector);
CVector3i * engine_matrix_c_normalizeVector3DFloat_FUN_0050d9f0(CVector3i * inputVector);
int engine_matrix_c_vectorLength3DToInt_FUN_0050dad0(CVector3i * vector_ptr);
void engine_matrix_c_matrixPushAndTransform_FUN_0050db00(int rotation_x, int rotation_y, int rotation_z);
void engine_matrix_c_setCameraOrigin_FUN_0050e270(int x, int y, int z);
void engine_matrix_c_setCameraRotation_FUN_0050e290(ushort pitch, ushort yaw, ushort roll);
void engine_matrix_c_getCameraOrigin_FUN_0050e2c0(CVector3i * output);
void engine_matrix_c_getCameraRotation_FUN_0050e2f0(CVector3i * output);
void engine_matrix_c_pushViewport_FUN_0050e320(int x, int y, int width, int height);
void engine_matrix_c_popViewport_FUN_0050e480(CDemonRenderer * this_ptr);
int engine_matrix_c_projectToScreen_FUN_0050e5b0(int input_value);
void engine_matrix_c_pushMatrixRelativeOffset_FUN_0050e640(int offset_x, int offset_y, int offset_z);
void engine_matrix_c_popMatrixRelativeOffset_FUN_0050e6f0(void);
CDemonActorType * core_melee_cpp_staticInit_FUN_0050e760(void);
undefined core_melee_cpp_FUN_0050e790();
undefined core_melee_cpp_FUN_0050e7c0();
CMelee * core_melee_cpp_FUN_0050e7d0(CMelee * this_ptr);
undefined core_melee_cpp_CMelee_load_FUN_0050e920();
undefined core_melee_cpp_CMelee_fire_FUN_0050ea40();
undefined core_melee_cpp_FUN_0050ea70();
undefined core_melee_cpp_FUN_0050eaa0();
undefined core_melee_cpp_FUN_0050eab0();
undefined core_melee_cpp_FUN_0050eae0();
undefined core_melee_cpp_FUN_0050eaf0();
undefined core_melee_cpp_FUN_0050eb50();
undefined core_melee_cpp_FUN_0050ebe0();
undefined core_melee_cpp_FUN_0050ec10();
undefined core_melee_cpp_FUN_0050ecd0();
undefined core_melee_cpp_FUN_0050ecf0();
CMelee * core_melee_cpp_FUN_0050edf0(CMelee * this_ptr, uint d1, uint d2);
void shape_memdbg_cpp_staticInit_FUN_0050ee40(void);
void shape_memdbg_cpp_acquireDebugMutex_FUN_0050ee5e(void);
void shape_memdbg_cpp_releaseDebugMutex_FUN_0050ee90(void);
void shape_memdbg_cpp_SMemHead_recordSourceFile_FUN_0050eea0(SMemHead * header, char * source_filename);
void shape_memdbg_cpp_SMemHead_add_FUN_0050eef0(SMemHead * header);
void shape_memdbg_cpp_SMemHead_remove_FUN_0050ef20(SMemHead * header);
SMemHead * shape_memdbg_cpp_getMemoryHeaderFromPtr_FUN_0050efa0(void * user_ptr);
void shape_memdbg_cpp_SMemHead_checkAllMemory_FUN_0050efe0(char * filename, int context);
void shape_memdbg_cpp_SMemHead_checkMemory_FUN_0050f020(SMemHead * header, char * filename, int line_number);
void shape_memdbg_cpp_traceMemory_FUN_0050f150(char * format, ...);
void shape_memdbg_cpp_traceFile_FUN_0050f180(char * format, ...);
void * shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number);
void * shape_memdbg_cpp_debugAlloc_FUN_0050f1d0(int size);
void * shape_memdbg_cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number);
void shape_memdbg_cpp_debugFree_FUN_0050f210(void * ptr);
void * shape_memdbg_cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number);
void * shape_memdbg_cpp_debugCalloc_FUN_0050f350(SIZE_T count, SIZE_T size, char * filename, int line_number);
void shape_memdbg_cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number);
void * shape_memdbg_cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number);
void shape_memdbg_cpp_debugMemdump_FUN_0050f6c0(FILE * output_file);
FILE * shape_memdbg_cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, int line_number);
int shape_memdbg_cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number);
CLeakChecker * shape_memdbg_cpp_CLeakChecker_ctor_FUN_0050fba0(CLeakChecker * this_ptr);
CLeakChecker * shape_memdbg_cpp_CLeakChecker_dtor_FUN_0050fbc0(CLeakChecker * this_ptr, uint d1, uint d2, uint d3, uint d4);
void core_menu_cpp_staticInit_FUN_0050fdb0(void);
void core_menu_cpp_cleanupMenuTransition_FUN_0050fe60(void);
void core_menu_cpp_renderAudioSpectrumBar_FUN_0050fe70(int x_center, int y_top, int height_half);

