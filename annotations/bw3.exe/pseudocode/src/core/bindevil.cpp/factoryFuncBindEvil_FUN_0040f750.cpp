// Name: core_bindevil.cpp_factoryFuncBindEvil_FUN_0040f750
// Address: 0040f750
// Address Range: [[0040f750, 0040f76b]]
// Convention: __cdecl
// Signature: CBindEvil * __cdecl core_bindevil_cpp_factoryFuncBindEvil_FUN_0040f750(void)

#include "nocturne.h"

CBindEvil * __cdecl core_bindevil_cpp_factoryFuncBindEvil_FUN_0040f750(void)

{
  CBindEvil *pCVar1;
  
  pCVar1 = (CBindEvil *)operator_new(0x5a0);
  if (pCVar1 == (CBindEvil *)0x0) {
    return (CBindEvil *)0x0;
  }
  pCVar1 = core_bindevil_cpp_CBindEvil_ctor_FUN_0040f780(pCVar1);
  return pCVar1;
}
