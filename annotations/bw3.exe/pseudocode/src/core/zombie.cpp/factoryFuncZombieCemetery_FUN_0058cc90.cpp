// Name: core_zombie.cpp_factoryFuncZombieCemetery_FUN_0058cc90
// Address: 0058cc90
// Address Range: [[0058cc90, 0058ccab]]
// Convention: __cdecl
// Signature: CZombieCemetery * __cdecl core_zombie_cpp_factoryFuncZombieCemetery_FUN_0058cc90(void)

#include "nocturne.h"

CZombieCemetery * __cdecl core_zombie_cpp_factoryFuncZombieCemetery_FUN_0058cc90(void)

{
  CZombieCemetery *pCVar1;
  
  pCVar1 = operator_new(0xd14c);
  if (pCVar1 == (CZombieCemetery *)0x0) {
    return (CZombieCemetery *)0x0;
  }
  pCVar1 = core_zombie_cpp_CZombieCemetery_ctor_FUN_0058ccc0(pCVar1);
  return pCVar1;
}
