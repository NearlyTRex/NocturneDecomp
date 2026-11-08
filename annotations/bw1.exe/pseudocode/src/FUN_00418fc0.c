// Name: FUN_00418fc0
// Address: 00418fc0
// Address Range: [[00418fc0, 00419127]]
// Convention: unknown
// Signature: undefined4 FUN_00418fc0(int param_1)

#include "nocturne.h"

uint FUN_00418fc0(int param_1)

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
  if (*(int *)(param_1 + 0x158) < 2) {
    *(uint *)(0x01E82168 + 0x15ac98) = *(uint *)(param_1 + 0xcb0);
    FUN_004087b0(param_1);
    (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
    puVar2 = auStack_38;
    puVar4 = auStack_20;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + (uint)bVar6 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    }
    iVar1 = FUN_004207b0(auStack_20);
    *(int *)(param_1 + 0xf30) = iVar1;
    if (iVar1 != 0) {
      if ((*(int *)(param_1 + 0xcb4) == 0) || (iVar1 = FUN_00483e60(DAT_00612560), iVar1 != 0)) {
        FUN_00418e50(param_1,0xffffffff);
      }
      iVar1 = 0;
      if (0 < *(int *)(param_1 + 0x28c)) {
        iStack_8 = param_1 + 0x290;
        iVar3 = param_1 + 0x2a8;
        iVar5 = param_1 + 0x29c;
        do {
          FUN_00483850(DAT_00612560,iVar5,iVar1 * 0x194 + iStack_8);
          FUN_004688a0(iVar3,0,0xffffffff);
          iVar1 = iVar1 + 1;
          iVar5 = iVar5 + 0x194;
          iVar3 = iVar3 + 0x194;
          thunk_FUN_005084b0(DAT_00612560);
        } while (iVar1 < *(int *)(param_1 + 0x28c));
      }
    }
    thunk_FUN_005084b0(DAT_00612560);
    *(uint *)(0x01E82168 + 0x15ac98) = 0;
    return *(uint *)(param_1 + 0xf30);
  }
  if ((*(int *)(param_1 + 0xf30) != 0) && (0 < *(int *)(param_1 + 0x74c))) {
    return 1;
  }
  return 0;
}
