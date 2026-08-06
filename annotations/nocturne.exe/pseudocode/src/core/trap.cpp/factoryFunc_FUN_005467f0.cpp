// Name: core_trap.cpp_factoryFunc_FUN_005467f0
// Address: 005467f0
// Address Range: [[005467f0, 0054680b]]
// Convention: __cdecl
// Signature: CTrap * __cdecl core_trap_cpp_factoryFunc_FUN_005467f0(void)

#include "nocturne.h"

CTrap * __cdecl core_trap_cpp_factoryFunc_FUN_005467f0(void)

{
  CTrap *pCVar1;
  
  pCVar1 = operator_new(0x2d4);
  if (pCVar1 == (CTrap *)0x0) {
    return (CTrap *)0x0;
  }
  pCVar1 = core_trap_cpp_CTrap_ctor_FUN_00546820(pCVar1);
  return pCVar1;
}
