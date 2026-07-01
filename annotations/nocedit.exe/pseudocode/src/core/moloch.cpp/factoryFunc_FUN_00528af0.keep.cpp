// Name: core_moloch.cpp_factoryFunc_FUN_00528af0
// Address: 00528af0
// MANUAL RECONSTRUCTION
// Address Range: [[00528af0, 00528b12]]
// Convention: __cdecl
// Signature: CMoloch * __cdecl core_moloch_cpp_factoryFunc_FUN_00528af0(void)

#include "nocturne.h"

CMoloch * __cdecl core_moloch_cpp_factoryFunc_FUN_00528af0(void)

{
  CMoloch *pCVar1;
  
  pCVar1 = (CMoloch *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(sizeof(CMoloch),"..\\core\\moloch.cpp",46)
  ;
  if (pCVar1 == (CMoloch *)0x0) {
    return (CMoloch *)0x0;
  }
  pCVar1 = core_moloch_cpp_CMoloch_ctor_FUN_00528b30(pCVar1);
  return pCVar1;
}
