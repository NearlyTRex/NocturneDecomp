// Name: FUN_00573e30
// Address: 00573e30
// Address Range: [[00573e30, 00573ecc]]
// Convention: unknown
// Signature: void FUN_00573e30(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00573e30(uint *param_1)

{
  int iVar1;
  uint uStackY_38;
  byte auStackY_34 [4];
  uint uStackY_30;
  byte local_28 [8];
  code *local_20;
  
  local_20 = (code *)*param_1;
  if (_DAT_02de4e30 == 0) {
    iVar1 = -(0x000000F4 + 3U & 0xfffffffc);
    *(int *)(&stack0xffffffd4 + iVar1) = 0x000000F4;
    *(uint *)((int)&uStackY_30 + iVar1) = 0;
    *(byte **)(auStackY_34 + iVar1) = local_28 + iVar1;
    *(uint *)((int)&uStackY_38 + iVar1) = 0x573e6f;
    FUN_00563cc0();
    *(byte **)(&stack0xffffffd4 + iVar1) = local_28 + iVar1;
    *(int *)(&stack0x000000c8 + iVar1) = 0x000000F4;
    *(uint *)((int)&uStackY_30 + iVar1) = 0x573e83;
    iVar1 = FUN_0056e608();
    if (iVar1 == 0) {
      return;
    }
  }
  iVar1 = (*(code *)PTR_FUN_005c1abc)();
  param_1[4] = iVar1 + 0xde;
  uStackY_30 = 0x573ea3;
  SetEvent((HANDLE)param_1[3]);
  uStackY_30 = 0x573eac;
  FUN_0056eed8();
  (*(code *)PTR_FUN_005c1afc)();
  uStackY_30 = 0x573eb9;
  (*local_20)();
  FUN_00572e88();
  return;
}
