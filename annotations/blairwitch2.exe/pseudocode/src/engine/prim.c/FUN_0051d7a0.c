// Name: engine_prim.c_FUN_0051d7a0
// Address: 0051d7a0
// Address Range: [[0051d7a0, 0051da1b]]
// Convention: unknown
// Signature: void engine_prim_c_FUN_0051d7a0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_prim_c_FUN_0051d7a0(int param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iStack_14;
  
  iVar7 = *(int *)(param_2 + 0x14) >> 0x10;
  iVar3 = *(int *)(param_1 + 0x14) >> 0x10;
  if (iVar3 != iVar7) {
    iVar4 = iVar3;
    iVar6 = param_2;
    if (*(int *)(param_2 + 0x14) < *(int *)(param_1 + 0x14)) {
      iVar4 = iVar7;
      iVar6 = param_1;
      param_1 = param_2;
      iVar7 = iVar3;
    }
    iVar2 = _DAT_01e61b5c * 0x50;
    *(int *)(&DAT_01e61b60 + iVar2) = iVar4;
    iVar3 = _DAT_01e62060;
    *(int *)(iVar2 + 0x1e61b64) = iVar7;
    if (iVar4 < iVar3) {
      _DAT_01e62060 = iVar4;
    }
    if (_DAT_01e62064 < iVar7) {
      _DAT_01e62064 = iVar7;
    }
    uVar5 = *(int *)(iVar6 + 0x14) - *(int *)(param_1 + 0x14);
    if (uVar5 < 0x10000) {
      iVar7 = 0;
    }
    else {
      iVar7 = (int)(0xffffffff / (ulonglong)uVar5);
    }
    uVar8 = (uint)(ushort)((ushort)*(uint *)(param_1 + 0x14) ^ 0xffff);
    lVar1 = (longlong)iVar7 * (longlong)(*(int *)(iVar6 + 0x10) - *(int *)(param_1 + 0x10));
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar2 + 0x1e61b6c) = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    *(uint *)(iVar2 + 0x1e61b68) =
         *(int *)(param_1 + 0x10) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(*(int *)(iVar6 + 0x18) - *(int *)(param_1 + 0x18));
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar2 + 0x1e61b7c) = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    *(uint *)(iVar2 + 0x1e61b78) =
         *(int *)(param_1 + 0x18) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(*(int *)(iVar6 + 0x1c) - *(int *)(param_1 + 0x1c));
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar2 + 0x1e61b84) = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    *(uint *)(iVar2 + 0x1e61b80) =
         *(int *)(param_1 + 0x1c) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(*(int *)(iVar6 + 0x20) - *(int *)(param_1 + 0x20));
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar2 + 0x1e61b74) = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    *(uint *)(iVar2 + 0x1e61b70) =
         *(int *)(param_1 + 0x20) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(*(int *)(iVar6 + 0x2c) - *(int *)(param_1 + 0x2c));
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar2 + 0x1e61b94) = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    *(uint *)(iVar2 + 0x1e61b90) =
         *(int *)(param_1 + 0x2c) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    if (_DAT_01c38b58 == 1) {
      if (_DAT_01c38b50 == 0) {
        iStack_14 = *(int *)(param_1 + 0xc);
        iVar3 = *(int *)(iVar6 + 0xc);
      }
      else {
        iStack_14 = 0x7fffffff - *(int *)(param_1 + 8);
        iVar3 = 0x7fffffff - *(int *)(iVar6 + 8);
      }
      lVar1 = (longlong)iVar7 * (longlong)(iVar3 - iStack_14);
      uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      *(uint *)(iVar2 + 0x1e61b8c) = uVar5;
      lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
      *(uint *)(iVar2 + 0x1e61b88) =
           iStack_14 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    }
    else {
      lVar1 = (longlong)iVar7 * (longlong)(*(int *)(iVar6 + 8) - *(int *)(param_1 + 8));
      uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      *(uint *)(iVar2 + 0x1e61b8c) = uVar5;
      lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
      *(uint *)(iVar2 + 0x1e61b88) =
           *(int *)(param_1 + 8) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    }
    lVar1 = (longlong)iVar7 * (longlong)(*(int *)(iVar6 + 0x24) - *(int *)(param_1 + 0x24));
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar2 + 0x1e61b9c) = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    *(uint *)(iVar2 + 0x1e61b98) =
         *(int *)(param_1 + 0x24) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(*(int *)(iVar6 + 0x28) - *(int *)(param_1 + 0x28));
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(iVar2 + 0x1e61ba4) = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    _DAT_01e61b5c = _DAT_01e61b5c + 1;
    *(uint *)(iVar2 + 0x1e61ba0) =
         *(int *)(param_1 + 0x28) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  }
  return;
}
