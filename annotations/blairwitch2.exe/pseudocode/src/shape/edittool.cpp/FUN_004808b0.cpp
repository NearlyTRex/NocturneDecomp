// Name: shape_edittool.cpp_FUN_004808b0
// Address: 004808b0
// Address Range: [[004808b0, 00480b6a]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_004808b0(undefined4 param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_004808b0(uint param_1,int param_2,int param_3,int param_4)

{
  int x;
  int y;
  
  if (((((-1 < param_2) && (-1 < param_3)) && (param_2 < DAT_006141b8)) &&
      ((param_3 < DAT_006141bc && (_DAT_01c35e48 <= param_2)))) &&
     ((param_2 < _DAT_01c35e50 && ((_DAT_01c35e4c <= param_3 && (param_3 < _DAT_01c35e54)))))) {
    if (_DAT_01c25f84 == 0) {
      engine_2d_c_plotPixel_FUN_00401130(param_2,param_3);
    }
    else {
      engine_mini3d_cpp_FUN_004f8fe0(param_2,param_3);
    }
  }
  x = param_4 + param_2;
  y = param_3 + -param_4;
  param_2 = -param_4 + param_2;
  param_4 = param_4 + param_3;
  while (param_3 < param_4) {
    if ((((-1 < param_2) && (-1 < y)) && (param_2 < DAT_006141b8)) &&
       (((y < DAT_006141bc && (_DAT_01c35e48 <= param_2)) &&
        ((param_2 < _DAT_01c35e50 && ((_DAT_01c35e4c <= y && (y < _DAT_01c35e54)))))))) {
      if (_DAT_01c25f84 == 0) {
        engine_2d_c_plotPixel_FUN_00401130(param_2,y);
      }
      else {
        engine_mini3d_cpp_FUN_004f8fe0(param_2,y);
      }
    }
    if (((((-1 < x) && (-1 < y)) && (x < DAT_006141b8)) &&
        ((y < DAT_006141bc && (_DAT_01c35e48 <= x)))) &&
       ((x < _DAT_01c35e50 && ((_DAT_01c35e4c <= y && (y < _DAT_01c35e54)))))) {
      if (_DAT_01c25f84 == 0) {
        engine_2d_c_plotPixel_FUN_00401130(x,y);
      }
      else {
        engine_mini3d_cpp_FUN_004f8fe0(x,y);
      }
    }
    if ((((((-1 < param_2) && (-1 < param_4)) && (param_2 < DAT_006141b8)) &&
         ((param_4 < DAT_006141bc && (_DAT_01c35e48 <= param_2)))) && (param_2 < _DAT_01c35e50)) &&
       ((_DAT_01c35e4c <= param_4 && (param_4 < _DAT_01c35e54)))) {
      if (_DAT_01c25f84 == 0) {
        engine_2d_c_plotPixel_FUN_00401130(param_2,param_4);
      }
      else {
        engine_mini3d_cpp_FUN_004f8fe0(param_2,param_4);
      }
    }
    if ((((x < 0) || (param_4 < 0)) || (DAT_006141b8 <= x)) ||
       (((DAT_006141bc <= param_4 || (x < _DAT_01c35e48)) ||
        ((_DAT_01c35e50 <= x || ((param_4 < _DAT_01c35e4c || (_DAT_01c35e54 <= param_4)))))))) {
      param_2 = param_2 + 1;
      x = x + -1;
      param_4 = param_4 + -1;
      y = y + 1;
    }
    else if (_DAT_01c25f84 == 0) {
      engine_2d_c_plotPixel_FUN_00401130(x,param_4);
      param_2 = param_2 + 1;
      x = x + -1;
      param_4 = param_4 + -1;
      y = y + 1;
    }
    else {
      engine_mini3d_cpp_FUN_004f8fe0(x,param_4);
      param_2 = param_2 + 1;
      x = x + -1;
      param_4 = param_4 + -1;
      y = y + 1;
    }
  }
  return;
}
