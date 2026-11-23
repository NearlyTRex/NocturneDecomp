// Name: engine_boss.c_modelStructNotSupported2_FUN_0041d920
// Address: 0041d920
// Address Range: [[0041d920, 0041d945]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_boss_c_modelStructNotSupported2_FUN_0041d920(char *filename)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_boss_c_modelStructNotSupported2_FUN_0041d920(char *filename)

{
  g_CurrentFilename = "..\\engine\\boss.c";
  g_CurrentLineNumber = 58;
  core_main_c_displayErrorAndQuit_FUN_005030e0("modelStruct not supported");
  return (SMRGLHeaderExtended *)0x0;
}
