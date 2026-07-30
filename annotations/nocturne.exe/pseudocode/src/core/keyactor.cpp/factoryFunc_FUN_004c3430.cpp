// Name: core_keyactor.cpp_factoryFunc_FUN_004c3430
// Address: 004c3430
// Address Range: [[004c3430, 004c344b]]
// Convention: __cdecl
// Signature: CKeyActor * __cdecl core_keyactor_cpp_factoryFunc_FUN_004c3430(void)

#include "nocturne.h"

CKeyActor * __cdecl core_keyactor_cpp_factoryFunc_FUN_004c3430(void)

{
  int iVar1;
  CKeyActor *pCVar2;
  
  iVar1 = FUN_0056497c(0x314);
  if (iVar1 == 0) {
    return (CKeyActor *)0x0;
  }
  pCVar2 = (CKeyActor *)core_keyactor_cpp_FUN_004c3460(iVar1);
  return pCVar2;
}
