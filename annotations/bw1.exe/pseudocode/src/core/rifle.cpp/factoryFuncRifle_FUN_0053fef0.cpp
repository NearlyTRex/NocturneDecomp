// Name: core_rifle.cpp_factoryFuncRifle_FUN_0053fef0
// Address: 0053fef0
// Address Range: [[0053fef0, 0053ff0b]]
// Convention: __cdecl
// Signature: CRifle * __cdecl core_rifle_cpp_factoryFuncRifle_FUN_0053fef0(void)

#include "nocturne.h"

CRifle * __cdecl core_rifle_cpp_factoryFuncRifle_FUN_0053fef0(void)

{
  CRifle *pCVar1;
  
  pCVar1 = (CRifle *)operator_new(0x584);
  if (pCVar1 == (CRifle *)0x0) {
    return (CRifle *)0x0;
  }
  pCVar1 = core_rifle_cpp_CRifle_ctor_FUN_0053ff20(pCVar1);
  return pCVar1;
}
