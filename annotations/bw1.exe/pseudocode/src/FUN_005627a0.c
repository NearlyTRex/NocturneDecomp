// Name: FUN_005627a0
// Address: 005627a0
// Address Range: [[005627a0, 00562978]]
// Convention: unknown
// Signature: void FUN_005627a0(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005627a0(int param_1,uint param_2)

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
  if ((*(int *)(param_1 + 0x2d4) == 1) && (*(int *)(param_1 + 0x5ac) == 0)) {
    iVar1 = FUN_004a6c30(0x01C51D80,param_1 + 0x2dc);
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0x5ac) = 1;
      if ((uint *)(param_1 + 0x3a4) != (uint *)(param_1 + 0x340)) {
        *(uint *)(param_1 + 0x3a4) = *(uint *)(param_1 + 0x340);
        *(uint *)(param_1 + 0x3a8) = *(uint *)(param_1 + 0x344);
        *(uint *)(param_1 + 0x3ac) = *(uint *)(param_1 + 0x348);
      }
      if ((uint *)(param_1 + 0x3c8) != (uint *)(param_1 + 0x34c)) {
        *(uint *)(param_1 + 0x3c8) = *(uint *)(param_1 + 0x34c);
        *(uint *)(param_1 + 0x3cc) = *(uint *)(param_1 + 0x350);
        *(uint *)(param_1 + 0x3d0) = *(uint *)(param_1 + 0x354);
      }
      FUN_0045f690(param_1 + 0x370,param_1 + 0x3a4);
      uStack_28 = uStack_1c;
      *(uint *)((int)&stack0xffffffdc + (uint)bVar2 * -8) =
           *(uint *)(&stack0xffffffe8 + (uint)bVar2 * -8);
      *(uint *)((int)&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
           *(uint *)(&stack0xffffffec + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      if ((uint *)(param_1 + 0x398) != &stack0xffffffd8) {
        *(uint *)(param_1 + 0x398) = uStack_28;
        *(uint *)(param_1 + 0x39c) = uStack_24;
        *(uint *)(param_1 + 0x3a0) = uStack_20;
      }
    }
  }
  if (*(int *)(param_1 + 0x2d4) == 0) {
    iVar1 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x13);
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x5b4);
      *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x5b8);
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x5bc);
      iStack_10 = FUN_005c084c();
      *(float *)(param_1 + 0x30) =
           ((float)iStack_10 * _DAT_005f1a67 + (float)_DAT_005f1a6b) * (float)_DAT_005f1a73;
      iStack_10 = FUN_005c084c();
      *(float *)(param_1 + 0x38) =
           (float)iStack_10 * _DAT_005f1a67 * _DAT_005f1a7b * (float)_DAT_005f1a83;
      iStack_10 = FUN_005c084c();
      *(float *)(param_1 + 0x34) =
           (float)iStack_10 * _DAT_005f1a67 * _DAT_005f1a7b * (float)_DAT_005f1a83;
      (*(code *)**(uint **)(param_1 + 0x154))(param_1);
    }
  }
  if (*(int *)(param_1 + 0x5ac) != 0) {
    FUN_0041e0d0((uint *)(param_1 + 0x358),param_2);
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x358);
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x35c);
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x360);
    if ((uint *)(param_1 + 0x30) != (uint *)(param_1 + 0x364)) {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x364);
      *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x368);
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x36c);
      return;
    }
  }
  return;
}
