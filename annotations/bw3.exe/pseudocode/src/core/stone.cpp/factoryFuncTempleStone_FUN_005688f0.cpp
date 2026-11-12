// Name: core_stone.cpp_factoryFuncTempleStone_FUN_005688f0
// Address: 005688f0
// Address Range: [[005688f0, 0056890b]]
// Convention: __cdecl
// Signature: CTempleStone * __cdecl core_stone_cpp_factoryFuncTempleStone_FUN_005688f0(void)

#include "nocturne.h"

CTempleStone * __cdecl core_stone_cpp_factoryFuncTempleStone_FUN_005688f0(void)

{
  CTempleStone *pCVar1;
  
  pCVar1 = (CTempleStone *)operator_new(0x6ec);
  if (pCVar1 == (CTempleStone *)0x0) {
    return (CTempleStone *)0x0;
  }
  pCVar1 = core_stone_cpp_CTempleStone_ctor_FUN_00568920(pCVar1);
  return pCVar1;
}
