// Name: core_anvil.cpp_factoryFuncAnvil_FUN_0040e5a0
// Address: 0040e5a0
// Address Range: [[0040e5a0, 0040e5bb]]
// Convention: __cdecl
// Signature: CAnvil * __cdecl core_anvil_cpp_factoryFuncAnvil_FUN_0040e5a0(void)

#include "nocturne.h"

CAnvil * __cdecl core_anvil_cpp_factoryFuncAnvil_FUN_0040e5a0(void)

{
  CAnvil *pCVar1;
  
  pCVar1 = (CAnvil *)operator_new(0x344);
  if (pCVar1 == (CAnvil *)0x0) {
    return (CAnvil *)0x0;
  }
  pCVar1 = core_anvil_cpp_CAnvil_ctor_FUN_0040e5d0(pCVar1);
  return pCVar1;
}
