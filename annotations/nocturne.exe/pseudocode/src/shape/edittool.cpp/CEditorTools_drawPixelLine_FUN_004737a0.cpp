// Name: shape_edittool.cpp_CEditorTools_drawPixelLine_FUN_004737a0
// Address: 004737a0
// Address Range: [[004737a0, 004739d4]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_drawPixelLine_FUN_004737a0(CEditorTools *this_ptr,int start_x,int start_y,int length)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_drawPixelLine_FUN_004737a0(CEditorTools *this_ptr,int start_x,int start_y,int length)

{
  int y;
  int x;
  int x_00;
  int y_00;
  
  if (((((-1 < start_x) && (-1 < start_y)) && (start_x < DAT_005b761c)) &&
      ((start_y < DAT_005b7620 && (_DAT_01c00c58 <= start_x)))) &&
     ((start_x < _DAT_01c00c60 && ((_DAT_01c00c5c <= start_y && (start_y < _DAT_01c00c64)))))) {
    engine_2d_c_plotPixel_FUN_00401530(start_x,start_y);
  }
  y_00 = start_y + -length;
  x = -length + start_x;
  x_00 = length + start_x;
  y = length + start_y;
  while (start_y < y) {
    if ((((-1 < x) && (-1 < y_00)) && (x < DAT_005b761c)) &&
       (((y_00 < DAT_005b7620 && (_DAT_01c00c58 <= x)) &&
        ((x < _DAT_01c00c60 && ((_DAT_01c00c5c <= y_00 && (y_00 < _DAT_01c00c64)))))))) {
      engine_2d_c_plotPixel_FUN_00401530(x,y_00);
    }
    if (((((-1 < x_00) && (-1 < y_00)) && (x_00 < DAT_005b761c)) &&
        ((y_00 < DAT_005b7620 && (_DAT_01c00c58 <= x_00)))) &&
       ((x_00 < _DAT_01c00c60 && ((_DAT_01c00c5c <= y_00 && (y_00 < _DAT_01c00c64)))))) {
      engine_2d_c_plotPixel_FUN_00401530(x_00,y_00);
    }
    if ((((((-1 < x) && (-1 < y)) && (x < DAT_005b761c)) &&
         ((y < DAT_005b7620 && (_DAT_01c00c58 <= x)))) && (x < _DAT_01c00c60)) &&
       ((_DAT_01c00c5c <= y && (y < _DAT_01c00c64)))) {
      engine_2d_c_plotPixel_FUN_00401530(x,y);
    }
    if ((((x_00 < 0) || (y < 0)) || (DAT_005b761c <= x_00)) ||
       (((DAT_005b7620 <= y || (x_00 < _DAT_01c00c58)) ||
        ((_DAT_01c00c60 <= x_00 || ((y < _DAT_01c00c5c || (_DAT_01c00c64 <= y)))))))) {
      x = x + 1;
      x_00 = x_00 + -1;
      y = y + -1;
      y_00 = y_00 + 1;
    }
    else {
      engine_2d_c_plotPixel_FUN_00401530(x_00,y);
      x = x + 1;
      x_00 = x_00 + -1;
      y = y + -1;
      y_00 = y_00 + 1;
    }
  }
  return;
}
