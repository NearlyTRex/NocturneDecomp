// Name: shape_edittool.cpp_FUN_00498f10
// Address: 00498f10
// Address Range: [[00498f10, 004991ca]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_00498f10(undefined4 param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_00498f10(uint param_1,int param_2,int param_3,int param_4)

{
  int x;
  int y;
  
  if (((((-1 < param_2) && (-1 < param_3)) && (param_2 < DAT_0061b498)) &&
      ((param_3 < DAT_0061b49c && (_DAT_01c4f008 <= param_2)))) &&
     ((param_2 < _DAT_01c4f010 && ((_DAT_01c4f00c <= param_3 && (param_3 < _DAT_01c4f014)))))) {
    if (_DAT_01c3f544 == 0) {
      engine_2d_c_plotPixel_FUN_00401130(param_2,param_3);
    }
    else {
      engine_mini3d_cpp_drawPixel_FUN_00517f10(param_2,param_3);
    }
  }
  x = param_4 + param_2;
  y = param_3 + -param_4;
  param_2 = -param_4 + param_2;
  param_4 = param_4 + param_3;
  while (param_3 < param_4) {
    if ((((-1 < param_2) && (-1 < y)) && (param_2 < DAT_0061b498)) &&
       (((y < DAT_0061b49c && (_DAT_01c4f008 <= param_2)) &&
        ((param_2 < _DAT_01c4f010 && ((_DAT_01c4f00c <= y && (y < _DAT_01c4f014)))))))) {
      if (_DAT_01c3f544 == 0) {
        engine_2d_c_plotPixel_FUN_00401130(param_2,y);
      }
      else {
        engine_mini3d_cpp_drawPixel_FUN_00517f10(param_2,y);
      }
    }
    if (((((-1 < x) && (-1 < y)) && (x < DAT_0061b498)) &&
        ((y < DAT_0061b49c && (_DAT_01c4f008 <= x)))) &&
       ((x < _DAT_01c4f010 && ((_DAT_01c4f00c <= y && (y < _DAT_01c4f014)))))) {
      if (_DAT_01c3f544 == 0) {
        engine_2d_c_plotPixel_FUN_00401130(x,y);
      }
      else {
        engine_mini3d_cpp_drawPixel_FUN_00517f10(x,y);
      }
    }
    if ((((((-1 < param_2) && (-1 < param_4)) && (param_2 < DAT_0061b498)) &&
         ((param_4 < DAT_0061b49c && (_DAT_01c4f008 <= param_2)))) && (param_2 < _DAT_01c4f010)) &&
       ((_DAT_01c4f00c <= param_4 && (param_4 < _DAT_01c4f014)))) {
      if (_DAT_01c3f544 == 0) {
        engine_2d_c_plotPixel_FUN_00401130(param_2,param_4);
      }
      else {
        engine_mini3d_cpp_drawPixel_FUN_00517f10(param_2,param_4);
      }
    }
    if ((((x < 0) || (param_4 < 0)) || (DAT_0061b498 <= x)) ||
       (((DAT_0061b49c <= param_4 || (x < _DAT_01c4f008)) ||
        ((_DAT_01c4f010 <= x || ((param_4 < _DAT_01c4f00c || (_DAT_01c4f014 <= param_4)))))))) {
      param_2 = param_2 + 1;
      x = x + -1;
      param_4 = param_4 + -1;
      y = y + 1;
    }
    else if (_DAT_01c3f544 == 0) {
      engine_2d_c_plotPixel_FUN_00401130(x,param_4);
      param_2 = param_2 + 1;
      x = x + -1;
      param_4 = param_4 + -1;
      y = y + 1;
    }
    else {
      engine_mini3d_cpp_drawPixel_FUN_00517f10(x,param_4);
      param_2 = param_2 + 1;
      x = x + -1;
      param_4 = param_4 + -1;
      y = y + 1;
    }
  }
  return;
}
