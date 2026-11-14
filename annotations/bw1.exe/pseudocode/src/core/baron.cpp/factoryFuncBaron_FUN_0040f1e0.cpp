// Name: core_baron.cpp_factoryFuncBaron_FUN_0040f1e0
// Address: 0040f1e0
// Address Range: [[0040f1e0, 0040f1fb]]
// Convention: __cdecl
// Signature: CBaron * __cdecl core_baron_cpp_factoryFuncBaron_FUN_0040f1e0(void)

#include "nocturne.h"

CBaron * __cdecl core_baron_cpp_factoryFuncBaron_FUN_0040f1e0(void)

{
  CBaron *pCVar1;
  
  pCVar1 = (CBaron *)operator_new(0x200ac);
  if (pCVar1 == (CBaron *)0x0) {
    return (CBaron *)0x0;
  }
  pCVar1 = core_baron_cpp_CBaron_ctor_FUN_0040f210(pCVar1);
  return pCVar1;
}
