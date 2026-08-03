#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdarg.h"
#include "types/classes/CBitFont.h"
#include "types/classes/CBoundingBox3D.h"
#include "types/classes/CDeformableModelInstance.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CFrankenstienMachine.h"
#include "types/classes/CGabriella.h"
#include "types/classes/CGame.h"
#include "types/classes/CInventory.h"
#include "types/classes/CMatrix3x4f.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CWeapon.h"
#include "types/enums/ECollisionType.h"
#include "types/enums/EInputCodeType.h"
#include "types/structs/SCollisionInfo.h"
#include "types/structs/SDamageInfo.h"
#include "types/structs/SHardwareEdge.h"
#include "types/structs/SPlayerInput.h"
#include "types/structs/SRenderVertex.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x490000
// =============================================================================

void __cdecl engine_font_cpp_CBitFont_loadNewBitmap_FUN_004901d0(CBitFont *this_ptr,char *filename,int width,int height,int first_char,int last_char,int load_flags);
void engine_font_cpp_FUN_00490210(CBitFont *param_1,char *param_2);
void __cdecl engine_font_cpp_CBitFont_free_FUN_00490420(CBitFont *this_ptr);
void __cdecl engine_font_cpp_CBitFont_setInitializedFlag_FUN_00490460(CBitFont *this_ptr);
void __cdecl engine_font_cpp_CBitFont_parseCharacterMetrics_FUN_00490470(CBitFont *this_ptr,int bitmap_count,int bitmap_width,int bitmap_height,int first_char);
int __cdecl engine_font_cpp_CBitFont_calculateCharacterHeight_FUN_00490920(CBitFont *this_ptr,uchar *char_bitmap,int char_width,int char_height,int bitmap_stride);
int __cdecl engine_font_cpp_CBitFont_drawText_FUN_00490980(CBitFont *this_ptr,char *text,int x,int y,int color_mode,int color_value);
int __cdecl engine_font_cpp_CBitFont_drawTextWrapper_FUN_00490af0(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *text);
int __cdecl engine_font_cpp_CBitFont_drawTextF_FUN_00490b20(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *format_string);
int __cdecl engine_font_cpp_FUN_00490b70(CBitFont *this_ptr,int x_pos,int y_pos,int color_mode,int color_value,char *format_string,va_list_t args);
int __cdecl engine_font_cpp_CBitFont_drawTextRight_FUN_00490be0(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *text);
void engine_font_cpp_FUN_00490c20(CBitFont *param_1,int param_2,int param_3,int param_4,int param_5,char *param_6);
void __cdecl engine_font_cpp_FUN_00490c70(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *format,va_list_t args);
int __cdecl engine_font_cpp_CBitFont_drawTextCenter_FUN_00490ce0(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *text);
void engine_font_cpp_FUN_00490d20(CBitFont *param_1,int param_2,int param_3,int param_4,int param_5,char *param_6);
int __cdecl engine_font_cpp_FUN_00490d70(CBitFont *this_ptr,int center_x,int y_pos,int color_mode,int color_value,char *format_string,va_list_t args);
int __cdecl engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_00490de0(CBitFont *this_ptr,int left_x,int right_x,int y,int color_mode,int color_value,char *text);
int __cdecl engine_font_cpp_CBitFont_drawTextCenterInBoundsF_FUN_00490e30(CBitFont *this_ptr,int left_x,int right_x,int y,int color_mode,int color_value,char *format_string);
int __cdecl engine_font_cpp_CBitFont_drawTextCenterInBoundsFV_FUN_00490e80(CBitFont *this_ptr,int left_x,int right_x,int y_pos,int color_mode,int color_value,char *format_string,va_list_t args);
int __cdecl engine_font_cpp_CBitFont_drawTextCenterInClip_FUN_00490ef0(CBitFont *this_ptr,int y,int color_mode,int color_value,char *text);
void __cdecl engine_font_cpp_CBitFont_printCenterF_FUN_00490f50(CBitFont *this_ptr,int y,int color_mode,int color_value,char *format);
int __cdecl engine_font_cpp_CBitFont_printCenterFV_FUN_00490f90(CBitFont *this_ptr,int y,int color_mode,int color_value,char *format_string,va_list_t args);
void __cdecl engine_font_cpp_setShadowColor_FUN_00490ff0(uint red,uint green,uint blue);
int __cdecl engine_font_cpp_getDefaultTextColor_FUN_00491140(void);
void __cdecl engine_font_cpp_setDefaultTextColor_FUN_00491150(int text_color);
void __cdecl engine_font_cpp_drawAlphaBlendedPixels_FUN_00491160(uint *dest_buffer,uchar *src_indices,uint *color_table,int pixel_count,uint blend_color);
void __cdecl engine_font_cpp_CBitFont_render3DCharacter_FUN_004911f0(CBitFont *this_ptr,int character_code,int x,int y,int right_x,int bottom_y,int color_mode);
int __cdecl engine_font_cpp_CBitFont_drawCharacter_FUN_004916c0(CBitFont *this_ptr,int character_code,int x,int y,int color_mode,int color_value);
int __cdecl engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(CBitFont *this_ptr,char *text);
int __cdecl engine_font_cpp_CBitFont_getTextHeight_FUN_00492e60(CBitFont *this_ptr,char *text_string);
int __cdecl engine_font_cpp_CBitFont_wrapText_FUN_00492f30(CBitFont *this_ptr,char *source_text,char *dest_buffer,int max_lines,int line_width,int max_pixel_width);
int __cdecl engine_font_cpp_CBitFont_getCharWidth_FUN_004930b0(CBitFont *font,int char_code);
int __cdecl engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(CBitFont *this_ptr,int char_code);
int __cdecl engine_font_cpp_CBitFont_getCharYOffset_FUN_00493110(CBitFont *this_ptr,int char_code);
void __cdecl engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_00493140(CBitFont *this_ptr,int offset_value,int start_char,int end_char);
void __cdecl engine_font_cpp_CBitFont_setFontReady_FUN_004931a0(CBitFont *this_ptr,int value);
void __cdecl engine_font_cpp_CBitFont_remapPalette_FUN_004931b0(CBitFont *this_ptr);
int __cdecl engine_font_cpp_CBitFont_getLineSpacing_FUN_00493390(CBitFont *this_ptr,char character);
void __cdecl engine_font_cpp_CBitFont_showFontTest_FUN_004933c0(CBitFont *this_ptr,int screen_height);
void __cdecl engine_font_cpp_CBitFont_showExtendedFontTest_FUN_00493760(CBitFont *this_ptr,int screen_width,int screen_height);
uint __cdecl engine_font_cpp_packPixelScaled_FUN_00494020(int red,int green,int blue);
uint __cdecl engine_font_cpp_packPixelNative_FUN_00494080(int red,int green,int blue);
void xxx_unk_c_FUN_004940d0(void);
void __cdecl engine_3d_c_addPolygonEdge_FUN_004940e0(SRenderVertex *vertex1,SRenderVertex *vertex2);
SHardwareEdge * __cdecl engine_3d_c_findHardwareEdgeByYMin_FUN_00494220(int y_min,SHardwareEdge *exclude_edge);
void __cdecl engine_3d_c_rasterizePolygonHardware_FUN_00494260(SRenderVertex **vertices,int vertex_count);
void __cdecl core_frankgen_cpp_staticInit_FUN_004945d0(void);
CFrankenstienMachine * __cdecl core_frankgen_cpp_factoryFunc_FUN_00494600(void);
CDemonActorType * __cdecl core_frankgen_cpp_CFrankenstienMachine_getActorType_FUN_00494620(CFrankenstienMachine *this_ptr);
CFrankenstienMachine * __cdecl core_frankgen_cpp_CFrankenstienMachine_ctor_FUN_00494630(CFrankenstienMachine *this_ptr);
void __cdecl core_frankgen_cpp_CFrankenstienMachine_setup_FUN_004946c0(CFrankenstienMachine *this_ptr);
void __cdecl core_frankgen_cpp_CFrankenstienMachine_archive_FUN_004948f0(CFrankenstienMachine *this_ptr);
void __cdecl core_frankgen_cpp_CFrankenstienMachine_process_FUN_00494950(CFrankenstienMachine *this_ptr,float delta_time);
int __cdecl core_frankgen_cpp_CFrankenstienMachine_accumulateParticles_FUN_00494dd0(CFrankenstienMachine *this_ptr,float emission_rate,float delta_time);
void __cdecl core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30(CFrankenstienMachine *this_ptr,float trigger_frame,char *sfx_filename);
int __cdecl core_frankgen_cpp_CFrankenstienMachine_renderOpaque_FUN_00494e80(CFrankenstienMachine *this_ptr);
CBoundingBox3D * __cdecl core_frankgen_cpp_CFrankenstienMachine_getBoundingBox_FUN_00495000(CFrankenstienMachine *this_ptr,CBoundingBox3D *out_box);
CVector3f * __cdecl core_frankgen_cpp_CFrankenstienMachine_FUN_004950a0(CFrankenstienMachine *this_ptr);
CDemonActor * __cdecl core_frankgen_cpp_findLeader_FUN_00495240(void);
void __cdecl core_frankgen_cpp_CFrankenstienMachine_setPartFrame_FUN_004952b0(CFrankenstienMachine *this_ptr,float start_frame,float end_frame);
void __cdecl core_frankgen_cpp_CFrankenstienMachine_setCourseFrame_FUN_00495340(CFrankenstienMachine *this_ptr,float start_frame,float end_frame);
ECollisionType __cdecl core_frankgen_cpp_CFrankenstienMachine_getCollisionType_FUN_00495400(CFrankenstienMachine *this_ptr,SCollisionInfo *collision_info);
undefined4 core_frankgen_cpp_FUN_00495410(void);
undefined4 core_frankgen_cpp_FUN_00495420(void);
CFrankenstienMachine * __cdecl core_frankgen_cpp_CFrankenstienMachine_dtor_FUN_00495430(CFrankenstienMachine *this_ptr,uint flags);
void __cdecl core_gabriela_cpp_staticInit_FUN_004954a0(void);
float core_gabriela_cpp_FUN_00495580(undefined4 param_1,undefined4 param_2,float param_3,int param_4);
float __cdecl core_gabriela_cpp_flashlightBlendWeightCallback_FUN_004955c0(int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance,CDeformableModelInstance *instance);
float __cdecl core_gabriela_cpp_aimRotationBlendWeightCallback_FUN_00495610(int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance,CDeformableModelInstance *model_ptr);
CGabriella * __cdecl core_gabriela_cpp_factoryFunc_FUN_00495670(void);
CDemonActorType * __cdecl core_gabriela_cpp_CGabriella_getActorType_FUN_00495690(CGabriella *this_ptr);
CGabriella * __cdecl core_gabriela_cpp_CGabriella_ctor_FUN_004956a0(CGabriella *this_ptr);
void __cdecl core_gabriela_cpp_CGabriella_setup_FUN_004957c0(CGabriella *this_ptr);
void __cdecl core_gabriela_cpp_CGabriella_process_FUN_00495a20(CGabriella *this_ptr,float delta_time);
void __cdecl core_gabriela_cpp_CGabriella_processAI_FUN_00496d10(CGabriella *this_ptr,float delta_time);
void __cdecl core_gabriela_cpp_CGabriella_processMotionEvents_FUN_00497410(CGabriella *this_ptr,float delta_time);
float __cdecl core_gabriela_cpp_CGabriella_getFlashlightMinAngle_FUN_00497810(CGabriella *this_ptr);
float __cdecl core_gabriela_cpp_CGabriella_getFlashlightMaxAngle_FUN_00497860(CGabriella *this_ptr);
CVector3f * __cdecl core_gabriela_cpp_CGabriella_getTorsoCenterPosition_FUN_00497870(CGabriella *this_ptr,CVector3f *out_position);
void __cdecl core_gabriela_cpp_CGabriella_updateWeaponAndAimAnimation_FUN_00497900(CGabriella *this_ptr);
void __cdecl core_gabriela_cpp_CGabriella_updateWeaponPosition_FUN_004980d0(CGabriella *this_ptr,float delta_time);
int __cdecl core_gabriela_cpp_CGabriella_findAndPickupNearbyObject_FUN_004983f0(CGabriella *this_ptr);
void __cdecl core_gabriela_cpp_CGabriella_collectAmmo_FUN_00498790(CGabriella *this_ptr);
int __cdecl core_gabriela_cpp_CGabriella_tryClimbLadder_FUN_004987e0(CGabriella *this_ptr);
int __cdecl core_gabriela_cpp_CGabriella_canFireWeapon_FUN_00498af0(CGabriella *this_ptr);
void __cdecl core_gabriela_cpp_CGabriella_tryFireWeapon_FUN_00498b60(CGabriella *this_ptr);
int __cdecl core_gabriela_cpp_CGabriella_tryThrowObject_FUN_00498bd0(CGabriella *this_ptr);
void __cdecl core_gabriela_cpp_CGabriella_archive_FUN_00498c10(CGabriella *this_ptr);
int __cdecl core_gabriela_cpp_CGabriella_renderOpaque_FUN_00498cc0(CGabriella *this_ptr);
int __cdecl core_gabriela_cpp_CGabriella_renderTransparent_FUN_00498db0(CGabriella *this_ptr);
float __cdecl core_gabriela_cpp_FUN_00498de0(CGabriella *this_ptr,CDemonActor *target_actor,int use_wider_fov);
void __cdecl core_gabriela_cpp_CGabriella_updateAimTracking_FUN_004990c0(CGabriella *this_ptr,float delta_time,int is_holstering);
void __cdecl core_gabriela_cpp_CGabriella_processDamage_FUN_004996b0(CGabriella *this_ptr,SDamageInfo *damage_info);
void __cdecl core_gabriela_cpp_FUN_004998c0(CGabriella *this_ptr,float delta_time,int has_carried_objects);
void core_gabriela_cpp_FUN_00499b00(CDemonActor *param_1,float param_2,float *param_3,int param_4,int param_5,CVector3f *param_6);
void __stack2_esi core_gabriela_cpp_CGabriella_getCarryObjToBodyXForm_FUN_00499ca0(CGabriella *this_ptr,int hand_index,CMatrix3x4f *out_matrix);
bool core_gabriela_cpp_CGabriella_handlePureVirtualCall_FUN_0049a110(int param_1);
void __cdecl core_gabriela_cpp_CGabriella_drawWeapon_FUN_0049a130(CGabriella *this_ptr,int drawn);
CWeapon * __cdecl core_gabriela_cpp_getSelectedWeapon_FUN_0049a160(CInventory *inventory_ptr);
CGabriella * __cdecl core_gabriela_cpp_CGabriella_dtor_FUN_0049a170(CGabriella *this_ptr,uint flags);
void __cdecl core_game_cpp_staticInit_FUN_0049a1e0(void);
void __cdecl core_game_cpp_setupMovieRecording_FUN_0049a240(void);
void core_game_cpp_FUN_0049a320(void);
CGame * __cdecl core_game_cpp_CGame_ctor_FUN_0049a650(CGame *this_ptr);
CGame * __cdecl core_game_cpp_CGame_dtor_FUN_0049a880(CGame *this_ptr,uint flags);
void __cdecl core_game_cpp_CGame_saveClockTime_FUN_0049a890(CGame *this_ptr);
void __cdecl core_game_cpp_CGame_updateDT_FUN_0049a8a0(CGame *this_ptr);
void __cdecl core_game_cpp_CGame_drawScreenBorder_FUN_0049a960(CGame *this_ptr);
void __cdecl core_game_cpp_CGame_displayMessage_FUN_0049aa30(CGame *this_ptr,char *message,float duration);
void __cdecl core_game_cpp_CGame_clearOverlay_FUN_0049aa90(CGame *this_ptr);
void __cdecl core_game_cpp_drawHealthBar_FUN_0049aab0(int x1,int y1,int x2,int y2,float fill_percent);
void __cdecl core_game_cpp_CGame_renderOverlay_FUN_0049ab50(CGame *this_ptr);
void __cdecl core_game_cpp_CGame_updateStatusDisplays_FUN_0049b0b0(CGame *this_ptr);
void __cdecl core_game_cpp_CGame_setFudgeTarget_FUN_0049b240(CGame *this_ptr,CVector3f *fudge_target,float fudge_step);
void __cdecl core_game_cpp_CGame_processFudge_FUN_0049b260(CGame *this_ptr);
void __cdecl core_game_cpp_drawCreditsLine_FUN_0049b3a0(char *text_string);
void __cdecl core_game_cpp_drawKeyBindingEntry_FUN_0049b420(EInputCodeType key_code,char *action_name);
void __cdecl core_game_cpp_CGame_showCustomizableKeys_FUN_0049b4e0(CGame *this_ptr);
void __cdecl core_game_cpp_CGame_processFrame_FUN_0049cc10(CGame *this_ptr);
void __cdecl core_game_cpp_CGame_setGameRes_FUN_0049d870(CGame *this_ptr);
void __cdecl core_game_cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_0049d960(CGame *this_ptr);
int __cdecl core_game_cpp_CGame_runGameSession_FUN_0049da10(CGame *this_ptr);
void __cdecl core_game_cpp_CGame_restoreDefaultControls_FUN_0049e610(CGame *this_ptr);
void __cdecl core_game_cpp_CGame_playerControls_FUN_0049e7d0(CGame *this_ptr);
void __cdecl core_game_cpp_CGame_resetKeyState_FUN_0049e8b0(CGame *this_ptr);
void __cdecl core_game_cpp_CGame_processJoystickControls_FUN_0049ec80(CGame *this_ptr,SPlayerInput *player_control);
void __cdecl core_game_cpp_pollKeyStateOnChange_FUN_0049ecc0(int key_index,int *output_state);
void __cdecl core_game_cpp_pollKeyEdgeTrigger_FUN_0049ecf0(int key_index,uint *out_state);
void __cdecl core_game_cpp_rampControlAxis_FUN_0049ed20(int negative_key,int positive_key,float *axis_value,float ramp_time,float max_value);
void __cdecl core_game_cpp_dampControlAxis_FUN_0049edc0(float *axis_value,float damp_time,float damp_rate);
void __cdecl core_game_cpp_CGame_processKeyboardControls_FUN_0049ee30(CGame *this_ptr,SPlayerInput *player_control);
void __cdecl core_game_cpp_CGame_processMouseControls_FUN_0049f710(CGame *this_ptr,SPlayerInput *player_control);
void __cdecl core_game_cpp_CGame_resetInputAndCenterCursor_FUN_0049f8c0(CGame *this_ptr);
void __cdecl core_game_cpp_CGame_FUN_0049f930(CGame *this_ptr);

