// Name: FUN_0041f9f0
// Address: 0041f9f0
// Address Range: [[0041f9f0, 0041fb20]]
// Convention: unknown
// Signature: int FUN_0041f9f0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0041f9f0(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float10 fVar5;
  uint auStack_38 [6];
  uint auStack_20 [6];
  
  bVar4 = 0;
  iVar1 = FUN_004625a0(param_1 + 0x158);
  if (0 < *(int *)(iVar1 + 0x110)) {
    if (0.0 <= *(float *)(param_1 + 0x6dc)) {
      fVar5 = ((float10)*(float *)(param_1 + 0x6dc) / (float10)*(float *)(param_1 + 0x6e0)) *
              (float10)_DAT_005b7505;
      FUN_005a3120();
      *(int *)(param_1 + 0x6e4) = (int)ROUND(fVar5);
    }
    FUN_0046ce90(0x01BDD7E4,param_1 + 0x20);
    FUN_0046cf30(0x01BDD7E4,param_1 + 0x30,0);
    (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
    puVar2 = auStack_38;
    puVar3 = auStack_20;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    iVar1 = FUN_0041daf0(auStack_20);
    FUN_0046d4c0(DAT_005f2afc,*(uint *)(param_1 + 0x6e4));
    if (*(int *)(param_1 + 0x5fc) != 0) {
      *(uint *)(0x01ED78C8 + 0x15ac98) = 1;
    }
    if (iVar1 != 0) {
      FUN_00462540(param_1 + 0x158,*(uint *)(param_1 + 0x310),0xffffffff);
    }
    if (*(int *)(param_1 + 0x5fc) != 0) {
      *(uint *)(0x01ED78C8 + 0x15ac98) = 0;
    }
    thunk_FUN_004e5ef0(0x01BDD7E4);
    return iVar1;
  }
  return 0;
}
