// Name: core_armour.cpp_factoryFunc_FUN_0040f930
// Address: 0040f930
// Address Range: [[0040f930, 0040f94b]]
// Convention: __cdecl
// Signature: CArmour * __cdecl core_armour_cpp_factoryFunc_FUN_0040f930(void)

#include "nocturne.h"

CArmour * __cdecl core_armour_cpp_factoryFunc_FUN_0040f930(void)

{
  CArmour *pCVar1;
  
  pCVar1 = (CArmour *)FUN_0056497c(0xbd88);
  if (pCVar1 == (CArmour *)0x0) {
    return (CArmour *)0x0;
  }
  pCVar1 = core_armour_cpp_FUN_0040f960(pCVar1);
  return pCVar1;
}
