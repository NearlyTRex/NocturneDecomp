// Name: engine_boss.c_modelStructNotSupported2_FUN_0041db80
// Address: 0041db80
// Address Range: [[0041db80, 0041dba5]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_boss_c_modelStructNotSupported2_FUN_0041db80(char *filename)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_boss_c_modelStructNotSupported2_FUN_0041db80(char *filename)

{
  g_CurrentFilename = "..\\engine\\boss.c";
  g_CurrentLineNumber = 58;
  core_main_c_displayErrorAndQuit_FUN_00506f10("modelStruct not supported");
  return (SMRGLHeaderExtended *)0x0;
}
