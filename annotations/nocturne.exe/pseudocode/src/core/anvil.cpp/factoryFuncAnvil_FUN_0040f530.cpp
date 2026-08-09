// Name: core_anvil.cpp_factoryFuncAnvil_FUN_0040f530
// Address: 0040f530
// Address Range: [[0040f530, 0040f54b]]
// Convention: __cdecl
// Signature: CAnvil * __cdecl core_anvil_cpp_factoryFuncAnvil_FUN_0040f530(void)

#include "nocturne.h"

CAnvil * __cdecl core_anvil_cpp_factoryFuncAnvil_FUN_0040f530(void)

{
  CAnvil *pCVar1;
  
  pCVar1 = operator_new(0x33c);
  if (pCVar1 == (CAnvil *)0x0) {
    return (CAnvil *)0x0;
  }
  pCVar1 = core_anvil_cpp_CAnvil_ctor_FUN_0040f560(pCVar1);
  return pCVar1;
}
