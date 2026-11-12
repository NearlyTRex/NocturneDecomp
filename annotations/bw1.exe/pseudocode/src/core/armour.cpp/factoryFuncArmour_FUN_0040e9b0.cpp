// Name: core_armour.cpp_factoryFuncArmour_FUN_0040e9b0
// Address: 0040e9b0
// Address Range: [[0040e9b0, 0040e9cb]]
// Convention: __cdecl
// Signature: CArmour * __cdecl core_armour_cpp_factoryFuncArmour_FUN_0040e9b0(void)

#include "nocturne.h"

CArmour * __cdecl core_armour_cpp_factoryFuncArmour_FUN_0040e9b0(void)

{
  CArmour *pCVar1;
  
  pCVar1 = (CArmour *)operator_new(0xc2cc);
  if (pCVar1 == (CArmour *)0x0) {
    return (CArmour *)0x0;
  }
  pCVar1 = core_armour_cpp_CArmour_ctor_FUN_0040e9e0(pCVar1);
  return pCVar1;
}
