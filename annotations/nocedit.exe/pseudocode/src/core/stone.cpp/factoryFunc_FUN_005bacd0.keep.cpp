// Name: core_stone.cpp_factoryFunc_FUN_005bacd0
// Address: 005bacd0
// MANUAL RECONSTRUCTION
// Address Range: [[005bacd0, 005bacf2]]
// Convention: __cdecl
// Signature: CTempleStone * __cdecl core_stone_cpp_factoryFunc_FUN_005bacd0(void)

#include "nocturne.h"

CTempleStone * __cdecl core_stone_cpp_factoryFunc_FUN_005bacd0(void)

{
  CTempleStone *pCVar1;
  
  pCVar1 = (CTempleStone *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(sizeof(CTempleStone),"..\\core\\stone.cpp",30);
  if (pCVar1 == (CTempleStone *)0x0) {
    return (CTempleStone *)0x0;
  }
  pCVar1 = core_stone_cpp_CTempleStone_ctor_FUN_005bad10(pCVar1);
  return pCVar1;
}
