// Name: core_spirindi.cpp_factoryFuncSpiritIndian_FUN_00599f30
// Address: 00599f30
// Address Range: [[00599f30, 00599f4b]]
// Convention: __cdecl
// Signature: CSpiritIndian * __cdecl core_spirindi_cpp_factoryFuncSpiritIndian_FUN_00599f30(void)

#include "nocturne.h"

CSpiritIndian * __cdecl core_spirindi_cpp_factoryFuncSpiritIndian_FUN_00599f30(void)

{
  CSpiritIndian *pCVar1;
  
  pCVar1 = (CSpiritIndian *)operator_new(0x34da4);
  if (pCVar1 == (CSpiritIndian *)0x0) {
    return (CSpiritIndian *)0x0;
  }
  pCVar1 = core_spirindi_cpp_CSpiritIndian_ctor_FUN_00599f60(pCVar1);
  return pCVar1;
}
