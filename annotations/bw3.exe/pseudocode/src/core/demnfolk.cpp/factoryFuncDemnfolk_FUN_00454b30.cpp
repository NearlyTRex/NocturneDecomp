// Name: core_demnfolk.cpp_factoryFuncDemnfolk_FUN_00454b30
// Address: 00454b30
// Address Range: [[00454b30, 00454b4b]]
// Convention: __cdecl
// Signature: CDemnfolk * __cdecl core_demnfolk_cpp_factoryFuncDemnfolk_FUN_00454b30(void)

#include "nocturne.h"

CDemnfolk * __cdecl core_demnfolk_cpp_factoryFuncDemnfolk_FUN_00454b30(void)

{
  CDemnfolk *pCVar1;
  
  pCVar1 = (CDemnfolk *)operator_new(0xd14c);
  if (pCVar1 == (CDemnfolk *)0x0) {
    return (CDemnfolk *)0x0;
  }
  pCVar1 = core_demnfolk_cpp_CDemnfolk_ctor_FUN_00454b60(pCVar1);
  return pCVar1;
}
