// Name: core_tvbat.cpp_factoryFuncTVBat_FUN_005a3ee0
// Address: 005a3ee0
// Address Range: [[005a3ee0, 005a3efb]]
// Convention: __cdecl
// Signature: CTVBat * __cdecl core_tvbat_cpp_factoryFuncTVBat_FUN_005a3ee0(void)

#include "nocturne.h"

CTVBat * __cdecl core_tvbat_cpp_factoryFuncTVBat_FUN_005a3ee0(void)

{
  CTVBat *pCVar1;
  
  pCVar1 = (CTVBat *)operator_new(0xc4a0);
  if (pCVar1 == (CTVBat *)0x0) {
    return (CTVBat *)0x0;
  }
  pCVar1 = core_tvbat_cpp_CTVBat_ctor_FUN_005a3f40(pCVar1);
  return pCVar1;
}
