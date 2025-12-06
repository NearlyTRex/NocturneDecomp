// Name: engine_boss.c_modelStructNotSupported_FUN_0041db80
// Address: 0041db80
// Address Range: [[0041db80, 0041dba5]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_boss.c_modelStructNotSupported_FUN_0041db80(SMRGLHeaderExtended * header)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_boss_c_modelStructNotSupported_FUN_0041db80(SMRGLHeaderExtended *header)

{
  g_CurrentFilename = "..\\engine\\boss.c";
  g_CurrentLineNumber = 0x3a;
  core_main_c_displayErrorAndQuit_FUN_00506f10("modelStruct not supported");
  return (SMRGLHeaderExtended *)0x0;
}
