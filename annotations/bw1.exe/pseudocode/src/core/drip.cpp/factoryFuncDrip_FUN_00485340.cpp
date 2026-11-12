// Name: core_drip.cpp_factoryFuncDrip_FUN_00485340
// Address: 00485340
// Address Range: [[00485340, 0048535b]]
// Convention: __cdecl
// Signature: CDrip * __cdecl core_drip_cpp_factoryFuncDrip_FUN_00485340(void)

#include "nocturne.h"

CDrip * __cdecl core_drip_cpp_factoryFuncDrip_FUN_00485340(void)

{
  CDrip *pCVar1;
  
  pCVar1 = (CDrip *)operator_new(0x33c);
  if (pCVar1 == (CDrip *)0x0) {
    return (CDrip *)0x0;
  }
  pCVar1 = core_drip_cpp_CDrip_ctor_FUN_00485370(pCVar1);
  return pCVar1;
}
