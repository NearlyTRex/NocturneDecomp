// Name: core_hiram.cpp_factoryFuncHiram_FUN_004d0f00
// Address: 004d0f00
// Address Range: [[004d0f00, 004d0f1b]]
// Convention: __cdecl
// Signature: CHiram * __cdecl core_hiram_cpp_factoryFuncHiram_FUN_004d0f00(void)

#include "nocturne.h"

CHiram * __cdecl core_hiram_cpp_factoryFuncHiram_FUN_004d0f00(void)

{
  CHiram *pCVar1;
  
  pCVar1 = (CHiram *)operator_new(0x243ac);
  if (pCVar1 == (CHiram *)0x0) {
    return (CHiram *)0x0;
  }
  pCVar1 = core_hiram_cpp_CHiram_ctor_FUN_004d0f30(pCVar1);
  return pCVar1;
}
