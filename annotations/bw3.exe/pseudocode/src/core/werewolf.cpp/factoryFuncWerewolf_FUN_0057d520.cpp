// Name: core_werewolf.cpp_factoryFuncWerewolf_FUN_0057d520
// Address: 0057d520
// Address Range: [[0057d520, 0057d53b]]
// Convention: __cdecl
// Signature: CWerewolf * __cdecl core_werewolf_cpp_factoryFuncWerewolf_FUN_0057d520(void)

#include "nocturne.h"

CWerewolf * __cdecl core_werewolf_cpp_factoryFuncWerewolf_FUN_0057d520(void)

{
  CWerewolf *pCVar1;
  
  pCVar1 = (CWerewolf *)operator_new(0xd09c);
  if (pCVar1 == (CWerewolf *)0x0) {
    return (CWerewolf *)0x0;
  }
  pCVar1 = core_werewolf_cpp_CWerewolf_ctor_FUN_0057d550(pCVar1);
  return pCVar1;
}
