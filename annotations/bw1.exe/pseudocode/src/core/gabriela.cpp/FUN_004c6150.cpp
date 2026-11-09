// Name: core_gabriela.cpp_FUN_004c6150
// Address: 004c6150
// Address Range: [[004c6150, 004c618d]]
// Convention: unknown
// Signature: float core_gabriela_cpp_FUN_004c6150(undefined4 param_1,undefined4 param_2,float param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_gabriela_cpp_FUN_004c6150(uint param_1,uint param_2,float param_3,int param_4)

{
  double dVar1;
  
  dVar1 = _DAT_005e0e0c;
  if ((0 < param_4) && (dVar1 = _DAT_005e0e04, param_4 != 1)) {
    return param_3;
  }
  return param_3 * (float)dVar1;
}
