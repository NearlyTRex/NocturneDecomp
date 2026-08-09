// Name: core_werewolf.cpp_factoryFuncWerewolf_FUN_00555a60
// Address: 00555a60
// Address Range: [[00555a60, 00555a7b]]
// Convention: __cdecl
// Signature: CWerewolf * __cdecl core_werewolf_cpp_factoryFuncWerewolf_FUN_00555a60(void)

#include "nocturne.h"

CWerewolf * __cdecl core_werewolf_cpp_factoryFuncWerewolf_FUN_00555a60(void)

{
  CWerewolf *pCVar1;
  
  pCVar1 = operator_new(0xbd6c);
  if (pCVar1 == (CWerewolf *)0x0) {
    return (CWerewolf *)0x0;
  }
  pCVar1 = core_werewolf_cpp_CWerewolf_ctor_FUN_00555a90(pCVar1);
  return pCVar1;
}
