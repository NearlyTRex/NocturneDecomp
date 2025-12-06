// Name: engine_boss.c_modelStructNotSupported_FUN_0041dbe0
// Address: 0041dbe0
// Address Range: [[0041dbe0, 0041dc1e]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_boss.c_modelStructNotSupported_FUN_0041dbe0(SMRGLHeaderExtended * header)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_boss_c_modelStructNotSupported_FUN_0041dbe0(SMRGLHeaderExtended *header)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  SMRGLHeaderExtended *unaff_ESI;
  int *piVar2;
  SMRGLHeaderExtended *pSVar3;
  byte bVar4;
  int local_3c [13];
  
  bVar4 = 0;
  g_CurrentFilename = "..\\engine\\boss.c";
  g_CurrentLineNumber = 0x44;
  core_main_c_displayErrorAndQuit_FUN_00506f10("modelStruct not supported");
  piVar2 = local_3c;
  pSVar3 = unaff_ESI;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    (pSVar3->base).type = *piVar2;
    piVar2 = piVar2 + (uint)bVar4 * -2 + 1;
    pSVar3 = (SMRGLHeaderExtended *)((int)pSVar3 + (uint)bVar4 * -8 + 4);
  }
  return unaff_ESI;
}
