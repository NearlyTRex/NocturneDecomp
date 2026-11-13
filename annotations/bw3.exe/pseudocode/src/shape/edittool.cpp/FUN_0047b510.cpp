// Name: shape_edittool.cpp_FUN_0047b510
// Address: 0047b510
// Address Range: [[0047b510, 0047b575]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_0047b510(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_0047b510(int param_1,int param_2,int param_3)

{
  if (((((-1 < param_1) && (-1 < param_2)) && (param_1 < DAT_005fba18)) && (param_2 < DAT_005fba1c))
     && ((param_3 == 0 ||
         (((_DAT_01c6b5a8 <= param_1 && (param_1 < _DAT_01c6b5b0)) &&
          ((_DAT_01c6b5ac <= param_2 && (param_2 < _DAT_01c6b5b4)))))))) {
    if (_DAT_01c5baec == 0) {
      engine_2d_c_plotPixel_FUN_00401130(param_1,param_2);
      return;
    }
    engine_mini3d_cpp_drawPixel_FUN_004f36e0(param_1,param_2);
  }
  return;
}
