#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/misc.h"
#include "system/windef.h"
#include "system/wingdi.h"
#include "system/winnt.h"
#include "system/winuser.h"
#include "types/classes/CCharacter.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CEnemy.h"
#include "types/classes/CLocation.h"
#include "types/classes/CMatrix3x4f.h"
#include "types/classes/CQuaternion4f.h"
#include "types/classes/CTrigger.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CWater.h"
#include "types/classes/CWaterActor.h"
#include "types/classes/CWayPoint.h"
#include "types/classes/CWeapon.h"
#include "types/classes/CWeather.h"
#include "types/classes/CWerewolf.h"
#include "types/classes/CWinFont.h"
#include "types/classes/CZombie.h"
#include "types/enums/EInputCodeType.h"
#include "types/enums/EWeatherType.h"
#include "types/structs/SDamageInfo.h"
#include "types/structs/SRenderVertex.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x550000
// =============================================================================

undefined4 core_vessel_cpp_FUN_00550210(int param_1);
undefined4 core_vessel_cpp_CCryptVessel_renderTransparent_FUN_00550370(int param_1);
void core_vessel_cpp_FUN_005504c0(void);
void core_vessel_cpp_CCryptVessel_archive_FUN_00550540(CDemonActor *param_1);
undefined4 core_vessel_cpp_FUN_00550650(int param_1);
undefined4 * core_vessel_cpp_FUN_00550670(int param_1,undefined4 *param_2);
CDemonActor * core_vessel_cpp_FUN_005506c0(CDemonActor *param_1,byte param_2);
void __cdecl core_water_cpp_staticInit_FUN_00550730(void);
float core_water_cpp_calculateWaveHeight_FUN_00550750(void);
CWater * __cdecl core_water_cpp_CWater_ctor_FUN_005507a0(CWater *this_ptr);
undefined4 core_water_cpp_CWater_dtor_FUN_005507c0(undefined4 param_1);
void __cdecl core_water_cpp_CWater_captureTextures_FUN_005507d0(CWater *this_ptr);
void __cdecl core_water_cpp_CWater_calculateVisibleTiles_FUN_00550800(CWater *this_ptr);
void __cdecl core_water_cpp_CWater_process_FUN_00550860(CWater *this_ptr);
void __cdecl core_water_cpp_CWater_render_FUN_00550cb0(CWater *this_ptr,int render_mode);
void __cdecl core_wateract_cpp_staticInit_FUN_005511a0(void);
void core_wateract_cpp_FUN_005511f0(void);
CDemonActorType * core_wateract_cpp_FUN_00551210(void);
CWaterActor * __cdecl core_wateract_cpp_CWaterActor_ctor_FUN_00551220(CWaterActor *this_ptr);
void core_wateract_cpp_CWaterActor_setup_FUN_00551370(CWaterActor *param_1);
void __cdecl core_wateract_cpp_CWaterActor_updateWorldPositions_FUN_00551920(CWaterActor *this_ptr);
void core_wateract_cpp_FUN_005519c0(int param_1);
void core_wateract_cpp_CWaterActor_process_FUN_00551a80(float param_1,float param_2);
int core_wateract_cpp_FUN_00551c00(CDemonActor *param_1);
void core_wateract_cpp_FUN_00551e40(int param_1,float *param_2);
void core_wateract_cpp_CWaterActor_archive_FUN_00551ea0(CDemonActor *param_1);
undefined4 core_wateract_cpp_CWaterActor_getCollisionType_FUN_005520a0(undefined4 param_1,int *param_2);
undefined4 core_wateract_cpp_FUN_005520c0(void);
float core_wateract_cpp_CWaterActor_customRayIntersect_FUN_005520d0(int param_1,undefined4 param_2,undefined4 param_3,float *param_4);
void core_wateract_cpp_CWaterActor_onLaserHit_FUN_005522a0(undefined4 param_1,int param_2);
CDemonActor * core_wateract_cpp_FUN_005522d0(CDemonActor *param_1,byte param_2);
undefined4 core_wateract_cpp_FUN_00552340(undefined4 param_1);
undefined4 core_wateract_cpp_FUN_00552350(undefined4 param_1);
void core_wateract_cpp_FUN_00552360(void *param_1);
void __cdecl core_waypoint_cpp_staticInit_FUN_00552380(void);
int __cdecl core_waypoint_cpp_CWayPoint_isReachable_FUN_005523b0(CWayPoint *this_ptr,CLocation *from_location,int use_tight_bounds);
void core_waypoint_cpp_FUN_005524a0(void);
CDemonActorType * core_waypoint_cpp_FUN_005524c0(void);
void core_waypoint_cpp_FUN_005524d0(CTrigger *param_1);
void core_waypoint_cpp_CWaypoint_setup_FUN_00552510(CTrigger *param_1);
undefined4 core_waypoint_cpp_FUN_005525d0(void);
void core_waypoint_cpp_CWayPoint_archive_FUN_005525e0(CTrigger *param_1);
CWayPoint * __cdecl core_waypoint_cpp_CWayPoint_findNearestReachable_FUN_00552680(CWayPoint *this_ptr,CWayPoint *start_waypoint);
CDemonActor * core_waypoint_cpp_CWayPoint_dtor_FUN_00552830(CDemonActor *param_1,byte param_2);
undefined4 wincore_wddvmem_cpp_reinitializeDirectDraw_FUN_005528e0(void);
undefined4 wincore_wddvmem_cpp_shutdownDirectDraw_FUN_00552990(void);
void wincore_wddvmem_cpp_FUN_00552a20(void);
void wincore_wddvmem_cpp_FUN_00552af0(void);
undefined4 wincore_wddvmem_cpp_FUN_00552b40(void);
void wincore_wddvmem_cpp_FUN_00552cb0(void);
void wincore_wddvmem_cpp_initializeScanlinePointers_FUN_00552d70(void);
int __cdecl wincore_wddvmem_cpp_setScreenResolution_FUN_00552e00(int width,int height,int bits_per_pixel);
void __cdecl wincore_wddvmem_cpp_resetGraphicsSystem_FUN_00553190(void);
void __cdecl wincore_wddvmem_cpp_reinitializeGraphicsSystem_FUN_005533a0(void);
void __cdecl wincore_wddvmem_cpp_openScreenDevice_FUN_00553470(void);
void __cdecl wincore_wddvmem_cpp_closeScreenDevice_FUN_00553520(void);
int wincore_wddvmem_cpp_findMostSignificantBit_FUN_00553600(void);
void __cdecl wincore_wddvmem_cpp_analyzePixelFormat_FUN_00553620(void);
void __cdecl wincore_wddvmem_cpp_setupColorPalette_FUN_005537e0(void);
void __cdecl wincore_wddvmem_cpp_swapBuffers_FUN_00553910(void);
void __cdecl wincore_wddvmem_cpp_restoreVideoAndMinimizeWindow_FUN_00553b70(void);
void wincore_wddvmem_cpp_FUN_00553ba0(void);
void wincore_wddvmem_cpp_FUN_00553ca0(void);
void wincore_wddvmem_cpp_freeLibrary_FUN_00553d20(HMODULE param_1);
void wincore_wddvmem_cpp_FUN_00553d30(LPCSTR param_1);
FARPROC __cdecl wincore_wddvmem_cpp_getProcAddress_FUN_00553d40(HMODULE hModule,LPCSTR lpProcName);
void __cdecl core_weapon_cpp_staticInit_FUN_00553d60(void);
CWeapon * __cdecl core_weapon_cpp_CWeapon_ctor_FUN_00553d90(CWeapon *this_ptr);
CWeapon * __cdecl core_weapon_cpp_CWeapon_dtor_FUN_00553ea0(CWeapon *this_ptr,uint flags);
void __cdecl core_weapon_cpp_CWeapon_setup_FUN_00553f10(CWeapon *this_ptr);
int __cdecl core_weapon_cpp_CWeapon_renderOpaque_FUN_00553f50(CWeapon *this_ptr);
undefined4 * core_weapon_cpp_FUN_00553fe0(int param_1,undefined4 *param_2);
void __cdecl core_weapon_cpp_CWeapon_process_FUN_00554030(CWeapon *this_ptr,float delta_time);
void __cdecl core_weapon_cpp_CWeapon_archive_FUN_00554170(CWeapon *this_ptr);
undefined4 core_weapon_cpp_FUN_00554250(void);
int __cdecl core_weapon_cpp_CWeapon_canPickup_FUN_00554260(CWeapon *this_ptr,CDemonActor *picker);
void core_weapon_cpp_FUN_00554300(int param_1,undefined4 param_2);
void core_weapon_cpp_FUN_00554310(CWeapon *param_1,float *param_2);
undefined4 core_weapon_cpp_CLadder_getGroundType_FUN_005543b0(int param_1);
void core_weapon_cpp_CWeapon_updateLighting_FUN_005543c0(CDemonActor *param_1);
void __cdecl core_weapon_cpp_CWeapon_setWeaponState_FUN_00554560(CWeapon *this_ptr,int weapon_state);
void core_weapon_cpp_FUN_00554570(undefined4 param_1,undefined4 param_2);
undefined4 * core_weapon_cpp_FUN_00554590(int param_1,undefined4 *param_2);
int __cdecl core_weapon_cpp_CWeapon_fire_FUN_00554600(CWeapon *this_ptr);
bool core_weapon_cpp_FUN_00554630(int param_1);
undefined4 core_weapon_cpp_FUN_00554650(void);
void __cdecl core_weapon_cpp_CWeapon_setupPhysicsBox_FUN_00554660(CWeapon *this_ptr);
void core_weapon_cpp_CWeapon_fireProjectile_FUN_00554750(CDemonActor *param_1);
void core_weapon_cpp_FUN_00554780(void);
undefined4 core_weapon_cpp_FUN_00554910(undefined4 param_1);
undefined4 core_weapon_cpp_FUN_00554920(undefined4 param_1);
void __cdecl core_weather_cpp_staticInit_FUN_00554930(void);
CWeather * __cdecl core_weather_cpp_CWeather_ctor_FUN_00554960(CWeather *this_ptr);
void __cdecl core_weather_cpp_CWeather_update_FUN_00554980(CWeather *this_ptr);
void __cdecl core_weather_cpp_CWeather_createLightningStrike_FUN_00554d40(CWeather *this_ptr,float flash_timer,int play_sound);
void __cdecl core_weather_cpp_CWeather_createThunder_FUN_00554fd0(CWeather *this_ptr);
void __cdecl core_weather_cpp_CWeather_renderParticles_FUN_00555020(CWeather *this_ptr);
void __cdecl core_weather_cpp_CWeather_setWeatherType_FUN_00555750(CWeather *this_ptr,EWeatherType type);
void core_weather_cpp_CWeather_setOriginAndRotation_FUN_005557d0(int *param_1,float *param_2,int *param_3);
undefined4 core_weather_cpp_CWeather_dtor_FUN_005559d0(undefined4 param_1);
void core_weather_cpp_FUN_005559e0(void);
void __cdecl core_werewolf_cpp_staticInit_FUN_00555a00(void);
void core_werewolf_cpp_FUN_00555a60(void);
CDemonActorType * core_werewolf_cpp_FUN_00555a80(void);
CWerewolf * __cdecl core_werewolf_cpp_CWerewolf_ctor_FUN_00555a90(CWerewolf *this_ptr);
void core_werewolf_cpp_CWerewolf_setup_FUN_00555b40(CEnemy *param_1);
void core_werewolf_cpp_CWerewolf_process_FUN_00555c60(CWerewolf *param_1,float param_2);
void core_werewolf_cpp_CWerewolf_setWalkTarget_FUN_00557020(CCharacter *param_1,CDemonActor *param_2,float param_3,float param_4);
void __cdecl core_werewolf_cpp_CWerewolf_playHowl_FUN_00557060(CWerewolf *this_ptr);
void __cdecl core_werewolf_cpp_CWerewolf_renderEyeGlow_FUN_005570b0(CWerewolf *this_ptr,CVector3f *eye_position);
int core_werewolf_cpp_FUN_005576a0(CWerewolf *param_1);
void core_werewolf_cpp_CWerewolf_archive_FUN_00557800(CEnemy *param_1);
void core_werewolf_cpp_CWerewolf_processDamage_FUN_00557940(CWerewolf *param_1,SDamageInfo *param_2);
undefined4 core_werewolf_cpp_CWerewolf_getDeathState_FUN_00557c30(int param_1);
undefined4 core_werewolf_cpp_FUN_00557c70(int param_1,CVector3f *param_2);
void __cdecl core_werewolf_cpp_CWerewolf_processChainConstraint_FUN_00557cc0(CWerewolf *this_ptr);
CDemonActor * core_werewolf_cpp_CWerewolf_dtor_FUN_00557e90(CDemonActor *param_1,byte param_2);
CWinFont * __cdecl engine_winfont_cpp_CWinFont_ctor_FUN_00557f50(CWinFont *this_ptr,char *font_name,int font_height,int y_offset1,int y_offset2);
CWinFont * engine_winfont_cpp_CWinFont_dtor_FUN_00558000(CWinFont *param_1,byte param_2);
undefined4 engine_winfont_cpp_CWinFont_drawText_FUN_00558060(CWinFont *param_1,char *param_2,int param_3,int param_4,int param_5,int param_6);
void __cdecl engine_winfont_cpp_CWinFont_setColorAndDrawText_FUN_005580b0(CWinFont *this_ptr,HDC device_context,char *text_string,int x,int y,int foreground_color,int background_color);
int __cdecl engine_winfont_cpp_CWinFont_createTextBackground_FUN_005584d0(CWinFont *this_ptr,int width,int height);
void __cdecl engine_winfont_cpp_CWinFont_reset_FUN_005586a0(CWinFont *this_ptr);
undefined4 engine_winfont_cpp_CWinFont_getStringWidth_FUN_00558710(CWinFont *param_1,LPCSTR param_2);
int engine_winfont_cpp_CWinFont_getStringHeight_FUN_00558770(CWinFont *param_1,LPCSTR param_2);
undefined4 engine_winfont_cpp_CWinFont_getLineSpacing_FUN_005587e0(void);
void __cdecl wincore_winrun_cpp_calibrateCPUSpeed_FUN_005587f0(void);
void __watcallRegister wincore_winrun_cpp_endPeriod_FUN_00558a20(void);
int __cdecl wincore_winrun_cpp_getTime_FUN_00558a30(void);
void __cdecl wincore_winrun_cpp_clearKeypresses_FUN_00558ae0(void);
int __cdecl wincore_winrun_cpp_getNextKeypress_FUN_00558b00(void);
int __cdecl wincore_winrun_cpp_wasKeyPressed_FUN_00558b70(void);
void __cdecl wincore_winrun_cpp_enqueueInput_FUN_00558ba0(int input_value);
void wincore_winrun_cpp_FUN_00558be0(void);
void wincore_winrun_cpp_plotClippedPixel_FUN_00558c00(void);
void wincore_winrun_cpp_FUN_00558c40(void);
void __cdecl wincore_winrun_cpp_clearMouseClicks_FUN_00558d50(void);
void wincore_winrun_cpp_setCursorPosition_FUN_00558d60(int param_1,int param_2);
LRESULT wincore_winrun_cpp_FUN_00558d90(HWND param_1,uint param_2,HWND param_3,uint param_4);
void __cdecl wincore_winrun_cpp_processWindowMessages_FUN_005591c0(void);
undefined4 wincore_winrun_cpp_FUN_00559260(HMODULE param_1,undefined4 param_2,undefined4 param_3,int param_4);
void wincore_winrun_cpp_FUN_00559500(undefined4 param_1);
char * __cdecl wincore_winrun_cpp_getKeyName_FUN_00559560(EInputCodeType keycode);
HANDLE __cdecl wincore_winrun_cpp_createMutex_FUN_00559bc0(void);
int __cdecl wincore_winrun_cpp_waitForMutex_FUN_00559bd0(HANDLE mutex_handle);
int __cdecl wincore_winrun_cpp_waitForMutexTimeout_FUN_00559bf0(HANDLE mutex_handle,double timeout_seconds);
void __cdecl wincore_winrun_cpp_releaseMutex_FUN_00559c30(HANDLE mutex_handle);
HANDLE __cdecl wincore_winrun_cpp_createThread_FUN_00559c50(LPTHREAD_START_ROUTINE thread_func,LPVOID thread_param);
int __cdecl wincore_winrun_cpp_setThreadPriority_FUN_00559c80(HANDLE hThread,int priority_level);
void __cdecl wincore_winrun_cpp_sleep_FUN_00559cc0(double seconds);
void wincore_winrun_cpp_getRegistryStringValue_FUN_00559d20(void);
void __cdecl wincore_winrun_cpp_setRegistryStringValue_FUN_00559da0(char *key_path,char *value_name,char *value_data);
void __cdecl wincore_winrun_cpp_initJoystick_FUN_00559e20(void);
void wincore_winrun_cpp_FUN_00559e90(void);
void __cdecl wincore_winrun_cpp_getJoystickState_FUN_00559eb0(void);
void wincore_winvideo_cpp_positionMovieWindow_FUN_0055a010(HWND param_1);
void __cdecl wincore_winvideo_cpp_closeMovie_FUN_0055a1c0(HWND window_handle);
void wincore_winvideo_cpp_openMovie_FUN_0055a210(HWND param_1,undefined4 param_2);
void wincore_winvideo_cpp_toggleMoviePlayback_FUN_0055a4a0(HWND param_1,uint param_2);
undefined4 wincore_winvideo_cpp_FUN_0055a510(undefined4 param_1,undefined4 param_2);
CVector3f * __cdecl core_xform_cpp_transformVector3x4_FUN_0055a8b0(CVector3f *output_vector,CVector3f *input_vector,CMatrix3x4f *matrix);
CVector3f * __cdecl core_xform_cpp_transformVector3x4InPlace_FUN_0055a910(CVector3f *input_output_vector,CMatrix3x4f *matrix);
float * core_xform_cpp_transformVector3x3_FUN_0055a9a0(void);
void core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(float *param_1,float *param_2);
undefined4 * core_xform_cpp_multiplyMatrix3x4InPlace_FUN_0055abb0(undefined4 *param_1,undefined4 param_2);
void core_xform_cpp_setIdentityMatrix3x4_FUN_0055abf0(undefined4 *param_1);
void __cdecl core_xform_cpp_setRotationScaleIdentity_FUN_0055ac80(CMatrix3x4f *matrix);
void core_xform_cpp_normalizeMatrix_FUN_0055acd0(float *param_1);
void core_xform_cpp_clearTranslation_FUN_0055ae60(int param_1);
void __cdecl core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80(CMatrix3x4f *output_matrix,CVector3f *position,CVector3f *euler_angles);
void core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0(float *param_1,float *param_2,float *param_3);
float core_xform_cpp_FUN_0055b0b0(void);
CVector3f * __cdecl core_xform_cpp_matrixToEulerAngles_FUN_0055b180(CMatrix3x4f *matrix_in,CVector3f *euler_out);
CVector3f * __cdecl core_xform_cpp_matrixToEulerAnglesZYX_FUN_0055b6c0(CMatrix3x4f *matrix_ptr,CVector3f *euler_out);
CVector3f * __cdecl core_xform_cpp_getTranslation_FUN_0055bc00(CMatrix3x4f *matrix_in,CVector3f *vector_out);
CVector3f * core_xform_cpp_invertAndGetTranslation_FUN_0055bc30(undefined4 param_1,CVector3f *param_2);
void core_xform_cpp_inverseInPlace_FUN_0055bc80(void);
double __cdecl core_xform_cpp_determinant_FUN_0055bcb0(CMatrix3x4f *matrix);
float * core_xform_cpp_inverse_FUN_0055bd00(CMatrix3x4f *param_1);
float core_xform_cpp_computeOrthogonalityError_FUN_0055bf50(float *param_1);
void core_xform_cpp_orthonormalizeMatrix3x3_FUN_0055c180(float *param_1,int param_2);
bool core_xform_cpp_hasNegativeDeterminant_FUN_0055c6d0(void);
void core_xform_cpp_buildRotationX_FUN_0055c730(float param_1);
void core_xform_cpp_buildRotationY_FUN_0055c7b0(float param_1);
void core_xform_cpp_buildRotationZ_FUN_0055c830(float param_1);
void core_xform_cpp_buildTranslationMatrix_FUN_0055c8b0(undefined4 *param_1);
void core_xform_cpp_buildUniformScaleMatrix_FUN_0055c910(void);
void core_xform_cpp_buildScaleMatrix_FUN_0055c970(undefined4 *param_1);
void core_xform_cpp_buildXFlipMatrix_FUN_0055c9d0(float param_1);
void core_xform_cpp_buildYFlipMatrix_FUN_0055ca30(float param_1);
undefined4 * __stack_esi core_xform_cpp_buildZFlipMatrix_FUN_0055ca90(float param_1,undefined4 *param_2);
void core_xform_cpp_buildMirrorTransform_FUN_0055caf0(float *param_1,float param_2);
void core_xform_cpp_lerpMatrix3x4_FUN_0055cc30(CMatrix3x4f *param_1,CMatrix3x4f *param_2,float param_3);
CQuaternion4f * __cdecl core_xform_cpp_quaternionToMatrix3x3_FUN_0055cd70(CMatrix3x4f *matrix_out,CQuaternion4f *quat_in);
void core_xform_cpp_quaternionToMatrix3x4_FUN_0055ced0(CQuaternion4f *param_1);
void core_xform_cpp_matrixToQuaternion_FUN_0055cf10(float *param_1);
CQuaternion4f * __stack_esi core_xform_cpp_negateFirstComponent_FUN_0055d0d0(CQuaternion4f *vector_in,CQuaternion4f *vector_out);
void core_xform_cpp_setIdentityQuaternion_FUN_0055d110(undefined4 *param_1);
void core_xform_cpp_multiplyQuaternion_FUN_0055d130(float *param_1,float *param_2);
undefined4 * core_xform_cpp_multiplyQuaternionInPlace_FUN_0055d1f0(undefined4 *param_1,undefined4 param_2);
void core_xform_cpp_quaternionToAxisAngle_FUN_0055d220(float *param_1,float *param_2,float *param_3);
float * core_xform_cpp_slerpQuaternion_FUN_0055d2d0(float *param_1,float *param_2,float param_3);
CQuaternion4f * __stack_esi core_xform_cpp_quaternionFromAngleX_FUN_0055d4a0(float angle_radians,CQuaternion4f *quat_out);
void core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0(float param_1);
CQuaternion4f * __stack_esi core_xform_cpp_quaternionFromAngleZ_FUN_0055d520(float angle_radians,CQuaternion4f *quat_out);
void core_xform_cpp_quaternionFromAxisAngle_FUN_0055d560(float param_1,float *param_2);
CVector3f * __cdecl core_xform_cpp_quaternionToEulerAngles_FUN_0055d5b0(CVector3f *out_euler,CQuaternion4f *quat_in);
CVector3f * core_xform_cpp_FUN_0055d5e0(CVector3f *param_1,CQuaternion4f *param_2);
void core_xform_cpp_eulerToQuaternion_FUN_0055d610(undefined4 param_1);
void core_xform_cpp_FUN_0055d660(CVector3f *param_1);
void __cdecl core_xform_cpp_clipInterpolateRightPlane_FUN_0055d6b0(SRenderVertex *vertex_a,SRenderVertex *vertex_b,SRenderVertex *vertex_out);
void __cdecl core_xform_cpp_clipInterpolateLeftPlane_FUN_0055d770(SRenderVertex *vertex_a,SRenderVertex *vertex_b,SRenderVertex *vertex_out);
void __cdecl core_xform_cpp_clipInterpolateTopPlane_FUN_0055d830(SRenderVertex *vertex_a,SRenderVertex *vertex_b,SRenderVertex *vertex_out);
void __cdecl core_xform_cpp_clipInterpolateBottomPlane_FUN_0055d8f0(SRenderVertex *vertex_a,SRenderVertex *vertex_b,SRenderVertex *vertex_out);
void core_xform_cpp_clipPolygonStage1_FUN_0055d9c0(void);
void core_xform_cpp_clipPolygonStage2_FUN_0055db30(void);
void core_xform_cpp_clipPolygonStage3_FUN_0055dcb0(void);
void core_xform_cpp_FUN_0055de20(void);
void core_xform_cpp_FUN_0055de8e(void);
void core_xform_cpp_FUN_0055df19(void);
void core_xform_cpp_FUN_0055df90(void);
void core_xform_cpp_transformAndClipGeometry_FUN_0055e040(uint param_1,int *param_2);
void __cdecl core_zombie_cpp_staticInit_FUN_0055e780(void);
int __cdecl core_zombie_cpp_classifyObjectShape_FUN_0055e940(CVector3f *dimensions);
void core_zombie_cpp_FUN_0055ea90(void);
CDemonActorType * core_zombie_cpp_FUN_0055eab0(void);
CZombie * __cdecl core_zombie_cpp_CZombie_ctor_FUN_0055eac0(CZombie *this_ptr);
void core_zombie_cpp_CZombie_setup_FUN_0055ec20(CEnemy *param_1);
void core_zombie_cpp_FUN_0055ef50(CZombie *param_1,float param_2);

