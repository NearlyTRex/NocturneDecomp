// Name: core_biggs.cpp_factoryFunc_FUN_00415340
// Address: 00415340
// Address Range: [[00415340, 0041535b]]
// Convention: __cdecl
// Signature: CBiggs * __cdecl core_biggs_cpp_factoryFunc_FUN_00415340(void)

#include "nocturne.h"

CBiggs * __cdecl core_biggs_cpp_factoryFunc_FUN_00415340(void)

{
  CBiggs *pCVar1;
  
  pCVar1 = (CBiggs *)FUN_0056497c(0xcb38);
  if (pCVar1 == (CBiggs *)0x0) {
    return (CBiggs *)0x0;
  }
  pCVar1 = core_biggs_cpp_CBiggs_ctor_FUN_00415370(pCVar1);
  return pCVar1;
}
