// Name: engine_3d.c_oldFunction_FUN_00404df0
// Address: 00404df0
// Address Range: [[00404df0, 00404e37]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_oldFunction_FUN_00404df0(SMRGLHeaderExtended * primitive)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_oldFunction_FUN_00404df0(SMRGLHeaderExtended *primitive)

{
  BADSPACEBASE *in_ESP;
  char acStack_50 [76];
  
  crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffffac,"Old func : %d",(primitive->base).type);
  g_CurrentLineNumber = 0xda;
  g_CurrentFilename = "..\\engine\\3d.c";
  core_main_c_displayErrorAndQuit_FUN_00506f10(acStack_50);
  return (SMRGLHeaderExtended *)&g_RenderResult;
}
