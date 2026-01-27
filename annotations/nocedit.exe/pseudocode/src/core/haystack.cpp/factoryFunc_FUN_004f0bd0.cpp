// Name: core_haystack.cpp_factoryFunc_FUN_004f0bd0
// Address: 004f0bd0
// Address Range: [[004f0bd0, 004f0bf2]]
// Convention: __cdecl
// Signature: CHaystack * core_haystack.cpp_factoryFunc_FUN_004f0bd0(void)

#include "nocturne.h"

CHaystack * __cdecl core_haystack_cpp_factoryFunc_FUN_004f0bd0(void)

{
  CHaystack *pCVar1;
  
  pCVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x1fbec,"..\\core\\haystack.cpp",0x5c);
  if (pCVar1 == (CHaystack *)0x0) {
    return (CHaystack *)0x0;
  }
  pCVar1 = core_haystack_cpp_CHaystack_ctor_FUN_004f0c10(pCVar1);
  return pCVar1;
}
