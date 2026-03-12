// Name: engine_boss.c_modelStructNotSupported_FUN_0041dbe0
// Address: 0041dbe0
// Address Range: [[0041dbe0, 0041dc1e]]
// Convention: __cdecl
// Signature: void __cdecl engine_boss_c_modelStructNotSupported_FUN_0041dbe0(SMRGLHeaderExtended *mrgl_data)

#include "nocturne.h"

void __cdecl engine_boss_c_modelStructNotSupported_FUN_0041dbe0(SMRGLHeaderExtended *mrgl_data)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  byte bVar3;
  uint local_3c [13];
  
  bVar3 = 0;
  g_CurrentFilename = "..\\engine\\boss.c";
  g_CurrentLineNumber = 0x44;
  core_main_c_displayErrorAndQuit_FUN_00506f10("modelStruct not supported");
  puVar2 = local_3c;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    *unaff_ESI = *puVar2;
    puVar2 = puVar2;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
  }
  return;
}
