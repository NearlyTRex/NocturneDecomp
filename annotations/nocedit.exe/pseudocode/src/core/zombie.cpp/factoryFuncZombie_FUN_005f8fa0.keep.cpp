// Name: core_zombie.cpp_factoryFuncZombie_FUN_005f8fa0
// Address: 005f8fa0
// MANUAL RECONSTRUCTION
// Address Range: [[005f8fa0, 005f8fc5]]
// Convention: __cdecl
// Signature: CZombie * __cdecl core_zombie_cpp_factoryFuncZombie_FUN_005f8fa0(void)

#include "nocturne.h"

CZombie * __cdecl core_zombie_cpp_factoryFuncZombie_FUN_005f8fa0(void)

{
  CZombie *pCVar1;
  
  pCVar1 = (CZombie *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(sizeof(CZombie),"..\\core\\zombie.cpp",200);
  if (pCVar1 == (CZombie *)0x0) {
    return (CZombie *)0x0;
  }
  pCVar1 = core_zombie_cpp_CZombie_ctor_FUN_005f8fe0(pCVar1);
  return pCVar1;
}
