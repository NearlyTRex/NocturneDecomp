// Name: core_haystack.cpp_factoryFuncHaystack_FUN_004b3070
// Address: 004b3070
// Address Range: [[004b3070, 004b308b]]
// Convention: __cdecl
// Signature: CHaystack * __cdecl core_haystack_cpp_factoryFuncHaystack_FUN_004b3070(void)

#include "nocturne.h"

CHaystack * __cdecl core_haystack_cpp_factoryFuncHaystack_FUN_004b3070(void)

{
  CHaystack *pCVar1;
  
  pCVar1 = operator_new(0x1fa54);
  if (pCVar1 == (CHaystack *)0x0) {
    return (CHaystack *)0x0;
  }
  pCVar1 = core_haystack_cpp_CHaystack_ctor_FUN_004b30a0(pCVar1);
  return pCVar1;
}
