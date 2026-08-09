// Name: core_scat.cpp_factoryFuncScat_FUN_00556e90
// Address: 00556e90
// Address Range: [[00556e90, 00556eb5]]
// Convention: __cdecl
// Signature: CScat * __cdecl core_scat_cpp_factoryFuncScat_FUN_00556e90(void)

#include "nocturne.h"

CScat * __cdecl core_scat_cpp_factoryFuncScat_FUN_00556e90(void)

{
  CScat *pCVar1;
  
  pCVar1 = (CScat *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(0x1fc00,"..\\core\\scat.cpp",135);
  if (pCVar1 == (CScat *)0x0) {
    return (CScat *)0x0;
  }
  pCVar1 = core_scat_cpp_CScat_ctor_FUN_00556ed0(pCVar1);
  return pCVar1;
}
