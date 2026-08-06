// Name: engine_boss.c_modelStructNotSupported2_FUN_0041a540
// Address: 0041a540
// Address Range: [[0041a540, 0041a565]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_boss_c_modelStructNotSupported2_FUN_0041a540(char *filename)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_boss_c_modelStructNotSupported2_FUN_0041a540(char *filename)

{
  g_CurrentFilename = "..\\engine\\boss.c";
  g_CurrentLineNumber = 58;
  core_main_c_displayErrorAndQuit_FUN_004c8440("modelStruct not supported");
  return (SMRGLHeaderExtended *)0x0;
}
