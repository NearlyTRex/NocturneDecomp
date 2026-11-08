// Name: FUN_005401b0
// Address: 005401b0
// Address Range: [[005401b0, 00540389]]
// Convention: unknown
// Signature: void FUN_005401b0(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005401b0(int param_1,uint param_2)

{
  int iVar1;
  byte bVar2;
  int aiStackY_1010 [1016];
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  int iStack_10;
  
  bVar2 = 0;
  if ((*(int *)(param_1 + 0x430) == 1) && (*(int *)(param_1 + 0x708) == 0)) {
    iVar1 = FUN_0048e340(0x01C38BC0,param_1 + 0x438);
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0x708) = 1;
      if ((uint *)(param_1 + 0x500) != (uint *)(param_1 + 0x49c)) {
        *(uint *)(param_1 + 0x500) = *(uint *)(param_1 + 0x49c);
        *(uint *)(param_1 + 0x504) = *(uint *)(param_1 + 0x4a0);
        *(uint *)(param_1 + 0x508) = *(uint *)(param_1 + 0x4a4);
      }
      if ((uint *)(param_1 + 0x524) != (uint *)(param_1 + 0x4a8)) {
        *(uint *)(param_1 + 0x524) = *(uint *)(param_1 + 0x4a8);
        *(uint *)(param_1 + 0x528) = *(uint *)(param_1 + 0x4ac);
        *(uint *)(param_1 + 0x52c) = *(uint *)(param_1 + 0x4b0);
      }
      FUN_00449530(param_1 + 0x4cc,param_1 + 0x500);
      uStack_28 = uStack_1c;
      *(uint *)((int)&stack0xffffffdc + (uint)bVar2 * -8) =
           *(uint *)(&stack0xffffffe8 + (uint)bVar2 * -8);
      *(uint *)((int)&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
           *(uint *)(&stack0xffffffec + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      if ((uint *)(param_1 + 0x4f4) != &stack0xffffffd8) {
        *(uint *)(param_1 + 0x4f4) = uStack_28;
        *(uint *)(param_1 + 0x4f8) = uStack_24;
        *(uint *)(param_1 + 0x4fc) = uStack_20;
      }
    }
  }
  if (*(int *)(param_1 + 0x430) == 0) {
    iVar1 = (**(code **)*0x01D02F84)(0x01D02F84,0x13);
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x710);
      *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x714);
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x718);
      iStack_10 = FUN_005b849c();
      *(float *)(param_1 + 0x30) =
           ((float)iStack_10 * _DAT_005e6895 + (float)_DAT_005e6899) * (float)_DAT_005e68a1;
      iStack_10 = FUN_005b849c();
      *(float *)(param_1 + 0x38) =
           (float)iStack_10 * _DAT_005e6895 * _DAT_005e68a9 * (float)_DAT_005e68b1;
      iStack_10 = FUN_005b849c();
      *(float *)(param_1 + 0x34) =
           (float)iStack_10 * _DAT_005e6895 * _DAT_005e68a9 * (float)_DAT_005e68b1;
      (**(code **)(*(int *)(param_1 + 0x2b0) + 8))(param_1);
    }
  }
  if (*(int *)(param_1 + 0x708) != 0) {
    FUN_005b2290((uint *)(param_1 + 0x4b4),param_2);
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x4b4);
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x4b8);
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x4bc);
    if ((uint *)(param_1 + 0x30) != (uint *)(param_1 + 0x4c0)) {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x4c0);
      *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x4c4);
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x4c8);
      return;
    }
  }
  return;
}
