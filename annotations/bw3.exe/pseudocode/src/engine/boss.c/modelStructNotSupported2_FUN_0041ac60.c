// Name: engine_boss.c_modelStructNotSupported2_FUN_0041ac60
// Address: 0041ac60
// Address Range: [[0041ac60, 0041ac85]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_boss_c_modelStructNotSupported2_FUN_0041ac60(char *filename)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_boss_c_modelStructNotSupported2_FUN_0041ac60(char *filename)

{
  g_CurrentFilename = "..\\engine\\boss.c";
  g_CurrentLineNumber = 58;
  core_main_c_displayErrorAndQuit_FUN_004e4330("modelStruct not supported");
  return (SMRGLHeaderExtended *)0x0;
}
