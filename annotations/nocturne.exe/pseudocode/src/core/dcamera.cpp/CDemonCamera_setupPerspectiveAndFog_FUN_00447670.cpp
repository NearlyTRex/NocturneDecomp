// Name: core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670
// Address: 00447670
// Address Range: [[00447670, 0044775d]]
// Convention: unknown
// Signature: void core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670(CDemonCamera *param_1,float *param_2,SProjectedVertex *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670(CDemonCamera *param_1,float *param_2,SProjectedVertex *param_3)

{
  uint uVar1;
  uint uVar2;
  CVector3i local_10;
  
  if (param_2 == (float *)0x0) {
    _DAT_01c038f4 = param_2;
    return;
  }
  if (_DAT_0140efa8 != 0) {
    _DAT_01c038f4 = (float *)0x0;
    return;
  }
  local_10.x = (int)ROUND(*param_2 * 256.0f);
  local_10.y = (int)ROUND(param_2[1] * 256.0f);
  local_10.z = (int)ROUND(param_2[2] * 256.0f);
  _DAT_01c038f4 =
       (float *)core_dcamera_cpp_CDemonCamera_getFogValueAtPosition_FUN_004475a0
                          (param_1,&local_10,param_3);
  uVar1 = *(uint *)(&DAT_00b0e1fc + DAT_005ad458 * 4) & 0xff;
  if (DAT_005b7624 == 0x20) {
    uVar2 = (*(uint *)(&DAT_00b0e1fc + DAT_005ad450 * 4) & 0xff) << (DAT_01c00624 & 0x1f) |
            (*(uint *)(&DAT_00b0e1fc + DAT_005ad454 * 4) & 0xff) << (DAT_01c00630 & 0x1f);
    uVar1 = uVar1 << (DAT_01c0063c & 0x1f);
  }
  else {
    uVar2 = (*(uint *)(&DAT_00b0e1fc + DAT_005ad450 * 4) & 0xff) << 0x10 |
            (*(uint *)(&DAT_00b0e1fc + DAT_005ad454 * 4) & 0xff) << 8;
  }
  _DAT_01c039a8 = uVar2 | uVar1;
  return;
}
