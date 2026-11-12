// Name: core_keyactor.cpp_factoryFuncKeyActor_FUN_004fc4e0
// Address: 004fc4e0
// Address Range: [[004fc4e0, 004fc4fb]]
// Convention: __cdecl
// Signature: CKeyActor * __cdecl core_keyactor_cpp_factoryFuncKeyActor_FUN_004fc4e0(void)

#include "nocturne.h"

CKeyActor * __cdecl core_keyactor_cpp_factoryFuncKeyActor_FUN_004fc4e0(void)

{
  CKeyActor *pCVar1;
  
  pCVar1 = (CKeyActor *)operator_new(0x31c);
  if (pCVar1 == (CKeyActor *)0x0) {
    return (CKeyActor *)0x0;
  }
  pCVar1 = core_keyactor_cpp_CKeyActor_ctor_FUN_004fc510(pCVar1);
  return pCVar1;
}
