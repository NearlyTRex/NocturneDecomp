// Name: FUN_0057e630
// Address: 0057e630
// Address Range: [[0057e630, 0057e741]]
// Convention: unknown
// Signature: int FUN_0057e630(int param_1)

#include "nocturne.h"

int FUN_0057e630(int param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStack_44 [6];
  uint auStack_2c [6];
  uint uStack_14;
  
  bVar5 = 0;
  FUN_004089d0(param_1);
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1,0);
  puVar3 = auStack_44;
  puVar4 = auStack_2c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  iVar2 = FUN_0041a840(auStack_2c);
  if (iVar2 != 0) {
    uStack_14 = FUN_0057ee90(param_1,0,0xffffffff);
    FUN_0044fcc0(param_1 + 0x2b4,uStack_14);
  }
  FUN_00408a10(param_1);
  if (iVar2 != 0) {
    iVar1 = FUN_0044fd20(param_1 + 0x6e0);
    if (0 < *(int *)(iVar1 + 0x110)) {
      FUN_0046b2b0(DAT_0060b280,param_1 + 0x20);
      FUN_0046b350(DAT_0060b280,param_1 + 0x6d4,0);
      uStack_14 = FUN_0057ee90(param_1,1,0xffffffff);
      FUN_0044fcc0(param_1 + 0x6e0,uStack_14);
      thunk_FUN_004e9810(DAT_0060b280);
      return iVar2;
    }
  }
  return iVar2;
}
