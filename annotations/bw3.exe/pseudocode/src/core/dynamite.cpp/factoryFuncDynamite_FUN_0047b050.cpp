// Name: core_dynamite.cpp_factoryFuncDynamite_FUN_0047b050
// Address: 0047b050
// Address Range: [[0047b050, 0047b06b]]
// Convention: __cdecl
// Signature: CDynamite * __cdecl core_dynamite_cpp_factoryFuncDynamite_FUN_0047b050(void)

#include "nocturne.h"

CDynamite * __cdecl core_dynamite_cpp_factoryFuncDynamite_FUN_0047b050(void)

{
  CDynamite *pCVar1;
  
  pCVar1 = (CDynamite *)operator_new(0x5a8);
  if (pCVar1 == (CDynamite *)0x0) {
    return (CDynamite *)0x0;
  }
  pCVar1 = core_dynamite_cpp_CDynamite_ctor_FUN_0047b080(pCVar1);
  return pCVar1;
}
