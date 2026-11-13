// Name: core_prye.cpp_factoryFuncPrye_FUN_00517f50
// Address: 00517f50
// Address Range: [[00517f50, 00517f6b]]
// Convention: __cdecl
// Signature: CPrye * __cdecl core_prye_cpp_factoryFuncPrye_FUN_00517f50(void)

#include "nocturne.h"

CPrye * __cdecl core_prye_cpp_factoryFuncPrye_FUN_00517f50(void)

{
  CPrye *pCVar1;
  
  pCVar1 = (CPrye *)operator_new(0x20d04);
  if (pCVar1 == (CPrye *)0x0) {
    return (CPrye *)0x0;
  }
  pCVar1 = core_prye_cpp_CPrye_ctor_FUN_00517f80(pCVar1);
  return pCVar1;
}
