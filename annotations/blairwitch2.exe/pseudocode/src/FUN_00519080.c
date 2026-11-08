// Name: FUN_00519080
// Address: 00519080
// Address Range: [[00519080, 005191cc]]
// Convention: unknown
// Signature: int FUN_00519080(int param_1)

#include "nocturne.h"

int FUN_00519080(int param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStack_70 [6];
  uint auStack_58 [6];
  uint auStack_40 [6];
  uint auStack_28 [6];
  
  bVar5 = 0;
  iVar1 = FUN_0046b960(DAT_0060b280);
  if ((iVar1 == 0) || (*(int *)(param_1 + 0x674) != 0)) {
    if ((2 < *(int *)(param_1 + 0x61c)) && (iVar1 = FUN_0046b960(DAT_0060b280), iVar1 == 0)) {
      return 0;
    }
    if ((((*(int *)(param_1 + 0x624) != 0) && (*(int *)(param_1 + 0x430) != 3)) &&
        (*(int *)(param_1 + 0x430) != 4)) &&
       ((*(int *)(param_1 + 0x880) != 0 && (iVar1 = FUN_0046b960(DAT_0060b280), iVar1 == 0)))) {
      return 0;
    }
    FUN_004089d0(param_1);
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1,0);
    puVar3 = auStack_70;
    puVar4 = auStack_58;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    iVar1 = FUN_0041a840(auStack_58);
    if (iVar1 != 0) {
      if ((*(int *)(param_1 + 0x668) == 0) || (iVar2 = FUN_0046b960(DAT_0060b280), iVar2 == 0)) {
        FUN_0044fcc0(param_1 + 0x2b4,0,0xffffffff);
        FUN_00408a10(param_1);
        return iVar1;
      }
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1);
      puVar3 = auStack_40;
      puVar4 = auStack_28;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      FUN_0041b700(auStack_28);
    }
    FUN_00408a10(param_1);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}
