// Name: core_trap.cpp_factoryFunc_FUN_005467f0
// Address: 005467f0
// Address Range: [[005467f0, 0054680b]]
// Convention: __cdecl
// Signature: CTrap * __cdecl core_trap_cpp_factoryFunc_FUN_005467f0(void)

#include "nocturne.h"

CTrap * __cdecl core_trap_cpp_factoryFunc_FUN_005467f0(void)

{
  int iVar1;
  CTrap *pCVar2;
  
  iVar1 = FUN_0056497c(0x2d4);
  if (iVar1 == 0) {
    return (CTrap *)0x0;
  }
  pCVar2 = (CTrap *)core_trap_cpp_FUN_00546820(iVar1);
  return pCVar2;
}
