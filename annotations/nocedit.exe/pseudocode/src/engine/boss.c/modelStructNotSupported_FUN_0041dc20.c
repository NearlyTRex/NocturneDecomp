// Name: engine_boss.c_modelStructNotSupported_FUN_0041dc20
// Address: 0041dc20
// Address Range: [[0041dc20, 0041dc43]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_boss_c_modelStructNotSupported_FUN_0041dc20(SMRGLHeaderExtended *header)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_boss_c_modelStructNotSupported_FUN_0041dc20(SMRGLHeaderExtended *header)

{
  SMRGLHeaderExtended *extraout_EAX;
  
  g_CurrentFilename = "..\\engine\\boss.c";
  g_CurrentLineNumber = 0x49;
  core_main_c_displayErrorAndQuit_FUN_00506f10("modelStruct not supported");
  return extraout_EAX;
}
