// Name: engine_boss.c_modelStructNotSupported_FUN_0041dbb0
// Address: 0041dbb0
// Address Range: [[0041dbb0, 0041dbd3]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_boss_c_modelStructNotSupported_FUN_0041dbb0(SMRGLHeaderExtended *header)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_boss_c_modelStructNotSupported_FUN_0041dbb0(SMRGLHeaderExtended *header)

{
  SMRGLHeaderExtended *extraout_EAX;
  
  g_CurrentFilename = "..\\engine\\boss.c";
  g_CurrentLineNumber = 0x3f;
  core_main_c_displayErrorAndQuit_FUN_00506f10("modelStruct not supported");
  return extraout_EAX;
}
