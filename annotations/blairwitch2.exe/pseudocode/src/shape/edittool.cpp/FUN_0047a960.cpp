// Name: shape_edittool.cpp_FUN_0047a960
// Address: 0047a960
// Address Range: [[0047a960, 0047a98c]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_0047a960(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_0047a960(int param_1,int param_2,int param_3)

{
  if (_DAT_01c25f84 != 0) {
    engine_mini3d_cpp_drawVLine_FUN_004f93b0(param_1,param_2,param_3);
    return;
  }
  engine_2d_c_drawVLine_FUN_00403040(param_1,param_2,param_3);
  return;
}
