// Name: core_zombie.cpp_factoryFuncZombie_FUN_00595a60
// Address: 00595a60
// Address Range: [[00595a60, 00595a7b]]
// Convention: __cdecl
// Signature: CZombie * __cdecl core_zombie_cpp_factoryFuncZombie_FUN_00595a60(void)

#include "nocturne.h"

CZombie * __cdecl core_zombie_cpp_factoryFuncZombie_FUN_00595a60(void)

{
  CZombie *pCVar1;
  
  pCVar1 = (CZombie *)operator_new(0x10be8);
  if (pCVar1 == (CZombie *)0x0) {
    return (CZombie *)0x0;
  }
  pCVar1 = core_zombie_cpp_CZombie_ctor_FUN_00595a90(pCVar1);
  return pCVar1;
}
