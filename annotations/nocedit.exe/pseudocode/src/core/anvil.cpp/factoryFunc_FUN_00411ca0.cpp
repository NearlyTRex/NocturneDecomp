// Name: core_anvil.cpp_factoryFunc_FUN_00411ca0
// Address: 00411ca0
// Address Range: [[00411ca0, 00411cc2]]
// Convention: __cdecl
// Signature: CAnvil * __cdecl core_anvil_cpp_factoryFunc_FUN_00411ca0(void)

#include "nocturne.h"

CAnvil * __cdecl core_anvil_cpp_factoryFunc_FUN_00411ca0(void)

{
  CAnvil *pCVar1;
  
  pCVar1 = (CAnvil *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(0x344,"..\\core\\anvil.cpp",32);
  if (pCVar1 == (CAnvil *)0x0) {
    return (CAnvil *)0x0;
  }
  pCVar1 = core_anvil_cpp_CAnvil_ctor_FUN_00411ce0(pCVar1);
  return pCVar1;
}
