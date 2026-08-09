// Name: core_dynamite.cpp_factoryFuncDynamite_FUN_0046eba0
// Address: 0046eba0
// Address Range: [[0046eba0, 0046ebbb]]
// Convention: __cdecl
// Signature: CDynamite * __cdecl core_dynamite_cpp_factoryFuncDynamite_FUN_0046eba0(void)

#include "nocturne.h"

CDynamite * __cdecl core_dynamite_cpp_factoryFuncDynamite_FUN_0046eba0(void)

{
  CDynamite *pCVar1;
  
  pCVar1 = operator_new(0x584);
  if (pCVar1 == (CDynamite *)0x0) {
    return (CDynamite *)0x0;
  }
  pCVar1 = core_dynamite_cpp_CDynamite_ctor_FUN_0046ebd0(pCVar1);
  return pCVar1;
}
