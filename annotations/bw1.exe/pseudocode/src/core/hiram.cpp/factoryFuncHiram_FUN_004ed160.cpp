// Name: core_hiram.cpp_factoryFuncHiram_FUN_004ed160
// Address: 004ed160
// Address Range: [[004ed160, 004ed17b]]
// Convention: __cdecl
// Signature: CHiram * __cdecl core_hiram_cpp_factoryFuncHiram_FUN_004ed160(void)

#include "nocturne.h"

CHiram * __cdecl core_hiram_cpp_factoryFuncHiram_FUN_004ed160(void)

{
  CHiram *pCVar1;
  
  pCVar1 = (CHiram *)operator_new(0x1fb1c);
  if (pCVar1 == (CHiram *)0x0) {
    return (CHiram *)0x0;
  }
  pCVar1 = core_hiram_cpp_CHiram_ctor_FUN_004ed190(pCVar1);
  return pCVar1;
}
