// Name: cockpit_drawsurf.cpp_drawHorizontalLineWithEffect_FUN_0045bc20
// Address: 0045bc20
// Address Range: [[0045bc20, 0045bd42]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_drawHorizontalLineWithEffect_FUN_0045bc20(int start_x,int end_x,int y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_drawsurf_cpp_drawHorizontalLineWithEffect_FUN_0045bc20(int start_x,int end_x,int y)

{
  byte *pbVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  
  iVar4 = y * 4;
  if (DAT_005b7624 == 8) {
    pbVar1 = (byte *)(*(int *)(&DAT_01bd2fa0 + iVar4) + start_x);
    for (; start_x <= end_x; start_x = start_x + 1) {
      *pbVar1 = *(byte *)(*pbVar1 + 0x1bf5d20);
      pbVar1 = pbVar1 + 1;
    }
  }
  else if (DAT_005b7624 == 0x10) {
    puVar2 = (uint *)(start_x * 2 + *(int *)(&DAT_01bd2fa0 + iVar4));
    puVar3 = puVar2;
    if ((start_x & 1U) != 0) {
      puVar3 = (uint *)((int)puVar2 + 2);
      start_x = start_x + 1;
      *(ushort *)puVar2 = (ushort)*puVar2 >> (DAT_01b4d720 & 0x1f) & (ushort)_DAT_01b4d730;
    }
    for (; start_x < end_x; start_x = start_x + 2) {
      *puVar3 = *puVar3 >> (DAT_01b4d720 & 0x1f) & _DAT_01b4d734;
      puVar3 = puVar3 + 1;
    }
    if (start_x == end_x) {
      *(ushort *)puVar3 = (ushort)*puVar3 >> (DAT_01b4d720 & 0x1f) & (ushort)_DAT_01b4d730;
      return;
    }
  }
  else if ((DAT_005b7624 == 0x20) &&
          (puVar3 = (uint *)(start_x * 4 + *(int *)(&DAT_01bd2fa0 + iVar4)), start_x <= end_x)) {
    do {
      start_x = start_x + 1;
      *puVar3 = *puVar3 >> (DAT_01b4d720 & 0x1f) & _DAT_01b4d730;
      puVar3 = puVar3 + 1;
    } while (start_x <= end_x);
    return;
  }
  return;
}
