// Name: cockpit_drawsurf.cpp_drawHorizontalLineWithEffect_FUN_0047e9d0
// Address: 0047e9d0
// Address Range: [[0047e9d0, 0047eac0]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_drawHorizontalLineWithEffect_FUN_0047e9d0(int start_x,int end_x,int y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_drawsurf_cpp_drawHorizontalLineWithEffect_FUN_0047e9d0(int start_x,int end_x,int y)

{
  uint *puVar1;
  uint *puVar2;
  
  if (DAT_0061b4a0 != 8) {
    if (DAT_0061b4a0 == 0x10) {
      puVar1 = (uint *)(*(int *)(&DAT_01c4354c + y * 4) + start_x * 2);
      puVar2 = puVar1;
      if ((start_x & 1U) != 0) {
        puVar2 = (uint *)((int)puVar1 + 2);
        start_x = start_x + 1;
        *(ushort *)puVar1 = (ushort)*puVar1 >> (DAT_01bc11f4 & 0x1f) & (ushort)_DAT_01bc1204;
      }
      for (; start_x < end_x; start_x = start_x + 2) {
        *puVar2 = *puVar2 >> (DAT_01bc11f4 & 0x1f) & _DAT_01bc1208;
        puVar2 = puVar2 + 1;
      }
      if (start_x == end_x) {
        *(ushort *)puVar2 = (ushort)*puVar2 >> (DAT_01bc11f4 & 0x1f) & (ushort)_DAT_01bc1204;
        return;
      }
    }
    else if ((DAT_0061b4a0 == 0x20) &&
            (puVar2 = (uint *)(start_x * 4 + *(int *)(&DAT_01c4354c + y * 4)), start_x <= end_x)) {
      do {
        start_x = start_x + 1;
        *puVar2 = *puVar2 >> (DAT_01bc11f4 & 0x1f) & _DAT_01bc1204;
        puVar2 = puVar2 + 1;
      } while (start_x <= end_x);
      return;
    }
  }
  return;
}
