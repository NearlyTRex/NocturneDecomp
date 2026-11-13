// Name: core_dcamera.cpp_FUN_0044a7e0
// Address: 0044a7e0
// Address Range: [[0044a7e0, 0044a9ec]]
// Convention: unknown
// Signature: void core_dcamera_cpp_FUN_0044a7e0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_dcamera_cpp_FUN_0044a7e0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint *unaff_ESI;
  byte bVar5;
  int in_stack_00000004;
  int *in_stack_00000008;
  uint auStackY_1000 [1014];
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  
  bVar5 = 0;
  lVar1 = (longlong)in_stack_00000008[1] * (longlong)_DAT_01c6e308 +
          (longlong)*in_stack_00000008 * (longlong)_DAT_01c6e2fc +
          (longlong)in_stack_00000008[2] * (longlong)_DAT_01c6e314;
  uStack_24 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)in_stack_00000008[1] * (longlong)_DAT_01c6e30c +
          (longlong)*in_stack_00000008 * (longlong)_DAT_01c6e300 +
          (longlong)in_stack_00000008[2] * (longlong)_DAT_01c6e318;
  uStack_20 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)in_stack_00000008[1] * (longlong)_DAT_01c6e310 +
          (longlong)*in_stack_00000008 * (longlong)_DAT_01c6e304 +
          (longlong)in_stack_00000008[2] * (longlong)_DAT_01c6e31c;
  uStack_1c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  iVar4 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_0046d860(DAT_005f2afc);
  if (iVar4 == 0) {
    lVar1 = (longlong)(int)uStack_20 * (longlong)*(int *)(in_stack_00000004 + 0x1a8) +
            (longlong)(int)uStack_24 * (longlong)*(int *)(in_stack_00000004 + 0x19c) +
            (longlong)(int)uStack_1c * (longlong)*(int *)(in_stack_00000004 + 0x1b4);
    uStack_18 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)(int)uStack_20 * (longlong)*(int *)(in_stack_00000004 + 0x1ac) +
            (longlong)(int)uStack_24 * (longlong)*(int *)(in_stack_00000004 + 0x1a0) +
            (longlong)(int)uStack_1c * (longlong)*(int *)(in_stack_00000004 + 0x1b8);
    uStack_14 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)(int)uStack_20 * (longlong)*(int *)(in_stack_00000004 + 0x1b0) +
            (longlong)(int)uStack_24 * (longlong)*(int *)(in_stack_00000004 + 0x1a4) +
            (longlong)(int)uStack_1c * (longlong)*(int *)(in_stack_00000004 + 0x1bc);
    uStack_10 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *unaff_ESI = uStack_18;
    unaff_ESI[(uint)bVar5 * -2 + 1] = *(uint *)((int)&stack0xffffffec + (uint)bVar5 * -8);
    (unaff_ESI + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
         *(uint *)((int)&stack0xfffffff0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    return;
  }
  iVar4 = in_stack_00000004 + iVar4 * 4;
  lVar1 = (longlong)*(int *)(iVar4 + 0x136c) * (longlong)(int)uStack_24;
  lVar2 = (longlong)*(int *)(iVar4 + 0x13cc) * (longlong)(int)uStack_20;
  lVar3 = (longlong)*(int *)(iVar4 + 0x142c) * (longlong)(int)uStack_1c;
  uStack_18 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
              ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
              ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
  lVar1 = (longlong)*(int *)(iVar4 + 0x138c) * (longlong)(int)uStack_24;
  lVar2 = (longlong)*(int *)(iVar4 + 0x13ec) * (longlong)(int)uStack_20;
  lVar3 = (longlong)*(int *)(iVar4 + 0x144c) * (longlong)(int)uStack_1c;
  uStack_14 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
              ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
              ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
  lVar1 = (longlong)*(int *)(iVar4 + 0x13ac) * (longlong)(int)uStack_24;
  lVar2 = (longlong)*(int *)(iVar4 + 0x140c) * (longlong)(int)uStack_20;
  lVar3 = (longlong)*(int *)(iVar4 + 0x146c) * (longlong)(int)uStack_1c;
  uStack_10 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
              ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
              ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
  *unaff_ESI = uStack_18;
  unaff_ESI[(uint)bVar5 * -2 + 1] = *(uint *)((int)&stack0xffffffec + (uint)bVar5 * -8);
  (unaff_ESI + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       *(uint *)((int)&stack0xfffffff0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  return;
}
