// Name: FUN_0041f8e0
// Address: 0041f8e0
// Address Range: [[0041f8e0, 0041f9e0]]
// Convention: unknown
// Signature: int FUN_0041f8e0(int param_1)

#include "nocturne.h"

int FUN_0041f8e0(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_38 [6];
  uint auStack_20 [6];
  
  bVar4 = 0;
  iVar1 = FUN_004625a0(param_1 + 0x158);
  if ((*(int *)(iVar1 + 0x110) < 1) ||
     ((iVar1 = FUN_0046d540(DAT_005f2afc), iVar1 == 0 && (*(int *)(param_1 + 0xfc) != 0)))) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x5f4) == 0) && (iVar1 = FUN_0046d540(DAT_005f2afc), iVar1 != 0)) {
    return 0;
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
  if (iVar1 != 0) {
    FUN_00462540(param_1 + 0x158,*(uint *)(param_1 + 0x310),0xffffffff);
  }
  thunk_FUN_004e5ef0(0x01BDD7E4);
  return iVar1;
}
