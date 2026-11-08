// Name: FUN_004dd770
// Address: 004dd770
// Address Range: [[004dd770, 004dda88]]
// Convention: unknown
// Signature: void FUN_004dd770(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004dd770(int param_1)

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
  
  if ((*(int *)(0x01D2130C + 0x24c) == 0) &&
     (*(int *)(param_1 + 4) == *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04))) {
    if (DAT_005fba1c != _DAT_01d70a34) {
      FUN_004da570();
    }
    if ((*(int *)(param_1 + 0x338) != 0) && (0.0 < *(float *)(param_1 + 0x340))) {
      iVar1 = 8;
      iVar7 = 0x50;
      iVar4 = 0x00000060;
      iVar3 = 0x000000D0;
      if ((DAT_005fba1c < 0x180) && (*(int *)(param_1 + 0x454) == 0)) {
        iVar3 = 0x000000D0 / 2;
        iVar4 = 0x00000060 / 2;
        iVar7 = 0x28;
        iVar1 = 4;
      }
      iVar5 = (DAT_005fba18 - iVar7) - iVar1;
      iVar6 = DAT_005fba1c - iVar7;
      local_1c = 0xffff;
      if (*(float *)(param_1 + 0x340) < 1.0) {
        fVar8 = (float10)*(float *)(param_1 + 0x340) * (float10)_DAT_005c65ff;
        FUN_005a3120(iVar5);
        local_1c = (int)ROUND(fVar8);
        iVar4 = extraout_ECX;
      }
      iVar2 = (local_1c * 2) / 3;
      if (*(int *)(param_1 + 0x454) == 0) {
        FUN_004dd3f0(DAT_005fba18 - iVar4,DAT_005fba1c - iVar4,DAT_005fba18 + -1,DAT_005fba1c + -1,
                     iVar2);
      }
      else {
        FUN_004dd5b0(DAT_005fba18 - iVar3,DAT_005fba1c - iVar4,DAT_005fba18 + -1,DAT_005fba1c + -1,
                     iVar2);
      }
      FUN_004dbe70(param_1,*(uint *)(param_1 + 0x338),iVar5,iVar6 - iVar1,iVar7,0x3fc90fdb,
                   local_1c);
    }
    if ((*(int *)(param_1 + 0x33c) != 0) && (0.0 < *(float *)(param_1 + 0x344))) {
      iVar1 = 0x10;
      iVar7 = 0x40;
      iVar4 = 0x00000060;
      iVar3 = 0x000000D0;
      if ((DAT_005fba1c < 0x180) && (*(int *)(param_1 + 0x454) == 0)) {
        iVar3 = 0x000000D0 / 2;
        iVar4 = 0x00000060 / 2;
        iVar7 = 0x20;
        iVar1 = 8;
      }
      iVar5 = DAT_005fba18 - iVar7;
      iVar6 = DAT_005fba1c - iVar7;
      local_18 = 0xffff;
      if (*(float *)(param_1 + 0x344) < 1.0) {
        fVar8 = (float10)*(float *)(param_1 + 0x344) * (float10)_DAT_005c65ff;
        FUN_005a3120();
        local_18 = (int)ROUND(fVar8);
        iVar4 = extraout_ECX_00;
      }
      iVar2 = (local_18 * 2) / 3;
      if (*(int *)(param_1 + 0x454) == 0) {
        FUN_004dd3f0(DAT_005fba18 - iVar4,DAT_005fba1c - iVar4,DAT_005fba18 + -1,DAT_005fba1c + -1,
                     iVar2);
      }
      else {
        FUN_004dd5b0(DAT_005fba18 - iVar3,DAT_005fba1c - iVar4,DAT_005fba18 + -1,DAT_005fba1c + -1,
                     iVar2);
      }
      FUN_004dbe70(param_1,*(uint *)(param_1 + 0x33c),iVar5 - iVar1,iVar6 - iVar1,iVar7,0,
                   local_18);
    }
  }
  return;
}
