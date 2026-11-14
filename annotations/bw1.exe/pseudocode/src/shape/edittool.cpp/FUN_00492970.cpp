// Name: shape_edittool.cpp_FUN_00492970
// Address: 00492970
// Address Range: [[00492970, 004929d5]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_00492970(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_00492970(int param_1,int param_2,int param_3)

{
  if (((((-1 < param_1) && (-1 < param_2)) && (param_1 < DAT_0061b498)) && (param_2 < DAT_0061b49c))
     && ((param_3 == 0 ||
         (((_DAT_01c4f008 <= param_1 && (param_1 < _DAT_01c4f010)) &&
          ((_DAT_01c4f00c <= param_2 && (param_2 < _DAT_01c4f014)))))))) {
    if (_DAT_01c3f544 == 0) {
      engine_2d_c_plotPixel_FUN_00401130(param_1,param_2);
      return;
    }
    engine_mini3d_cpp_drawPixel_FUN_00517f10(param_1,param_2);
  }
  return;
}
