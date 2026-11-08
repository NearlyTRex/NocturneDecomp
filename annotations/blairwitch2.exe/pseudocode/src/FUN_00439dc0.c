// Name: FUN_00439dc0
// Address: 00439dc0
// Address Range: [[00439dc0, 00439e9c]]
// Convention: unknown
// Signature: void FUN_00439dc0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00439dc0(int param_1)

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
  FUN_00408a80(param_1);
  FUN_0044fd00(param_1 + 0x2b4);
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1);
  puVar4 = auStack_2c;
  pfVar5 = afStack_44;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar5 = (float)*puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    pfVar5 = pfVar5 + (uint)bVar6 * -2 + 1;
  }
  fVar1 = (fStack_38 - afStack_44[0]) * (float)_DAT_005ce1cb;
  fVar2 = (fStack_30 - fStack_3c) * (float)_DAT_005ce1cb;
  if (fVar1 < fVar2) {
    fVar2 = fVar1;
  }
  *(float *)(param_1 + 0x434) = fVar2;
  *(uint *)(param_1 + 0x43c) = 0xc61c3f9a;
  *(uint *)(param_1 + 0x440) = 0xc61c3f9a;
  *(uint *)(param_1 + 0x444) = 0xc61c3f9a;
  *(uint *)(param_1 + 0x448) = 0xc61c3f9a;
  *(uint *)(param_1 + 0x450) = 0xc61c3f9a;
  *(uint *)(param_1 + 0x44c) = 0xc61c3f9a;
  *(uint *)(param_1 + 0x454) = 0x461c3f9a;
  *(uint *)(param_1 + 0x430) = 0;
  return;
}
