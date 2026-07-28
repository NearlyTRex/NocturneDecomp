// Name: engine_2d.c_fillRectColor_FUN_00403e60
// Address: 00403e60
// Address Range: [[00403e60, 00403eef]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_fillRectColor_FUN_00403e60(int x1,int y1,int x2,int y2,int color)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_2d_c_fillRectColor_FUN_00403e60(int x1,int y1,int x2,int y2,int color)

{
  uint uVar1;
  
  uVar1 = _DAT_01c00c70;
  if (x1 < _DAT_01c00c58) {
    x1 = _DAT_01c00c58;
  }
  if (_DAT_01c00c60 < x2) {
    x2 = _DAT_01c00c60;
  }
  if (x1 <= x2) {
    if (y1 < _DAT_01c00c5c) {
      y1 = _DAT_01c00c5c;
    }
    if (_DAT_01c00c64 < y2) {
      y2 = _DAT_01c00c64;
    }
    _DAT_01c00c70 = color;
    if (y1 <= y2) {
      for (; y1 <= y2; y1 = y1 + 1) {
        engine_2d_c_drawHLine_FUN_00403bd0(x1,y1,x2);
      }
    }
  }
  _DAT_01c00c70 = uVar1;
  return;
}
