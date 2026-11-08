// Name: FUN_00461e62
// Address: 00461e62
// Address Range: [[00461e62, 00461e6d] [00461e6f, 00461f21]]
// Convention: unknown
// Signature: void FUN_00461e62(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00461e62(void)

{
  longlong lVar1;
  int in_EAX;
  uint uVar2;
  int iVar3;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  
  if (in_EAX < unaff_EBP) {
    _DAT_01ba56cc = in_EAX;
  }
  if (_DAT_01ba56d0 < 0x4568901) {
    _DAT_01ba56d0 = 0x4568901;
  }
  uVar2 = *(int *)(unaff_EDI + 0x14) - *(int *)(unaff_EBX + 0x14);
  if (uVar2 < 0x10000) {
    iVar3 = 0;
  }
  else {
    iVar3 = (int)(0xffffffff / (ulonglong)uVar2);
  }
  lVar1 = (longlong)iVar3 * (longlong)(*(int *)(unaff_EDI + 0x10) - *(int *)(unaff_EBX + 0x10));
  *(uint *)(unaff_ESI + 0xc) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)iVar3 * (longlong)((*(int *)(unaff_EDI + 8) - *(int *)(unaff_EBX + 8)) * 0x100);
  *(uint *)(unaff_ESI + 0x2c) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  iVar3 = _DAT_01ba5714;
  uVar2 = (uint)(ushort)((ushort)*(uint *)(unaff_EBX + 0x14) ^ 0xffff);
  lVar1 = (longlong)(int)uVar2 * (longlong)*(int *)(unaff_ESI + 0xc);
  *(uint *)(unaff_ESI + 8) =
       *(int *)(unaff_EBX + 0x10) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  lVar1 = (longlong)(int)uVar2 * (longlong)*(int *)(unaff_ESI + 0x2c);
  _DAT_01ba51c8 = _DAT_01ba51c8 + 1;
  *(uint *)(unaff_ESI + 0x28) =
       (*(int *)(unaff_EBX + 8) * 0x100 - iVar3) +
       ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  return;
}
