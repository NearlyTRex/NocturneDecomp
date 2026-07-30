// Name: core_haystack.cpp_factoryFunc_FUN_004b3070
// Address: 004b3070
// Address Range: [[004b3070, 004b308b]]
// Convention: __cdecl
// Signature: CHaystack * __cdecl core_haystack_cpp_factoryFunc_FUN_004b3070(void)

#include "nocturne.h"

CHaystack * __cdecl core_haystack_cpp_factoryFunc_FUN_004b3070(void)

{
  int iVar1;
  CHaystack *pCVar2;
  
  iVar1 = FUN_0056497c(0x1fa54);
  if (iVar1 == 0) {
    return (CHaystack *)0x0;
  }
  pCVar2 = (CHaystack *)core_haystack_cpp_FUN_004b30a0(iVar1);
  return pCVar2;
}
