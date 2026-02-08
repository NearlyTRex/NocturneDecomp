// Name: engine_3d.c_oldFunction_FUN_00403740
// Address: 00403740
// Address Range: [[00403740, 00403787]]
// Convention: __cdecl
// Signature: void * __cdecl engine_3d_c_oldFunction_FUN_00403740(SMRGLHeaderPrimitive *primitive)

#include "nocturne.h"

void * __cdecl engine_3d_c_oldFunction_FUN_00403740(SMRGLHeaderPrimitive *primitive)

{
  char local_54 [80];
  
  _sprintf(local_54,"Old func : %d",(primitive->base).type);
  g_CurrentLineNumber = 0xda;
  g_CurrentFilename = "..\\engine\\3d.c";
  core_main_c_displayErrorAndQuit_FUN_00506f10(local_54);
  return &g_RenderResult;
}
