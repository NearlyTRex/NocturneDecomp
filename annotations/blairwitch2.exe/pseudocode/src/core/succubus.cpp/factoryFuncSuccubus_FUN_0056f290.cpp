// Name: core_succubus.cpp_factoryFuncSuccubus_FUN_0056f290
// Address: 0056f290
// Address Range: [[0056f290, 0056f2ab]]
// Convention: __cdecl
// Signature: CSuccubus * __cdecl core_succubus_cpp_factoryFuncSuccubus_FUN_0056f290(void)

#include "nocturne.h"

CSuccubus * __cdecl core_succubus_cpp_factoryFuncSuccubus_FUN_0056f290(void)

{
  CSuccubus *pCVar1;
  
  pCVar1 = (CSuccubus *)operator_new(0x13ba4);
  if (pCVar1 == (CSuccubus *)0x0) {
    return (CSuccubus *)0x0;
  }
  pCVar1 = core_succubus_cpp_CSuccubus_ctor_FUN_0056f2c0(pCVar1);
  return pCVar1;
}
