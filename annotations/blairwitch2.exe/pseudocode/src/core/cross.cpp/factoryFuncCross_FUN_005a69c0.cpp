// Name: core_cross.cpp_factoryFuncCross_FUN_005a69c0
// Address: 005a69c0
// Address Range: [[005a69c0, 005a69db]]
// Convention: __cdecl
// Signature: CCross * __cdecl core_cross_cpp_factoryFuncCross_FUN_005a69c0(void)

#include "nocturne.h"

CCross * __cdecl core_cross_cpp_factoryFuncCross_FUN_005a69c0(void)

{
  CCross *pCVar1;
  
  pCVar1 = (CCross *)operator_new(0x848);
  if (pCVar1 == (CCross *)0x0) {
    return (CCross *)0x0;
  }
  pCVar1 = core_cross_cpp_CCross_ctor_FUN_005a69f0(pCVar1);
  return pCVar1;
}
