// Name: FUN_004f08a0
// Address: 004f08a0
// Address Range: [[004f08a0, 004f0a44]]
// Convention: unknown
// Signature: void FUN_004f08a0(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f08a0(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (*0x01D34CB0 != 0) {
    _DAT_01d046a0 = "..\\core\\mimic.cpp";
    _DAT_01d046a4 = 0x130;
    FUN_004e4500("CMimic::setup - can't use mimic in multi-player!");
  }
  iVar2 = _DAT_01cedef4;
  *(uint *)(param_1 + 0x108) =
       *(uint *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x108);
  *(uint *)(param_1 + 0x10c) = *(uint *)(*(int *)(iVar2 * 4 + 0x1cedee4) + 0x10c);
  *(uint *)(param_1 + 0x110) = *(uint *)(*(int *)(iVar2 * 4 + 0x1cedee4) + 0x110);
  if (0.0 <= *(float *)(param_1 + 0x4c34c)) {
    FUN_004f1e90(param_1,param_2);
    return;
  }
  iVar2 = FUN_004244b0(param_1,param_2);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x4b6f0) < 2) {
      if ((*(int *)(param_1 + 0x4b6f0) < 1) &&
         (iVar2 = FUN_0048e340(0x01C38BC0,param_1 + 0x10b5c), iVar2 != 0)) {
        *(uint *)(param_1 + 0x4b6f0) = 1;
      }
      iVar2 = FUN_0048e340(0x01C38BC0,param_1 + 0x10af8);
      if ((iVar2 != 0) && (FUN_004f0a50(param_1), *(int *)(param_1 + 0x4b6f0) == 1)) {
        iVar2 = FUN_005035c0(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2b4);
        uVar1 = *(uint *)(iVar2 + 0x24);
        if ((uVar1 < 3) || (uVar1 < 4)) {
LAB_004f09fa:
          FUN_004f17a0(param_1);
          FUN_00429390(param_1);
          return;
        }
        if (uVar1 < 0x11) {
          if (uVar1 != 0x10) {
            FUN_00429390(param_1);
            return;
          }
          goto LAB_004f09fa;
        }
        if (uVar1 < 0x12) goto LAB_004f09fa;
        if (0x13 < uVar1) {
          if ((0x14 < uVar1) && (uVar1 != 0x15)) {
            FUN_00429390(param_1);
            return;
          }
          goto LAB_004f09fa;
        }
      }
    }
    else {
      FUN_004f0e10(param_1,param_2);
    }
    FUN_00429390(param_1);
  }
  return;
}
