// Name: engine_mini3d.cpp_FUN_004f3e60
// Address: 004f3e60
// Address Range: [[004f3e60, 004f3eef]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004f3e60(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004f3e60(uint param_1,int param_2,uint param_3,int param_4)

{
  _DAT_01e61b58 = _DAT_01e61b58 + param_4;
  _DAT_01d09854 = _DAT_01d09854 + param_2;
  engine_mini3d_cpp_FUN_004f3740();
  engine_mini3d_cpp_FUN_004f7da0();
  if ((_DAT_0264bc98 != (code *)0x0) && (_DAT_01c37788 != 0)) {
    (*_DAT_0264bc98)(param_1,param_2,param_3,param_4,_DAT_01c38b54);
    return;
  }
  _DAT_01d046a0 = "..\\engine\\mini3d.cpp";
  _DAT_01d046a4 = 0x7ca;
  core_main_c_FUN_004e4500("CMini3D::polyList - Software does not suport multitexture");
  return;
}
