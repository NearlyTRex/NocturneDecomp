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
  
  uVar1 = _DAT_01c6b5c0;
  if (x1 < _DAT_01c6b5a8) {
    x1 = _DAT_01c6b5a8;
  }
  if (_DAT_01c6b5b0 < x2) {
    x2 = _DAT_01c6b5b0;
  }
  if (x1 <= x2) {
    if (y1 < _DAT_01c6b5ac) {
      y1 = _DAT_01c6b5ac;
    }
    if (_DAT_01c6b5b4 < y2) {
      y2 = _DAT_01c6b5b4;
    }
    _DAT_01c6b5c0 = color;
    if (y1 <= y2) {
      for (; y1 <= y2; y1 = y1 + 1) {
        engine_2d_c_drawHLine_FUN_00402f30(x1,y1,x2);
      }
    }
  }
  _DAT_01c6b5c0 = uVar1;
  return;
}
