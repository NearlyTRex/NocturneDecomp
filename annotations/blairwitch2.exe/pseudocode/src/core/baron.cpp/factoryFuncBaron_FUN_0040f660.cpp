// Name: core_baron.cpp_factoryFuncBaron_FUN_0040f660
// Address: 0040f660
// Address Range: [[0040f660, 0040f67b]]
// Convention: __cdecl
// Signature: CBaron * __cdecl core_baron_cpp_factoryFuncBaron_FUN_0040f660(void)

#include "nocturne.h"

CBaron * __cdecl core_baron_cpp_factoryFuncBaron_FUN_0040f660(void)

{
  CBaron *pCVar1;
  
  pCVar1 = (CBaron *)operator_new(0x25740);
  if (pCVar1 == (CBaron *)0x0) {
    return (CBaron *)0x0;
  }
  pCVar1 = core_baron_cpp_CBaron_ctor_FUN_0040f690(pCVar1);
  return pCVar1;
}
