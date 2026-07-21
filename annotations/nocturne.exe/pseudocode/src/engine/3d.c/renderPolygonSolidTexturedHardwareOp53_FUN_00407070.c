// Name: engine_3d.c_renderPolygonSolidTexturedHardwareOp53_FUN_00407070
// Address: 00407070
// Address Range: [[00407070, 0040711b]]
// Convention: unknown
// Signature: undefined * engine_3d_c_renderPolygonSolidTexturedHardwareOp53_FUN_00407070(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * engine_3d_c_renderPolygonSolidTexturedHardwareOp53_FUN_00407070(int param_1)

{
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
  _DAT_01c039a0 = 3;
  engine_3d_c_setRenderAlpha_FUN_00408370(0xffff);
  _DAT_01c039a4 = 0;
  if (DAT_006b0270 != 0) {
    engine_3d_c_rasterizePolygonHardware_FUN_00494260(param_1 + 0x18,*(uint *)(param_1 + 4));
    return &DAT_006b0288;
  }
  FUN_00432cd0(*(uint *)(param_1 + 4),param_1 + 0x18);
  return &DAT_006b0288;
}
