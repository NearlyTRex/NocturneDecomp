// Name: core_stone.cpp_factoryFunc_FUN_00534cd0
// Address: 00534cd0
// Address Range: [[00534cd0, 00534ceb]]
// Convention: __cdecl
// Signature: CTempleStone * __cdecl core_stone_cpp_factoryFunc_FUN_00534cd0(void)

#include "nocturne.h"

CTempleStone * __cdecl core_stone_cpp_factoryFunc_FUN_00534cd0(void)

{
  CTempleStone *pCVar1;
  
  pCVar1 = (CTempleStone *)FUN_0056497c(0x668);
  if (pCVar1 == (CTempleStone *)0x0) {
    return (CTempleStone *)0x0;
  }
  pCVar1 = core_stone_cpp_CTempleStone_ctor_FUN_00534d00(pCVar1);
  return pCVar1;
}
