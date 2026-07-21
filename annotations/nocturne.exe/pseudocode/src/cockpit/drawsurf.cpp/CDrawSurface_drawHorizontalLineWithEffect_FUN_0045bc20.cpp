// Name: cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLineWithEffect_FUN_0045bc20
// Address: 0045bc20
// Address Range: [[0045bc20, 0045bd42]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawHorizontalLineWithEffect_FUN_0045bc20(uint param_1,uint param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawHorizontalLineWithEffect_FUN_0045bc20(uint param_1,uint param_2,int param_3)

{
  byte *pbVar1;
  uint *puVar2;
  uint *puVar3;
  
  param_3 = param_3 * 4;
  if (DAT_005b7624 == 8) {
    pbVar1 = (byte *)(*(int *)(&DAT_01bd2fa0 + param_3) + param_1);
    for (; (int)param_1 <= (int)param_2; param_1 = param_1 + 1) {
      *pbVar1 = *(byte *)(*pbVar1 + 0x1bf5d20);
      pbVar1 = pbVar1 + 1;
    }
  }
  else if (DAT_005b7624 == 0x10) {
    puVar2 = (uint *)(param_1 * 2 + *(int *)(&DAT_01bd2fa0 + param_3));
    puVar3 = puVar2;
    if ((param_1 & 1) != 0) {
      puVar3 = (uint *)((int)puVar2 + 2);
      param_1 = param_1 + 1;
      *(ushort *)puVar2 = (ushort)*puVar2 >> (DAT_01b4d720 & 0x1f) & (ushort)_DAT_01b4d730;
    }
    for (; (int)param_1 < (int)param_2; param_1 = param_1 + 2) {
      *puVar3 = *puVar3 >> (DAT_01b4d720 & 0x1f) & _DAT_01b4d734;
      puVar3 = puVar3 + 1;
    }
    if (param_1 == param_2) {
      *(ushort *)puVar3 = (ushort)*puVar3 >> (DAT_01b4d720 & 0x1f) & (ushort)_DAT_01b4d730;
      return;
    }
  }
  else if ((DAT_005b7624 == 0x20) &&
          (puVar3 = (uint *)(param_1 * 4 + *(int *)(&DAT_01bd2fa0 + param_3)),
          (int)param_1 <= (int)param_2)) {
    do {
      param_1 = param_1 + 1;
      *puVar3 = *puVar3 >> (DAT_01b4d720 & 0x1f) & _DAT_01b4d730;
      puVar3 = puVar3 + 1;
    } while ((int)param_1 <= (int)param_2);
    return;
  }
  return;
}
