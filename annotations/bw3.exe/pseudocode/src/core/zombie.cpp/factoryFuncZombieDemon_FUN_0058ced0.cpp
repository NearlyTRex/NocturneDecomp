// Name: core_zombie.cpp_factoryFuncZombieDemon_FUN_0058ced0
// Address: 0058ced0
// Address Range: [[0058ced0, 0058ceeb]]
// Convention: __cdecl
// Signature: CZombieDemon * __cdecl core_zombie_cpp_factoryFuncZombieDemon_FUN_0058ced0(void)

#include "nocturne.h"

CZombieDemon * __cdecl core_zombie_cpp_factoryFuncZombieDemon_FUN_0058ced0(void)

{
  CZombieDemon *pCVar1;
  
  pCVar1 = (CZombieDemon *)operator_new(0xd14c);
  if (pCVar1 == (CZombieDemon *)0x0) {
    return (CZombieDemon *)0x0;
  }
  pCVar1 = core_zombie_cpp_CZombieDemon_ctor_FUN_0058cf00(pCVar1);
  return pCVar1;
}
