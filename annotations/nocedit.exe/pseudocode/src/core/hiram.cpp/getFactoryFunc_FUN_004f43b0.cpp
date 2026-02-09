// Name: core_hiram.cpp_getFactoryFunc_FUN_004f43b0
// Address: 004f43b0
// Address Range: [[004f43b0, 004f43d2]]
// Convention: __cdecl
// Signature: CHiram * __cdecl core_hiram_cpp_getFactoryFunc_FUN_004f43b0(void)

#include "nocturne.h"

CHiram * __cdecl core_hiram_cpp_getFactoryFunc_FUN_004f43b0(void)

{
  CHiram *pCVar1;
  
  pCVar1 = (CHiram *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x1f76c,"..\\core\\hiram.cpp",0x2c);
  if (pCVar1 == (CHiram *)0x0) {
    return (CHiram *)0x0;
  }
  pCVar1 = core_hiram_cpp_CHiram_ctor_FUN_004f43f0(pCVar1);
  return pCVar1;
}
