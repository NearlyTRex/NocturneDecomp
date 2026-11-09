// Name: engine_2d.c_fillRectColor_FUN_004031c0
// Address: 004031c0
// Address Range: [[004031c0, 0040324f]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_fillRectColor_FUN_004031c0(int x1,int y1,int x2,int y2,int color)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_2d_c_fillRectColor_FUN_004031c0(int x1,int y1,int x2,int y2,int color)

{
  uint uVar1;
  
  uVar1 = _DAT_01c4f020;
  if (x1 < _DAT_01c4f008) {
    x1 = _DAT_01c4f008;
  }
  if (_DAT_01c4f010 < x2) {
    x2 = _DAT_01c4f010;
  }
  if (x1 <= x2) {
    if (y1 < _DAT_01c4f00c) {
      y1 = _DAT_01c4f00c;
    }
    if (_DAT_01c4f014 < y2) {
      y2 = _DAT_01c4f014;
    }
    _DAT_01c4f020 = color;
    if (y1 <= y2) {
      for (; y1 <= y2; y1 = y1 + 1) {
        engine_2d_c_drawHLine_FUN_00402f30(x1,y1,x2);
      }
    }
  }
  _DAT_01c4f020 = uVar1;
  return;
}
