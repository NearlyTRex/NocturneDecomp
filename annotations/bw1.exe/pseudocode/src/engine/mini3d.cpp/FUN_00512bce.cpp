// Name: engine_mini3d.cpp_FUN_00512bce
// Address: 00512bce
// Address Range: [[00512bce, 00512c5f]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_00512bce(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_00512bce(uint param_1,int param_2,uint param_3,int param_4)

{
  _DAT_01e7dac8 = _DAT_01e7dac8 + param_4;
  _DAT_01d224b4 = _DAT_01d224b4 + param_2;
  engine_mini3d_cpp_FUN_005124f0();
  engine_mini3d_cpp_FUN_00516c60();
  if ((_DAT_02c83468 != (code *)0x0) && (_DAT_01c50948 != 0)) {
    (*_DAT_02c83468)(param_1,param_2,param_3,param_4,_DAT_01c51d14);
    return;
  }
  _DAT_01d1d400 = "..\\engine\\mini3d.cpp";
  _DAT_01d1d404 = 0x7a9;
  core_main_c_FUN_005030e0("CMini3D::polyList - Software does not suport multitexture");
  return;
}
