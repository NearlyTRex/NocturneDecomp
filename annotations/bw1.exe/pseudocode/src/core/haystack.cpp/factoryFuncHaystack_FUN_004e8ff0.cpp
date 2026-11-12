// Name: core_haystack.cpp_factoryFuncHaystack_FUN_004e8ff0
// Address: 004e8ff0
// Address Range: [[004e8ff0, 004e900b]]
// Convention: __cdecl
// Signature: CHaystack * __cdecl core_haystack_cpp_factoryFuncHaystack_FUN_004e8ff0(void)

#include "nocturne.h"

CHaystack * __cdecl core_haystack_cpp_factoryFuncHaystack_FUN_004e8ff0(void)

{
  CHaystack *pCVar1;
  
  pCVar1 = (CHaystack *)operator_new(0x1ffc4);
  if (pCVar1 == (CHaystack *)0x0) {
    return (CHaystack *)0x0;
  }
  pCVar1 = core_haystack_cpp_CHaystack_ctor_FUN_004e9020(pCVar1);
  return pCVar1;
}
