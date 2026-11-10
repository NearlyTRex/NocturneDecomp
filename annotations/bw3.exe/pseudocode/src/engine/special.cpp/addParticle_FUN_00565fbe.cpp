// Name: engine_special.cpp_addParticle_FUN_00565fbe
// Address: 00565fbe
// Address Range: [[00565fbe, 00565fe1]]
// Convention: unknown
// Signature: undefined4 engine_special_cpp_addParticle_FUN_00565fbe(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint engine_special_cpp_addParticle_FUN_00565fbe(uint param_1,uint param_2)

{
  uint uVar1;
  
  if (_DAT_01c6cee8 == 0) {
    return 0;
  }
  uVar1 = (*_DAT_02cf6034)(param_1,param_2);
  return uVar1;
}
