// Name: engine_2d.c_fillRectColor_FUN_004031c0
// Address: 004031c0
// Address Range: [[004031c0, 0040324f]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_fillRectColor_FUN_004031c0(int x1,int y1,int x2,int y2,int color)

#include "nocturne.h"

void __cdecl engine_2d_c_fillRectColor_FUN_004031c0(int x1,int y1,int x2,int y2,int color)

{
  int iVar1;
  
  iVar1 = g_INT_01c4f020;
  if (x1 < g_INT_01c4f008) {
    x1 = g_INT_01c4f008;
  }
  if (g_ClipRight < x2) {
    x2 = g_ClipRight;
  }
  if (x1 <= x2) {
    if (y1 < g_INT_01c4f00c) {
      y1 = g_INT_01c4f00c;
    }
    if (g_INT_01c4f014 < y2) {
      y2 = g_INT_01c4f014;
    }
    g_INT_01c4f020 = color;
    if (y1 <= y2) {
      for (; y1 <= y2; y1 = y1 + 1) {
        engine_2d_c_drawHLine_FUN_00402f30(x1,y1,x2);
      }
    }
  }
  g_INT_01c4f020 = iVar1;
  return;
}
