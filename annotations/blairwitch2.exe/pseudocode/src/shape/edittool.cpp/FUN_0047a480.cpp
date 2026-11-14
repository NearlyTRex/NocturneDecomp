// Name: shape_edittool.cpp_FUN_0047a480
// Address: 0047a480
// Address Range: [[0047a480, 0047a4e5]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_0047a480(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_0047a480(int param_1,int param_2,int param_3)

{
  if (((((-1 < param_1) && (-1 < param_2)) && (param_1 < DAT_006141b8)) && (param_2 < DAT_006141bc))
     && ((param_3 == 0 ||
         (((_DAT_01c35e48 <= param_1 && (param_1 < _DAT_01c35e50)) &&
          ((_DAT_01c35e4c <= param_2 && (param_2 < _DAT_01c35e54)))))))) {
    if (_DAT_01c25f84 == 0) {
      engine_2d_c_plotPixel_FUN_00401130(param_1,param_2);
      return;
    }
    engine_mini3d_cpp_drawPixel_FUN_004f8fe0(param_1,param_2);
  }
  return;
}
