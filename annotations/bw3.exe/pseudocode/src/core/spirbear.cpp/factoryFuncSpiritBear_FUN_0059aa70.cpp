// Name: core_spirbear.cpp_factoryFuncSpiritBear_FUN_0059aa70
// Address: 0059aa70
// Address Range: [[0059aa70, 0059aa8b]]
// Convention: __cdecl
// Signature: CSpiritBear * __cdecl core_spirbear_cpp_factoryFuncSpiritBear_FUN_0059aa70(void)

#include "nocturne.h"

CSpiritBear * __cdecl core_spirbear_cpp_factoryFuncSpiritBear_FUN_0059aa70(void)

{
  CSpiritBear *pCVar1;
  
  pCVar1 = (CSpiritBear *)operator_new(0x34da4);
  if (pCVar1 == (CSpiritBear *)0x0) {
    return (CSpiritBear *)0x0;
  }
  pCVar1 = core_spirbear_cpp_CSpiritBear_ctor_FUN_0059aaa0(pCVar1);
  return pCVar1;
}
