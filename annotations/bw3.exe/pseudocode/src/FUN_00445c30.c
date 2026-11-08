// Name: FUN_00445c30
// Address: 00445c30
// Address Range: [[00445c30, 00445d0c]]
// Convention: unknown
// Signature: void FUN_00445c30(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00445c30(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint *puVar4;
  float *pfVar5;
  byte bVar6;
  float afStack_44 [2];
  float fStack_3c;
  float fStack_38;
  float fStack_30;
  uint auStack_2c [8];
  
  bVar6 = 0;
  FUN_00408890(param_1);
  FUN_00462580(param_1 + 0x158);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
  puVar4 = auStack_2c;
  pfVar5 = afStack_44;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar5 = (float)*puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    pfVar5 = pfVar5 + (uint)bVar6 * -2 + 1;
  }
  fVar1 = (fStack_38 - afStack_44[0]) * (float)_DAT_005b99ee;
  fVar2 = (fStack_30 - fStack_3c) * (float)_DAT_005b99ee;
  if (fVar1 < fVar2) {
    fVar2 = fVar1;
  }
  *(float *)(param_1 + 0x2d8) = fVar2;
  *(uint *)(param_1 + 0x2e0) = 0xc61c3f9a;
  *(uint *)(param_1 + 0x2e4) = 0xc61c3f9a;
  *(uint *)(param_1 + 0x2e8) = 0xc61c3f9a;
  *(uint *)(param_1 + 0x2ec) = 0xc61c3f9a;
  *(uint *)(param_1 + 0x2f4) = 0xc61c3f9a;
  *(uint *)(param_1 + 0x2f0) = 0xc61c3f9a;
  *(uint *)(param_1 + 0x2f8) = 0x461c3f9a;
  *(uint *)(param_1 + 0x2d4) = 0;
  return;
}
