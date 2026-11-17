// Name: engine_boss.c_modelStructNotSupported1_FUN_0041ac30
// Address: 0041ac30
// Address Range: [[0041ac30, 0041ac55]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_boss_c_modelStructNotSupported1_FUN_0041ac30(SMRGLHeaderExtended *mrgl_data)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_boss_c_modelStructNotSupported1_FUN_0041ac30(SMRGLHeaderExtended *mrgl_data)

{
  g_CHAR_PTR_01d71de0 = "..\\engine\\boss.c";
  g_INT_01d71de4 = 0x35;
  core_main_c_displayErrorAndQuit_FUN_004e4330("modelStruct not supported");
  return (SMRGLHeaderExtended *)0x0;
}
