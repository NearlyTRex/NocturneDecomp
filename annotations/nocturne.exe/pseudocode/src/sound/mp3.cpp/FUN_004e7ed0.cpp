// Name: FUN_004e7ed0
// Address: 004e7ed0
// Address Range: [[004e7ed0, 004e825f]]
// Convention: unknown
// Signature: void FUN_004e7ed0(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e7ed0(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int extraout_EDX;
  int *piVar7;
  float10 fVar8;
  ulonglong uVar9;
  int local_78 [4];
  int local_68;
  int *local_48;
  int local_44;
  int local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  int local_28;
  uint local_24;
  int **local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  
  FUN_004e8260(param_1);
  local_1c = 0x1000;
  piVar7 = (int *)(param_1 + 0x5320);
  local_24 = param_3;
  if (*piVar7 != 0) {
    FUN_00563380(*piVar7);
    *piVar7 = 0;
  }
  if (*(int *)(param_1 + 0x5324) != 0) {
    FUN_005638d0(*(int *)(param_1 + 0x5324));
    *(uint *)(param_1 + 0x5324) = 0;
  }
  *piVar7 = param_2;
  uVar2 = FUN_00566e70(param_2);
  *(uint *)(param_1 + 0x5340) = uVar2;
  *(uint *)(param_1 + 0x5344) = local_24;
  *(uint *)(param_1 + 0x5328) = local_1c;
  iVar3 = FUN_005635b0(local_1c);
  *(int *)(param_1 + 0x5324) = iVar3;
  if (iVar3 == 0) {
    _DAT_01cc4800 = "..\\sound\\mp3.cpp";
    _DAT_01cc4804 = 0x1ff;
    FUN_004c8440("Out of memory.  File: %s",&DAT_01cd8b28);
  }
  FUN_0056582c(*piVar7,*(uint *)(param_1 + 0x5340),0);
  *(uint *)(param_1 + 0x5330) = 0;
  *(uint *)(param_1 + 0x5334) = 0;
  *(uint *)(param_1 + 0x532c) = 0;
  *(uint *)(param_1 + 0x5348) = *(uint *)(param_1 + 0x5344);
  *(uint *)(param_1 + 0x5338) = 0;
  iVar3 = param_1 + 0x5320;
  *(uint *)(param_1 + 0x533c) = 0;
  uVar6 = *(uint *)(param_1 + 0x532c) & 7;
  if (uVar6 != 0) {
    FUN_004e2ac0(iVar3,8 - uVar6);
  }
  uVar6 = FUN_004e2ac0(iVar3,0xc);
  while (((uVar6 & 0x1fff) != 0xfff && (*(int *)(param_1 + 0x533c) == 0))) {
    uVar4 = FUN_004e2ac0(iVar3,8);
    uVar6 = uVar6 << 8 | uVar4;
  }
  local_48 = local_78;
  FUN_004e3130(param_1 + 0x5320,&local_48);
  piVar7 = local_48;
  local_44 = local_48[7];
  local_38 = (local_44 != 3) + 1;
  if (local_48[1] == 2) {
    local_18 = local_30;
    local_2c = local_48[1] + -1;
    local_28 = local_48[3];
    iVar3 = *local_48;
    fVar8 = (float10)*(double *)(&DAT_005bbc48 + local_48[4] * 8 + iVar3 * 0x20);
    local_20 = &local_48;
    FUN_00563a30();
    local_14 = (int)ROUND(fVar8);
    if (iVar3 == 1) {
      if (((local_14 == 0x30) && (0x37 < extraout_EDX)) ||
         ((0x37 < extraout_EDX && (extraout_EDX < 0x51)))) {
        piVar5 = (int *)0x0;
      }
      else if ((local_14 == 0x30) || (extraout_EDX < 0x60)) {
        if ((local_14 == 0x20) || (0x30 < extraout_EDX)) {
          piVar5 = (int *)0x3;
        }
        else {
          piVar5 = (int *)0x2;
        }
      }
      else {
        piVar5 = (int *)0x1;
      }
    }
    else {
      piVar5 = (int *)0x4;
    }
    if (piVar5 != local_20[3]) {
      _DAT_01cc4800 = "..\\sound\\mp3.cpp";
      _DAT_01cc4804 = 0x1a1;
      FUN_004c8440("MPEG Layer 2 - pick_table - can't load tables!  File: %s",&DAT_01cd8b28);
    }
    local_30 = local_18;
  }
  else {
    local_30 = 0x20;
  }
  local_34 = local_30;
  if (piVar7[7] == 1) {
    iVar3 = piVar7[1];
    iVar1 = piVar7[8];
    if ((((iVar3 < 1) || (3 < iVar3)) || (iVar1 < 0)) || (3 < iVar1)) {
      _DAT_01cc4800 = "..\\sound\\mp3.cpp";
      _DAT_01cc4804 = 0x1b1;
      FUN_004c8440("js_bound bad layer/modext (%d/%d)  File: %s",iVar3,iVar1,&DAT_01cd8b28);
    }
    local_34 = *(uint *)("$CMotionController$$" + iVar1 * 4 + iVar3 * 0x10 + 10);
  }
  fVar8 = (float10)*(double *)(&DAT_005bbc48 + local_68 * 8 + local_78[0] * 0x20) *
          (float10)_DAT_0058b9b8;
  uVar9 = FUN_00563a30(0);
  iVar3 = (int)((ulonglong)uVar9 >> 0x20);
  *(int *)((int)uVar9 + 0x100) = (int)ROUND(fVar8);
  *(int *)(iVar3 + 0x104) = local_38;
  FUN_004e8410(iVar3);
  return;
}
