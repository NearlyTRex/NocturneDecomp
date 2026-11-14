// Name: core_keyactor.cpp_factoryFuncKeyActor_FUN_004de800
// Address: 004de800
// Address Range: [[004de800, 004de81b]]
// Convention: __cdecl
// Signature: CKeyActor * __cdecl core_keyactor_cpp_factoryFuncKeyActor_FUN_004de800(void)

#include "nocturne.h"

CKeyActor * __cdecl core_keyactor_cpp_factoryFuncKeyActor_FUN_004de800(void)

{
  CKeyActor *pCVar1;
  
  pCVar1 = (CKeyActor *)operator_new(0x31c);
  if (pCVar1 == (CKeyActor *)0x0) {
    return (CKeyActor *)0x0;
  }
  pCVar1 = core_keyactor_cpp_CKeyActor_ctor_FUN_004de830(pCVar1);
  return pCVar1;
}
