// Name: engine_3d.c_drawLineStrip3D_FUN_00405900
// Address: 00405900
// Address Range: [[00405900, 0040598f]]
// Convention: unknown
// Signature: int engine_3d_c_drawLineStrip3D_FUN_00405900(int param_1)

#include "nocturne.h"

int engine_3d_c_drawLineStrip3D_FUN_00405900(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint auStack_d0 [12];
  uint auStack_a0 [11];
  uint uStack_74;
  uint auStack_70 [12];
  uint auStack_40 [12];
  
  bVar6 = 0;
  uStack_74 = 0x40590c;
  engine_3d_c_setActiveRenderColor_FUN_00405840();
  iVar3 = 0;
  piVar2 = (int *)(param_1 + 8);
  while( true ) {
    if (*(int *)(param_1 + 4) + -1 <= iVar3) break;
    puVar4 = &DAT_005c5014 + *piVar2 * 0xc;
    puVar5 = auStack_40;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    puVar4 = &DAT_005c5014 + piVar2[1] * 0xc;
    puVar5 = auStack_70;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    puVar4 = auStack_70;
    puVar5 = auStack_a0;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + 1;
    puVar4 = auStack_40;
    puVar5 = auStack_d0;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    engine_3d_c_clipAndDrawLine3D_FUN_00409590();
  }
  return *(int *)(param_1 + 4) * 4 + param_1 + 8;
}
