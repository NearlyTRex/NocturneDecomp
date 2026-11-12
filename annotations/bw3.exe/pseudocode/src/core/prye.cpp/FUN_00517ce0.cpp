// Name: core_prye.cpp_FUN_00517ce0
// Address: 00517ce0
// Address Range: [[00517ce0, 00517d1d]]
// Convention: unknown
// Signature: float core_prye_cpp_FUN_00517ce0(undefined4 param_1,undefined4 param_2,float param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_prye_cpp_FUN_00517ce0(uint param_1,uint param_2,float param_3,int param_4)

{
  double dVar1;
  
  dVar1 = _DAT_005cca8f;
  if ((0 < param_4) && (dVar1 = _DAT_005cca87, param_4 != 1)) {
    return param_3;
  }
  return param_3 * (float)dVar1;
}
