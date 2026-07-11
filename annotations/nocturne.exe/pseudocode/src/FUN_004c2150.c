// Name: FUN_004c2150
// Address: 004c2150
// Address Range: [[004c2150, 004c2468]]
// Convention: unknown
// Signature: void FUN_004c2150(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c2150(int param_1)

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
  
  if ((*(int *)(0x01C775EC + 0x228) == 0) &&
     (*(int *)(param_1 + 4) == *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8))) {
    if (DAT_005b7620 != _DAT_01cc30a0) {
      FUN_004befa0();
    }
    if ((*(int *)(param_1 + 0x330) != 0) && (0.0 < *(float *)(param_1 + 0x338))) {
      iVar1 = 8;
      iVar7 = 0x50;
      iVar4 = 0x00000060;
      iVar3 = 0x000000D0;
      if ((DAT_005b7620 < 0x180) && (*(int *)(param_1 + 0x44c) == 0)) {
        iVar3 = 0x000000D0 / 2;
        iVar4 = 0x00000060 / 2;
        iVar7 = 0x28;
        iVar1 = 4;
      }
      iVar5 = (DAT_005b761c - iVar7) - iVar1;
      iVar6 = DAT_005b7620 - iVar7;
      local_1c = 0xffff;
      if (*(float *)(param_1 + 0x338) < 1.0) {
        fVar8 = (float10)*(float *)(param_1 + 0x338) * (float10)_DAT_00587469;
        FUN_00563a30(iVar5);
        local_1c = (int)ROUND(fVar8);
        iVar4 = extraout_ECX;
      }
      iVar2 = (local_1c * 2) / 3;
      if (*(int *)(param_1 + 0x44c) == 0) {
        FUN_004c1dd0(DAT_005b761c - iVar4,DAT_005b7620 - iVar4,DAT_005b761c + -1,DAT_005b7620 + -1,
                     iVar2);
      }
      else {
        FUN_004c1f90(DAT_005b761c - iVar3,DAT_005b7620 - iVar4,DAT_005b761c + -1,DAT_005b7620 + -1,
                     iVar2);
      }
      FUN_004c0b40(param_1,*(uint *)(param_1 + 0x330),iVar5,iVar6 - iVar1,iVar7,0x3fc90fdb,
                   local_1c);
    }
    if ((*(int *)(param_1 + 0x334) != 0) && (0.0 < *(float *)(param_1 + 0x33c))) {
      iVar1 = 0x10;
      iVar7 = 0x40;
      iVar4 = 0x00000060;
      iVar3 = 0x000000D0;
      if ((DAT_005b7620 < 0x180) && (*(int *)(param_1 + 0x44c) == 0)) {
        iVar3 = 0x000000D0 / 2;
        iVar4 = 0x00000060 / 2;
        iVar7 = 0x20;
        iVar1 = 8;
      }
      iVar5 = DAT_005b761c - iVar7;
      iVar6 = DAT_005b7620 - iVar7;
      local_18 = 0xffff;
      if (*(float *)(param_1 + 0x33c) < 1.0) {
        fVar8 = (float10)*(float *)(param_1 + 0x33c) * (float10)_DAT_00587469;
        FUN_00563a30();
        local_18 = (int)ROUND(fVar8);
        iVar4 = extraout_ECX_00;
      }
      iVar2 = (local_18 * 2) / 3;
      if (*(int *)(param_1 + 0x44c) == 0) {
        FUN_004c1dd0(DAT_005b761c - iVar4,DAT_005b7620 - iVar4,DAT_005b761c + -1,DAT_005b7620 + -1,
                     iVar2);
      }
      else {
        FUN_004c1f90(DAT_005b761c - iVar3,DAT_005b7620 - iVar4,DAT_005b761c + -1,DAT_005b7620 + -1,
                     iVar2);
      }
      FUN_004c0b40(param_1,*(uint *)(param_1 + 0x334),iVar5 - iVar1,iVar6 - iVar1,iVar7,0,
                   local_18);
    }
  }
  return;
}
