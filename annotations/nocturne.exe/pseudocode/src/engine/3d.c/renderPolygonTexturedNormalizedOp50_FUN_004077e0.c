// Name: engine_3d.c_renderPolygonTexturedNormalizedOp50_FUN_004077e0
// Address: 004077e0
// Address Range: [[004077e0, 00407876]]
// Convention: unknown
// Signature: int engine_3d_c_renderPolygonTexturedNormalizedOp50_FUN_004077e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int engine_3d_c_renderPolygonTexturedNormalizedOp50_FUN_004077e0(int param_1)

{
  int iVar1;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00404610(param_1 + 8);
  if (iVar1 != 0) {
    if (_DAT_01c03948 == 0) {
      if (DAT_005b7624 == 0x20) {
        _DAT_01c00c7c = &LAB_005300ec;
      }
      else {
        _DAT_01c00c7c = &LAB_00530322;
      }
    }
    else if (DAT_005b7624 == 0x20) {
      _DAT_01c00c7c = &LAB_0052f031;
    }
    else {
      _DAT_01c00c7c = &LAB_0052f823;
    }
    _DAT_01c039a0 = 1;
    _DAT_01c039a4 = 2;
    FUN_00432cd0(*(uint *)(param_1 + 4),param_1 + 0x18);
  }
  return *(int *)(param_1 + 4) * 4 + param_1 + 0x18;
}
