// Name: cockpit_drawsurf.cpp_drawHorizontalLineWithEffect_FUN_004664c0
// Address: 004664c0
// Address Range: [[004664c0, 004665b0]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_drawHorizontalLineWithEffect_FUN_004664c0(int start_x,int end_x,int y)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_drawHorizontalLineWithEffect_FUN_004664c0(int start_x,int end_x,int y)

{
  uint *puVar1;
  uint *puVar2;
  
  if (g_INT_006141c0 != 8) {
    if (g_INT_006141c0 == 0x10) {
      puVar1 = (uint *)(g_ScreenBufferArray[y] + start_x * 2);
      puVar2 = puVar1;
      if ((start_x & 1U) != 0) {
        puVar2 = (uint *)((int)puVar1 + 2);
        start_x = start_x + 1;
        *(ushort *)puVar1 =
             (ushort)*puVar1 >> ((byte)g_OriginalColorValue & 0x1f) & (ushort)g_PackedPixelColor;
      }
      for (; start_x < end_x; start_x = start_x + 2) {
        *puVar2 = *puVar2 >> ((byte)g_OriginalColorValue & 0x1f) & g_DuplicatedPixelColor;
        puVar2 = puVar2 + 1;
      }
      if (start_x == end_x) {
        *(ushort *)puVar2 =
             (ushort)*puVar2 >> ((byte)g_OriginalColorValue & 0x1f) & (ushort)g_PackedPixelColor;
        return;
      }
    }
    else if ((g_INT_006141c0 == 0x20) &&
            (puVar2 = (uint *)(g_ScreenBufferArray[y] + start_x * 4), start_x <= end_x)) {
      do {
        start_x = start_x + 1;
        *puVar2 = *puVar2 >> ((byte)g_OriginalColorValue & 0x1f) & g_PackedPixelColor;
        puVar2 = puVar2 + 1;
      } while (start_x <= end_x);
      return;
    }
  }
  return;
}
