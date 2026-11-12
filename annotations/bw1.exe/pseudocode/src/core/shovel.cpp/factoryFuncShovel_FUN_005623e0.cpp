// Name: core_shovel.cpp_factoryFuncShovel_FUN_005623e0
// Address: 005623e0
// Address Range: [[005623e0, 005623fb]]
// Convention: __cdecl
// Signature: CShovel * __cdecl core_shovel_cpp_factoryFuncShovel_FUN_005623e0(void)

#include "nocturne.h"

CShovel * __cdecl core_shovel_cpp_factoryFuncShovel_FUN_005623e0(void)

{
  CShovel *pCVar1;
  
  pCVar1 = (CShovel *)operator_new(0x578);
  if (pCVar1 == (CShovel *)0x0) {
    return (CShovel *)0x0;
  }
  pCVar1 = core_shovel_cpp_CShovel_ctor_FUN_00562410(pCVar1);
  return pCVar1;
}
