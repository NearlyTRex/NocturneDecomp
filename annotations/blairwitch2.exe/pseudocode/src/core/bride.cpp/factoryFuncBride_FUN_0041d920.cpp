// Name: core_bride.cpp_factoryFuncBride_FUN_0041d920
// Address: 0041d920
// Address Range: [[0041d920, 0041d93b]]
// Convention: __cdecl
// Signature: CBride * __cdecl core_bride_cpp_factoryFuncBride_FUN_0041d920(void)

#include "nocturne.h"

CBride * __cdecl core_bride_cpp_factoryFuncBride_FUN_0041d920(void)

{
  CBride *pCVar1;
  
  pCVar1 = (CBride *)operator_new(0x10b28);
  if (pCVar1 == (CBride *)0x0) {
    return (CBride *)0x0;
  }
  pCVar1 = core_bride_cpp_CBride_ctor_FUN_0041d950(pCVar1);
  return pCVar1;
}
