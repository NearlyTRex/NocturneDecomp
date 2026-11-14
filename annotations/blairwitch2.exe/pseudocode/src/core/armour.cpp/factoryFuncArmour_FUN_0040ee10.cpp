// Name: core_armour.cpp_factoryFuncArmour_FUN_0040ee10
// Address: 0040ee10
// Address Range: [[0040ee10, 0040ee2b]]
// Convention: __cdecl
// Signature: CArmour * __cdecl core_armour_cpp_factoryFuncArmour_FUN_0040ee10(void)

#include "nocturne.h"

CArmour * __cdecl core_armour_cpp_factoryFuncArmour_FUN_0040ee10(void)

{
  CArmour *pCVar1;
  
  pCVar1 = (CArmour *)operator_new(0x10b5c);
  if (pCVar1 == (CArmour *)0x0) {
    return (CArmour *)0x0;
  }
  pCVar1 = core_armour_cpp_CArmour_ctor_FUN_0040ee40(pCVar1);
  return pCVar1;
}
