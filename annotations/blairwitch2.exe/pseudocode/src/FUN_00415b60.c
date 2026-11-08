// Name: FUN_00415b60
// Address: 00415b60
// Address Range: [[00415b60, 00415cc7]]
// Convention: unknown
// Signature: undefined4 FUN_00415b60(int param_1)

#include "nocturne.h"

uint FUN_00415b60(int param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  byte bVar6;
  uint auStack_38 [6];
  uint auStack_20 [6];
  int iStack_8;
  
  bVar6 = 0;
  if (*(int *)(param_1 + 0x2b4) < 2) {
    *(uint *)(0x01E661B8 + 0x15ac98) = *(uint *)(param_1 + 0x10c4);
    FUN_004089d0(param_1);
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1,0);
    puVar2 = auStack_38;
    puVar4 = auStack_20;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + (uint)bVar6 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    }
    iVar1 = FUN_0041a840(auStack_20);
    *(int *)(param_1 + 0x1340) = iVar1;
    if (iVar1 != 0) {
      if ((*(int *)(param_1 + 0x10c8) == 0) || (iVar1 = FUN_0046b960(DAT_0060b280), iVar1 != 0)) {
        FUN_004159e0(param_1,0xffffffff);
      }
      iVar1 = 0;
      if (0 < *(int *)(param_1 + 1000)) {
        iStack_8 = param_1 + 0x3ec;
        iVar3 = param_1 + 0x404;
        iVar5 = param_1 + 0x3f8;
        do {
          FUN_0046b350(DAT_0060b280,iVar5,iVar1 * 0x194 + iStack_8);
          FUN_0044fcc0(iVar3,0,0xffffffff);
          iVar1 = iVar1 + 1;
          iVar5 = iVar5 + 0x194;
          iVar3 = iVar3 + 0x194;
          thunk_FUN_004e9810(DAT_0060b280);
        } while (iVar1 < *(int *)(param_1 + 1000));
      }
    }
    thunk_FUN_004e9810(DAT_0060b280);
    *(uint *)(0x01E661B8 + 0x15ac98) = 0;
    return *(uint *)(param_1 + 0x1340);
  }
  if ((*(int *)(param_1 + 0x1340) != 0) && (0 < *(int *)(param_1 + 0x8a8))) {
    return 1;
  }
  return 0;
}
