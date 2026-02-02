#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CBitFont.h"
#include "types/classes/CDeformableModelInstance.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CFrankenstienMachine.h"
#include "types/classes/CGabriella.h"
#include "types/classes/CGame.h"
#include "types/structs/SHardwareEdge.h"
#include "types/structs/SPlayerControl.h"
#include "types/structs/SRenderVertex.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x4D0000
// =============================================================================

int __cdecl engine_font_cpp_CBitFont_wrapText_FUN_004d0010 (CBitFont *this_ptr,char *source_text,char *dest_buffer,int max_lines,int line_width, int max_pixel_width);
int __cdecl engine_font_cpp_CBitFont_getCharWidth_FUN_004d01a0(CBitFont *font,int char_code);
int __cdecl engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont *this_ptr,int char_code);
int __cdecl engine_font_cpp_CBitFont_getCharXAdvance_FUN_004d0200(CBitFont *this_ptr,int char_code);
void __cdecl engine_font_cpp_CBitFont_setCharXAdvanceRange_FUN_004d0230 (CBitFont *this_ptr,int advance_value,int start_char,int end_char);
void __cdecl engine_font_cpp_CBitFont_setFontReady_FUN_004d0290(CBitFont *this_ptr,int value);
void __cdecl engine_font_cpp_CBitFont_remapPalette_FUN_004d02a0(CBitFont *this_ptr);
int __cdecl engine_font_cpp_CBitFont_getLineSpacing_FUN_004d0480(CBitFont *this_ptr,char character);
void __cdecl engine_font_cpp_CBitFont_showFontTest_FUN_004d04b0(CBitFont *this_ptr,int screen_height);
void __cdecl engine_font_cpp_CBitFont_showExtendedFontTest_FUN_004d0850 (CBitFont *this_ptr,int screen_width,int screen_height);
uint __cdecl engine_font_cpp_packPixelScaled_FUN_004d1110(int red,int green,int blue);
uint __cdecl engine_font_cpp_packPixelNative_FUN_004d1170(int red,int green,int blue);
void __cdecl engine_3d_c_addPolygonEdge_FUN_004d11c0(SRenderVertex *vertex1,SRenderVertex *vertex2);
SHardwareEdge * __cdecl engine_3d_c_findHardwareEdgeByYMin_FUN_004d1300(int y_min,SHardwareEdge *exclude_edge);
void __cdecl engine_3d_c_rasterizePolygon_FUN_004d1340(SRenderVertex **vertices,int vertex_count);
void __cdecl core_frankgen_cpp_staticInit_FUN_004d16b0(void);
CFrankenstienMachine * __cdecl core_frankgen_cpp_factoryFunc_FUN_004d16e0(void);
CDemonActorType * __cdecl core_frankgen_cpp_FUN_004d1710(void);
CFrankenstienMachine * __cdecl core_frankgen_cpp_CFrankenstienMachine_ctor_FUN_004d1720(CFrankenstienMachine *this_ptr);
void __cdecl core_frankgen_cpp_FUN_004d17b0(void);
void __cdecl core_frankgen_cpp_CFrankenstienMachine_load_FUN_004d19e0(void);
void __cdecl core_frankgen_cpp_PlaySounds_FUN_004d1a40(void);
void __cdecl core_frankgen_cpp_FUN_004d1ec0(void);
void __cdecl core_frankgen_cpp_SoundPushPlayPopAgain_FUN_004d1f20(void);
int __cdecl core_frankgen_cpp_FUN_004d1f70(void);
float * __cdecl core_frankgen_cpp_FUN_004d20f0(void);
void __cdecl core_frankgen_cpp_LoadModel_FUN_004d2190(void);
CDemonActor * __cdecl core_frankgen_cpp_CFrankenstienMachine_findLeader_FUN_004d2330(void);
void __cdecl core_frankgen_cpp_FUN_004d23a0(void);
void __cdecl core_frankgen_cpp_CFrankenstienMachine_setCourseFrame_FUN_004d2430(void);
int __cdecl core_frankgen_cpp_FUN_004d24f0(void);
void __cdecl core_frankgen_cpp_FUN_004d2500(void);
void __cdecl core_frankgen_cpp_FUN_004d2560(void);
void __cdecl core_frankgen_cpp_FUN_004d25f0(void);
void __cdecl core_frankgen_cpp_FUN_004d2740(void);
int __cdecl core_frankgen_cpp_FUN_004d2770(void);
int __cdecl core_frankgen_cpp_FUN_004d2880(void);
int __cdecl core_frankgen_cpp_FUN_004d2890(void);
CFrankenstienMachine * __cdecl core_frankgen_cpp_CFrankenstienMachine_dtor_FUN_004d28a0 (CFrankenstienMachine *this_ptr,uint d1,uint d2,uint d3);
void __cdecl core_gabriela_cpp_staticInit_FUN_004d2910(void);
float __cdecl core_gabriela_cpp_FUN_004d29f0(void);
float __cdecl core_gabriela_cpp_FUN_004d2a30(void);
float __cdecl core_gabriela_cpp_FUN_004d2a80 (int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance, CDeformableModelInstance *instance);
CGabriella * __cdecl core_gabriela_cpp_factoryFunc_FUN_004d2ae0(void);
CDemonActorType * __cdecl core_gabriela_cpp_FUN_004d2b10(void);
CGabriella * __cdecl core_gabriela_cpp_CGabriella_ctor_FUN_004d2b20(CGabriella *this_ptr);
void __cdecl core_gabriela_cpp_CGabriella_setup_FUN_004d2c40(CGabriella *this_ptr);
void __cdecl core_gabriela_cpp_CGabriella_process_FUN_004d2ea0(CGabriella *this_ptr,float delta_time);
void __cdecl core_gabriela_cpp_FUN_004d4190(void);
void __cdecl core_gabriela_cpp_CGabriella_FUN_004d4890(CGabriella *this_ptr);
int __cdecl core_gabriela_cpp_FUN_004d4c90(void);
int __cdecl core_gabriela_cpp_FUN_004d4ce0(void);
float * __cdecl core_gabriela_cpp_FUN_004d4cf0(void);
void __cdecl core_gabriela_cpp_FUN_004d4d80(void);
void __cdecl core_gabriela_cpp_FUN_004d5550(void);
int __cdecl core_gabriela_cpp_PickupSomething_FUN_004d5870(void);
void __cdecl core_gabriela_cpp_CGabriella_FUN_004d5c10(CGabriella *this_ptr);
int __cdecl core_gabriela_cpp_FUN_004d5c60(void);
int __cdecl core_gabriela_cpp_FUN_004d5f70(void);
void __cdecl core_gabriela_cpp_FUN_004d5fe0(void);
int __cdecl core_gabriela_cpp_FUN_004d6050(void);
void __cdecl core_gabriela_cpp_CGabriella_load_FUN_004d6090(void);
int __cdecl core_gabriela_cpp_CGabriella_renderOpaque_FUN_004d6140(CGabriella *this_ptr);
int __cdecl core_gabriela_cpp_CGabriella_renderTransparent_FUN_004d6230(CGabriella *this_ptr);
int __cdecl core_gabriela_cpp_FUN_004d6260(void);
void __cdecl core_gabriela_cpp_FUN_004d6540(void);
void __cdecl core_gabriela_cpp_CGabriella_FUN_004d6b30(CGabriella *this_ptr);
void __cdecl core_gabriela_cpp_FUN_004d6d40(void);
void __cdecl core_gabriela_cpp_FUN_004d6f80(void);
void __cdecl core_gabriela_cpp_CGabriella_FUN_004d7120(CGabriella *this_ptr);
bool __cdecl core_gabriela_cpp_FUN_004d7590(void);
void __cdecl core_gabriela_cpp_FUN_004d75b0(void);
void __cdecl core_gabriela_cpp_FUN_004d75e0(void);
void __cdecl core_gabriela_cpp_FUN_004d7610(void);
void __cdecl core_gabriela_cpp_FUN_004d7630(void);
int __cdecl core_gabriela_cpp_FUN_004d7650(void);
CGabriella * __cdecl core_gabriela_cpp_freeMaybe_FUN_004d7660(CGabriella *this_ptr,uint d1,uint d2,uint d3);
void __cdecl core_game_cpp_staticInit_FUN_004d76d0(void);
void __cdecl core_game_cpp_PleaseEnterValidInteger_FUN_004d7730(void);
void __cdecl core_game_cpp_FUN_004d7810(void);
CGame * __cdecl core_game_cpp_CGame_ctor_FUN_004d7b40(CGame *this_ptr);
CGame * __cdecl core_game_cpp_CGame_dtor_FUN_004d7d70(CGame *this_ptr);
void __cdecl core_game_cpp_CGame_saveClockTime_FUN_004d7d80(CGame *n1,CGame *n2);
void __cdecl core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(CGame *this_ptr);
void __cdecl core_game_cpp_CGame_drawScreenBorder_FUN_004d7e50(CGame *this_ptr);
void __cdecl core_game_cpp_CGame_displayMessage_FUN_004d7f20(CGame *this_ptr,char *message,float duration);
void __cdecl core_game_cpp_CGame_FUN_004d7f80(CGame *this_ptr);
void __cdecl core_game_cpp_FUN_004d7fa0(void);
void __cdecl core_game_cpp_CGame_renderOverlay_FUN_004d8040(CGame *this_ptr);
void __cdecl core_game_cpp_CGame_FUN_004d85a0(CGame *this_ptr);
void __cdecl core_game_cpp_CGame_FUN_004d8730(CGame *this_ptr);
int __cdecl core_game_cpp_adjustFudgePosition_FUN_004d8750 (CGame *this_ptr,float delta_time,int additional_param);
void __cdecl core_game_cpp_FUN_004d8890(void);
void __cdecl core_game_cpp_FUN_004d8910(void);
void __cdecl core_game_cpp_CGame_showCustomizableKeys_FUN_004d89d0(CGame *this_ptr);
void __cdecl core_game_cpp_CGame_processFrame_FUN_004da100(CGame *this_ptr);
void __cdecl core_game_cpp_CGame_setGameRes_FUN_004dade0(CGame *this_ptr);
void __cdecl core_game_cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0(CGame *this_ptr);
int __cdecl core_game_cpp_CGame_runGameSession_FUN_004daf80(CGame *this_ptr);
void __cdecl core_game_cpp_CGame_restoreDefaultControls_FUN_004dbbc0(CGame *this_ptr);
void __cdecl core_game_cpp_CGame_playerControls_FUN_004dbd80(CGame *this_ptr);
void __cdecl core_game_cpp_CGame_resetKeyState_FUN_004dbe60(void);
void __cdecl core_game_cpp_CallToJoystickStuff_FUN_004dc230(CGame *this_ptr,int unk1,SPlayerControl *unk);
void __cdecl core_game_cpp_FUN_004dc270(void);
void __cdecl core_game_cpp_FUN_004dc2a0(void);
void __cdecl core_game_cpp_FUN_004dc2d0(void);
void __cdecl core_game_cpp_FUN_004dc370(void);
void __cdecl core_game_cpp_KeypressesAndCGame_FUN_004dc3e0(CGame *game,SPlayerControl *ctrl);
void __cdecl core_game_cpp_SettingCursorPos_FUN_004dccc0(CGame *game,SPlayerControl *ctrl);
void __cdecl core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004dce70(CGame *this_ptr);
void __cdecl core_game_cpp_SaveRelated_FUN_004dcee0(CGame *this_ptr);
int __cdecl core_game_cpp_FUN_004dd7f0(void);
void __cdecl core_game_cpp_giveHeroWeapon_FUN_004dd870(char *p1);
void __cdecl core_game_cpp_FUN_004dd930(char *p1,int p2);
void __cdecl core_game_cpp_FUN_004dd9d0(void);
void __cdecl core_game_cpp_CGame_FUN_004dda80(CGame *this_ptr);
void __cdecl core_game_cpp_CGame_processCheatCodes_FUN_004ddaf0(CGame *this_ptr);

