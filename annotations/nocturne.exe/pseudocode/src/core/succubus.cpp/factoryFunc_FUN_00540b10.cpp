// Name: core_succubus.cpp_factoryFunc_FUN_00540b10
// Address: 00540b10
// Address Range: [[00540b10, 00540b2b]]
// Convention: __cdecl
// Signature: CSuccubus * __cdecl core_succubus_cpp_factoryFunc_FUN_00540b10(void)

#include "nocturne.h"

CSuccubus * __cdecl core_succubus_cpp_factoryFunc_FUN_00540b10(void)

{
  CSuccubus *pCVar1;
  
  pCVar1 = operator_new(0xedd0);
  if (pCVar1 == (CSuccubus *)0x0) {
    return (CSuccubus *)0x0;
  }
  pCVar1 = core_succubus_cpp_CSuccubus_ctor_FUN_00540b40(pCVar1);
  return pCVar1;
}
