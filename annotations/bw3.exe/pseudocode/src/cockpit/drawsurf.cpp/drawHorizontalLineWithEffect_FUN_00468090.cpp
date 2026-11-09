// Name: cockpit_drawsurf.cpp_drawHorizontalLineWithEffect_FUN_00468090
// Address: 00468090
// Address Range: [[00468090, 00468180]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_drawHorizontalLineWithEffect_FUN_00468090(int start_x,int end_x,int y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_drawsurf_cpp_drawHorizontalLineWithEffect_FUN_00468090(int start_x,int end_x,int y)

{
  uint *puVar1;
  uint *puVar2;
  
  if (DAT_005fba20 != 8) {
    if (DAT_005fba20 == 0x10) {
      puVar1 = (uint *)(*(int *)(&DAT_01c5faec + y * 4) + start_x * 2);
      puVar2 = puVar1;
      if ((start_x & 1U) != 0) {
        puVar2 = (uint *)((int)puVar1 + 2);
        start_x = start_x + 1;
        *(ushort *)puVar1 = (ushort)*puVar1 >> (DAT_01bdd7cc & 0x1f) & (ushort)_DAT_01bdd7dc;
      }
      for (; start_x < end_x; start_x = start_x + 2) {
        *puVar2 = *puVar2 >> (DAT_01bdd7cc & 0x1f) & _DAT_01bdd7e0;
        puVar2 = puVar2 + 1;
      }
      if (start_x == end_x) {
        *(ushort *)puVar2 = (ushort)*puVar2 >> (DAT_01bdd7cc & 0x1f) & (ushort)_DAT_01bdd7dc;
        return;
      }
    }
    else if ((DAT_005fba20 == 0x20) &&
            (puVar2 = (uint *)(start_x * 4 + *(int *)(&DAT_01c5faec + y * 4)), start_x <= end_x)) {
      do {
        start_x = start_x + 1;
        *puVar2 = *puVar2 >> (DAT_01bdd7cc & 0x1f) & _DAT_01bdd7dc;
        puVar2 = puVar2 + 1;
      } while (start_x <= end_x);
      return;
    }
  }
  return;
}
