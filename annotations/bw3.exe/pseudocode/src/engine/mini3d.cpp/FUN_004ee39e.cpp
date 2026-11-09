// Name: engine_mini3d.cpp_FUN_004ee39e
// Address: 004ee39e
// Address Range: [[004ee39e, 004ee42f]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004ee39e(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004ee39e(uint param_1,int param_2,uint param_3,int param_4)

{
  _DAT_01ed3198 = _DAT_01ed3198 + param_4;
  _DAT_01d76c34 = _DAT_01d76c34 + param_2;
  engine_mini3d_cpp_FUN_004edcc0();
  engine_mini3d_cpp_FUN_004f2430();
  if ((_DAT_02cf60c4 != (code *)0x0) && (_DAT_01c6cee8 != 0)) {
    (*_DAT_02cf60c4)(param_1,param_2,param_3,param_4,_DAT_01c6e2b4);
    return;
  }
  _DAT_01d71de0 = "..\\engine\\mini3d.cpp";
  _DAT_01d71de4 = 0x7a9;
  core_main_c_FUN_004e4330("CMini3D::polyList - Software does not suport multitexture");
  return;
}
