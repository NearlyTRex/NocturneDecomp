// Name: core_mine.cpp_factoryFuncSpiritMine_FUN_005ad390
// Address: 005ad390
// Address Range: [[005ad390, 005ad3ab]]
// Convention: __cdecl
// Signature: CSpiritMine * __cdecl core_mine_cpp_factoryFuncSpiritMine_FUN_005ad390(void)

#include "nocturne.h"

CSpiritMine * __cdecl core_mine_cpp_factoryFuncSpiritMine_FUN_005ad390(void)

{
  CSpiritMine *pCVar1;
  
  pCVar1 = (CSpiritMine *)operator_new(0x838);
  if (pCVar1 == (CSpiritMine *)0x0) {
    return (CSpiritMine *)0x0;
  }
  pCVar1 = core_mine_cpp_CSpiritMine_ctor_FUN_005ad3c0(pCVar1);
  return pCVar1;
}
