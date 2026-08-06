// Name: core_wateract.cpp_factoryFunc_FUN_005511f0
// Address: 005511f0
// Address Range: [[005511f0, 0055120b]]
// Convention: __cdecl
// Signature: CWaterActor * __cdecl core_wateract_cpp_factoryFunc_FUN_005511f0(void)

#include "nocturne.h"

CWaterActor * __cdecl core_wateract_cpp_factoryFunc_FUN_005511f0(void)

{
  CWaterActor *pCVar1;
  
  pCVar1 = operator_new(0x2b230);
  if (pCVar1 == (CWaterActor *)0x0) {
    return (CWaterActor *)0x0;
  }
  pCVar1 = core_wateract_cpp_CWaterActor_ctor_FUN_00551220(pCVar1);
  return pCVar1;
}
