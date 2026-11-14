// Name: core_wateract.cpp_factoryFuncWaterActor_FUN_005aa5a0
// Address: 005aa5a0
// Address Range: [[005aa5a0, 005aa5bb]]
// Convention: __cdecl
// Signature: CWaterActor * __cdecl core_wateract_cpp_factoryFuncWaterActor_FUN_005aa5a0(void)

#include "nocturne.h"

CWaterActor * __cdecl core_wateract_cpp_factoryFuncWaterActor_FUN_005aa5a0(void)

{
  CWaterActor *pCVar1;
  
  pCVar1 = (CWaterActor *)operator_new(0x2b238);
  if (pCVar1 == (CWaterActor *)0x0) {
    return (CWaterActor *)0x0;
  }
  pCVar1 = core_wateract_cpp_CWaterActor_ctor_FUN_005aa5d0(pCVar1);
  return pCVar1;
}
