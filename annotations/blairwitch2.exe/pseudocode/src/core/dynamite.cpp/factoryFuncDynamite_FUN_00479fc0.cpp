// Name: core_dynamite.cpp_factoryFuncDynamite_FUN_00479fc0
// Address: 00479fc0
// Address Range: [[00479fc0, 00479fdb]]
// Convention: __cdecl
// Signature: CDynamite * __cdecl core_dynamite_cpp_factoryFuncDynamite_FUN_00479fc0(void)

#include "nocturne.h"

CDynamite * __cdecl core_dynamite_cpp_factoryFuncDynamite_FUN_00479fc0(void)

{
  CDynamite *pCVar1;
  
  pCVar1 = (CDynamite *)operator_new(0x6e8);
  if (pCVar1 == (CDynamite *)0x0) {
    return (CDynamite *)0x0;
  }
  pCVar1 = core_dynamite_cpp_CDynamite_ctor_FUN_00479ff0(pCVar1);
  return pCVar1;
}
