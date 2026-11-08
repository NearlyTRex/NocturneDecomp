// Name: FUN_00597970
// Address: 00597970
// Address Range: [[00597970, 00597ae5]]
// Convention: unknown
// Signature: undefined4 FUN_00597970(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00597970(int param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float10 fVar6;
  uint auStack_54 [6];
  uint auStack_3c [8];
  int iStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar5 = 0;
  fStack_14 = (float)*(int *)(param_1 + 0xd070) * (float)_DAT_005d9699 * (float)_DAT_005d96a1;
  fStack_18 = ((float)_DAT_005d9691 - (float)*(int *)(param_1 + 0xd070)) * (float)_DAT_005d9699 *
              (float)_DAT_005d96a1;
  if (*(int *)(param_1 + 0xd068) == 0) {
    fVar6 = ((float10)fStack_14 * (float10)*(float *)(param_1 + 0xd064)) /
            (float10)*(float *)(param_1 + 0xd06c);
    iVar2 = FUN_005a3120();
    iStack_1c = (int)ROUND(fVar6);
    *(int *)(param_1 + 0xd060) = iVar2 - iStack_1c;
  }
  else {
    fVar6 = ((float10)fStack_14 * (float10)*(float *)(param_1 + 0xd064)) /
            (float10)*(float *)(param_1 + 0xd06c) + (float10)fStack_18;
    FUN_005a3120();
    *(int *)(param_1 + 0xd060) = (int)ROUND(fVar6);
  }
  FUN_004087f0(param_1);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
  puVar3 = auStack_3c;
  puVar4 = auStack_54;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  iVar2 = FUN_0041daf0(auStack_54);
  uVar1 = DAT_005f2afc;
  if (iVar2 != 0) {
    *(uint *)(param_1 + 0x27bc) = 1;
    FUN_0046d4c0(uVar1,*(uint *)(param_1 + 0xd060));
    FUN_0046d4b0(DAT_005f2afc,0);
    FUN_0046e120(DAT_005f2afc,1);
    FUN_0054e3a0(param_1 + 0x158,0xffffffff,0x2e7,1,0);
    FUN_0046e4e0(DAT_005f2afc);
    if (_DAT_01d8e40c != 0) {
      FUN_004fcdc0(param_1 + 0x158,param_1);
    }
  }
  FUN_00408830(param_1);
  return *(uint *)(param_1 + 0x27bc);
}
