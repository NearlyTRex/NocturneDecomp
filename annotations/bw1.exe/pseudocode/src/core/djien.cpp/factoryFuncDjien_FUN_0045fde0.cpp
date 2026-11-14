// Name: core_djien.cpp_factoryFuncDjien_FUN_0045fde0
// Address: 0045fde0
// Address Range: [[0045fde0, 0045fdfb]]
// Convention: __cdecl
// Signature: CDjien * __cdecl core_djien_cpp_factoryFuncDjien_FUN_0045fde0(void)

#include "nocturne.h"

CDjien * __cdecl core_djien_cpp_factoryFuncDjien_FUN_0045fde0(void)

{
  CDjien *pCVar1;
  
  pCVar1 = (CDjien *)operator_new(0xc9cc);
  if (pCVar1 == (CDjien *)0x0) {
    return (CDjien *)0x0;
  }
  pCVar1 = core_djien_cpp_CDjien_ctor_FUN_0045fe10(pCVar1);
  return pCVar1;
}
