// Name: core_trap.cpp_factoryFuncTrap_FUN_00599ce0
// Address: 00599ce0
// Address Range: [[00599ce0, 00599cfb]]
// Convention: __cdecl
// Signature: CTrap * __cdecl core_trap_cpp_factoryFuncTrap_FUN_00599ce0(void)

#include "nocturne.h"

CTrap * __cdecl core_trap_cpp_factoryFuncTrap_FUN_00599ce0(void)

{
  CTrap *pCVar1;
  
  pCVar1 = (CTrap *)operator_new(0x2dc);
  if (pCVar1 == (CTrap *)0x0) {
    return (CTrap *)0x0;
  }
  pCVar1 = core_trap_cpp_CTrap_ctor_FUN_00599d10(pCVar1);
  return pCVar1;
}
