// Name: core_drip.cpp_factoryFuncDrip_FUN_00462030
// Address: 00462030
// Address Range: [[00462030, 0046204b]]
// Convention: __cdecl
// Signature: CDrip * __cdecl core_drip_cpp_factoryFuncDrip_FUN_00462030(void)

#include "nocturne.h"

CDrip * __cdecl core_drip_cpp_factoryFuncDrip_FUN_00462030(void)

{
  CDrip *pCVar1;
  
  pCVar1 = operator_new(0x334);
  if (pCVar1 == (CDrip *)0x0) {
    return (CDrip *)0x0;
  }
  pCVar1 = core_drip_cpp_CDrip_ctor_FUN_00462060(pCVar1);
  return pCVar1;
}
