// Name: core_melee.cpp_factoryFuncMelee_FUN_004e6f60
// Address: 004e6f60
// Address Range: [[004e6f60, 004e6f7b]]
// Convention: __cdecl
// Signature: CMelee * __cdecl core_melee_cpp_factoryFuncMelee_FUN_004e6f60(void)

#include "nocturne.h"

CMelee * __cdecl core_melee_cpp_factoryFuncMelee_FUN_004e6f60(void)

{
  CMelee *pCVar1;
  
  pCVar1 = (CMelee *)operator_new(0x6e8);
  if (pCVar1 == (CMelee *)0x0) {
    return (CMelee *)0x0;
  }
  pCVar1 = core_melee_cpp_CMelee_ctor_FUN_004e6f90(pCVar1);
  return pCVar1;
}
