// Name: core_tvbat.cpp_factoryFuncTVBat_FUN_00575000
// Address: 00575000
// Address Range: [[00575000, 0057501b]]
// Convention: __cdecl
// Signature: CTVBat * __cdecl core_tvbat_cpp_factoryFuncTVBat_FUN_00575000(void)

#include "nocturne.h"

CTVBat * __cdecl core_tvbat_cpp_factoryFuncTVBat_FUN_00575000(void)

{
  CTVBat *pCVar1;
  
  pCVar1 = (CTVBat *)operator_new(0xd28c);
  if (pCVar1 == (CTVBat *)0x0) {
    return (CTVBat *)0x0;
  }
  pCVar1 = core_tvbat_cpp_CTVBat_ctor_FUN_00575060(pCVar1);
  return pCVar1;
}
