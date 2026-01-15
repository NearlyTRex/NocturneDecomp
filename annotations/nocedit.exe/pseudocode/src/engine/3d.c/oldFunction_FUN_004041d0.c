// Name: engine_3d.c_oldFunction_FUN_004041d0
// Address: 004041d0
// Address Range: [[004041d0, 00404217]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_oldFunction_FUN_004041d0(SMRGLHeaderExtended * primitive)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_oldFunction_FUN_004041d0(SMRGLHeaderExtended *primitive)

{
  char local_54 [80];
  
  crt_stdio_c_sprintf_FUN_005fdbd0(local_54,"Old func : %d",(primitive->base).type);
  g_CurrentLineNumber = 0xda;
  g_CurrentFilename = "..\\engine\\3d.c";
  core_main_c_displayErrorAndQuit_FUN_00506f10(local_54);
  return (SMRGLHeaderExtended *)&g_RenderResult;
}
