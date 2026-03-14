// Name: engine_boss.c_modelStructNotSupported_FUN_0041dbe0
// Address: 0041dbe0
// Address Range: [[0041dbe0, 0041dc1e]]
// Convention: __esi
// Signature: void __esi engine_boss_c_modelStructNotSupported_FUN_0041dbe0(SMRGLHeaderExtended *mrgl_data)

#include "nocturne.h"

void __esi engine_boss_c_modelStructNotSupported_FUN_0041dbe0(SMRGLHeaderExtended *mrgl_data)

{
  int iVar1;
  uint *puVar2;
  byte bVar3;
  uint local_3c [15];
  
  bVar3 = 0;
  g_CurrentFilename = "..\\engine\\boss.c";
  g_CurrentLineNumber = 0x44;
  core_main_c_displayErrorAndQuit_FUN_00506f10("modelStruct not supported");
  puVar2 = local_3c;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    (mrgl_data->base).type = *puVar2;
    puVar2 = puVar2;
    mrgl_data = (SMRGLHeaderExtended *)((int)mrgl_data + (uint)bVar3 * -8 + 4);
  }
  return;
}
