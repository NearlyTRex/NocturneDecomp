// Name: core_zombie.cpp_factoryFuncZombie_FUN_005888a0
// Address: 005888a0
// Address Range: [[005888a0, 005888bb]]
// Convention: __cdecl
// Signature: CZombie * __cdecl core_zombie_cpp_factoryFuncZombie_FUN_005888a0(void)

#include "nocturne.h"

CZombie * __cdecl core_zombie_cpp_factoryFuncZombie_FUN_005888a0(void)

{
  CZombie *pCVar1;
  
  pCVar1 = (CZombie *)operator_new(0xd14c);
  if (pCVar1 == (CZombie *)0x0) {
    return (CZombie *)0x0;
  }
  pCVar1 = core_zombie_cpp_CZombie_ctor_FUN_005888d0(pCVar1);
  return pCVar1;
}
