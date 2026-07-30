// Name: core_melee.cpp_factoryFunc_FUN_004cec30
// Address: 004cec30
// Address Range: [[004cec30, 004cec4b]]
// Convention: __cdecl
// Signature: CMelee * __cdecl core_melee_cpp_factoryFunc_FUN_004cec30(void)

#include "nocturne.h"

CMelee * __cdecl core_melee_cpp_factoryFunc_FUN_004cec30(void)

{
  CMelee *pCVar1;
  
  pCVar1 = (CMelee *)FUN_0056497c(0x6c4);
  if (pCVar1 == (CMelee *)0x0) {
    return (CMelee *)0x0;
  }
  pCVar1 = core_melee_cpp_CMelee_ctor_FUN_004cec60(pCVar1);
  return pCVar1;
}
