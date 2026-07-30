// Name: core_stone.cpp_factoryFunc_FUN_00534cd0
// Address: 00534cd0
// Address Range: [[00534cd0, 00534ceb]]
// Convention: __cdecl
// Signature: CTempleStone * __cdecl core_stone_cpp_factoryFunc_FUN_00534cd0(void)

#include "nocturne.h"

CTempleStone * __cdecl core_stone_cpp_factoryFunc_FUN_00534cd0(void)

{
  int iVar1;
  CTempleStone *pCVar2;
  
  iVar1 = FUN_0056497c(0x668);
  if (iVar1 == 0) {
    return (CTempleStone *)0x0;
  }
  pCVar2 = (CTempleStone *)core_stone_cpp_FUN_00534d00(iVar1);
  return pCVar2;
}
