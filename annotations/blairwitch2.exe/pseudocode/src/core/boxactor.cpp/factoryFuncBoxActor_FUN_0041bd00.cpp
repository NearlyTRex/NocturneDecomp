// Name: core_boxactor.cpp_factoryFuncBoxActor_FUN_0041bd00
// Address: 0041bd00
// Address Range: [[0041bd00, 0041bd1b]]
// Convention: __cdecl
// Signature: CBoxActor * __cdecl core_boxactor_cpp_factoryFuncBoxActor_FUN_0041bd00(void)

#include "nocturne.h"

CBoxActor * __cdecl core_boxactor_cpp_factoryFuncBoxActor_FUN_0041bd00(void)

{
  CBoxActor *pCVar1;
  
  pCVar1 = (CBoxActor *)operator_new(0x7d4);
  if (pCVar1 == (CBoxActor *)0x0) {
    return (CBoxActor *)0x0;
  }
  pCVar1 = core_boxactor_cpp_CBoxActor_ctor_FUN_0041bd30(pCVar1);
  return pCVar1;
}
