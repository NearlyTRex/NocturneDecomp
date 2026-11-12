// Name: core_wateract.cpp_factoryFuncWaterActor_FUN_00586970
// Address: 00586970
// Address Range: [[00586970, 0058698b]]
// Convention: __cdecl
// Signature: CWaterActor * __cdecl core_wateract_cpp_factoryFuncWaterActor_FUN_00586970(void)

#include "nocturne.h"

CWaterActor * __cdecl core_wateract_cpp_factoryFuncWaterActor_FUN_00586970(void)

{
  CWaterActor *pCVar1;
  
  pCVar1 = (CWaterActor *)operator_new(0x2b394);
  if (pCVar1 == (CWaterActor *)0x0) {
    return (CWaterActor *)0x0;
  }
  pCVar1 = core_wateract_cpp_CWaterActor_ctor_FUN_005869a0(pCVar1);
  return pCVar1;
}
