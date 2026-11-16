// Name: core_zombie.cpp_factoryFuncZombieIndian_FUN_0058ce40
// Address: 0058ce40
// Address Range: [[0058ce40, 0058ce5b]]
// Convention: __cdecl
// Signature: CZombieIndian * __cdecl core_zombie_cpp_factoryFuncZombieIndian_FUN_0058ce40(void)

#include "nocturne.h"

CZombieIndian * __cdecl core_zombie_cpp_factoryFuncZombieIndian_FUN_0058ce40(void)

{
  CZombieIndian *pCVar1;
  
  pCVar1 = operator_new(0xd14c);
  if (pCVar1 == (CZombieIndian *)0x0) {
    return (CZombieIndian *)0x0;
  }
  pCVar1 = core_zombie_cpp_CZombieIndian_ctor_FUN_0058ce70(pCVar1);
  return pCVar1;
}
