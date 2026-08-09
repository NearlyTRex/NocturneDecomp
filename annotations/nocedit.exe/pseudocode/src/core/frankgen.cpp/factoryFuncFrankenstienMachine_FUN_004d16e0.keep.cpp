// Name: core_frankgen.cpp_factoryFuncFrankenstienMachine_FUN_004d16e0
// Address: 004d16e0
// MANUAL RECONSTRUCTION
// Address Range: [[004d16e0, 004d1702]]
// Convention: __cdecl
// Signature: CFrankenstienMachine * __cdecl core_frankgen_cpp_factoryFuncFrankenstienMachine_FUN_004d16e0(void)

#include "nocturne.h"

CFrankenstienMachine * __cdecl core_frankgen_cpp_factoryFuncFrankenstienMachine_FUN_004d16e0(void)

{
  CFrankenstienMachine *pCVar1;
  
  pCVar1 = (CFrankenstienMachine *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(sizeof(CFrankenstienMachine),"..\\core\\frankgen.cpp",117)
  ;
  if (pCVar1 == (CFrankenstienMachine *)0x0) {
    return (CFrankenstienMachine *)0x0;
  }
  pCVar1 = core_frankgen_cpp_CFrankenstienMachine_ctor_FUN_004d1720(pCVar1);
  return pCVar1;
}
