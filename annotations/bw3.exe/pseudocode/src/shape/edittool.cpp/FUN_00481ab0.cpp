// Name: shape_edittool.cpp_FUN_00481ab0
// Address: 00481ab0
// Address Range: [[00481ab0, 00481d6a]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_00481ab0(undefined4 param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_00481ab0(uint param_1,int param_2,int param_3,int param_4)

{
  int x;
  int y;
  
  if (((((-1 < param_2) && (-1 < param_3)) && (param_2 < DAT_005fba18)) &&
      ((param_3 < DAT_005fba1c && (_DAT_01c6b5a8 <= param_2)))) &&
     ((param_2 < _DAT_01c6b5b0 && ((_DAT_01c6b5ac <= param_3 && (param_3 < _DAT_01c6b5b4)))))) {
    if (_DAT_01c5baec == 0) {
      engine_2d_c_plotPixel_FUN_00401130(param_2,param_3);
    }
    else {
      engine_mini3d_cpp_FUN_004f36e0(param_2,param_3);
    }
  }
  x = param_4 + param_2;
  y = param_3 + -param_4;
  param_2 = -param_4 + param_2;
  param_4 = param_4 + param_3;
  while (param_3 < param_4) {
    if ((((-1 < param_2) && (-1 < y)) && (param_2 < DAT_005fba18)) &&
       (((y < DAT_005fba1c && (_DAT_01c6b5a8 <= param_2)) &&
        ((param_2 < _DAT_01c6b5b0 && ((_DAT_01c6b5ac <= y && (y < _DAT_01c6b5b4)))))))) {
      if (_DAT_01c5baec == 0) {
        engine_2d_c_plotPixel_FUN_00401130(param_2,y);
      }
      else {
        engine_mini3d_cpp_FUN_004f36e0(param_2,y);
      }
    }
    if (((((-1 < x) && (-1 < y)) && (x < DAT_005fba18)) &&
        ((y < DAT_005fba1c && (_DAT_01c6b5a8 <= x)))) &&
       ((x < _DAT_01c6b5b0 && ((_DAT_01c6b5ac <= y && (y < _DAT_01c6b5b4)))))) {
      if (_DAT_01c5baec == 0) {
        engine_2d_c_plotPixel_FUN_00401130(x,y);
      }
      else {
        engine_mini3d_cpp_FUN_004f36e0(x,y);
      }
    }
    if ((((((-1 < param_2) && (-1 < param_4)) && (param_2 < DAT_005fba18)) &&
         ((param_4 < DAT_005fba1c && (_DAT_01c6b5a8 <= param_2)))) && (param_2 < _DAT_01c6b5b0)) &&
       ((_DAT_01c6b5ac <= param_4 && (param_4 < _DAT_01c6b5b4)))) {
      if (_DAT_01c5baec == 0) {
        engine_2d_c_plotPixel_FUN_00401130(param_2,param_4);
      }
      else {
        engine_mini3d_cpp_FUN_004f36e0(param_2,param_4);
      }
    }
    if ((((x < 0) || (param_4 < 0)) || (DAT_005fba18 <= x)) ||
       (((DAT_005fba1c <= param_4 || (x < _DAT_01c6b5a8)) ||
        ((_DAT_01c6b5b0 <= x || ((param_4 < _DAT_01c6b5ac || (_DAT_01c6b5b4 <= param_4)))))))) {
      param_2 = param_2 + 1;
      x = x + -1;
      param_4 = param_4 + -1;
      y = y + 1;
    }
    else if (_DAT_01c5baec == 0) {
      engine_2d_c_plotPixel_FUN_00401130(x,param_4);
      param_2 = param_2 + 1;
      x = x + -1;
      param_4 = param_4 + -1;
      y = y + 1;
    }
    else {
      engine_mini3d_cpp_FUN_004f36e0(x,param_4);
      param_2 = param_2 + 1;
      x = x + -1;
      param_4 = param_4 + -1;
      y = y + 1;
    }
  }
  return;
}
