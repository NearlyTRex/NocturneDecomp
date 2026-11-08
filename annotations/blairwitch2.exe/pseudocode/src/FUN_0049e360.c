// Name: FUN_0049e360
// Address: 0049e360
// Address Range: [[0049e360, 0049e3d4]]
// Convention: unknown
// Signature: void FUN_0049e360(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049e360(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  FUN_00498d30(_DAT_01c975e0 * 0x1c + 0x1c975e4,param_2,param_3,param_4);
  _DAT_01c975e0 = _DAT_01c975e0 + 1;
  if (9 < _DAT_01c975e0) {
    _DAT_01c975e0 = 0;
  }
  FUN_0055ae50(0x0264B290,param_1,"xplode?.wav @ 6.0",param_2);
  FUN_0049e630(param_1,param_2,param_5);
  return;
}
