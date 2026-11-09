// Name: engine_prim.c_FUN_00515b80
// Address: 00515b80
// Address Range: [[00515b80, 00515c6b]]
// Convention: __cdecl
// Signature: int __cdecl engine_prim_c_FUN_00515b80(SMRGLPrimitiveTriangle *triangle)

#include "nocturne.h"

int __cdecl engine_prim_c_FUN_00515b80(SMRGLPrimitiveTriangle *triangle)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar1 = *(int *)(triangle + 0x18);
  iVar4 = *(int *)(triangle + 0x24);
  iVar5 = *(int *)(triangle + 0x30);
  iVar3 = iVar4 * 0x30;
  if (DAT_007303fc == 1) {
    local_24 = (&DAT_0060b024)[iVar4 * 0xc] - (&DAT_0060b024)[iVar1 * 0xc];
    local_20 = *(int *)(&DAT_0060b028 + iVar3) - *(int *)(&DAT_0060b028 + iVar1 * 0x30);
    local_1c = (&DAT_0060b024)[iVar5 * 0xc] - (&DAT_0060b024)[iVar4 * 0xc];
    local_18 = *(int *)(&DAT_0060b028 + iVar5 * 0x30) - *(int *)(&DAT_0060b028 + iVar3);
  }
  else {
    local_1c = (&DAT_0060b024)[iVar4 * 0xc] - (&DAT_0060b024)[iVar1 * 0xc];
    local_18 = *(int *)(&DAT_0060b028 + iVar3) - *(int *)(&DAT_0060b028 + iVar1 * 0x30);
    local_24 = (&DAT_0060b024)[iVar5 * 0xc] - (&DAT_0060b024)[iVar4 * 0xc];
    local_20 = *(int *)(&DAT_0060b028 + iVar5 * 0x30) - *(int *)(&DAT_0060b028 + iVar3);
  }
  iVar4 = (int)((ulonglong)((longlong)local_24 * (longlong)local_18) >> 0x20);
  iVar5 = (int)((ulonglong)((longlong)local_20 * (longlong)local_1c) >> 0x20);
  uVar2 = (uint)((uint)((longlong)local_20 * (longlong)local_1c) <
                (uint)((longlong)local_24 * (longlong)local_18));
  iVar1 = iVar5 - iVar4;
  return (uint)((SBORROW4(iVar5,iVar4) != SBORROW4(iVar1,uVar2)) != (int)(iVar1 - uVar2) < 0);
}
