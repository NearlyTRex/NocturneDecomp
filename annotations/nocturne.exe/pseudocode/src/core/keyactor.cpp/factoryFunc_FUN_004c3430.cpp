// Name: core_keyactor.cpp_factoryFunc_FUN_004c3430
// Address: 004c3430
// Address Range: [[004c3430, 004c344b]]
// Convention: __cdecl
// Signature: CKeyActor * __cdecl core_keyactor_cpp_factoryFunc_FUN_004c3430(void)

#include "nocturne.h"

CKeyActor * __cdecl core_keyactor_cpp_factoryFunc_FUN_004c3430(void)

{
  CKeyActor *pCVar1;
  
  pCVar1 = operator_new(0x314);
  if (pCVar1 == (CKeyActor *)0x0) {
    return (CKeyActor *)0x0;
  }
  pCVar1 = core_keyactor_cpp_CKeyActor_ctor_FUN_004c3460(pCVar1);
  return pCVar1;
}
