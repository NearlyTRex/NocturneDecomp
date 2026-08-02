// Name: core_hiram.cpp_factoryFunc_FUN_004b65e0
// Address: 004b65e0
// Address Range: [[004b65e0, 004b65fb]]
// Convention: __cdecl
// Signature: CHiram * __cdecl core_hiram_cpp_factoryFunc_FUN_004b65e0(void)

#include "nocturne.h"

CHiram * __cdecl core_hiram_cpp_factoryFunc_FUN_004b65e0(void)

{
  CHiram *pCVar1;
  
  pCVar1 = (CHiram *)FUN_0056497c(0x1f5d4);
  if (pCVar1 == (CHiram *)0x0) {
    return (CHiram *)0x0;
  }
  pCVar1 = core_hiram_cpp_CHiram_ctor_FUN_004b6610(pCVar1);
  return pCVar1;
}
