// Name: engine_3d.c_renderPrim_FUN_00407920
// Address: 00407920
// Address Range: [[00407920, 004079b4]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_renderPrim_FUN_00407920(SMRGLHeaderPrimitive *primitive)

#include "nocturne.h"

void __cdecl engine_3d_c_renderPrim_FUN_00407920(SMRGLHeaderPrimitive *primitive)

{
  SMRGLHeaderExtended *pSVar2;
  char local_104 [256];
  int iVar1;
  
  if (primitive == (SMRGLHeaderPrimitive *)0x0) {
    g_CurrentFilename = "..\\engine\\3d.c";
    g_CurrentLineNumber = 3202;
    core_main_c_displayErrorAndQuit_FUN_00506f10("renderPrim: Bad input pointer");
  }
  iVar1 = (primitive->base).type;
  if ((-1 < iVar1) && (iVar1 < 0x43)) {
    (*g_MRGLBlockHandlerTable[iVar1])((SMRGLHeaderExtended *)primitive);
    return;
  }
  _sprintf(local_104,"Bad prim : %d",iVar1);
  g_CurrentFilename = "..\\engine\\3d.c";
  g_CurrentLineNumber = 3211;
  core_main_c_displayErrorAndQuit_FUN_00506f10(local_104);
  return;
}
