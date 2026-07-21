// Name: engine_prim.c_getTriangleWindingFromPackedIndices_FUN_004f9cb0
// Address: 004f9cb0
// Address Range: [[004f9cb0, 004f9da7]]
// Convention: __cdecl
// Signature: bool __cdecl engine_prim_c_getTriangleWindingFromPackedIndices_FUN_004f9cb0(ushort *param_1)

#include "nocturne.h"

bool __cdecl engine_prim_c_getTriangleWindingFromPackedIndices_FUN_004f9cb0(ushort *param_1)

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
  
  uVar2 = (uint)*param_1;
  uVar3 = (uint)param_1[1];
  iVar1 = uVar3 * 0x30;
  uVar6 = (uint)param_1[2];
  if (DAT_006b0280 == 1) {
    local_24 = (&DAT_005c5024)[uVar3 * 0xc] - (&DAT_005c5024)[uVar2 * 0xc];
    local_20 = *(int *)(&DAT_005c5028 + iVar1) - *(int *)(&DAT_005c5028 + uVar2 * 0x30);
    local_1c = (&DAT_005c5024)[uVar6 * 0xc] - (&DAT_005c5024)[uVar3 * 0xc];
    local_18 = *(int *)(&DAT_005c5028 + uVar6 * 0x30) - *(int *)(&DAT_005c5028 + iVar1);
  }
  else {
    local_1c = (&DAT_005c5024)[uVar3 * 0xc] - (&DAT_005c5024)[uVar2 * 0xc];
    local_18 = *(int *)(&DAT_005c5028 + iVar1) - *(int *)(&DAT_005c5028 + uVar2 * 0x30);
    local_24 = (&DAT_005c5024)[uVar6 * 0xc] - (&DAT_005c5024)[uVar3 * 0xc];
    local_20 = *(int *)(&DAT_005c5028 + uVar6 * 0x30) - *(int *)(&DAT_005c5028 + iVar1);
  }
  iVar4 = (int)((ulonglong)((longlong)local_24 * (longlong)local_18) >> 0x20);
  iVar5 = (int)((ulonglong)((longlong)local_20 * (longlong)local_1c) >> 0x20);
  uVar2 = (uint)((uint)((longlong)local_20 * (longlong)local_1c) <
                (uint)((longlong)local_24 * (longlong)local_18));
  iVar1 = iVar5 - iVar4;
  return (SBORROW4(iVar5,iVar4) != SBORROW4(iVar1,uVar2)) != (int)(iVar1 - uVar2) < 0;
}
