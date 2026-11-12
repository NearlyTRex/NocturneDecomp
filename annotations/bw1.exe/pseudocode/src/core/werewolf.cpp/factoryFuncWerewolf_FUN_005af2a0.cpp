// Name: core_werewolf.cpp_factoryFuncWerewolf_FUN_005af2a0
// Address: 005af2a0
// Address Range: [[005af2a0, 005af2bb]]
// Convention: __cdecl
// Signature: CWerewolf * __cdecl core_werewolf_cpp_factoryFuncWerewolf_FUN_005af2a0(void)

#include "nocturne.h"

CWerewolf * __cdecl core_werewolf_cpp_factoryFuncWerewolf_FUN_005af2a0(void)

{
  CWerewolf *pCVar1;
  
  pCVar1 = (CWerewolf *)operator_new(0xc2b0);
  if (pCVar1 == (CWerewolf *)0x0) {
    return (CWerewolf *)0x0;
  }
  pCVar1 = core_werewolf_cpp_CWerewolf_ctor_FUN_005af2d0(pCVar1);
  return pCVar1;
}
