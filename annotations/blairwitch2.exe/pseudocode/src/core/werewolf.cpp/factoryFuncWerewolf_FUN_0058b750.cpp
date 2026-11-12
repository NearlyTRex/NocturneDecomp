// Name: core_werewolf.cpp_factoryFuncWerewolf_FUN_0058b750
// Address: 0058b750
// Address Range: [[0058b750, 0058b76b]]
// Convention: __cdecl
// Signature: CWerewolf * __cdecl core_werewolf_cpp_factoryFuncWerewolf_FUN_0058b750(void)

#include "nocturne.h"

CWerewolf * __cdecl core_werewolf_cpp_factoryFuncWerewolf_FUN_0058b750(void)

{
  CWerewolf *pCVar1;
  
  pCVar1 = (CWerewolf *)operator_new(0x10b40);
  if (pCVar1 == (CWerewolf *)0x0) {
    return (CWerewolf *)0x0;
  }
  pCVar1 = core_werewolf_cpp_CWerewolf_ctor_FUN_0058b780(pCVar1);
  return pCVar1;
}
