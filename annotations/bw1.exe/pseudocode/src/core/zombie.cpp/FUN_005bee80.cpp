// Name: core_zombie.cpp_FUN_005bee80
// Address: 005bee80
// Address Range: [[005bee80, 005bef9b]]
// Convention: unknown
// Signature: void core_zombie_cpp_FUN_005bee80(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_zombie_cpp_FUN_005bee80(void)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int in_stack_00000004;
  int in_stack_00000008;
  
  iVar6 = *(int *)(in_stack_00000008 + 0x14) >> 0x10;
  iVar2 = *(int *)(in_stack_00000004 + 0x14) >> 0x10;
  if (iVar2 != iVar6) {
    iVar3 = iVar2;
    iVar7 = in_stack_00000004;
    if (*(int *)(in_stack_00000008 + 0x14) < *(int *)(in_stack_00000004 + 0x14)) {
      iVar3 = iVar6;
      iVar6 = iVar2;
      iVar7 = in_stack_00000008;
      in_stack_00000008 = in_stack_00000004;
    }
    iVar4 = _DAT_02c9eb34 * 0x50;
    *(int *)(&DAT_02c9eb38 + iVar4) = iVar3;
    iVar2 = _DAT_02c9f038;
    *(int *)(iVar4 + 0x2c9eb3c) = iVar6;
    if (iVar3 < iVar2) {
      _DAT_02c9f038 = iVar3;
    }
    if (_DAT_02c9f03c < iVar6) {
      _DAT_02c9f03c = iVar6;
    }
    uVar5 = *(int *)(in_stack_00000008 + 0x14) - *(int *)(iVar7 + 0x14);
    if (uVar5 < 0x10000) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)(0xffffffff / (ulonglong)uVar5);
    }
    uVar8 = *(uint *)(iVar7 + 0x14) & 0xffff ^ 0xffff;
    lVar1 = (longlong)iVar6 *
            (longlong)(*(int *)(in_stack_00000008 + 0x10) - *(int *)(iVar7 + 0x10));
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar4 + 0x2c9eb44) = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    *(uint *)(iVar4 + 0x2c9eb40) =
         *(int *)(iVar7 + 0x10) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar6 *
            (longlong)((*(int *)(in_stack_00000008 + 8) - *(int *)(iVar7 + 8)) * 0x100);
    *(uint *)(iVar4 + 0x2c9eb64) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)(int)uVar8 * (longlong)*(int *)(iVar4 + 0x2c9eb64);
    _DAT_02c9eb34 = _DAT_02c9eb34 + 1;
    *(uint *)(iVar4 + 0x2c9eb60) =
         (*(int *)(iVar7 + 8) * 0x100 - _DAT_01bc0cd0) +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  }
  return;
}
