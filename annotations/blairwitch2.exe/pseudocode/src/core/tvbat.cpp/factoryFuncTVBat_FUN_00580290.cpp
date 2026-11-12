// Name: core_tvbat.cpp_factoryFuncTVBat_FUN_00580290
// Address: 00580290
// Address Range: [[00580290, 005802ab]]
// Convention: __cdecl
// Signature: CTVBat * __cdecl core_tvbat_cpp_factoryFuncTVBat_FUN_00580290(void)

#include "nocturne.h"

CTVBat * __cdecl core_tvbat_cpp_factoryFuncTVBat_FUN_00580290(void)

{
  CTVBat *pCVar1;
  
  pCVar1 = (CTVBat *)operator_new(0x10d30);
  if (pCVar1 == (CTVBat *)0x0) {
    return (CTVBat *)0x0;
  }
  pCVar1 = core_tvbat_cpp_CTVBat_ctor_FUN_005802f0(pCVar1);
  return pCVar1;
}
