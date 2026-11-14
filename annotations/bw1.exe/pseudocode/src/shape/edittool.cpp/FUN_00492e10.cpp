// Name: shape_edittool.cpp_FUN_00492e10
// Address: 00492e10
// Address Range: [[00492e10, 00492e3c]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_00492e10(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_00492e10(int param_1,int param_2,int param_3)

{
  if (_DAT_01c3f544 != 0) {
    engine_mini3d_cpp_drawVLine_FUN_00518300(param_1,param_2,param_3);
    return;
  }
  engine_2d_c_drawVLine_FUN_00403040(param_1,param_2,param_3);
  return;
}
