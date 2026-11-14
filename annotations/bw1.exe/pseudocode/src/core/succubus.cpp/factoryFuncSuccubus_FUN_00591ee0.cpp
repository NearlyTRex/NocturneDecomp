// Name: core_succubus.cpp_factoryFuncSuccubus_FUN_00591ee0
// Address: 00591ee0
// Address Range: [[00591ee0, 00591efb]]
// Convention: __cdecl
// Signature: CSuccubus * __cdecl core_succubus_cpp_factoryFuncSuccubus_FUN_00591ee0(void)

#include "nocturne.h"

CSuccubus * __cdecl core_succubus_cpp_factoryFuncSuccubus_FUN_00591ee0(void)

{
  CSuccubus *pCVar1;
  
  pCVar1 = (CSuccubus *)operator_new(0xf404);
  if (pCVar1 == (CSuccubus *)0x0) {
    return (CSuccubus *)0x0;
  }
  pCVar1 = core_succubus_cpp_CSuccubus_ctor_FUN_00591f10(pCVar1);
  return pCVar1;
}
