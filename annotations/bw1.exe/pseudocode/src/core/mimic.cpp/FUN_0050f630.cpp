// Name: FUN_0050f630
// Address: 0050f630
// Address Range: [[0050f630, 0050f7d4]]
// Convention: unknown
// Signature: void FUN_0050f630(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050f630(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (*0x01D51C20 != 0) {
    _DAT_01d1d400 = "..\\core\\mimic.cpp";
    _DAT_01d1d404 = 0x130;
    FUN_005030e0("CMimic::setup - can't use mimic in multi-player!");
  }
  iVar2 = _DAT_01d06ab4;
  *(uint *)(param_1 + 0x108) =
       *(uint *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x108);
  *(uint *)(param_1 + 0x10c) = *(uint *)(*(int *)(iVar2 * 4 + 0x1d06aa4) + 0x10c);
  *(uint *)(param_1 + 0x110) = *(uint *)(*(int *)(iVar2 * 4 + 0x1d06aa4) + 0x110);
  if (0.0 <= *(float *)(param_1 + 0x47abc)) {
    FUN_00510c20(param_1,param_2);
    return;
  }
  iVar2 = FUN_0042e1a0(param_1,param_2);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x46e60) < 2) {
      if ((*(int *)(param_1 + 0x46e60) < 1) &&
         (iVar2 = FUN_004a6c30(0x01C51D80,param_1 + 0xc2cc), iVar2 != 0)) {
        *(uint *)(param_1 + 0x46e60) = 1;
      }
      iVar2 = FUN_004a6c30(0x01C51D80,param_1 + 0xc268);
      if ((iVar2 != 0) && (FUN_0050f7e0(param_1), *(int *)(param_1 + 0x46e60) == 1)) {
        iVar2 = FUN_00524770(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x158);
        uVar1 = *(uint *)(iVar2 + 0x24);
        if ((uVar1 < 3) || (uVar1 < 4)) {
LAB_0050f78a:
          FUN_00510530(param_1);
          FUN_00432e80(param_1);
          return;
        }
        if (uVar1 < 0x11) {
          if (uVar1 != 0x10) {
            FUN_00432e80(param_1);
            return;
          }
          goto LAB_0050f78a;
        }
        if (uVar1 < 0x12) goto LAB_0050f78a;
        if (0x13 < uVar1) {
          if ((0x14 < uVar1) && (uVar1 != 0x15)) {
            FUN_00432e80(param_1);
            return;
          }
          goto LAB_0050f78a;
        }
      }
    }
    else {
      FUN_0050fba0(param_1,param_2);
    }
    FUN_00432e80(param_1);
  }
  return;
}
