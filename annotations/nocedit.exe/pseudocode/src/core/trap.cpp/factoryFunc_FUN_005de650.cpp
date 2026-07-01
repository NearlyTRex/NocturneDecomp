// Name: core_trap.cpp_factoryFunc_FUN_005de650
// Address: 005de650
// Address Range: [[005de650, 005de672]]
// Convention: __cdecl
// Signature: CTrap * __cdecl core_trap_cpp_factoryFunc_FUN_005de650(void)

#include "nocturne.h"

CTrap * __cdecl core_trap_cpp_factoryFunc_FUN_005de650(void)

{
  CTrap *pCVar1;
  
  pCVar1 = (CTrap *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(0x2dc,"..\\core\\trap.cpp",32);
  if (pCVar1 == (CTrap *)0x0) {
    return (CTrap *)0x0;
  }
  pCVar1 = core_trap_cpp_CTrap_ctor_FUN_005de690(pCVar1);
  return pCVar1;
}
