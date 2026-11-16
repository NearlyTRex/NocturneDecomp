// Name: core_shadow.cpp_factoryFuncSpiritShadow_FUN_00545f00
// Address: 00545f00
// Address Range: [[00545f00, 00545f1b]]
// Convention: __cdecl
// Signature: CSpiritShadow * __cdecl core_shadow_cpp_factoryFuncSpiritShadow_FUN_00545f00(void)

#include "nocturne.h"

CSpiritShadow * __cdecl core_shadow_cpp_factoryFuncSpiritShadow_FUN_00545f00(void)

{
  CSpiritShadow *pCVar1;
  
  pCVar1 = (CSpiritShadow *)operator_new(0xd0e8);
  if (pCVar1 == (CSpiritShadow *)0x0) {
    return (CSpiritShadow *)0x0;
  }
  pCVar1 = core_shadow_cpp_CSpiritShadow_ctor_FUN_00545f30(pCVar1);
  return pCVar1;
}
