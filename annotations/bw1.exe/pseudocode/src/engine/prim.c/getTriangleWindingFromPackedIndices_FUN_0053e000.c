// Name: engine_prim.c_getTriangleWindingFromPackedIndices_FUN_0053e000
// Address: 0053e000
// Address Range: [[0053e000, 0053e0f7]]
// Convention: __cdecl
// Signature: int __cdecl engine_prim_c_getTriangleWindingFromPackedIndices_FUN_0053e000(STrianglePackedIndices *triangle)

#include "nocturne.h"

int __cdecl engine_prim_c_getTriangleWindingFromPackedIndices_FUN_0053e000(STrianglePackedIndices *triangle)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  uVar2 = (uint)triangle->vertex_index_0;
  uVar3 = (uint)triangle->vertex_index_1;
  iVar1 = uVar3 * 0x30;
  uVar6 = (uint)triangle->vertex_index_2;
  if (DAT_00713a7c == 1) {
    local_24 = (&DAT_00629024)[uVar3 * 0xc] - (&DAT_00629024)[uVar2 * 0xc];
    local_20 = *(int *)(&DAT_00629028 + iVar1) - *(int *)(&DAT_00629028 + uVar2 * 0x30);
    local_1c = (&DAT_00629024)[uVar6 * 0xc] - (&DAT_00629024)[uVar3 * 0xc];
    local_18 = *(int *)(&DAT_00629028 + uVar6 * 0x30) - *(int *)(&DAT_00629028 + iVar1);
  }
  else {
    local_1c = (&DAT_00629024)[uVar3 * 0xc] - (&DAT_00629024)[uVar2 * 0xc];
    local_18 = *(int *)(&DAT_00629028 + iVar1) - *(int *)(&DAT_00629028 + uVar2 * 0x30);
    local_24 = (&DAT_00629024)[uVar6 * 0xc] - (&DAT_00629024)[uVar3 * 0xc];
    local_20 = *(int *)(&DAT_00629028 + uVar6 * 0x30) - *(int *)(&DAT_00629028 + iVar1);
  }
  iVar4 = (int)((ulonglong)((longlong)local_24 * (longlong)local_18) >> 0x20);
  iVar5 = (int)((ulonglong)((longlong)local_20 * (longlong)local_1c) >> 0x20);
  uVar2 = (uint)((uint)((longlong)local_20 * (longlong)local_1c) <
                (uint)((longlong)local_24 * (longlong)local_18));
  iVar1 = iVar5 - iVar4;
  return (uint)((SBORROW4(iVar5,iVar4) != SBORROW4(iVar1,uVar2)) != (int)(iVar1 - uVar2) < 0);
}
