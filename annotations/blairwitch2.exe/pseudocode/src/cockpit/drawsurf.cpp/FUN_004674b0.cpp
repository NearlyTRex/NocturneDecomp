// Name: cockpit_drawsurf.cpp_FUN_004674b0
// Address: 004674b0
// Address Range: [[004674b0, 0046750f]]
// Convention: unknown
// Signature: void cockpit_drawsurf_cpp_FUN_004674b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cockpit_drawsurf_cpp_FUN_004674b0(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = _DAT_0060b274;
  uVar1 = _DAT_0060b270;
  _DAT_0060b270 = 1;
  _DAT_0060b274 = 0;
  cockpit_drawsurf_cpp_FUN_00467610(param_1,param_2,param_3,param_4,param_5);
  _DAT_0060b270 = uVar1;
  _DAT_0060b274 = uVar2;
  return;
}
