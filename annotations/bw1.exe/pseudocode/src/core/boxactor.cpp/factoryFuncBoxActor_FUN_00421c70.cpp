// Name: core_boxactor.cpp_factoryFuncBoxActor_FUN_00421c70
// Address: 00421c70
// Address Range: [[00421c70, 00421c8b]]
// Convention: __cdecl
// Signature: CBoxActor * __cdecl core_boxactor_cpp_factoryFuncBoxActor_FUN_00421c70(void)

#include "nocturne.h"

CBoxActor * __cdecl core_boxactor_cpp_factoryFuncBoxActor_FUN_00421c70(void)

{
  CBoxActor *pCVar1;
  
  pCVar1 = (CBoxActor *)operator_new(0x678);
  if (pCVar1 == (CBoxActor *)0x0) {
    return (CBoxActor *)0x0;
  }
  pCVar1 = core_boxactor_cpp_CBoxActor_ctor_FUN_00421ca0(pCVar1);
  return pCVar1;
}
