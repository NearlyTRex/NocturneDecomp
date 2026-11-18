// Name: core_zombie.cpp_factoryFuncZombieForest_FUN_0058cd20
// Address: 0058cd20
// Address Range: [[0058cd20, 0058cd3b]]
// Convention: __cdecl
// Signature: CZombieForest * __cdecl core_zombie_cpp_factoryFuncZombieForest_FUN_0058cd20(void)

#include "nocturne.h"

CZombieForest * __cdecl core_zombie_cpp_factoryFuncZombieForest_FUN_0058cd20(void)

{
  CZombieForest *pCVar1;
  
  pCVar1 = operator_new(0xd14c);
  if (pCVar1 == (CZombieForest *)0x0) {
    return (CZombieForest *)0x0;
  }
  pCVar1 = core_zombie_cpp_CZombieForest_ctor_FUN_0058cd50(pCVar1);
  return pCVar1;
}
