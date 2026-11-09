// Name: core_stranger.cpp_FUN_00585040
// Address: 00585040
// Address Range: [[00585040, 0058507d]]
// Convention: unknown
// Signature: float core_stranger_cpp_FUN_00585040(undefined4 param_1,undefined4 param_2,float param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_stranger_cpp_FUN_00585040(uint param_1,uint param_2,float param_3,int param_4)

{
  double dVar1;
  
  dVar1 = _DAT_005f63b1;
  if ((0 < param_4) && (dVar1 = _DAT_005f63a9, param_4 != 1)) {
    return param_3;
  }
  return param_3 * (float)dVar1;
}
