// Name: core_trap.cpp_factoryFuncTrap_FUN_0056ccd0
// Address: 0056ccd0
// Address Range: [[0056ccd0, 0056cceb]]
// Convention: __cdecl
// Signature: CTrap * __cdecl core_trap_cpp_factoryFuncTrap_FUN_0056ccd0(void)

#include "nocturne.h"

CTrap * __cdecl core_trap_cpp_factoryFuncTrap_FUN_0056ccd0(void)

{
  CTrap *pCVar1;
  
  pCVar1 = (CTrap *)operator_new(0x2dc);
  if (pCVar1 == (CTrap *)0x0) {
    return (CTrap *)0x0;
  }
  pCVar1 = core_trap_cpp_CTrap_ctor_FUN_0056cd00(pCVar1);
  return pCVar1;
}
