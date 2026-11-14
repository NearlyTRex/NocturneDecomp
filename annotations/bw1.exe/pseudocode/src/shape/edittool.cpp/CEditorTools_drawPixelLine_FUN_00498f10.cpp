// Name: shape_edittool.cpp_CEditorTools_drawPixelLine_FUN_00498f10
// Address: 00498f10
// Address Range: [[00498f10, 004991ca]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_drawPixelLine_FUN_00498f10(CEditorTools *this_ptr,int start_x,int start_y,int length)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_drawPixelLine_FUN_00498f10(CEditorTools *this_ptr,int start_x,int start_y,int length)

{
  int y;
  int x;
  int x_00;
  int y_00;
  
  if (((((-1 < start_x) && (-1 < start_y)) && (start_x < DAT_0061b498)) &&
      ((start_y < DAT_0061b49c && (_DAT_01c4f008 <= start_x)))) &&
     ((start_x < _DAT_01c4f010 && ((_DAT_01c4f00c <= start_y && (start_y < _DAT_01c4f014)))))) {
    if (_DAT_01c3f544 == 0) {
      engine_2d_c_plotPixel_FUN_00401130(start_x,start_y);
    }
    else {
      engine_mini3d_cpp_drawPixel_FUN_00517f10(start_x,start_y);
    }
  }
  x = length + start_x;
  y_00 = start_y + -length;
  x_00 = -length + start_x;
  y = length + start_y;
  while (start_y < y) {
    if ((((-1 < x_00) && (-1 < y_00)) && (x_00 < DAT_0061b498)) &&
       (((y_00 < DAT_0061b49c && (_DAT_01c4f008 <= x_00)) &&
        ((x_00 < _DAT_01c4f010 && ((_DAT_01c4f00c <= y_00 && (y_00 < _DAT_01c4f014)))))))) {
      if (_DAT_01c3f544 == 0) {
        engine_2d_c_plotPixel_FUN_00401130(x_00,y_00);
      }
      else {
        engine_mini3d_cpp_drawPixel_FUN_00517f10(x_00,y_00);
      }
    }
    if (((((-1 < x) && (-1 < y_00)) && (x < DAT_0061b498)) &&
        ((y_00 < DAT_0061b49c && (_DAT_01c4f008 <= x)))) &&
       ((x < _DAT_01c4f010 && ((_DAT_01c4f00c <= y_00 && (y_00 < _DAT_01c4f014)))))) {
      if (_DAT_01c3f544 == 0) {
        engine_2d_c_plotPixel_FUN_00401130(x,y_00);
      }
      else {
        engine_mini3d_cpp_drawPixel_FUN_00517f10(x,y_00);
      }
    }
    if ((((((-1 < x_00) && (-1 < y)) && (x_00 < DAT_0061b498)) &&
         ((y < DAT_0061b49c && (_DAT_01c4f008 <= x_00)))) && (x_00 < _DAT_01c4f010)) &&
       ((_DAT_01c4f00c <= y && (y < _DAT_01c4f014)))) {
      if (_DAT_01c3f544 == 0) {
        engine_2d_c_plotPixel_FUN_00401130(x_00,y);
      }
      else {
        engine_mini3d_cpp_drawPixel_FUN_00517f10(x_00,y);
      }
    }
    if ((((x < 0) || (y < 0)) || (DAT_0061b498 <= x)) ||
       (((DAT_0061b49c <= y || (x < _DAT_01c4f008)) ||
        ((_DAT_01c4f010 <= x || ((y < _DAT_01c4f00c || (_DAT_01c4f014 <= y)))))))) {
      x_00 = x_00 + 1;
      x = x + -1;
      y = y + -1;
      y_00 = y_00 + 1;
    }
    else if (_DAT_01c3f544 == 0) {
      engine_2d_c_plotPixel_FUN_00401130(x,y);
      x_00 = x_00 + 1;
      x = x + -1;
      y = y + -1;
      y_00 = y_00 + 1;
    }
    else {
      engine_mini3d_cpp_drawPixel_FUN_00517f10(x,y);
      x_00 = x_00 + 1;
      x = x + -1;
      y = y + -1;
      y_00 = y_00 + 1;
    }
  }
  return;
}
