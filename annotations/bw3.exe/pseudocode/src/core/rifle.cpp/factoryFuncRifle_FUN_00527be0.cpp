// Name: core_rifle.cpp_factoryFuncRifle_FUN_00527be0
// Address: 00527be0
// Address Range: [[00527be0, 00527bfb]]
// Convention: __cdecl
// Signature: CRifle * __cdecl core_rifle_cpp_factoryFuncRifle_FUN_00527be0(void)

#include "nocturne.h"

CRifle * __cdecl core_rifle_cpp_factoryFuncRifle_FUN_00527be0(void)

{
  CRifle *pCVar1;
  
  pCVar1 = (CRifle *)operator_new(0x5a0);
  if (pCVar1 == (CRifle *)0x0) {
    return (CRifle *)0x0;
  }
  pCVar1 = core_rifle_cpp_CRifle_ctor_FUN_00527c10(pCVar1);
  return pCVar1;
}
