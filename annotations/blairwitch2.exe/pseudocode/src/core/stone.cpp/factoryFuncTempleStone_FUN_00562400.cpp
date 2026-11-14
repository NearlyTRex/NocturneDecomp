// Name: core_stone.cpp_factoryFuncTempleStone_FUN_00562400
// Address: 00562400
// Address Range: [[00562400, 0056241b]]
// Convention: __cdecl
// Signature: CTempleStone * __cdecl core_stone_cpp_factoryFuncTempleStone_FUN_00562400(void)

#include "nocturne.h"

CTempleStone * __cdecl core_stone_cpp_factoryFuncTempleStone_FUN_00562400(void)

{
  CTempleStone *pCVar1;
  
  pCVar1 = (CTempleStone *)operator_new(0x7d8);
  if (pCVar1 == (CTempleStone *)0x0) {
    return (CTempleStone *)0x0;
  }
  pCVar1 = core_stone_cpp_CTempleStone_ctor_FUN_00562430(pCVar1);
  return pCVar1;
}
