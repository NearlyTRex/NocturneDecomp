// Name: core_boxactor.cpp_factoryFunc_FUN_0041e2d0
// Address: 0041e2d0
// Address Range: [[0041e2d0, 0041e2eb]]
// Convention: __cdecl
// Signature: CBoxActor * __cdecl core_boxactor_cpp_factoryFunc_FUN_0041e2d0(void)

#include "nocturne.h"

CBoxActor * __cdecl core_boxactor_cpp_factoryFunc_FUN_0041e2d0(void)

{
  CBoxActor *pCVar1;
  
  pCVar1 = (CBoxActor *)FUN_0056497c(0x664);
  if (pCVar1 == (CBoxActor *)0x0) {
    return (CBoxActor *)0x0;
  }
  pCVar1 = core_boxactor_cpp_CBoxActor_ctor_FUN_0041e300(pCVar1);
  return pCVar1;
}
