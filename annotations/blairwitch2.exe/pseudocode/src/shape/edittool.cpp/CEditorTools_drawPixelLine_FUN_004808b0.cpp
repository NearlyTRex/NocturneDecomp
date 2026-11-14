// Name: shape_edittool.cpp_CEditorTools_drawPixelLine_FUN_004808b0
// Address: 004808b0
// Address Range: [[004808b0, 00480b6a]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_drawPixelLine_FUN_004808b0(CEditorTools *this_ptr,int start_x,int start_y,int length)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_drawPixelLine_FUN_004808b0(CEditorTools *this_ptr,int start_x,int start_y,int length)

{
  int y;
  int x;
  int x_00;
  int y_00;
  
  if (((((-1 < start_x) && (-1 < start_y)) && (start_x < DAT_006141b8)) &&
      ((start_y < DAT_006141bc && (_DAT_01c35e48 <= start_x)))) &&
     ((start_x < _DAT_01c35e50 && ((_DAT_01c35e4c <= start_y && (start_y < _DAT_01c35e54)))))) {
    if (_DAT_01c25f84 == 0) {
      engine_2d_c_plotPixel_FUN_00401130(start_x,start_y);
    }
    else {
      engine_mini3d_cpp_drawPixel_FUN_004f8fe0(start_x,start_y);
    }
  }
  x = length + start_x;
  y_00 = start_y + -length;
  x_00 = -length + start_x;
  y = length + start_y;
  while (start_y < y) {
    if ((((-1 < x_00) && (-1 < y_00)) && (x_00 < DAT_006141b8)) &&
       (((y_00 < DAT_006141bc && (_DAT_01c35e48 <= x_00)) &&
        ((x_00 < _DAT_01c35e50 && ((_DAT_01c35e4c <= y_00 && (y_00 < _DAT_01c35e54)))))))) {
      if (_DAT_01c25f84 == 0) {
        engine_2d_c_plotPixel_FUN_00401130(x_00,y_00);
      }
      else {
        engine_mini3d_cpp_drawPixel_FUN_004f8fe0(x_00,y_00);
      }
    }
    if (((((-1 < x) && (-1 < y_00)) && (x < DAT_006141b8)) &&
        ((y_00 < DAT_006141bc && (_DAT_01c35e48 <= x)))) &&
       ((x < _DAT_01c35e50 && ((_DAT_01c35e4c <= y_00 && (y_00 < _DAT_01c35e54)))))) {
      if (_DAT_01c25f84 == 0) {
        engine_2d_c_plotPixel_FUN_00401130(x,y_00);
      }
      else {
        engine_mini3d_cpp_drawPixel_FUN_004f8fe0(x,y_00);
      }
    }
    if ((((((-1 < x_00) && (-1 < y)) && (x_00 < DAT_006141b8)) &&
         ((y < DAT_006141bc && (_DAT_01c35e48 <= x_00)))) && (x_00 < _DAT_01c35e50)) &&
       ((_DAT_01c35e4c <= y && (y < _DAT_01c35e54)))) {
      if (_DAT_01c25f84 == 0) {
        engine_2d_c_plotPixel_FUN_00401130(x_00,y);
      }
      else {
        engine_mini3d_cpp_drawPixel_FUN_004f8fe0(x_00,y);
      }
    }
    if ((((x < 0) || (y < 0)) || (DAT_006141b8 <= x)) ||
       (((DAT_006141bc <= y || (x < _DAT_01c35e48)) ||
        ((_DAT_01c35e50 <= x || ((y < _DAT_01c35e4c || (_DAT_01c35e54 <= y)))))))) {
      x_00 = x_00 + 1;
      x = x + -1;
      y = y + -1;
      y_00 = y_00 + 1;
    }
    else if (_DAT_01c25f84 == 0) {
      engine_2d_c_plotPixel_FUN_00401130(x,y);
      x_00 = x_00 + 1;
      x = x + -1;
      y = y + -1;
      y_00 = y_00 + 1;
    }
    else {
      engine_mini3d_cpp_drawPixel_FUN_004f8fe0(x,y);
      x_00 = x_00 + 1;
      x = x + -1;
      y = y + -1;
      y_00 = y_00 + 1;
    }
  }
  return;
}
