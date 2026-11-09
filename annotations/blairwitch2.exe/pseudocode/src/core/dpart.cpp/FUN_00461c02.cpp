// Name: core_dpart.cpp_FUN_00461c02
// Address: 00461c02
// Address Range: [[00461c02, 00461c0e] [00461c10, 00461e03]]
// Convention: unknown
// Signature: void core_dpart_cpp_FUN_00461c02(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dpart_cpp_FUN_00461c02(void)

{
  longlong lVar1;
  int in_EAX;
  int iVar2;
  int in_ECX;
  int unaff_EBX;
  uint uVar3;
  int iVar4;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  uint uVar5;
  
  if (unaff_EDI < in_EAX) {
    _DAT_01ba56cc = unaff_EDI;
  }
  if (_DAT_01ba56d0 < unaff_EBX) {
    _DAT_01ba56d0 = unaff_EBX;
  }
  uVar3 = *(int *)(unaff_EBP + 0x14) - *(int *)(unaff_ESI + 0x14);
  if (uVar3 < 0x10000) {
    iVar4 = 0;
  }
  else {
    iVar4 = (int)(0xffffffff / (ulonglong)uVar3);
  }
  uVar5 = (uint)(ushort)((ushort)*(uint *)(unaff_ESI + 0x14) ^ 0xffff);
  lVar1 = (longlong)iVar4 * (longlong)(*(int *)(unaff_EBP + 0x10) - *(int *)(unaff_ESI + 0x10));
  uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  *(uint *)(in_ECX + 0xc) = uVar3;
  lVar1 = (longlong)(int)uVar5 * (longlong)(int)uVar3;
  *(uint *)(in_ECX + 8) =
       *(int *)(unaff_ESI + 0x10) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  lVar1 = (longlong)iVar4 * (longlong)(*(int *)(unaff_EBP + 0x18) - *(int *)(unaff_ESI + 0x18));
  uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  *(uint *)(in_ECX + 0x1c) = uVar3;
  lVar1 = (longlong)(int)uVar5 * (longlong)(int)uVar3;
  *(uint *)(in_ECX + 0x18) =
       *(int *)(unaff_ESI + 0x18) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  lVar1 = (longlong)iVar4 * (longlong)(*(int *)(unaff_EBP + 0x1c) - *(int *)(unaff_ESI + 0x1c));
  uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  *(uint *)(in_ECX + 0x24) = uVar3;
  lVar1 = (longlong)(int)uVar5 * (longlong)(int)uVar3;
  *(uint *)(in_ECX + 0x20) =
       *(int *)(unaff_ESI + 0x1c) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  lVar1 = (longlong)iVar4 * (longlong)(*(int *)(unaff_EBP + 0x20) - *(int *)(unaff_ESI + 0x20));
  uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  *(uint *)(in_ECX + 0x14) = uVar3;
  lVar1 = (longlong)(int)uVar5 * (longlong)(int)uVar3;
  *(uint *)(in_ECX + 0x10) =
       *(int *)(unaff_ESI + 0x20) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  lVar1 = (longlong)iVar4 * (longlong)(*(int *)(unaff_EBP + 0x2c) - *(int *)(unaff_ESI + 0x2c));
  uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  *(uint *)(in_ECX + 0x34) = uVar3;
  lVar1 = (longlong)(int)uVar5 * (longlong)(int)uVar3;
  *(uint *)(in_ECX + 0x30) =
       *(int *)(unaff_ESI + 0x2c) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  if (DAT_0070ca74 == 0) {
    lVar1 = (longlong)iVar4 * (longlong)(*(int *)(unaff_EBP + 0xc) - *(int *)(unaff_ESI + 0xc));
    uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(in_ECX + 0x2c) = uVar3;
    lVar1 = (longlong)(int)uVar5 * (longlong)(int)uVar3;
    uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    iVar2 = *(int *)(unaff_ESI + 0xc);
  }
  else {
    lVar1 = (longlong)iVar4 * (longlong)(*(int *)(unaff_EBP + 8) - *(int *)(unaff_ESI + 8));
    uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(in_ECX + 0x2c) = uVar3;
    lVar1 = (longlong)(int)uVar5 * (longlong)(int)uVar3;
    uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    iVar2 = *(int *)(unaff_ESI + 8);
  }
  *(uint *)(in_ECX + 0x28) = iVar2 + uVar3;
  if ((DAT_01c38b55 & 2) != 0) {
    lVar1 = (longlong)iVar4 * (longlong)(*(int *)(unaff_EBP + 0x24) - *(int *)(unaff_ESI + 0x24));
    uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(in_ECX + 0x3c) = uVar3;
    lVar1 = (longlong)(int)uVar5 * (longlong)(int)uVar3;
    *(uint *)(in_ECX + 0x38) =
         *(int *)(unaff_ESI + 0x24) +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar4 * (longlong)(*(int *)(unaff_EBP + 0x28) - *(int *)(unaff_ESI + 0x28));
    uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *(uint *)(in_ECX + 0x44) = uVar3;
    lVar1 = (longlong)(int)uVar5 * (longlong)(int)uVar3;
    *(uint *)(in_ECX + 0x40) =
         *(int *)(unaff_ESI + 0x28) +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  }
  _DAT_01ba51c8 = _DAT_01ba51c8 + 1;
  return;
}
