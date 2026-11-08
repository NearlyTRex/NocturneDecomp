// Name: FUN_005c6710
// Address: 005c6710
// Address Range: [[005c6710, 005c67ac]]
// Convention: unknown
// Signature: void FUN_005c6710(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c6710(uint *param_1)

{
  int iVar1;
  uint uStackY_38;
  byte auStackY_34 [4];
  uint uStackY_30;
  byte local_28 [8];
  code *local_20;
  
  local_20 = (code *)*param_1;
  if (_DAT_02680170 == 0) {
    iVar1 = -(0x000000F4 + 3U & 0xfffffffc);
    *(int *)(&stack0xffffffd4 + iVar1) = 0x000000F4;
    *(uint *)((int)&uStackY_30 + iVar1) = 0;
    *(byte **)(auStackY_34 + iVar1) = local_28 + iVar1;
    *(uint *)((int)&uStackY_38 + iVar1) = 0x5c674f;
    FUN_005b77c0();
    *(byte **)(&stack0xffffffd4 + iVar1) = local_28 + iVar1;
    *(int *)(&stack0x000000c8 + iVar1) = 0x000000F4;
    *(uint *)((int)&uStackY_30 + iVar1) = 0x5c6763;
    iVar1 = FUN_005c29d8();
    if (iVar1 == 0) {
      return;
    }
  }
  iVar1 = (*(code *)PTR_FUN_0061f2a4)();
  param_1[4] = iVar1 + 0xde;
  uStackY_30 = 0x5c6783;
  SetEvent((HANDLE)param_1[3]);
  uStackY_30 = 0x5c678c;
  FUN_005c32a8();
  (*(code *)PTR_FUN_0061f2e4)();
  uStackY_30 = 0x5c6799;
  (*local_20)();
  FUN_005c5cf8();
  return;
}
