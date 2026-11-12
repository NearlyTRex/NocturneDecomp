// Name: core_boxactor.cpp_factoryFuncBoxActor_FUN_0041efb0
// Address: 0041efb0
// Address Range: [[0041efb0, 0041efcb]]
// Convention: __cdecl
// Signature: CBoxActor * __cdecl core_boxactor_cpp_factoryFuncBoxActor_FUN_0041efb0(void)

#include "nocturne.h"

CBoxActor * __cdecl core_boxactor_cpp_factoryFuncBoxActor_FUN_0041efb0(void)

{
  CBoxActor *pCVar1;
  
  pCVar1 = (CBoxActor *)operator_new(0x6e8);
  if (pCVar1 == (CBoxActor *)0x0) {
    return (CBoxActor *)0x0;
  }
  pCVar1 = core_boxactor_cpp_CBoxActor_ctor_FUN_0041efe0(pCVar1);
  return pCVar1;
}
