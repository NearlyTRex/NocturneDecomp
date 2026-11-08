// Name: FUN_004faaf0
// Address: 004faaf0
// Address Range: [[004faaf0, 004fae08]]
// Convention: unknown
// Signature: void FUN_004faaf0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004faaf0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  uint local_1c;
  uint local_18;
  
  if ((*(int *)(0x01CCF390 + 0x244) == 0) &&
     (*(int *)(param_1 + 4) == *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4))) {
    if (DAT_0061b49c != _DAT_01d1bc5c) {
      FUN_004f70e0();
    }
    if ((*(int *)(param_1 + 0x338) != 0) && (0.0 < *(float *)(param_1 + 0x340))) {
      iVar1 = 8;
      iVar7 = 0x50;
      iVar4 = 0x00000060;
      iVar3 = 0x000000D0;
      if ((DAT_0061b49c < 0x180) && (*(int *)(param_1 + 0x454) == 0)) {
        iVar3 = 0x000000D0 / 2;
        iVar4 = 0x00000060 / 2;
        iVar7 = 0x28;
        iVar1 = 4;
      }
      iVar5 = (DAT_0061b498 - iVar7) - iVar1;
      iVar6 = DAT_0061b49c - iVar7;
      local_1c = 0xffff;
      if (*(float *)(param_1 + 0x340) < 1.0) {
        fVar8 = (float10)*(float *)(param_1 + 0x340) * (float10)_DAT_005e6890;
        FUN_005c03a0(iVar5);
        local_1c = (int)ROUND(fVar8);
        iVar4 = extraout_ECX;
      }
      iVar2 = (local_1c * 2) / 3;
      if (*(int *)(param_1 + 0x454) == 0) {
        FUN_004fa770(DAT_0061b498 - iVar4,DAT_0061b49c - iVar4,DAT_0061b498 + -1,DAT_0061b49c + -1,
                     iVar2);
      }
      else {
        FUN_004fa930(DAT_0061b498 - iVar3,DAT_0061b49c - iVar4,DAT_0061b498 + -1,DAT_0061b49c + -1,
                     iVar2);
      }
      FUN_004f90d0(param_1,*(uint *)(param_1 + 0x338),iVar5,iVar6 - iVar1,iVar7,0x3fc90fdb,
                   local_1c);
    }
    if ((*(int *)(param_1 + 0x33c) != 0) && (0.0 < *(float *)(param_1 + 0x344))) {
      iVar1 = 0x10;
      iVar7 = 0x40;
      iVar4 = 0x00000060;
      iVar3 = 0x000000D0;
      if ((DAT_0061b49c < 0x180) && (*(int *)(param_1 + 0x454) == 0)) {
        iVar3 = 0x000000D0 / 2;
        iVar4 = 0x00000060 / 2;
        iVar7 = 0x20;
        iVar1 = 8;
      }
      iVar5 = DAT_0061b498 - iVar7;
      iVar6 = DAT_0061b49c - iVar7;
      local_18 = 0xffff;
      if (*(float *)(param_1 + 0x344) < 1.0) {
        fVar8 = (float10)*(float *)(param_1 + 0x344) * (float10)_DAT_005e6890;
        FUN_005c03a0();
        local_18 = (int)ROUND(fVar8);
        iVar4 = extraout_ECX_00;
      }
      iVar2 = (local_18 * 2) / 3;
      if (*(int *)(param_1 + 0x454) == 0) {
        FUN_004fa770(DAT_0061b498 - iVar4,DAT_0061b49c - iVar4,DAT_0061b498 + -1,DAT_0061b49c + -1,
                     iVar2);
      }
      else {
        FUN_004fa930(DAT_0061b498 - iVar3,DAT_0061b49c - iVar4,DAT_0061b498 + -1,DAT_0061b49c + -1,
                     iVar2);
      }
      FUN_004f90d0(param_1,*(uint *)(param_1 + 0x33c),iVar5 - iVar1,iVar6 - iVar1,iVar7,0,
                   local_18);
    }
  }
  return;
}
