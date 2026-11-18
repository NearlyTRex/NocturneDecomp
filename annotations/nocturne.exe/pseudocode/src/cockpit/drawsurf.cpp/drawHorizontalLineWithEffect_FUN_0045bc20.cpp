// Name: cockpit_drawsurf.cpp_drawHorizontalLineWithEffect_FUN_0045bc20
// Address: 0045bc20
// Address Range: [[0045bc20, 0045bd42]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_drawHorizontalLineWithEffect_FUN_0045bc20(int start_x,int end_x,int y)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_drawHorizontalLineWithEffect_FUN_0045bc20(int start_x,int end_x,int y)

{
  byte *pbVar1;
  uint *puVar2;
  uint *puVar3;
  
  if (g_BitsPerPixel == 8) {
    pbVar1 = (byte *)((int)g_ScreenBufferArray[y] + start_x);
    for (; start_x <= end_x; start_x = start_x + 1) {
      *pbVar1 = g_LightTable[8][*pbVar1];
      pbVar1 = pbVar1 + 1;
    }
  }
  else if (g_BitsPerPixel == 0x10) {
    puVar2 = (uint *)(start_x * 2 + (int)g_ScreenBufferArray[y]);
    puVar3 = puVar2;
    if ((start_x & 1U) != 0) {
      puVar3 = (uint *)((int)puVar2 + 2);
      start_x = start_x + 1;
      *(ushort *)puVar2 =
           (ushort)*puVar2 >> ((byte)g_OriginalColorValue & 0x1f) & (ushort)g_PackedPixelColor;
    }
    for (; start_x < end_x; start_x = start_x + 2) {
      *puVar3 = *puVar3 >> ((byte)g_OriginalColorValue & 0x1f) & g_DuplicatedPixelColor;
      puVar3 = puVar3 + 1;
    }
    if (start_x == end_x) {
      *(ushort *)puVar3 =
           (ushort)*puVar3 >> ((byte)g_OriginalColorValue & 0x1f) & (ushort)g_PackedPixelColor;
      return;
    }
  }
  else if ((g_BitsPerPixel == 0x20) &&
          (puVar3 = (uint *)(start_x * 4 + (int)g_ScreenBufferArray[y]), start_x <= end_x)) {
    do {
      start_x = start_x + 1;
      *puVar3 = *puVar3 >> ((byte)g_OriginalColorValue & 0x1f) & g_PackedPixelColor;
      puVar3 = puVar3 + 1;
    } while (start_x <= end_x);
    return;
  }
  return;
}
