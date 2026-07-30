// Name: core_tvbat.cpp_factoryFunc_FUN_0054b0e0
// Address: 0054b0e0
// Address Range: [[0054b0e0, 0054b0fb]]
// Convention: __cdecl
// Signature: CTVBat * __cdecl core_tvbat_cpp_factoryFunc_FUN_0054b0e0(void)

#include "nocturne.h"

CTVBat * __cdecl core_tvbat_cpp_factoryFunc_FUN_0054b0e0(void)

{
  CTVBat *pCVar1;
  
  pCVar1 = (CTVBat *)FUN_0056497c(0xbf5c);
  if (pCVar1 == (CTVBat *)0x0) {
    return (CTVBat *)0x0;
  }
  pCVar1 = core_tvbat_cpp_CTVBat_ctor_FUN_0054b140(pCVar1);
  return pCVar1;
}
