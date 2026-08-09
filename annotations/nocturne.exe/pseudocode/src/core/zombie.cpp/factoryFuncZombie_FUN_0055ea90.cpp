// Name: core_zombie.cpp_factoryFuncZombie_FUN_0055ea90
// Address: 0055ea90
// Address Range: [[0055ea90, 0055eaab]]
// Convention: __cdecl
// Signature: CZombie * __cdecl core_zombie_cpp_factoryFuncZombie_FUN_0055ea90(void)

#include "nocturne.h"

CZombie * __cdecl core_zombie_cpp_factoryFuncZombie_FUN_0055ea90(void)

{
  CZombie *pCVar1;
  
  pCVar1 = operator_new(0xbe14);
  if (pCVar1 == (CZombie *)0x0) {
    return (CZombie *)0x0;
  }
  pCVar1 = core_zombie_cpp_CZombie_ctor_FUN_0055eac0(pCVar1);
  return pCVar1;
}
