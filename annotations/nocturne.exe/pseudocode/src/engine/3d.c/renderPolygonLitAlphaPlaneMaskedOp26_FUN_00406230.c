// Name: engine_3d.c_renderPolygonLitAlphaPlaneMaskedOp26_FUN_00406230
// Address: 00406230
// Address Range: [[00406230, 00406315]]
// Convention: unknown
// Signature: int engine_3d_c_renderPolygonLitAlphaPlaneMaskedOp26_FUN_00406230(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int engine_3d_c_renderPolygonLitAlphaPlaneMaskedOp26_FUN_00406230(int param_1)

{
  int iVar1;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00404610(param_1 + 8);
  if (iVar1 == 0) goto LAB_0040629e;
  if (_DAT_01c038f4 == 0) {
    if (_DAT_01c03948 == 0) {
      if (DAT_005b7624 == 0x20) goto LAB_00406268;
      _DAT_01c00c7c = FUN_00530322;
    }
    else {
      if (DAT_005b7624 != 0x20) goto LAB_004062cd;
      _DAT_01c00c7c = FUN_0052f031;
    }
  }
  else if (_DAT_01c03948 == 0) {
    if (DAT_005b7624 == 0x20) {
LAB_00406268:
      _DAT_01c00c7c = FUN_005300ec;
    }
    else {
      _DAT_01c00c7c = FUN_00530322;
    }
  }
  else if (DAT_005b7624 == 0x20) {
    _DAT_01c00c7c = FUN_0052f031;
  }
  else {
LAB_004062cd:
    _DAT_01c00c7c = FUN_0052f823;
  }
  _DAT_01c039a0 = 0xd9;
  _DAT_01c039a4 = 1;
  engine_3d_c_calculatePolygonLighting_FUN_00404710(param_1);
  engine_clipper_c_FUN_00432cd0(*(uint *)(param_1 + 4),param_1 + 0x18);
LAB_0040629e:
  return param_1 + 0x18 + *(int *)(param_1 + 4) * 4;
}
