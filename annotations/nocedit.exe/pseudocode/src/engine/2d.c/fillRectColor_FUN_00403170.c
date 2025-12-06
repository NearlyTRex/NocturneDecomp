// Name: engine_2d.c_fillRectColor_FUN_00403170
// Address: 00403170
// Address Range: [[00403170, 004031ff]]
// Convention: __cdecl
// Signature: void engine_2d.c_fillRectColor_FUN_00403170(int x1, int y1, int x2, int y2, int color)

#include "nocturne.h"

void __cdecl engine_2d_c_fillRectColor_FUN_00403170(int x1,int y1,int x2,int y2,int color)

{
  int iVar1;
  
  iVar1 = g_ActiveRenderColor;
  if (x1 < g_ClipLeft) {
    x1 = g_ClipLeft;
  }
  if (g_ClipRight < x2) {
    x2 = g_ClipRight;
  }
  if (x1 <= x2) {
    if (y1 < g_ClipTop) {
      y1 = g_ClipTop;
    }
    if (g_ClipBottom < y2) {
      y2 = g_ClipBottom;
    }
    g_ActiveRenderColor = color;
    if (y1 <= y2) {
      for (; y1 <= y2; y1 = y1 + 1) {
        engine_2d_c_drawHLine_FUN_00402ee0(x1,y1,x2);
      }
    }
  }
  g_ActiveRenderColor = iVar1;
  return;
}
