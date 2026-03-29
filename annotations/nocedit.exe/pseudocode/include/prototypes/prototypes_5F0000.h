#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/fstream.h"
#include "system/iostream.h"
#include "system/stdarg.h"
#include "system/stdio.h"
#include "system/stdlib.h"
#include "system/strstream.h"
#include "system/watcom.h"
#include "system/winbase.h"
#include "system/windef.h"
#include "system/wingdi.h"
#include "system/winnt.h"
#include "system/winuser.h"
#include "types/classes/CActorProperty.h"
#include "types/classes/CActorPropertyList.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CMatrix3x3f.h"
#include "types/classes/CMatrix3x4f.h"
#include "types/classes/CQuaternion4f.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CWerewolf.h"
#include "types/classes/CWinFont.h"
#include "types/classes/CZombie.h"
#include "types/enums/EDeathState.h"
#include "types/enums/EInputCodeType.h"
#include "types/funcdefs/RenderScanlineFunc.h"
#include "types/structs/SDamageInfo.h"
#include "types/structs/SRenderVertex.h"
#include "types/structs/SSoftwareEdge.h"
#include "types/typedefs/SMessageHandler.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x5F0000
// =============================================================================

void __cdecl core_werewolf_cpp_CWerewolf_setWalkTarget_FUN_005f11a0(CWerewolf *this_ptr,CDemonActor *target,float speed,float distance);
void __cdecl core_werewolf_cpp_CWerewolf_playHowl_FUN_005f11e0(CWerewolf *this_ptr);
void __cdecl core_werewolf_cpp_CWerewolf_renderEyeGlow_FUN_005f1230(CWerewolf *this_ptr,CVector3f *eye_position);
int __cdecl core_werewolf_cpp_CWerewolf_renderTransparent_FUN_005f1820(CWerewolf *this_ptr);
void __cdecl core_werewolf_cpp_CWerewolf_archive_FUN_005f1980(CWerewolf *this_ptr);
void __cdecl core_werewolf_cpp_CWerewolf_processDamage_FUN_005f1ac0(CWerewolf *this_ptr,SDamageInfo *damage_info);
EDeathState __cdecl core_werewolf_cpp_CWerewolf_getDeathState_FUN_005f1db0(CWerewolf *this_ptr);
int __cdecl core_werewolf_cpp_CWerewolf_getTargetPoints_FUN_005f1df0(CWerewolf *this_ptr,CVector3f *out_points_array);
void __cdecl core_werewolf_cpp_CWerewolf_processChainConstraint_FUN_005f1e40(CWerewolf *this_ptr);
void __cdecl core_werewolf_cpp_CWerewolf_propertyDisplayCallback_FUN_005f2010(CWerewolf *this_ptr,CActorProperty *property,char *output_buffer);
int __cdecl core_werewolf_cpp_CWerewolf_propertyActionCallback_FUN_005f2070(CWerewolf *this_ptr,CActorProperty *property);
void __cdecl core_werewolf_cpp_CWerewolf_getPropertyList_FUN_005f20d0(CWerewolf *this_ptr,CActorPropertyList *property_list);
void __cdecl core_werewolf_cpp_CWerewolf_randomize_FUN_005f21e0(CWerewolf *this_ptr);
void __cdecl core_werewolf_cpp_CWerewolf_addFilesToExtract_FUN_005f21f0(CWerewolf *this_ptr,_FILE *file_handle);
CWerewolf * __cdecl core_werewolf_cpp_CWerewolf_dtor_FUN_005f2220(CWerewolf *this_ptr,uint flags);
CWinFont * __cdecl engine_winfont_cpp_CWinFont_ctor_FUN_005f22e0(CWinFont *this_ptr,char *font_name,int font_height,int y_offset1,int y_offset2);
CWinFont * __cdecl engine_winfont_cpp_CWinFont_dtor_FUN_005f2390(CWinFont *this_ptr,uint flags);
int __cdecl engine_winfont_cpp_CWinFont_drawText_FUN_005f23f0(CWinFont *this_ptr,int x_position,int y_position,char *text_string,int text_color, int draw_flags);
void __cdecl engine_winfont_cpp_CWinFont_setColorAndDrawText_FUN_005f2440(CWinFont *this_ptr,HDC device_context,char *text_string,int x_position, int y_position,int foreground_color,int background_color);
int __cdecl engine_winfont_cpp_CWinFont_createTextBackground_FUN_005f2860(CWinFont *this_ptr,int width,int height);
void __cdecl engine_winfont_cpp_CWinFont_reset_FUN_005f2a30(CWinFont *this_ptr);
int __cdecl engine_winfont_cpp_CWinFont_getStringWidth_FUN_005f2aa0(CWinFont *this_ptr,char *text_string);
int __cdecl engine_winfont_cpp_CWinFont_getStringHeight_FUN_005f2b00(CWinFont *this_ptr,char *text_string);
int __cdecl engine_winfont_cpp_CWinFont_getLineSpacing_FUN_005f2b70(void);
void __cdecl wincore_winrun_cpp_calibrateCPUSpeed_FUN_005f2b80(void);
void __watcallRegister wincore_winrun_cpp_endPeriod_FUN_005f2db0(void);
int __cdecl wincore_winrun_cpp_getTime_FUN_005f2dc0(void);
void __cdecl wincore_winrun_cpp_clearKeypresses_FUN_005f2e70(void);
int __cdecl wincore_winrun_cpp_getNextKeypress_FUN_005f2e90(void);
int __cdecl wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00(void);
char __cdecl wincore_winrun_cpp_getValue_FUN_005f2f20(void);
void __cdecl wincore_winrun_cpp_enqueueInput_FUN_005f2f30(int input_value);
void __cdecl wincore_winrun_cpp_setValue_FUN_005f2f70(int val);
void __cdecl wincore_winrun_cpp_doNothing_FUN_005f2f80(void);
void __cdecl wincore_winrun_cpp_plotClippedPixel_FUN_005f2f90(int x_coord,int y_coord);
void __cdecl wincore_winrun_cpp_drawCrosshair_FUN_005f2fd0(void);
void __cdecl wincore_winrun_cpp_clearMouseClicks_FUN_005f30c0(void);
void __cdecl wincore_winrun_cpp_setCursorPosition_FUN_005f30d0(int x,int y);
void __cdecl wincore_winrun_cpp_addWindowsMessageHook_FUN_005f3100(SMessageHandler message_handler);
LRESULT __stdcall wincore_winrun_cpp_mainWindowProc_FUN_005f3150(HWND hWnd,UINT message,WPARAM wParam,LPARAM lParam);
void __cdecl wincore_winrun_cpp_processWindowMessages_FUN_005f35e0(void);
int __stdcall wincore_winrun_cpp_winMain_FUN_005f3680 (HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nCmdShow1,int nCmdShow2);
void __cdecl wincore_winrun_cpp_displayMessageBoxAndQuit_FUN_005f3920(char *message);
char * __cdecl wincore_winrun_cpp_getKeyName_FUN_005f3980(EInputCodeType keycode);
HANDLE __cdecl wincore_winrun_cpp_createMutex_FUN_005f3fe0(void);
int __cdecl wincore_winrun_cpp_waitForMutex_FUN_005f3ff0(HANDLE mutex_handle);
int __cdecl wincore_winrun_cpp_waitForMutexTimeout_FUN_005f4010(HANDLE mutex_handle,double timeout_seconds);
void __cdecl wincore_winrun_cpp_releaseMutex_FUN_005f4050(HANDLE mutex_handle);
HANDLE __cdecl wincore_winrun_cpp_createThread_FUN_005f4070(LPTHREAD_START_ROUTINE thread_func,LPVOID thread_param);
int __cdecl wincore_winrun_cpp_setThreadPriority_FUN_005f40a0(HANDLE hThread,int priority_level);
void __cdecl wincore_winrun_cpp_sleep_FUN_005f40e0(double seconds);
void __cdecl wincore_winrun_cpp_getComputerAndUserName_FUN_005f4140(char *buffer);
void __cdecl wincore_winrun_cpp_getRegistryStringValue_FUN_005f4210(char *key_path,char *value_name,char *output_buffer,uint *buffer_size);
void __cdecl wincore_winrun_cpp_setRegistryStringValue_FUN_005f4290(char *key_path,char *value_name,char *value_data);
void __cdecl wincore_winrun_cpp_initJoystick_FUN_005f4310(void);
void __cdecl wincore_winrun_cpp_doNothing_FUN_005f4380(void);
void __cdecl wincore_winrun_cpp_getJoystickState_FUN_005f43a0(void);
void __cdecl wincore_winvideo_cpp_positionMovieWindow_FUN_005f4500(HWND parent_window);
void __cdecl wincore_winvideo_cpp_closeMovie_FUN_005f46b0(HWND window_handle);
void __cdecl wincore_winvideo_cpp_openMovie_FUN_005f4700(HWND parent_window,char *movie_filename);
void __cdecl wincore_winvideo_cpp_toggleMoviePlayback_FUN_005f4990(HWND notify_window,int play_state);
int __cdecl wincore_winvideo_cpp_playMovie_FUN_005f4a00(char *directory_path,char *movie_filename);
CVector3f * __cdecl core_xform_cpp_transformVector3x4_FUN_005f4dc0(CVector3f *output_vector,CVector3f *input_vector,CMatrix3x4f *matrix);
CVector3f * __cdecl core_xform_cpp_transformVector3x4InPlace_FUN_005f4e20(CVector3f *input_output_vector,CMatrix3x4f *matrix);
CVector3f * __cdecl core_xform_cpp_transformVector3x3_FUN_005f4eb0(CMatrix3x3f *matrix,CVector3f *output_vector,CVector3f *input_vector);
CMatrix3x4f * __stack2_esi core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10 (CMatrix3x4f *matrix_a,CMatrix3x4f *matrix_b,CMatrix3x4f *matrix_out);
CMatrix3x4f * __cdecl core_xform_cpp_multiplyMatrix3x4InPlace_FUN_005f50c0(CMatrix3x4f *matrix_a,CMatrix3x4f *matrix_b);
void __cdecl core_xform_cpp_setIdentityMatrix3x4_FUN_005f5100(CMatrix3x4f *matrix);
void __cdecl core_xform_cpp_somebodyWriteMe_FUN_005f5160(void);
void __cdecl core_xform_cpp_setRotationScaleIdentity_FUN_005f5190(CMatrix3x4f *matrix);
void __cdecl core_xform_cpp_normalizeMatrix_FUN_005f51e0(CMatrix3x4f *matrix);
void __cdecl core_xform_cpp_clearTranslation_FUN_005f5370(CMatrix3x4f *matrix);
void __cdecl core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390(CMatrix3x4f *output_matrix,CVector3f *position,CVector3f *euler_angles);
void __cdecl core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f *output_matrix,CVector3f *position,CVector3f *euler_angles);
float __cdecl core_xform_cpp_atan2Approximation_FUN_005f55c0(double sin_value,double cos_value);
CVector3f * __cdecl core_xform_cpp_matrixToEulerAngles_FUN_005f5690(CMatrix3x3f *matrix_in,CVector3f *euler_out);
CVector3f * __cdecl core_xform_cpp_matrixToEulerAnglesZYX_FUN_005f5bd0(CMatrix3x3f *matrix_ptr,CVector3f *euler_out);
CVector3f * __cdecl core_xform_cpp_getTranslation_FUN_005f6110(CMatrix3x4f *matrix_in,CVector3f *vector_out);
CVector3f * __cdecl core_xform_cpp_invertAndGetTranslation_FUN_005f6140(CMatrix3x4f *matrix_in,CVector3f *vector_out);
void __cdecl core_xform_cpp_inverseInPlace_FUN_005f6190(CMatrix3x4f *matrix);
double __cdecl core_xform_cpp_determinant_FUN_005f61c0(CMatrix3x4f *matrix);
CMatrix3x4f * __stack_esi core_xform_cpp_inverse_FUN_005f6210(CMatrix3x4f *matrix_in,CMatrix3x4f *matrix_out);
float __cdecl core_xform_cpp_computeOrthogonalityError_FUN_005f6460(CMatrix3x4f *matrix);
void __cdecl core_xform_cpp_orthonormalizeMatrix3x3_FUN_005f6690(CMatrix3x3f *matrix,int preserve_scale);
int __cdecl core_xform_cpp_hasNegativeDeterminant_FUN_005f6be0(CMatrix3x4f *matrix);
CMatrix3x4f * __stack_esi core_xform_cpp_buildRotationX_FUN_005f6c40(float angle_radians,CMatrix3x4f *matrix_out);
CMatrix3x4f * __stack_esi core_xform_cpp_buildRotationY_FUN_005f6cc0(float angle_radians,CMatrix3x4f *matrix_out);
CMatrix3x4f * __stack_esi core_xform_cpp_buildRotationZ_FUN_005f6d40(float angle_radians,CMatrix3x4f *matrix_out);
CMatrix3x4f * __stack_esi core_xform_cpp_buildTranslationMatrix_FUN_005f6dc0(CVector3f *translation,CMatrix3x4f *matrix_out);
CMatrix3x4f * __stack_esi core_xform_cpp_buildUniformScaleMatrix_FUN_005f6e20(float scale_factor,CMatrix3x4f *matrix_out);
CMatrix3x4f * __stack_esi core_xform_cpp_buildScaleMatrix_FUN_005f6e80(CVector3f *scale_vector,CMatrix3x4f *matrix_out);
CMatrix3x4f * __stack_esi core_xform_cpp_buildXFlipMatrix_FUN_005f6ee0(float x_offset,CMatrix3x4f *matrix_out);
CMatrix3x4f * __stack_esi core_xform_cpp_buildYFlipMatrix_FUN_005f6f40(float y_offset,CMatrix3x4f *matrix_out);
CMatrix3x4f * __stack_esi core_xform_cpp_buildZFlipMatrix_FUN_005f6fa0(float z_offset,CMatrix3x4f *matrix_out);
CMatrix3x4f * __stack2_esi core_xform_cpp_buildMirrorTransform_FUN_005f7000 (CVector3f *axis_vector,float distance,CMatrix3x4f *matrix_out);
CMatrix3x4f * __stack3_esi core_xform_cpp_lerpMatrix3x4_FUN_005f7140 (CMatrix3x4f *matrix_a,CMatrix3x4f *matrix_b,float t,CMatrix3x4f *matrix_out);
CQuaternion4f * __cdecl core_xform_cpp_quaternionToMatrix3x3_FUN_005f7280(CMatrix3x3f *matrix_out,CQuaternion4f *quat_in);
CMatrix3x4f * __stack_esi core_xform_cpp_quaternionToMatrix3x4_FUN_005f73e0(CQuaternion4f *quat_in,CMatrix3x4f *matrix_out);
CQuaternion4f * __stack_esi core_xform_cpp_matrixToQuaternion_FUN_005f7420(CMatrix3x3f *matrix_in,CQuaternion4f *quat_out);
CQuaternion4f * __stack_esi core_xform_cpp_negateFirstComponent_FUN_005f75e0(CQuaternion4f *vector_in,CQuaternion4f *vector_out);
void __cdecl core_xform_cpp_setIdentityQuaternion_FUN_005f7620(CQuaternion4f *quaternion);
CQuaternion4f * __stack2_esi core_xform_cpp_multiplyQuaternion_FUN_005f7640 (CQuaternion4f *quat1_in,CQuaternion4f *quat2_in,CQuaternion4f *quat_out);
CQuaternion4f * __cdecl core_xform_cpp_multiplyQuaternionInPlace_FUN_005f7700(CQuaternion4f *quat1_inout,CQuaternion4f *quat2_ptr);
void __cdecl core_xform_cpp_quaternionToAxisAngle_FUN_005f7730(CQuaternion4f *quat_in,float *angle_out,CVector3f *axis_out);
CQuaternion4f * __stack3_esi core_xform_cpp_slerpQuaternion_FUN_005f77e0 (CQuaternion4f *quat1_in,CQuaternion4f *quat2_in,float t,CQuaternion4f *quat_out);
CQuaternion4f * __stack_esi core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(float angle_radians,CQuaternion4f *quat_out);
CQuaternion4f * __stack_esi core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(float angle_radians,CQuaternion4f *quat_out);
CQuaternion4f * __stack_esi core_xform_cpp_quaternionFromAngleZ_FUN_005f7a30(float angle_radians,CQuaternion4f *quat_out);
CQuaternion4f * __stack2_esi core_xform_cpp_quaternionFromAxisAngle_FUN_005f7a70 (float angle_radians,CVector3f *axis_ptr,CQuaternion4f *quat_out);
CVector3f * __cdecl core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0(CQuaternion4f *quat_in,CVector3f *vector_out);
CVector3f * __cdecl core_xform_cpp_quaternionToEulerAnglesZYX_FUN_005f7af0(CQuaternion4f *quat_in,CVector3f *vector_out);
CQuaternion4f * __stack_esi core_xform_cpp_eulerToQuaternion_FUN_005f7b20(CVector3f *euler_angles,CQuaternion4f *quat_out);
CQuaternion4f * __stack_esi core_xform_cpp_eulerToQuaternionIndirect_FUN_005f7b70 (CVector3f *euler_angles,CQuaternion4f *quat_out);
void __cdecl core_xform_cpp_clipInterpolateRightPlane_FUN_005f7bc0(SRenderVertex *vertex_a,SRenderVertex *vertex_b,SRenderVertex *vertex_out);
void __cdecl core_xform_cpp_clipInterpolateLeftPlane_FUN_005f7c80(SRenderVertex *vertex_a,SRenderVertex *vertex_b,SRenderVertex *vertex_out);
void __cdecl core_xform_cpp_clipInterpolateTopPlane_FUN_005f7d40(SRenderVertex *vertex_a,SRenderVertex *vertex_b,SRenderVertex *vertex_out);
void __cdecl core_xform_cpp_clipInterpolateBottomPlane_FUN_005f7e00(SRenderVertex *vertex_a,SRenderVertex *vertex_b,SRenderVertex *vertex_out);
void __cdecl core_xform_cpp_clipPolygonStage1_FUN_005f7ed0(void);
void __cdecl core_xform_cpp_clipPolygonStage2_FUN_005f8040(void);
void __cdecl core_xform_cpp_clipPolygonStage3_FUN_005f81c0(void);
void __cdecl core_xform_cpp_clipPolygonStage4_FUN_005f8330(void);
void __cdecl core_xform_cpp_clampClippedVertices_FUN_005f84a0(void);
SRenderVertex * __cdecl core_xform_cpp_transformAndClipGeometry_FUN_005f8550(int vertex_count,int *vertex_indices);
void __cdecl core_zombie_cpp_staticInit_FUN_005f8c90(void);
float __cdecl core_zombie_cpp_getObjectHeightScale_FUN_005f8cc0(CDemonActor *actor);
CVector3f * __cdecl core_zombie_cpp_getObjectGrabPointLocal_FUN_005f8d30(CVector3f *out_point,CDemonActor *actor);
CVector3f * __cdecl core_zombie_cpp_getObjectGrabPointWorld_FUN_005f8da0(CVector3f *out_point,CDemonActor *actor);
int __cdecl core_zombie_cpp_classifyObjectShape_FUN_005f8e50(CVector3f *dimensions);
CZombie * __cdecl core_zombie_cpp_factoryFunc_FUN_005f8fa0(void);
CDemonActorType * __cdecl core_zombie_cpp_CZombie_getActorType_FUN_005f8fd0(CZombie *this_ptr);
CZombie * __cdecl core_zombie_cpp_CZombie_ctor_FUN_005f8fe0(CZombie *this_ptr);
void __cdecl core_zombie_cpp_CZombie_setup_FUN_005f9140(CZombie *this_ptr);
void __cdecl core_zombie_cpp_CZombie_process_FUN_005f9470(CZombie *this_ptr,float delta_time);
void __stack2_esi core_zombie_cpp_CZombie_getCarryObjToBodyXForm_FUN_005fb1f0 (CZombie *this_ptr,int hand_index,CMatrix3x4f *out_matrix);
int __cdecl core_zombie_cpp_CZombie_processPickup_FUN_005fb530(CZombie *this_ptr,float delta_time);
int __cdecl core_zombie_cpp_CZombie_getPickupHandIndex_FUN_005fbd00(CZombie *this_ptr,int object_shape_type);
int __cdecl core_zombie_cpp_CZombie_canPickupWithHand_FUN_005fbda0(CZombie *this_ptr,int object_shape_type);
void __cdecl core_zombie_cpp_CZombie_dropAndClearTarget_FUN_005fbde0(CZombie *this_ptr);
int __cdecl core_zombie_cpp_CZombie_renderOpaque_FUN_005fbe20(CZombie *this_ptr);
int __cdecl core_zombie_cpp_CZombie_renderTransparent_FUN_005fbe70(CZombie *this_ptr);
void __cdecl core_zombie_cpp_CZombie_archive_FUN_005fbfd0(CZombie *this_ptr);
int __cdecl core_zombie_cpp_CZombie_canBeAttracted_FUN_005fc120(CZombie *this_ptr,CVector3f *out_attract_position);
void __cdecl core_zombie_cpp_CZombie_processDismemberment_FUN_005fc220(CZombie *this_ptr,SDamageInfo *damage_info);
void __cdecl core_zombie_cpp_CZombie_processDamage_FUN_005fc4f0(CZombie *this_ptr,SDamageInfo *damage_info);
int __cdecl core_zombie_cpp_CZombie_getTargetPoints_FUN_005fc720(CZombie *this_ptr,CVector3f *out_points_array);
int __cdecl core_zombie_cpp_CZombie_isGrabbable_FUN_005fc920(CZombie *this_ptr,CDemonActor *grabber);
int __cdecl core_zombie_cpp_CZombie_canBeGrabbed_FUN_005fc960(CZombie *this_ptr,CDemonActor *grabber,int grab_type);
int __cdecl core_zombie_cpp_CZombie_getGrabbed_FUN_005fc970(CZombie *this_ptr,CDemonActor *grabber,int grab_type);
int __cdecl core_zombie_cpp_CZombie_shouldIgnoreForTargeting_FUN_005fc9e0(CZombie *this_ptr);
void __cdecl core_zombie_cpp_CZombie_resetChaseState_FUN_005fca10(CZombie *this_ptr);
void __cdecl core_zombie_cpp_CZombie_getPropertyList_FUN_005fca80(CZombie *this_ptr,CActorPropertyList *property_list);
void __cdecl core_zombie_cpp_CZombie_randomize_FUN_005fcb70(CZombie *this_ptr);
void __cdecl core_zombie_cpp_CZombie_addFilesToExtract_FUN_005fcc20(CZombie *this_ptr,_FILE *file_handle);
CZombie * __cdecl core_zombie_cpp_CZombie_dtor_FUN_005fcc50(CZombie *this_ptr,uint flags);
int * __cdecl core_zombie_cpp_assignInt_FUN_005fcd10(int *dest,int *src);
void __cdecl engine_3d_c_addRasterizerEdge_FUN_005fcd20(SRenderVertex *v0,SRenderVertex *v1);
void __cdecl engine_3d_c_addRasterizerEdgeWithDepth_FUN_005fce40(SRenderVertex *v0,SRenderVertex *v1);
SSoftwareEdge * __cdecl engine_3d_c_findRasterizerEdge_FUN_005fcf80(int y_start,SSoftwareEdge *exclude_edge);
void __cdecl engine_3d_c_rasterizeTriangle_FUN_005fcfc0(SRenderVertex *vertex_buffer,int vertex_count);
template<typename T_func0>
inline void engine_3d_c_rasterizePolygonCustom_FUN_005fd4e0(SRenderVertex *vertex_buffer,int vertex_count,T_func0 scanline_renderer) {
    (void)vertex_buffer; (void)vertex_count; (void)scanline_renderer;
}
SIZE_T __cdecl crt_stdio_c_fread_FUN_005fd990(void *buffer,SIZE_T size,SIZE_T count,_FILE *file);
void __cdecl crt_stdio_c_StringBufferCallback_FUN_005fdb90(StringOutputContext *context,char character);
int __cdecl crt_stdio_c__vsprintf_FUN_005fdba8(char *buffer,char *format,va_list_t args);
int __cdecl crt_stdio_c__sprintf_FUN_005fdbd0(char *buffer,char *format,...) __attribute__((format(printf, 2, 3)));
SIZE_T __cdecl crt_stdio_c_fwrite_FUN_005fdc00(void *ptr,SIZE_T size,SIZE_T count,_FILE *file);
void * __cdecl crt_memory_c_memset_FUN_005fde40(void *dest,int value,ulong count);
template<typename T_func0>
inline void * crt_stdlib_c_median_of_3_FUN_005fdea0(void *a,void *b,void *c,T_func0 compar) {
    (void)a; (void)b; (void)c; (void)compar; return (void *)0;
}
void __watcallRegister crt_stdlib_c_memory_swap_FUN_005fdf10(void *ptr1,void *ptr2,SIZE_T bytes);
template<typename T_func0>
inline void crt_stdlib_c__qsort_FUN_005fdf38(void *base,SIZE_T num,SIZE_T size,T_func0 compar) {
    (void)base; (void)num; (void)size; (void)compar;
}
void * __cdecl crt_string_c_memmove_FUN_005fe5e0(void *dest,void *src,SIZE_T n);
void __cdecl crt_memory_c___vec_delete_FUN_005fe632(void *object_ptr,WatcomTypeInfo *type_info);
void __cdecl shape_memdbg_cpp_free_FUN_005fe659(void *ptr);
void * __cdecl crt_memory_c___arrinit_FUN_005fe667(void *array_start,int element_count,WatcomTypeInfo *type_info);
double __fpureg_safe crt_math_c_round_FUN_005fe6b0(double value);
int __cdecl crt_stdio_c_fprintf_FUN_005fe6d0(_FILE *file,char *format,...) __attribute__((format(printf, 2, 3)));
int __cdecl crt_stdio_c_getc_helper_FUN_005fe700(scanf_state_t *state);
int __watcallStack crt_stdio_c_ungetc_helper_FUN_005fe720(int character,scanf_state_t *state);
int __cdecl crt_stdio_c_vfscanf_FUN_005fe738(_FILE *file,char *format,va_list_t args);
int __cdecl crt_stdio_c_fscanf_FUN_005fe7c0(_FILE *file,char *format,...) __attribute__((format(scanf, 2, 3)));
int __cdecl crt_string_c__stricmp_FUN_005fe7f0(char *str1,char *str2);
int __cdecl crt_stdio_c_fgetc_FUN_005fe840(_FILE *file);
int __watcallStack crt_stdio_c_FillBufferAndGetChar_FUN_005fe910(_FILE *file);
int __watcallStack crt_stdio_c_FillInputBuffer_FUN_005fe940(_FILE *file);
int __cdecl crt_stdio_c_fputc_FUN_005fea10(int character,_FILE *stream);
int __cdecl crt_ctype_c_tolower_FUN_005feb30(int character);
uint * __watcallRegister crt_stdlib_c_GetRandomSeedPointer_FUN_005feb50(void);
int __cdecl crt_stdlib_c_rand_FUN_005feb5c(void);
void __cdecl crt_stdlib_c_srand_FUN_005feb80(uint seed);
double __crtmath crt_math_c_floor_FUN_005feb90(double input_value);
int __cdecl crt_file_c_normalize_path_separator_FUN_005febe0(int ch,int *preferred_separator);
void __cdecl crt_file_c_makepath_FUN_005febfc(char *path_buffer,char *drive,char *directory,char *filename,char *extension);
char * __cdecl crt_string_c_strstr_FUN_005fedd0(char *haystack_str,char *needle_str);
void __watcallStack crt_cpp_c_pureVirtualStub_FUN_005fee9f(void);
void * __cdecl crt_memory_c___arrdtor_FUN_005feeaf(WatcomTypeArrayInfo *destroy_info);
void * __cdecl crt_memory_c___arrfini_FUN_005feee9(void *obj_array,int obj_count,WatcomTypeInfo *type_info);
int __cdecl crt_string_c__strcmp_FUN_005fef20(char *str1,char *str2);
char * __cdecl crt_stdio_c_fgets_FUN_005fefd0(char *str,int num,_FILE *stream);
void __cdecl crt_stdlib_c__atexit_FUN_005ff060(WatcomStaticDestructorNode *exit_node);
int __cdecl crt_string_c__strnicmp_FUN_005ff070(char *str1,char *str2,int count);
int __cdecl crt_stdio_c_printf_FUN_005ff0d0(char *format,...) __attribute__((format(printf, 1, 2)));
double __cdecl crt_string_c__strtod_FUN_005ff0f3(char *str);
void __watcallStack crt_string_c_strncpy_safe_FUN_005ff130(char *dest,char *src,int length,int maxlen);
void __cdecl crt_string_c_splitpath_FUN_005ff178(char *path,char *drive,char *dir,char *fname,char *ext);
_istream * __cdecl crt_iostream_cpp_istream_get_FUN_005ff245(_istream *this_ptr,char *c);
_ostream * __cdecl crt_iostream_cpp_ostream_put_FUN_005ff2d7(_ostream *this_ptr,int character);
_ostrstream * __cdecl crt_strstream_cpp_ostrstream_ctor_FUN_005ff384(void *this_ptr,int flags,char *buffer,int buffer_size,int mode);
void __cdecl crt_strstream_cpp_ostrstream_destructor_thunk_from_ostream_FUN_005ff42f(_ostream *this_ptr,int dtor_flags);
void __cdecl crt_strstream_cpp_ostrstream_destructor_thunk_from_ios_FUN_005ff445(ios *this_ptr,int dtor_flags);
int __cdecl crt_strstream_cpp_ostrstream_tellp_FUN_005ff45d(void *this_ptr);
_ostrstream * __cdecl crt_strstream_cpp_ostrstream_dtor_FUN_005ff48a(void *this_ptr,uint flags);
_istrstream * __cdecl crt_strstream_cpp_istrstream_ctor_FUN_005ff524(void *this_ptr,int ctor_flags,char *buffer,int size);
void __cdecl crt_strstream_cpp_istrstream_destructor_thunk_from_istream_FUN_005ff59c(_istream *this_ptr,int dtor_flags);
void __cdecl crt_strstream_cpp_istrstream_destructor_thunk_from_ios_FUN_005ff5b2(ios *this_ptr,int dtor_flags);
_istrstream * __cdecl crt_strstream_cpp_istrstream_dtor_FUN_005ff5ca(void *this_ptr,uint flags);
void __cdecl crt_fstream_cpp_ifstream_ctor_FUN_005ff664(void *this_ptr,int ctor_flags,char *filename,int open_mode,int buffer_size);
void __cdecl crt_fstream_cpp_ifstream_destructor_thunk_from_istream_FUN_005ff6e2(_istream *this_ptr,int dtor_flags);
void __cdecl crt_fstream_cpp_ifstream_destructor_thunk_from_ios_FUN_005ff6f8(ios *this_ptr,int dtor_flags);
void __cdecl crt_fstream_cpp_ofstream_ctor_FUN_005ff710(void *this_ptr,int ctor_flags,char *filename,int open_mode,int buffer_size);
void __cdecl crt_fstream_cpp_ofstream_destructor_thunk_from_ostream_FUN_005ff78e(_ostream *this_ptr,int dtor_flags);
void __cdecl crt_fstream_cpp_ofstream_destructor_thunk_from_ios_FUN_005ff7a4(ios *this_ptr,int dtor_flags);
ofstream * __cdecl crt_fstream_cpp_ofstream_dtor_FUN_005ff7bc(void *this_ptr,uint flags);
ifstream * __cdecl crt_fstream_cpp_ifstream_dtor_FUN_005ff856(void *this_ptr,uint flags);
ifstream * __cdecl crt_fstream_cpp_ifstream_ctor_FUN_005ff8f0(void *this_ptr,int c1);
ofstream * __cdecl crt_fstream_cpp_ofstream_ctor_FUN_005ff95c(void *this_ptr,int c1);
int __watcallStack crt_stdio_c_remove_FUN_005ff9d0(char *filename);
int __cdecl crt_ctype_c_toupper_FUN_005ff9e0(int c);
void __watcallStack crt_stack_c_stack_overflow_handler_FUN_005ffa22(SIZE_T required_bytes);
void __stdcall crt_stack_c_ProbeStackSpace_FUN_005ffa2f(uint size);
int __cdecl crt_stdio_c_seek_within_buffer_FUN_005ffa70(int offset,_FILE *file);
int __cdecl crt_stdio_c_seek_within_buffer_FUN_005ffa70(_FILE *file);
int __cdecl crt_stdio_c_fseek_FUN_005ffacc(_FILE *file,long offset,int whence);
_ostream * __cdecl crt_fstream_cpp_ostream_write_FUN_005ffcb3(_ostream *stream,void *buffer,SIZE_T count);
float10 __fpustack_safe crt_math_c_pow_FUN_005ffd76(float10 base,float10 exp);
float10 __fpureg crt_math_c_integer_power_FUN_005ffeb2(float10 base,ushort exponent);
int __cdecl crt_stdlib_c_atoi_FUN_005ffef0(char *string_ptr);
char * __cdecl crt_string_c_strtok_FUN_005fff50(char *str,char *delimiters);

