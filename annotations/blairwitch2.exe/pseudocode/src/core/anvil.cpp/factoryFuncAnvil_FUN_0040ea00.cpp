// Name: core_anvil.cpp_factoryFuncAnvil_FUN_0040ea00
// Address: 0040ea00
// Address Range: [[0040ea00, 0040ea1b]]
// Convention: __cdecl
// Signature: CAnvil * __cdecl core_anvil_cpp_factoryFuncAnvil_FUN_0040ea00(void)

#include "nocturne.h"

CAnvil * __cdecl core_anvil_cpp_factoryFuncAnvil_FUN_0040ea00(void)

{
  CAnvil *pCVar1;
  
  pCVar1 = (CAnvil *)operator_new(0x4a0);
  if (pCVar1 == (CAnvil *)0x0) {
    return (CAnvil *)0x0;
  }
  pCVar1 = core_anvil_cpp_CAnvil_ctor_FUN_0040ea30(pCVar1);
  return pCVar1;
}
