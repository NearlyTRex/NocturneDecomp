// Name: engine_3d.c_renderPrim_FUN_00407920
// Address: 00407920
// Address Range: [[00407920, 004079b4]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPrim_FUN_00407920(SMRGLHeaderPrimitive * primitive)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPrim_FUN_00407920(SMRGLHeaderPrimitive *primitive)

{
  int iVar1;
  SMRGLHeaderExtended *extraout_EAX;
  SMRGLHeaderExtended *pSVar2;
  BADSPACEBASE *in_ESP;
  char acStack_100 [4];
  char acStack_fc [248];
  
  if (primitive == (SMRGLHeaderPrimitive *)0x0) {
    g_CurrentFilename = "..\\engine\\3d.c";
    g_CurrentLineNumber = 0xc82;
    core_main_c_displayErrorAndQuit_FUN_00506f10("renderPrim: Bad input pointer");
  }
  iVar1 = (primitive->base).type;
  if ((-1 < iVar1) && (iVar1 < 0x43)) {
    pSVar2 = (*g_MRGLBlockHandlerTable[iVar1])((SMRGLHeaderExtended *)primitive);
    return pSVar2;
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_100,"Bad prim : %d",iVar1);
  g_CurrentFilename = "..\\engine\\3d.c";
  g_CurrentLineNumber = 0xc8b;
  core_main_c_displayErrorAndQuit_FUN_00506f10(acStack_fc);
  return extraout_EAX;
}
