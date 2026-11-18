// Name: core_hotdemon.cpp_factoryFuncAngelDemon_FUN_004d63e0
// Address: 004d63e0
// Address Range: [[004d63e0, 004d63fb]]
// Convention: __cdecl
// Signature: CAngelDemon * __cdecl core_hotdemon_cpp_factoryFuncAngelDemon_FUN_004d63e0(void)

#include "nocturne.h"

CAngelDemon * __cdecl core_hotdemon_cpp_factoryFuncAngelDemon_FUN_004d63e0(void)

{
  CAngelDemon *pCVar1;
  
  pCVar1 = operator_new(0xd088);
  if (pCVar1 == (CAngelDemon *)0x0) {
    return (CAngelDemon *)0x0;
  }
  pCVar1 = core_hotdemon_cpp_CAngelDemon_ctor_FUN_004d6410(pCVar1);
  return pCVar1;
}
