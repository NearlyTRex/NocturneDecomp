// Name: core_prye.cpp_FUN_00517c90
// Address: 00517c90
// Address Range: [[00517c90, 00517cdf]]
// Convention: unknown
// Signature: float core_prye_cpp_FUN_00517c90(undefined4 param_1,undefined4 param_2,float param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_prye_cpp_FUN_00517c90(uint param_1,uint param_2,float param_3,int param_4)

{
  double dVar1;
  
  dVar1 = _DAT_005cca7f;
  if ((0 < param_4) && (dVar1 = _DAT_005cca77, param_4 != 1)) {
    return param_3;
  }
  return param_3 * _DAT_01ed36d8 * (float)dVar1;
}
