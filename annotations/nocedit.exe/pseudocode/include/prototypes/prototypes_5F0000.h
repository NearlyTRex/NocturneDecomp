#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/fstream.h"
#include "system/iostream.h"
#include "system/misc.h"
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
#include "types/classes/CDemonActorType.h"
#include "types/classes/CMatrix3x3f.h"
#include "types/classes/CMatrix3x4f.h"
#include "types/classes/CQuaternion4f.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CWerewolf.h"
#include "types/classes/CWinFont.h"
#include "types/classes/CZombie.h"
#include "types/funcdefs/RenderScanlineFunc.h"
#include "types/structs/SRenderVertex.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x5F0000
// =============================================================================

undefined core_werewolf_cpp_FUN_005f11a0();
undefined core_werewolf_cpp_FUN_005f11e0();
undefined core_werewolf_cpp_FUN_005f1230();
int core_werewolf_cpp_CWerewolf_FUN_005f1820(CWerewolf * this_ptr);
void core_werewolf_cpp_CWerewolf_serialize_FUN_005f1980(CWerewolf * this_ptr);
undefined core_werewolf_cpp_FUN_005f1ac0();
undefined core_werewolf_cpp_FUN_005f1db0();
int core_werewolf_cpp_CWerewolf_FUN_005f1df0(CWerewolf * this_ptr);
undefined core_werewolf_cpp_FUN_005f1e40();
undefined core_werewolf_cpp_FUN_005f2010();
undefined core_werewolf_cpp_FUN_005f2070();
void core_werewolf_cpp_CWerewolf_FUN_005f20d0(CWerewolf * this_ptr);
undefined core_werewolf_cpp_FUN_005f21e0();
void core_werewolf_cpp_CWerewolf_FUN_005f21f0(CWerewolf * this_ptr);
CWerewolf * core_werewolf_cpp_CWerewolf_dtor_FUN_005f2220(CWerewolf * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8);
CWinFont * engine_winfont_cpp_CWinFont_ctor_FUN_005f22e0(CWinFont * this_ptr, char * font_name, int font_height, int font_width);
CWinFont * engine_winfont_cpp_CWinFont_dtor_FUN_005f2390(CWinFont * this_ptr, uint d1, uint d2, uint d3);
int engine_winfont_cpp_CWinFont_drawText_FUN_005f23f0(CWinFont * this_ptr, int x_position, int y_position, char * text_string, int text_color, int draw_flags);
void engine_winfont_cpp_CWinFont_setColorAndDrawText_FUN_005f2440(CWinFont * this_ptr, HDC device_context, int x_position, int y_position, char * text_string, int foreground_color, int background_color);
int engine_winfont_cpp_CWinFont_createTextBackground_FUN_005f2860(CWinFont * this_ptr, int width, int height);
void engine_winfont_cpp_CWinFont_reset_FUN_005f2a30(CWinFont * this_ptr);
int engine_winfont_cpp_CWinFont_getStringWidth_FUN_005f2aa0(CWinFont * this_ptr, char * text_string);
int engine_winfont_cpp_CWinFont_getStringHeight_FUN_005f2b00(CWinFont * this_ptr, char * text_string);
int engine_winfont_cpp_CWinFont_getLineSpacing_FUN_005f2b70(void);
void wincore_winrun_cpp_calibrateCPUSpeed_FUN_005f2b80(void);
void wincore_winrun_cpp_endPeriod_FUN_005f2db0(void);
int wincore_winrun_cpp_getTime_FUN_005f2dc0(void);
void wincore_winrun_cpp_clearKeypresses_FUN_005f2e70(void);
int wincore_winrun_cpp_getNextKeypress_FUN_005f2e90(void);
int wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00(void);
char wincore_winrun_cpp_getValue_FUN_005f2f20(void);
void wincore_winrun_cpp_enqueueInput_FUN_005f2f30(int input_value);
void wincore_winrun_cpp_setValue_FUN_005f2f70(int val);
void wincore_winrun_cpp_doNothing_FUN_005f2f80(void);
void wincore_winrun_cpp_plotClippedPixel_FUN_005f2f90(int x_coord, int y_coord);
void wincore_winrun_cpp_drawCrosshair_FUN_005f2fd0(void);
void wincore_winrun_cpp_clearMouseClicks_FUN_005f30c0(void);
void wincore_winrun_cpp_setCursorPosition_FUN_005f30d0(int x, int y);
undefined wincore_winrun_cpp_addWindowsMessageHook_FUN_005f3100();
LRESULT wincore_winrun_cpp_mainWindowProc_FUN_005f3150(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);
void wincore_winrun_cpp_processWindowMessages_FUN_005f35e0(void);
int wincore_winrun_cpp_winMain_FUN_005f3680(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow1, int nCmdShow2);
void wincore_winrun_cpp_displayMessageBoxAndQuit_FUN_005f3920(char * message);
char * wincore_winrun_cpp_getKeyName_FUN_005f3980(int keycode);
HANDLE wincore_winrun_cpp_createMutex_FUN_005f3fe0(void);
int wincore_winrun_cpp_waitForMutex_FUN_005f3ff0(HANDLE mutex_handle);
int wincore_winrun_cpp_waitForMutexTimeout_FUN_005f4010(HANDLE mutex_handle, double timeout_seconds);
void wincore_winrun_cpp_releaseMutex_FUN_005f4050(HANDLE mutex_handle);
HANDLE wincore_winrun_cpp_createThread_FUN_005f4070(LPTHREAD_START_ROUTINE thread_func, LPVOID thread_param);
void wincore_winrun_cpp_setThreadPriority_FUN_005f40a0(HANDLE hThread, int priority_level);
void wincore_winrun_cpp_sleep_FUN_005f40e0(double seconds);
void wincore_winrun_cpp_getComputerAndUserName_FUN_005f4140(char * buffer);
void wincore_winrun_cpp_getRegistryStringValue_FUN_005f4210(char * key_path, char * value_name, char * output_buffer, uint * buffer_size);
void wincore_winrun_cpp_setRegistryStringValue_FUN_005f4290(char * key_path, char * value_name, char * value_data);
void wincore_winrun_cpp_initJoystick_FUN_005f4310(void);
void wincore_winrun_cpp_doNothing_FUN_005f4380(void);
void wincore_winrun_cpp_getJoystickState_FUN_005f43a0(void);
void wincore_winvideo_cpp_positionMovieWindow_FUN_005f4500(HWND parent_window);
void wincore_winvideo_cpp_closeMovie_FUN_005f46b0(HWND window_handle);
void wincore_winvideo_cpp_openMovie_FUN_005f4700(HWND parent_window, char * movie_filename);
void wincore_winvideo_cpp_toggleMoviePlayback_FUN_005f4990(HWND notify_window, int play_state);
int wincore_winvideo_cpp_playMovie_FUN_005f4a00(char * directory_path, char * movie_filename);
CVector3f * core_xform_cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix);
CVector3f * core_xform_cpp_transformVector3x4InPlace_FUN_005f4e20(CVector3f * input_output_vector, CMatrix3x4f * matrix);
CVector3f * core_xform_cpp_transformVector3x3_FUN_005f4eb0(CMatrix3x3f * matrix, CVector3f * output_vector, CVector3f * input_vector);
CMatrix3x4f * core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * output_matrix, CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b);
CMatrix3x4f * core_xform_cpp_multiplyMatrix3x4InPlace_FUN_005f50c0(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b);
void core_xform_cpp_setIdentityMatrix3x4_FUN_005f5100(CMatrix3x4f * matrix);
void core_xform_cpp_somebodyWriteMe_FUN_005f5160(void);
void core_xform_cpp_setRotationScaleIdentity_FUN_005f5190(CMatrix3x4f * matrix);
void core_xform_cpp_normalizeMatrix_FUN_005f51e0(CMatrix3x4f * matrix);
void core_xform_cpp_clearTranslation_FUN_005f5370(CMatrix3x4f * matrix);
void core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles);
void core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles);
float core_xform_cpp_atan2Approximation_FUN_005f55c0(double sin_value, double cos_value);
CVector3f * core_xform_cpp_matrixToEulerAngles_FUN_005f5690(CVector3f * euler_out, CMatrix3x3f * matrix_ptr);
CVector3f * core_xform_cpp_matrixToEulerAnglesZYX_FUN_005f5bd0(CVector3f * euler_out, CMatrix3x3f * matrix_ptr);
void core_xform_cpp_getTranslation_FUN_005f6110(CVector3f * output_vector, CMatrix3x4f * input_matrix);
CVector3f * core_xform_cpp_invertAndGetTranslation_FUN_005f6140(CVector3f * output_vector, CMatrix3x4f * input_matrix);
void core_xform_cpp_inverseInPlace_FUN_005f6190(CMatrix3x4f * matrix);
double core_xform_cpp_determinant_FUN_005f61c0(CMatrix3x4f * matrix);
CMatrix3x4f * core_xform_cpp_inverse_FUN_005f6210(CMatrix3x4f * output_matrix, CMatrix3x4f * input_matrix);
float core_xform_cpp_computeOrthogonalityError_FUN_005f6460(CMatrix3x4f * matrix);
void core_xform_cpp_orthonormalizeMatrix3x3_FUN_005f6690(CMatrix3x3f * matrix, int preserve_scale);
int core_xform_cpp_hasNegativeDeterminant_FUN_005f6be0(CMatrix3x4f * matrix);
void core_xform_cpp_buildRotationX_FUN_005f6c40(CMatrix3x4f * output_matrix, float angle_radians);
void core_xform_cpp_buildRotationY_FUN_005f6cc0(CMatrix3x4f * output_matrix, float angle_radians);
void core_xform_cpp_buildRotationZ_FUN_005f6d40(CMatrix3x4f * output_matrix, float angle_radians);
void core_xform_cpp_buildTranslationMatrix_FUN_005f6dc0(CMatrix3x4f * output_matrix, CVector3f * translation);
void core_xform_cpp_buildUniformScaleMatrix_FUN_005f6e20(CMatrix3x4f * output_matrix, float scale_factor);
void core_xform_cpp_buildScaleMatrix_FUN_005f6e80(CMatrix3x4f * output_matrix, CVector3f * scale_vector);
CMatrix3x4f * core_xform_cpp_buildXFlipMatrix_FUN_005f6ee0(CMatrix3x4f * matrix_out, float x_offset);
CMatrix3x4f * core_xform_cpp_buildYFlipMatrix_FUN_005f6f40(CMatrix3x4f * matrix_out, float y_offset);
CMatrix3x4f * core_xform_cpp_buildZFlipMatrix_FUN_005f6fa0(CMatrix3x4f * matrix_out, float z_offset);
CMatrix3x4f * core_xform_cpp_buildMirrorTransform_FUN_005f7000(CMatrix3x4f * matrix_out, CVector3f * axis_vector, float distance);
void core_xform_cpp_lerpMatrix3x4_FUN_005f7140(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, float t);
void core_xform_cpp_quaternionToMatrix3x3_FUN_005f7280(CMatrix3x3f * matrix_ptr, CQuaternion4f * quat_ptr);
CMatrix3x4f * core_xform_cpp_quaternionToMatrix3x4_FUN_005f73e0(CMatrix3x4f * matrix_out, CQuaternion4f * quat_ptr);
CQuaternion4f * core_xform_cpp_matrixToQuaternion_FUN_005f7420(CQuaternion4f * quat_out, CMatrix3x3f * matrix_ptr);
void core_xform_cpp_negateFirstComponent_FUN_005f75e0(CQuaternion4f * output_vector, CQuaternion4f * input_vector);
void core_xform_cpp_setIdentityQuaternion_FUN_005f7620(CQuaternion4f * quaternion);
CQuaternion4f * core_xform_cpp_multiplyQuaternion_FUN_005f7640(CQuaternion4f * result_out, CQuaternion4f * quat1_ptr, CQuaternion4f * quat2_ptr);
CQuaternion4f * core_xform_cpp_multiplyQuaternionInPlace_FUN_005f7700(CQuaternion4f * quat1_inout, CQuaternion4f * quat2_ptr);
void core_xform_cpp_quaternionToAxisAngle_FUN_005f7730(CQuaternion4f * quat_ptr, float * angle_out, CVector3f * axis_out);
CQuaternion4f * core_xform_cpp_slerpQuaternion_FUN_005f77e0(CQuaternion4f * result_out, CQuaternion4f * quat1_ptr, CQuaternion4f * quat2_ptr, float t);
void core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(CQuaternion4f * quat_ptr, float angle_radians);
void core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(CQuaternion4f * quat_ptr, float angle_radians);
void core_xform_cpp_quaternionFromAngleZ_FUN_005f7a30(CQuaternion4f * quat_ptr, float angle_radians);
void core_xform_cpp_quaternionFromAxisAngle_FUN_005f7a70(CQuaternion4f * quat_ptr, float angle_radians, CVector3f * axis_ptr);
CVector3f * core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0(CVector3f * euler_out, CQuaternion4f * quat_ptr);
CVector3f * core_xform_cpp_quaternionToEulerAnglesZYX_FUN_005f7af0(CVector3f * euler_out, CQuaternion4f * quat_ptr);
CQuaternion4f * core_xform_cpp_eulerToQuaternion_FUN_005f7b20(CQuaternion4f * quat_out, CVector3f * euler_angles);
CQuaternion4f * core_xform_cpp_eulerToQuaternionIndirect_FUN_005f7b70(CQuaternion4f * quat_out, CVector3f * euler_angles);
void core_xform_cpp_clipInterpolateRightPlane_FUN_005f7bc0(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out);
void core_xform_cpp_clipInterpolateLeftPlane_FUN_005f7c80(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out);
void core_xform_cpp_clipInterpolateTopPlane_FUN_005f7d40(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out);
void core_xform_cpp_clipInterpolateBottomPlane_FUN_005f7e00(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out);
void core_xform_cpp_clipPolygonStage1_FUN_005f7ed0(void);
void core_xform_cpp_clipPolygonStage2_FUN_005f8040(void);
void core_xform_cpp_clipPolygonStage3_FUN_005f81c0(void);
void core_xform_cpp_clipPolygonStage4_FUN_005f8330(void);
void core_xform_cpp_clampClippedVertices_FUN_005f84a0(void);
SRenderVertex * core_xform_cpp_transformAndClipGeometry_FUN_005f8550(int vertex_count, int * vertex_indices);
CDemonActorType * core_zombie_cpp_staticInit_FUN_005f8c90(void);
undefined core_zombie_cpp_FUN_005f8cc0();
undefined core_zombie_cpp_FUN_005f8d30();
undefined core_zombie_cpp_FUN_005f8da0();
undefined core_zombie_cpp_CZombie_FUN_005f8e50();
undefined core_zombie_cpp_FUN_005f8fa0();
CDemonActorType * core_zombie_cpp_CZombie_getActorType_FUN_005f8fd0(CZombie * this_ptr);
CZombie * core_zombie_cpp_CZombie_ctor_FUN_005f8fe0(CZombie * this_ptr);
void core_zombie_cpp_CZombie_FUN_005f9140(CZombie * this_ptr);
void core_zombie_cpp_CZombie_process_FUN_005f9470(CZombie * this_ptr);
undefined core_zombie_cpp_CZombie_FUN_005fb1f0();
undefined core_zombie_cpp_CZombie_PickupSomethingPossibly_FUN_005fb530();
undefined core_zombie_cpp_CZombie_FUN_005fbd00();
undefined core_zombie_cpp_CZombie_FUN_005fbda0();
undefined core_zombie_cpp_CZombie_FUN_005fbde0();
int core_zombie_cpp_CZombie_FUN_005fbe20(CZombie * this_ptr);
int core_zombie_cpp_CZombie_FUN_005fbe70(CZombie * this_ptr);
void core_zombie_cpp_CZombie_serialize_FUN_005fbfd0(CZombie * this_ptr);
undefined core_zombie_cpp_CZombie_FUN_005fc120();
undefined core_zombie_cpp_CZombie_FUN_005fc220();
undefined core_zombie_cpp_CZombie_FUN_005fc4f0();
int core_zombie_cpp_CZombie_FUN_005fc720(CZombie * this_ptr);
undefined core_zombie_cpp_CZombie_FUN_005fc920();
undefined core_zombie_cpp_CZombie_FUN_005fc960();
undefined core_zombie_cpp_CZombie_FUN_005fc970();
int core_zombie_cpp_CZombie_FUN_005fc9e0(CZombie * this_ptr);
undefined core_zombie_cpp_CZombie_FUN_005fca10();
void core_zombie_cpp_CZombie_FUN_005fca80(CZombie * this_ptr);
undefined core_zombie_cpp_CZombie_FUN_005fcb70();
void core_zombie_cpp_CZombie_FUN_005fcc20(CZombie * this_ptr, FILE * file_handle);
CZombie * core_zombie_cpp_CZombie_dtor_FUN_005fcc50(CZombie * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8);
undefined core_zombie_cpp_FUN_005fcd10();
undefined core_zombie_cpp_FUN_005fcd20();
undefined core_zombie_cpp_FUN_005fce40();
undefined core_zombie_cpp_FUN_005fcf80();
void engine_3d_c_rasterizeTriangle_FUN_005fcfc0(SRenderVertex * vertex_buffer, int vertex_count, int triangle_count);
void engine_3d_c_rasterizePolygon_FUN_005fd4e0(SRenderVertex * vertex_buffer, int vertex_count, RenderScanlineFunc * scanline_renderer);
SIZE_T crt_stdio_c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file);
void crt_stdio_c_StringBufferCallback_FUN_005fdb90(StringOutputContext * context, char character);
int crt_stdio_c_vsprintf_FUN_005fdba8(char * buffer, char * format, va_list_t * args);
int crt_stdio_c_sprintf_FUN_005fdbd0(char * buffer, char * format, ...);
SIZE_T crt_stdio_c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file);
void * crt_memory_c_memset_FUN_005fde40(void * dest, int value, ulong count);
void crt_fltused_c_staticInit_FUN_005fde60(void);
void crt_stub_c_staticInit_FUN_005fde92(void);
void crt_stub_c_staticFinal_FUN_005fde93(void);
void * crt_stdlib_c_median_of_3_FUN_005fdea0(void * a, void * b, void * c, QSORT_COMPARATOR compar);
void crt_stdlib_c_memory_swap_FUN_005fdf10(void * ptr1, void * ptr2, SIZE_T bytes);
void crt_stdlib_c_qsort_FUN_005fdf38(void * base, SIZE_T num, SIZE_T size, QSORT_COMPARATOR compar);
void * crt_string_c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n);
void * crt_memory_c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info);
void crt_memory_c_free_FUN_005fe659(void * ptr);
void * crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info);
double crt_math_c_round_FUN_005fe6b0(double value);
int crt_stdio_c_fprintf_FUN_005fe6d0(FILE * file, char * format, ...);
int crt_stdio_c_getc_helper_FUN_005fe700(scanf_state_t * state);
int crt_stdio_c_ungetc_helper_FUN_005fe720(int character, scanf_state_t * state);
int crt_stdio_c_vfscanf_FUN_005fe738(FILE * file, char * format, va_list_t args);
int crt_stdio_c_fscanf_FUN_005fe7c0(FILE * file, char * format, ...);
int crt_string_c_stricmp_FUN_005fe7f0(char * str1, char * str2);
int crt_stdio_c_fgetc_FUN_005fe840(FILE * file);
int crt_stdio_c_FillBufferAndGetChar_FUN_005fe910(FILE * file);
int crt_stdio_c_FillInputBuffer_FUN_005fe940(FILE * file);
int crt_stdio_c_fputc_FUN_005fea10(int character, FILE * stream);
int crt_ctype_c_tolower_FUN_005feb30(int character);
uint * crt_stdlib_c_GetRandomSeedPointer_FUN_005feb50(void);
int crt_stdlib_c_rand_FUN_005feb5c(void);
void crt_stdlib_c_srand_FUN_005feb80(uint seed);
double crt_math_c_floor_FUN_005feb90(double input_value);
wchar_t crt_file_c_normalize_path_separator_FUN_005febe0(wchar_t ch, wchar_t * preferred_separator);
void crt_file_c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, char * extension);
char * crt_string_c_strstr_FUN_005fedd0(char * haystack_str, char * needle_str);
void crt_cpp_c_pureVirtualStub_FUN_005fee9f(void);
void * crt_memory_c_destroyTypeArray_FUN_005feeaf(WatcomTypeArrayInfo * destroy_info);
int crt_memory_c_freeTypeArray_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info);
int crt_string_c_strcmp_FUN_005fef20(char * str1, char * str2);
char * crt_stdio_c_fgets_FUN_005fefd0(char * str, int num, FILE * stream);
void crt_stdlib_c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node);
int crt_string_c_strnicmp_FUN_005ff070(char * str1, char * str2, int count);
undefined crt_unknown_c_FUN_005ff0d0();
double crt_string_c_strtod_FUN_005ff0f3(char * str);
void crt_string_c_strncpy_safe_FUN_005ff130(char * dest, char * src, int length, int maxlen);
void crt_string_c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, char * ext);
int crt_stdio_c_fgetc_outptr_FUN_005ff245(FILE * stream, uchar * output_byte);
int crt_stdio_c_fputc_FUN_005ff2d7(FILE * stream, int character);
ostrstream * crt_strstream_cpp_ostrstream_ctor_FUN_005ff384(ostrstream * this_ptr, int flags, char * buffer, int buffer_size, int mode);
void crt_strstream_cpp_ostrstream_destructor_thunk_from_ostream_FUN_005ff42f(ostream * this_ptr, int dtor_flags);
void crt_strstream_cpp_ostrstream_destructor_thunk_from_ios_FUN_005ff445(ios * this_ptr, int dtor_flags);
int crt_strstream_cpp_ostrstream_tellp_FUN_005ff45d(ostrstream * this_ptr);
ostrstream * crt_strstream_cpp_ostrstream_dtor_FUN_005ff48a(ostrstream * this_ptr, int d1);
istrstream * crt_strstream_cpp_istrstream_constructor_FUN_005ff524(istrstream * this_ptr, int ctor_flags, char * buffer, int size);
void crt_strstream_cpp_istrstream_destructor_thunk_from_istream_FUN_005ff59c(istream * this_ptr, int dtor_flags);
void crt_strstream_cpp_istrstream_destructor_thunk_from_ios_FUN_005ff5b2(ios * this_ptr, int dtor_flags);
istrstream * crt_strstream_cpp_istrstream_dtor_FUN_005ff5ca(istrstream * this_ptr, int d1);
void crt_fstream_cpp_ifstream_constructor_FUN_005ff664(ifstream * this_ptr, int ctor_flags, int fd, char * buffer, int buffer_len);
void crt_fstream_cpp_ifstream_destructor_thunk_from_istream_FUN_005ff6e2(istream * this_ptr, int dtor_flags);
void crt_fstream_cpp_ifstream_destructor_thunk_from_ios_FUN_005ff6f8(ios * this_ptr, int dtor_flags);
void crt_fstream_cpp_ofstream_constructor_FUN_005ff710(ofstream * this_ptr, int ctor_flags, int fd, int mode, char * buffer, SIZE_T buffer_size);
void crt_fstream_cpp_ofstream_destructor_thunk_from_ostream_FUN_005ff78e(ostream * this_ptr, int dtor_flags);
void crt_fstream_cpp_ofstream_destructor_thunk_from_ios_FUN_005ff7a4(ios * this_ptr, int dtor_flags);
ofstream * crt_fstream_cpp_ofstream_dtor_FUN_005ff7bc(ofstream * this_ptr, uint d1, uint d2, uint d3, uint d4);
void * crt_fstream_cpp_ifstream_dtor_FUN_005ff856(ifstream * this_ptr, uint d1, uint d2, uint d3, uint d4);
ifstream * crt_fstream_cpp_ifstream_ctor_FUN_005ff8f0(ifstream * this_ptr, int c1);
ofstream * crt_fstream_cpp_ofstream_ctor_FUN_005ff95c(ofstream * this_ptr, int c1);
int crt_io_c_deleteFile_FUN_005ff9d0(char * filename);
int crt_ctype_c_toupper_FUN_005ff9e0(int c);
void crt_stub_c_staticInit_FUN_005ff9f2(void);
uint crt_stack_c_stack_probe_FUN_005ff9f3(uint stack_size);
void crt_stack_c_check_stack_target_FUN_005ffa03(void * target_stack_ptr);
void crt_stack_c_stack_overflow_handler_FUN_005ffa22(SIZE_T required_bytes);
void crt_stack_c_ProbeStackSpace_FUN_005ffa2f(uint size);
int crt_stdio_c_seek_within_buffer_FUN_005ffa70(int offset, FILE * file);
int crt_stdio_c_seek_within_buffer_FUN_005ffa70(FILE * file);
int crt_stdio_c_fseek_FUN_005ffacc(FILE * file, long offset, int whence);
FILE * crt_stdio_c_stream_write_internal_FUN_005ffcb3(FILE * stream, void * buffer, SIZE_T count);
float10 crt_math_c_pow_FUN_005ffd76(float10 base, float10 exp);
float10 crt_math_c_integer_power_FUN_005ffeb2(float10 base, ushort exponent);
int crt_stdlib_c_atoi_FUN_005ffef0(char * string_ptr);
char * crt_string_c_strtok_FUN_005fff50(char * str, char * delimiters);

