// Name: FUN_005120b0
// Address: 005120b0
// Address Range: [[005120b0, 005121fc]]
// Convention: unknown
// Signature: int FUN_005120b0(int param_1)

#include "nocturne.h"

int FUN_005120b0(int param_1)

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
  iVar1 = FUN_0046d540(DAT_005f2afc);
  if ((iVar1 == 0) || (*(int *)(param_1 + 0x518) != 0)) {
    if ((2 < *(int *)(param_1 + 0x4c0)) && (iVar1 = FUN_0046d540(DAT_005f2afc), iVar1 == 0)) {
      return 0;
    }
    if ((((*(int *)(param_1 + 0x4c8) != 0) && (*(int *)(param_1 + 0x2d4) != 3)) &&
        (*(int *)(param_1 + 0x2d4) != 4)) &&
       ((*(int *)(param_1 + 0x724) != 0 && (iVar1 = FUN_0046d540(DAT_005f2afc), iVar1 == 0)))) {
      return 0;
    }
    FUN_004087f0(param_1);
    (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
    puVar3 = auStack_70;
    puVar4 = auStack_58;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    iVar1 = FUN_0041daf0(auStack_58);
    if (iVar1 != 0) {
      if ((*(int *)(param_1 + 0x50c) == 0) || (iVar2 = FUN_0046d540(DAT_005f2afc), iVar2 == 0)) {
        FUN_00462540(param_1 + 0x158,0,0xffffffff);
        FUN_00408830(param_1);
        return iVar1;
      }
      (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
      puVar3 = auStack_40;
      puVar4 = auStack_28;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      FUN_0041e9b0(auStack_28);
    }
    FUN_00408830(param_1);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}
