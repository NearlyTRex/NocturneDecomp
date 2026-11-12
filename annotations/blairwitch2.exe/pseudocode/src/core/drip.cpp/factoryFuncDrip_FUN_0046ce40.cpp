// Name: core_drip.cpp_factoryFuncDrip_FUN_0046ce40
// Address: 0046ce40
// Address Range: [[0046ce40, 0046ce5b]]
// Convention: __cdecl
// Signature: CDrip * __cdecl core_drip_cpp_factoryFuncDrip_FUN_0046ce40(void)

#include "nocturne.h"

CDrip * __cdecl core_drip_cpp_factoryFuncDrip_FUN_0046ce40(void)

{
  CDrip *pCVar1;
  
  pCVar1 = (CDrip *)operator_new(0x498);
  if (pCVar1 == (CDrip *)0x0) {
    return (CDrip *)0x0;
  }
  pCVar1 = core_drip_cpp_CDrip_ctor_FUN_0046ce70(pCVar1);
  return pCVar1;
}
