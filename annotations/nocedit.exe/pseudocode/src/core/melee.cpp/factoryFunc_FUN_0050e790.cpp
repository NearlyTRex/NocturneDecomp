// Name: core_melee.cpp_factoryFunc_FUN_0050e790
// Address: 0050e790
// Address Range: [[0050e790, 0050e7b2]]
// Convention: __cdecl
// Signature: CMelee * __cdecl core_melee_cpp_factoryFunc_FUN_0050e790(void)

#include "nocturne.h"

CMelee * __cdecl core_melee_cpp_factoryFunc_FUN_0050e790(void)

{
  CMelee *pCVar1;
  
  pCVar1 = (CMelee *)shape_memdbg_cpp_debugAllocTracked_FUN_0050f1b0(0x6cc,"..\\core\\melee.cpp",0x26);
  if (pCVar1 == (CMelee *)0x0) {
    return (CMelee *)0x0;
  }
  pCVar1 = core_melee_cpp_CMelee_ctor_FUN_0050e7d0(pCVar1);
  return pCVar1;
}
