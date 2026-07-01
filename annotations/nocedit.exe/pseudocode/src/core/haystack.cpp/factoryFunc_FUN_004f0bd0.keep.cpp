// Name: core_haystack.cpp_factoryFunc_FUN_004f0bd0
// Address: 004f0bd0
// MANUAL RECONSTRUCTION
// Address Range: [[004f0bd0, 004f0bf2]]
// Convention: __cdecl
// Signature: CHaystack * __cdecl core_haystack_cpp_factoryFunc_FUN_004f0bd0(void)

#include "nocturne.h"

CHaystack * __cdecl core_haystack_cpp_factoryFunc_FUN_004f0bd0(void)

{
  CHaystack *pCVar1;
  
  pCVar1 = (CHaystack *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0
                     (sizeof(CHaystack),"..\\core\\haystack.cpp",92);
  if (pCVar1 == (CHaystack *)0x0) {
    return (CHaystack *)0x0;
  }
  pCVar1 = core_haystack_cpp_CHaystack_ctor_FUN_004f0c10(pCVar1);
  return pCVar1;
}
