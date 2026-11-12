// Name: core_haystack.cpp_factoryFuncHaystack_FUN_004cc730
// Address: 004cc730
// Address Range: [[004cc730, 004cc74b]]
// Convention: __cdecl
// Signature: CHaystack * __cdecl core_haystack_cpp_factoryFuncHaystack_FUN_004cc730(void)

#include "nocturne.h"

CHaystack * __cdecl core_haystack_cpp_factoryFuncHaystack_FUN_004cc730(void)

{
  CHaystack *pCVar1;
  
  pCVar1 = (CHaystack *)operator_new(0x25658);
  if (pCVar1 == (CHaystack *)0x0) {
    return (CHaystack *)0x0;
  }
  pCVar1 = core_haystack_cpp_CHaystack_ctor_FUN_004cc760(pCVar1);
  return pCVar1;
}
