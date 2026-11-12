// Name: core_melee.cpp_factoryFuncMelee_FUN_00509520
// Address: 00509520
// Address Range: [[00509520, 0050953b]]
// Convention: __cdecl
// Signature: CMelee * __cdecl core_melee_cpp_factoryFuncMelee_FUN_00509520(void)

#include "nocturne.h"

CMelee * __cdecl core_melee_cpp_factoryFuncMelee_FUN_00509520(void)

{
  CMelee *pCVar1;
  
  pCVar1 = (CMelee *)operator_new(0x6cc);
  if (pCVar1 == (CMelee *)0x0) {
    return (CMelee *)0x0;
  }
  pCVar1 = core_melee_cpp_CMelee_ctor_FUN_00509550(pCVar1);
  return pCVar1;
}
