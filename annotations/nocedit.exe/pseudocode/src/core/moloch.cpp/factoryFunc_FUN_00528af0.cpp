// Name: core_moloch.cpp_factoryFunc_FUN_00528af0
// Address: 00528af0
// Address Range: [[00528af0, 00528b12]]
// Convention: __cdecl
// Signature: CMoloch * core_moloch.cpp_factoryFunc_FUN_00528af0(void)

#include "nocturne.h"

CMoloch * __cdecl core_moloch_cpp_factoryFunc_FUN_00528af0(void)

{
  CMoloch *pCVar1;
  
  pCVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x22b98,"..\\core\\moloch.cpp",0x2e);
  if (pCVar1 == (CMoloch *)0x0) {
    return (CMoloch *)0x0;
  }
  pCVar1 = core_moloch_cpp_CMoloch_ctor_FUN_00528b30(pCVar1);
  return pCVar1;
}
