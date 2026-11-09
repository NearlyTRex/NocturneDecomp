// Name: core_gabriela.cpp_FUN_004ad1a0
// Address: 004ad1a0
// Address Range: [[004ad1a0, 004ad1dd]]
// Convention: unknown
// Signature: float core_gabriela_cpp_FUN_004ad1a0(undefined4 param_1,undefined4 param_2,float param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_gabriela_cpp_FUN_004ad1a0(uint param_1,uint param_2,float param_3,int param_4)

{
  double dVar1;
  
  dVar1 = _DAT_005d6d93;
  if ((0 < param_4) && (dVar1 = _DAT_005d6d8b, param_4 != 1)) {
    return param_3;
  }
  return param_3 * (float)dVar1;
}
