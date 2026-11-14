// Name: core_melee.cpp_factoryFuncMelee_FUN_004ea880
// Address: 004ea880
// Address Range: [[004ea880, 004ea89b]]
// Convention: __cdecl
// Signature: CMelee * __cdecl core_melee_cpp_factoryFuncMelee_FUN_004ea880(void)

#include "nocturne.h"

CMelee * __cdecl core_melee_cpp_factoryFuncMelee_FUN_004ea880(void)

{
  CMelee *pCVar1;
  
  pCVar1 = (CMelee *)operator_new(0x828);
  if (pCVar1 == (CMelee *)0x0) {
    return (CMelee *)0x0;
  }
  pCVar1 = core_melee_cpp_CMelee_ctor_FUN_004ea8b0(pCVar1);
  return pCVar1;
}
