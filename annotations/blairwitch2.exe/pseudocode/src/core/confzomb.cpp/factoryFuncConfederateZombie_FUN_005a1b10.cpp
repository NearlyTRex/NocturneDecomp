// Name: core_confzomb.cpp_factoryFuncConfederateZombie_FUN_005a1b10
// Address: 005a1b10
// Address Range: [[005a1b10, 005a1b2b]]
// Convention: __cdecl
// Signature: CConfederateZombie * __cdecl core_confzomb_cpp_factoryFuncConfederateZombie_FUN_005a1b10(void)

#include "nocturne.h"

CConfederateZombie * __cdecl core_confzomb_cpp_factoryFuncConfederateZombie_FUN_005a1b10(void)

{
  CConfederateZombie *pCVar1;
  
  pCVar1 = (CConfederateZombie *)operator_new(0x11858);
  if (pCVar1 == (CConfederateZombie *)0x0) {
    return (CConfederateZombie *)0x0;
  }
  pCVar1 = core_confzomb_cpp_CConfederateZombie_ctor_FUN_005a1b40(pCVar1);
  return pCVar1;
}
