// Name: engine_font.cpp_FUN_004c4c00
// Address: 004c4c00
// Address Range: [[004c4c00, 004c4d34]]
// Convention: unknown
// Signature: void engine_font_cpp_FUN_004c4c00(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void engine_font_cpp_FUN_004c4c00(void)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int in_stack_00000004;
  int in_stack_00000008;
  
  iVar3 = *(int *)(in_stack_00000008 + 0x14) >> 0x10;
  iVar5 = *(int *)(in_stack_00000004 + 0x14) >> 0x10;
  if (iVar5 != iVar3) {
    iVar4 = iVar3;
    iVar7 = in_stack_00000004;
    if (*(int *)(in_stack_00000008 + 0x14) < *(int *)(in_stack_00000004 + 0x14)) {
      iVar4 = iVar5;
      iVar5 = iVar3;
      iVar7 = in_stack_00000008;
      in_stack_00000008 = in_stack_00000004;
    }
    iVar3 = _DAT_01cc8ce8 * 0x38;
    *(int *)(&DAT_01cc8cec + iVar3) = iVar5;
    iVar2 = _DAT_01cc906c;
    *(int *)(iVar3 + 0x1cc8cf0) = iVar4;
    if (iVar5 < iVar2) {
      _DAT_01cc906c = iVar5;
    }
    if (_DAT_01cc9070 < iVar4) {
      _DAT_01cc9070 = iVar4;
    }
    *(uint *)(iVar3 + 0x1cc8cf4) = *(uint *)(iVar7 + 0x10);
    *(uint *)(iVar3 + 0x1cc8d04) = *(uint *)(iVar7 + 0x18);
    *(uint *)(iVar3 + 0x1cc8d0c) = *(uint *)(iVar7 + 0x1c);
    uVar6 = *(int *)(in_stack_00000008 + 0x14) - *(int *)(iVar7 + 0x14);
    if (uVar6 < 0x10000) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)(0xffffffff / (ulonglong)uVar6);
    }
    lVar1 = (longlong)iVar5 *
            (longlong)(*(int *)(in_stack_00000008 + 0x10) - *(int *)(iVar7 + 0x10));
    *(uint *)(iVar3 + 0x1cc8cf8) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar5 *
            (longlong)(*(int *)(in_stack_00000008 + 0x18) - *(int *)(iVar7 + 0x18));
    *(uint *)(iVar3 + 0x1cc8d08) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar5 *
            (longlong)(*(int *)(in_stack_00000008 + 0x1c) - *(int *)(iVar7 + 0x1c));
    *(uint *)(iVar3 + 0x1cc8d10) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    uVar6 = (uint)(ushort)((ushort)*(uint *)(iVar7 + 0x14) ^ 0xffff);
    lVar1 = (longlong)(int)uVar6 * (longlong)*(int *)(iVar3 + 0x1cc8cf8);
    *(uint *)(iVar3 + 0x1cc8cf4) =
         *(int *)(iVar3 + 0x1cc8cf4) +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)(int)uVar6 * (longlong)*(int *)(iVar3 + 0x1cc8d08);
    *(uint *)(iVar3 + 0x1cc8d04) =
         *(int *)(iVar3 + 0x1cc8d04) +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)(int)uVar6 * (longlong)*(int *)(iVar3 + 0x1cc8d10);
    _DAT_01cc8ce8 = _DAT_01cc8ce8 + 1;
    *(uint *)(iVar3 + 0x1cc8d0c) =
         *(int *)(iVar3 + 0x1cc8d0c) +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  }
  return;
}
