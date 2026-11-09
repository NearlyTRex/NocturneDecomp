// Name: cockpit_drawsurf.cpp_drawHorizontalLineWithEffect_FUN_004664c0
// Address: 004664c0
// Address Range: [[004664c0, 004665b0]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_drawHorizontalLineWithEffect_FUN_004664c0(int start_x,int end_x,int y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_drawsurf_cpp_drawHorizontalLineWithEffect_FUN_004664c0(int start_x,int end_x,int y)

{
  uint *puVar1;
  uint *puVar2;
  
  if (DAT_006141c0 != 8) {
    if (DAT_006141c0 == 0x10) {
      puVar1 = (uint *)(*(int *)(&DAT_01c2a38c + y * 4) + start_x * 2);
      puVar2 = puVar1;
      if ((start_x & 1U) != 0) {
        puVar2 = (uint *)((int)puVar1 + 2);
        start_x = start_x + 1;
        *(ushort *)puVar1 = (ushort)*puVar1 >> (DAT_01ba5c38 & 0x1f) & (ushort)_DAT_01ba5c48;
      }
      for (; start_x < end_x; start_x = start_x + 2) {
        *puVar2 = *puVar2 >> (DAT_01ba5c38 & 0x1f) & _DAT_01ba5c4c;
        puVar2 = puVar2 + 1;
      }
      if (start_x == end_x) {
        *(ushort *)puVar2 = (ushort)*puVar2 >> (DAT_01ba5c38 & 0x1f) & (ushort)_DAT_01ba5c48;
        return;
      }
    }
    else if ((DAT_006141c0 == 0x20) &&
            (puVar2 = (uint *)(start_x * 4 + *(int *)(&DAT_01c2a38c + y * 4)), start_x <= end_x)) {
      do {
        start_x = start_x + 1;
        *puVar2 = *puVar2 >> (DAT_01ba5c38 & 0x1f) & _DAT_01ba5c48;
        puVar2 = puVar2 + 1;
      } while (start_x <= end_x);
      return;
    }
  }
  return;
}
