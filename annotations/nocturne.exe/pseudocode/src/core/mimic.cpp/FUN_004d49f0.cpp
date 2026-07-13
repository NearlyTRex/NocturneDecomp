// Name: FUN_004d49f0
// Address: 004d49f0
// Address Range: [[004d49f0, 004d4b94]]
// Convention: unknown
// Signature: void FUN_004d49f0(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d49f0(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (*0x01CEA280 != 0) {
    _DAT_01cc4800 = "..\\core\\mimic.cpp";
    _DAT_01cc4804 = 0x130;
    FUN_004c8440("CMimic::setup - can't use mimic in multi-player!");
  }
  iVar2 = _DAT_01cae0e8;
  *(uint *)(param_1 + 0x108) =
       *(uint *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x108);
  *(uint *)(param_1 + 0x10c) = *(uint *)(*(int *)(iVar2 * 4 + 0x1cae0d8) + 0x10c);
  *(uint *)(param_1 + 0x110) = *(uint *)(*(int *)(iVar2 * 4 + 0x1cae0d8) + 0x110);
  if (0.0 <= *(float *)(param_1 + 0x47578)) {
    FUN_004d5e20(param_1,param_2);
    return;
  }
  iVar2 = FUN_004259f0(param_1,param_2);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x4691c) < 2) {
      if ((*(int *)(param_1 + 0x4691c) < 1) &&
         (iVar2 = FUN_0047dc30(0x01C03A10,param_1 + 0xbd88), iVar2 != 0)) {
        *(uint *)(param_1 + 0x4691c) = 1;
      }
      iVar2 = FUN_0047dc30(0x01C03A10,param_1 + 0xbd24);
      if ((iVar2 != 0) && (FUN_004d4ba0(param_1), *(int *)(param_1 + 0x4691c) == 1)) {
        iVar2 = FUN_004e1660(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x150);
        uVar1 = *(uint *)(iVar2 + 0x24);
        if ((uVar1 < 3) || (uVar1 < 4)) {
LAB_004d4b4a:
          FUN_004d5770(param_1);
          FUN_004296c0(param_1);
          return;
        }
        if (uVar1 < 0x11) {
          if (uVar1 != 0x10) {
            FUN_004296c0(param_1);
            return;
          }
          goto LAB_004d4b4a;
        }
        if (uVar1 < 0x12) goto LAB_004d4b4a;
        if (0x13 < uVar1) {
          if ((0x14 < uVar1) && (uVar1 != 0x15)) {
            FUN_004296c0(param_1);
            return;
          }
          goto LAB_004d4b4a;
        }
      }
    }
    else {
      FUN_004d4f30(param_1,param_2);
    }
    FUN_004296c0(param_1);
  }
  return;
}
