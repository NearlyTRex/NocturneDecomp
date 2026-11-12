// Name: core_keyactor.cpp_factoryFuncKeyActor_FUN_004df110
// Address: 004df110
// Address Range: [[004df110, 004df12b]]
// Convention: __cdecl
// Signature: CKeyActor * __cdecl core_keyactor_cpp_factoryFuncKeyActor_FUN_004df110(void)

#include "nocturne.h"

CKeyActor * __cdecl core_keyactor_cpp_factoryFuncKeyActor_FUN_004df110(void)

{
  CKeyActor *pCVar1;
  
  pCVar1 = (CKeyActor *)operator_new(0x478);
  if (pCVar1 == (CKeyActor *)0x0) {
    return (CKeyActor *)0x0;
  }
  pCVar1 = core_keyactor_cpp_CKeyActor_ctor_FUN_004df140(pCVar1);
  return pCVar1;
}
