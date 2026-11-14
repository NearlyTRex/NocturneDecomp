// Name: shape_edittool.cpp_FUN_0047b9b0
// Address: 0047b9b0
// Address Range: [[0047b9b0, 0047b9dc]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_0047b9b0(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_0047b9b0(int param_1,int param_2,int param_3)

{
  if (_DAT_01c5baec != 0) {
    engine_mini3d_cpp_drawVLine_FUN_004f3ad0(param_1,param_2,param_3);
    return;
  }
  engine_2d_c_drawVLine_FUN_00403040(param_1,param_2,param_3);
  return;
}
