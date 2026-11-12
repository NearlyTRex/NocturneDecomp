// Name: core_drip.cpp_factoryFuncDrip_FUN_0046ea20
// Address: 0046ea20
// Address Range: [[0046ea20, 0046ea3b]]
// Convention: __cdecl
// Signature: CDrip * __cdecl core_drip_cpp_factoryFuncDrip_FUN_0046ea20(void)

#include "nocturne.h"

CDrip * __cdecl core_drip_cpp_factoryFuncDrip_FUN_0046ea20(void)

{
  CDrip *pCVar1;
  
  pCVar1 = (CDrip *)operator_new(0x33c);
  if (pCVar1 == (CDrip *)0x0) {
    return (CDrip *)0x0;
  }
  pCVar1 = core_drip_cpp_CDrip_ctor_FUN_0046ea50(pCVar1);
  return pCVar1;
}
