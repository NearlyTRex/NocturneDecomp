// Name: engine_3d.c_renderPolygonGrayscaleLitOp5_FUN_004047e0
// Address: 004047e0
// Address Range: [[004047e0, 004048a8]]
// Convention: unknown
// Signature: int engine_3d_c_renderPolygonGrayscaleLitOp5_FUN_004047e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int engine_3d_c_renderPolygonGrayscaleLitOp5_FUN_004047e0(int param_1)

{
  int iVar1;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00404610(param_1 + 8);
  if (iVar1 != 0) {
    if (_DAT_01c03948 == 0) {
      if (DAT_005b7624 == 0x20) {
        _DAT_01c00c7c = engine_special_cpp_FUN_005300ec;
      }
      else {
        _DAT_01c00c7c = engine_special_cpp_FUN_00530322;
      }
    }
    else if (DAT_005b7624 == 0x20) {
      _DAT_01c00c7c = engine_special_cpp_FUN_0052f031;
    }
    else {
      _DAT_01c00c7c = engine_special_cpp_FUN_0052f823;
    }
    _DAT_01c039a0 = 0x10;
    _DAT_01c039a4 = 0;
    _DAT_01c00c74 =
         engine_light_cpp_calculateLighting_FUN_004c6cc0
                   (*(uint *)(param_1 + 8),*(uint *)(param_1 + 0xc),
                    *(uint *)(param_1 + 0x10));
    _DAT_01c00c70 = engine_3d_c_FUN_00404680(DAT_006b0260,_DAT_01c00c74);
    engine_clipper_c_FUN_00432cd0(*(uint *)(param_1 + 4),param_1 + 0x18);
  }
  return param_1 + 0x18 + *(int *)(param_1 + 4) * 4;
}
