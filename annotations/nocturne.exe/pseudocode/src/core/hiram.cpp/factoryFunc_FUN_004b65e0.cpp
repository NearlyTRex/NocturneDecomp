// Name: core_hiram.cpp_factoryFunc_FUN_004b65e0
// Address: 004b65e0
// Address Range: [[004b65e0, 004b65fb]]
// Convention: __cdecl
// Signature: CHiram * __cdecl core_hiram_cpp_factoryFunc_FUN_004b65e0(void)

#include "nocturne.h"

CHiram * __cdecl core_hiram_cpp_factoryFunc_FUN_004b65e0(void)

{
  int iVar1;
  CHiram *pCVar2;
  
  iVar1 = FUN_0056497c(0x1f5d4);
  if (iVar1 == 0) {
    return (CHiram *)0x0;
  }
  pCVar2 = (CHiram *)core_hiram_cpp_FUN_004b6610(iVar1);
  return pCVar2;
}
