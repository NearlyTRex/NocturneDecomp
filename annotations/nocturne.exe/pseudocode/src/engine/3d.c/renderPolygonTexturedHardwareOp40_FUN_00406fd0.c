// Name: engine_3d.c_renderPolygonTexturedHardwareOp40_FUN_00406fd0
// Address: 00406fd0
// Address Range: [[00406fd0, 0040706c]]
// Convention: unknown
// Signature: undefined * engine_3d_c_renderPolygonTexturedHardwareOp40_FUN_00406fd0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * engine_3d_c_renderPolygonTexturedHardwareOp40_FUN_00406fd0(int param_1)

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
  _DAT_01c039a4 = 0;
  _DAT_01c039a0 = 1;
  if (DAT_006b0270 != 0) {
    engine_3d_c_rasterizePolygonHardware_FUN_00494260(param_1 + 0x18,*(uint *)(param_1 + 4));
    return &DAT_006b0288;
  }
  engine_clipper_c_FUN_00432cd0(*(uint *)(param_1 + 4),param_1 + 0x18);
  return &DAT_006b0288;
}
