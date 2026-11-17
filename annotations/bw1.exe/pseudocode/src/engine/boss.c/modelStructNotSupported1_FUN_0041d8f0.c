// Name: engine_boss.c_modelStructNotSupported1_FUN_0041d8f0
// Address: 0041d8f0
// Address Range: [[0041d8f0, 0041d915]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_boss_c_modelStructNotSupported1_FUN_0041d8f0(SMRGLHeaderExtended *mrgl_data)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_boss_c_modelStructNotSupported1_FUN_0041d8f0(SMRGLHeaderExtended *mrgl_data)

{
  g_CHAR_PTR_01d1d400 = "..\\engine\\boss.c";
  g_INT_01d1d404 = 0x35;
  core_main_c_displayErrorAndQuit_FUN_005030e0("modelStruct not supported");
  return (SMRGLHeaderExtended *)0x0;
}
