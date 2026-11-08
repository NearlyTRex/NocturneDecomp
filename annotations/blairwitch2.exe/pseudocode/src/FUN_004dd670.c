// Name: FUN_004dd670
// Address: 004dd670
// Address Range: [[004dd670, 004dd9a4]]
// Convention: unknown
// Signature: void FUN_004dd670(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004dd670(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar6;
  int iVar7;
  float10 fVar8;
  uint local_1c;
  uint local_18;
  
  if ((*(int *)(0x01CB6900 + 0x244) == 0) &&
     (*(int *)(param_1 + 4) == *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4))) {
    if (DAT_006141bc != _DAT_01d02f40) {
      FUN_004da990();
    }
    if ((*(int *)(param_1 + 0x610 + *(int *)(param_1 + 0x468) * 4) != 0) &&
       (0.0 < *(float *)(param_1 + 0x340))) {
      iVar6 = 8;
      iVar7 = 0x50;
      iVar5 = 0x00000060;
      iVar4 = 0x000000D0;
      if ((DAT_006141bc < 0x180) && (*(int *)(param_1 + 0x454) == 0)) {
        iVar4 = 0x000000D0 / 2;
        iVar5 = 0x00000060 / 2;
        iVar7 = 0x28;
        iVar6 = 4;
      }
      iVar1 = DAT_006141b8 - iVar7;
      iVar2 = DAT_006141bc - iVar7;
      local_1c = 0xffff;
      if (*(float *)(param_1 + 0x340) < 1.0) {
        fVar8 = (float10)*(float *)(param_1 + 0x340) * (float10)_DAT_005dba86;
        FUN_005b7ff0();
        local_1c = (int)ROUND(fVar8);
        iVar5 = extraout_ECX;
      }
      iVar3 = (local_1c * 2) / 3;
      if (*(int *)(param_1 + 0x454) == 0) {
        FUN_004dd320(DAT_006141b8 - iVar5,DAT_006141bc - iVar5,DAT_006141b8 + -1,DAT_006141bc + -1,
                     iVar3);
      }
      else {
        FUN_004dd4e0(DAT_006141b8 - iVar4,DAT_006141bc - iVar5,DAT_006141b8 + -1,DAT_006141bc + -1,
                     iVar3);
      }
      FUN_004dbd80(param_1,*(uint *)(param_1 + 0x610 + *(int *)(param_1 + 0x468) * 4),
                   iVar1 - iVar6,iVar2 - iVar6,iVar7,0x3fc90fdb,local_1c);
    }
    if ((*(int *)(param_1 + 0x5fc + *(int *)(param_1 + 0x468) * 4) != 0) &&
       (0.0 < *(float *)(param_1 + 0x344))) {
      iVar6 = 0x10;
      iVar7 = 0x40;
      iVar5 = 0x00000060;
      iVar4 = 0x000000D0;
      if ((DAT_006141bc < 0x180) && (*(int *)(param_1 + 0x454) == 0)) {
        iVar4 = 0x000000D0 / 2;
        iVar5 = 0x00000060 / 2;
        iVar7 = 0x20;
        iVar6 = 8;
      }
      iVar1 = (DAT_006141b8 - iVar7) - iVar6;
      iVar6 = (DAT_006141bc - iVar7) - iVar6;
      local_18 = 0xffff;
      if (*(float *)(param_1 + 0x344) < 1.0) {
        fVar8 = (float10)*(float *)(param_1 + 0x344) * (float10)_DAT_005dba86;
        FUN_005b7ff0(iVar6,iVar1);
        local_18 = (int)ROUND(fVar8);
        iVar5 = extraout_ECX_00;
      }
      iVar2 = (local_18 * 2) / 3;
      if (*(int *)(param_1 + 0x454) == 0) {
        FUN_004dd320(DAT_006141b8 - iVar5,DAT_006141bc - iVar5,DAT_006141b8 + -1,DAT_006141bc + -1,
                     iVar2);
      }
      else {
        FUN_004dd4e0(DAT_006141b8 - iVar4,DAT_006141bc - iVar5,DAT_006141b8 + -1,DAT_006141bc + -1,
                     iVar2);
      }
      FUN_004dbd80(param_1,*(uint *)(param_1 + 0x5fc + *(int *)(param_1 + 0x468) * 4),iVar1,
                   iVar6,iVar7,0,local_18);
    }
  }
  return;
}
