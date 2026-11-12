// Name: core_stone.cpp_factoryFuncTempleStone_FUN_00584e80
// Address: 00584e80
// Address Range: [[00584e80, 00584e9b]]
// Convention: __cdecl
// Signature: CTempleStone * __cdecl core_stone_cpp_factoryFuncTempleStone_FUN_00584e80(void)

#include "nocturne.h"

CTempleStone * __cdecl core_stone_cpp_factoryFuncTempleStone_FUN_00584e80(void)

{
  CTempleStone *pCVar1;
  
  pCVar1 = (CTempleStone *)operator_new(0x67c);
  if (pCVar1 == (CTempleStone *)0x0) {
    return (CTempleStone *)0x0;
  }
  pCVar1 = core_stone_cpp_CTempleStone_ctor_FUN_00584eb0(pCVar1);
  return pCVar1;
}
