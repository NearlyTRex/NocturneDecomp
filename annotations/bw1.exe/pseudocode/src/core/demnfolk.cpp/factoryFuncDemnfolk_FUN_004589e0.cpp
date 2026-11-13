// Name: core_demnfolk.cpp_factoryFuncDemnfolk_FUN_004589e0
// Address: 004589e0
// Address Range: [[004589e0, 004589fb]]
// Convention: __cdecl
// Signature: CDemnfolk * __cdecl core_demnfolk_cpp_factoryFuncDemnfolk_FUN_004589e0(void)

#include "nocturne.h"

CDemnfolk * __cdecl core_demnfolk_cpp_factoryFuncDemnfolk_FUN_004589e0(void)

{
  CDemnfolk *pCVar1;
  
  pCVar1 = (CDemnfolk *)operator_new(0xc370);
  if (pCVar1 == (CDemnfolk *)0x0) {
    return (CDemnfolk *)0x0;
  }
  pCVar1 = core_demnfolk_cpp_CDemnfolk_ctor_FUN_00458a10(pCVar1);
  return pCVar1;
}
