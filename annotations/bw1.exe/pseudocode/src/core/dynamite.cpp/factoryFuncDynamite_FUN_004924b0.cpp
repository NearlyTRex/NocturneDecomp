// Name: core_dynamite.cpp_factoryFuncDynamite_FUN_004924b0
// Address: 004924b0
// Address Range: [[004924b0, 004924cb]]
// Convention: __cdecl
// Signature: CDynamite * __cdecl core_dynamite_cpp_factoryFuncDynamite_FUN_004924b0(void)

#include "nocturne.h"

CDynamite * __cdecl core_dynamite_cpp_factoryFuncDynamite_FUN_004924b0(void)

{
  CDynamite *pCVar1;
  
  pCVar1 = (CDynamite *)operator_new(0x58c);
  if (pCVar1 == (CDynamite *)0x0) {
    return (CDynamite *)0x0;
  }
  pCVar1 = core_dynamite_cpp_CDynamite_ctor_FUN_004924e0(pCVar1);
  return pCVar1;
}
