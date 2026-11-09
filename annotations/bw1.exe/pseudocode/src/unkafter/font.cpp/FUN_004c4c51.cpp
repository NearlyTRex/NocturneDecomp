// Name: unkafter_font.cpp_FUN_004c4c51
// Address: 004c4c51
// Address Range: [[004c4c51, 004c4d34]]
// Convention: unknown
// Signature: void unkafter_font_cpp_FUN_004c4c51(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_font_cpp_FUN_004c4c51(void)

{
  int *piVar1;
  longlong lVar2;
  int in_EAX;
  int in_ECX;
  uint unaff_EBX;
  uint uVar3;
  int iVar4;
  int unaff_ESI;
  int unaff_EDI;
  
  piVar1 = (int *)(in_ECX + -0x14c6fbbf);
  iVar4 = *piVar1;
  *piVar1 = *piVar1 + in_ECX;
  if (SCARRY4(iVar4,in_ECX) != *piVar1 < 0) {
    _DAT_01cc906c = unaff_EBX;
  }
  if (_DAT_01cc9070 < in_EAX) {
    _DAT_01cc9070 = in_EAX;
  }
  *(uint *)(in_ECX + 8) = *(uint *)(unaff_ESI + 0x10);
  *(uint *)(in_ECX + 0x18) = *(uint *)(unaff_ESI + 0x18);
  *(uint *)(in_ECX + 0x20) = *(uint *)(unaff_ESI + 0x1c);
  uVar3 = *(int *)(unaff_EDI + 0x14) - *(int *)(unaff_ESI + 0x14);
  if (uVar3 < 0x10000) {
    iVar4 = 0;
  }
  else {
    iVar4 = (int)(0xffffffff / (ulonglong)uVar3);
  }
  lVar2 = (longlong)iVar4 * (longlong)(*(int *)(unaff_EDI + 0x10) - *(int *)(unaff_ESI + 0x10));
  *(uint *)(in_ECX + 0xc) = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
  lVar2 = (longlong)iVar4 * (longlong)(*(int *)(unaff_EDI + 0x18) - *(int *)(unaff_ESI + 0x18));
  *(uint *)(in_ECX + 0x1c) = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
  lVar2 = (longlong)iVar4 * (longlong)(*(int *)(unaff_EDI + 0x1c) - *(int *)(unaff_ESI + 0x1c));
  *(uint *)(in_ECX + 0x24) = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
  uVar3 = (uint)(ushort)((ushort)*(uint *)(unaff_ESI + 0x14) ^ 0xffff);
  lVar2 = (longlong)(int)uVar3 * (longlong)*(int *)(in_ECX + 0xc);
  *(uint *)(in_ECX + 8) =
       *(int *)(in_ECX + 8) + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  lVar2 = (longlong)(int)uVar3 * (longlong)*(int *)(in_ECX + 0x1c);
  *(uint *)(in_ECX + 0x18) =
       *(int *)(in_ECX + 0x18) + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  lVar2 = (longlong)(int)uVar3 * (longlong)*(int *)(in_ECX + 0x24);
  *(uint *)(in_ECX + 0x20) =
       *(int *)(in_ECX + 0x20) + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  _DAT_01cc8ce8 = _DAT_01cc8ce8 + 1;
  return;
}
