// Name: FUN_00415cd0
// Address: 00415cd0
// Address Range: [[00415cd0, 00415e0d]]
// Convention: unknown
// Signature: void FUN_00415cd0(int param_1,int param_2)

#include "nocturne.h"

void FUN_00415cd0(int param_1,int param_2)

{
  byte *puVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint auStack_38 [6];
  uint auStack_20 [6];
  
  bVar6 = 0;
  if (*(int *)(param_1 + 0x2b4) == 0) {
    if ((((param_2 != 0) && (*(int *)(param_1 + 0x133c) == 0)) && (*(int *)(param_1 + 0x1334) == 0))
       && (iVar3 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x7c))(param_1),
          puVar1 = PTR_DAT_00609ed0, iVar3 == 0)) {
      *(uint *)(param_1 + 0x2b4) = 1;
      FUN_00436710(puVar1,"%s going into background\n",param_1);
    }
    if (*(int *)(param_1 + 0x2b4) == 0) {
      return;
    }
  }
  if ((*(int *)(param_1 + 0x2b4) != 1) || (*(int *)(param_1 + 0x1334) == 0)) {
    *(uint *)(param_1 + 0x2b4) = 2;
    FUN_004089d0(param_1);
    *(uint *)(0x01E661B8 + 0x15ac98) = *(uint *)(param_1 + 0x10c4);
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1,0);
    puVar4 = auStack_20;
    puVar5 = auStack_38;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    iVar3 = FUN_0041a840(auStack_38);
    if ((iVar3 != 0) &&
       ((*(int *)(param_1 + 0x10c8) == 0 || (iVar2 = FUN_0046b960(DAT_0060b280), iVar2 != 0)))) {
      FUN_004159e0(param_1,0xffffffff);
    }
    thunk_FUN_004e9810(DAT_0060b280);
    *(uint *)(0x01E661B8 + 0x15ac98) = 0;
    *(int *)(param_1 + 0x1340) = iVar3;
  }
  return;
}
