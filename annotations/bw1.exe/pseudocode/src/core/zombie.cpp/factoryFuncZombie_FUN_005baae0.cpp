// Name: core_zombie.cpp_factoryFuncZombie_FUN_005baae0
// Address: 005baae0
// Address Range: [[005baae0, 005baafb]]
// Convention: __cdecl
// Signature: CZombie * __cdecl core_zombie_cpp_factoryFuncZombie_FUN_005baae0(void)

#include "nocturne.h"

CZombie * __cdecl core_zombie_cpp_factoryFuncZombie_FUN_005baae0(void)

{
  CZombie *pCVar1;
  
  pCVar1 = (CZombie *)operator_new(0xc358);
  if (pCVar1 == (CZombie *)0x0) {
    return (CZombie *)0x0;
  }
  pCVar1 = core_zombie_cpp_CZombie_ctor_FUN_005bab10(pCVar1);
  return pCVar1;
}
