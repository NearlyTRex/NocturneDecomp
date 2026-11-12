// Name: core_wateract.cpp_factoryFuncWaterActor_FUN_00577d60
// Address: 00577d60
// Address Range: [[00577d60, 00577d7b]]
// Convention: __cdecl
// Signature: CWaterActor * __cdecl core_wateract_cpp_factoryFuncWaterActor_FUN_00577d60(void)

#include "nocturne.h"

CWaterActor * __cdecl core_wateract_cpp_factoryFuncWaterActor_FUN_00577d60(void)

{
  CWaterActor *pCVar1;
  
  pCVar1 = (CWaterActor *)operator_new(0x2b23c);
  if (pCVar1 == (CWaterActor *)0x0) {
    return (CWaterActor *)0x0;
  }
  pCVar1 = core_wateract_cpp_CWaterActor_ctor_FUN_00577d90(pCVar1);
  return pCVar1;
}
