// Name: FUN_00419130
// Address: 00419130
// Address Range: [[00419130, 00419279]]
// Convention: unknown
// Signature: void FUN_00419130(int param_1,int param_2)

#include "nocturne.h"

void FUN_00419130(int param_1,int param_2)

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
  if (*(int *)(param_1 + 0xcc8) == 0) {
    if (*(int *)(param_1 + 0x158) == 0) {
      if ((((param_2 != 0) && (*(int *)(param_1 + 0xf2c) == 0)) && (*(int *)(param_1 + 0xf24) == 0))
         && (iVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x74))(param_1),
            puVar1 = PTR_DAT_00611100, iVar3 == 0)) {
        *(uint *)(param_1 + 0x158) = 1;
        FUN_00445430(puVar1,"%s going into background\n",param_1);
      }
      if (*(int *)(param_1 + 0x158) == 0) {
        return;
      }
    }
    if ((*(int *)(param_1 + 0x158) != 1) || (*(int *)(param_1 + 0xf24) == 0)) {
      *(uint *)(param_1 + 0x158) = 2;
      FUN_004087b0(param_1);
      *(uint *)(0x01E82168 + 0x15ac98) = *(uint *)(param_1 + 0xcb0);
      (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
      puVar4 = auStack_20;
      puVar5 = auStack_38;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      iVar3 = FUN_004207b0(auStack_38);
      if ((iVar3 != 0) &&
         ((*(int *)(param_1 + 0xcb4) == 0 || (iVar2 = FUN_00483e60(DAT_00612560), iVar2 != 0)))) {
        FUN_00418e50(param_1,0xffffffff);
      }
      thunk_FUN_005084b0(DAT_00612560);
      *(uint *)(0x01E82168 + 0x15ac98) = 0;
      *(int *)(param_1 + 0xf30) = iVar3;
    }
  }
  return;
}
