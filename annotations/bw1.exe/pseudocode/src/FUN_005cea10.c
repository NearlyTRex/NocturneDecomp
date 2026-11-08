// Name: FUN_005cea10
// Address: 005cea10
// Address Range: [[005cea10, 005ceaac]]
// Convention: unknown
// Signature: void FUN_005cea10(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005cea10(uint *param_1)

{
  int iVar1;
  uint uStackY_38;
  byte auStackY_34 [4];
  uint uStackY_30;
  byte local_28 [8];
  code *local_20;
  
  local_20 = (code *)*param_1;
  if (_DAT_02c9f060 == 0) {
    iVar1 = -(0x000000F4 + 3U & 0xfffffffc);
    *(int *)(&stack0xffffffd4 + iVar1) = 0x000000F4;
    *(uint *)((int)&uStackY_30 + iVar1) = 0;
    *(byte **)(auStackY_34 + iVar1) = local_28 + iVar1;
    *(uint *)((int)&uStackY_38 + iVar1) = 0x5cea4f;
    FUN_005bfb70();
    *(byte **)(&stack0xffffffd4 + iVar1) = local_28 + iVar1;
    *(int *)(&stack0x000000c8 + iVar1) = 0x000000F4;
    *(uint *)((int)&uStackY_30 + iVar1) = 0x5cea63;
    iVar1 = FUN_005cacd8();
    if (iVar1 == 0) {
      return;
    }
  }
  iVar1 = (*(code *)PTR_FUN_006265fc)();
  param_1[4] = iVar1 + 0xde;
  uStackY_30 = 0x5cea83;
  SetEvent((HANDLE)param_1[3]);
  uStackY_30 = 0x5cea8c;
  FUN_005cb5a8();
  (*(code *)PTR_FUN_0062663c)();
  uStackY_30 = 0x5cea99;
  (*local_20)();
  FUN_005cdff8();
  return;
}
