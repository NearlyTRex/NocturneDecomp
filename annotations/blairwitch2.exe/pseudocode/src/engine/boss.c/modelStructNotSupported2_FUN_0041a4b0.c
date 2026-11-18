// Name: engine_boss.c_modelStructNotSupported2_FUN_0041a4b0
// Address: 0041a4b0
// Address Range: [[0041a4b0, 0041a4d5]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_boss_c_modelStructNotSupported2_FUN_0041a4b0(char *filename)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_boss_c_modelStructNotSupported2_FUN_0041a4b0(char *filename)

{
  g_CHAR_PTR_01d046a0 = "..\\engine\\boss.c";
  g_INT_01d046a4 = 0x3a;
  core_main_c_displayErrorAndQuit_FUN_004e4500("modelStruct not supported");
  return (SMRGLHeaderExtended *)0x0;
}
