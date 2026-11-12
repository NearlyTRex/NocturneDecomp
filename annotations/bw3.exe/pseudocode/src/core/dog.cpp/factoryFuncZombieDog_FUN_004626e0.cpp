// Name: core_dog.cpp_factoryFuncZombieDog_FUN_004626e0
// Address: 004626e0
// Address Range: [[004626e0, 004626fb]]
// Convention: __cdecl
// Signature: CZombieDog * __cdecl core_dog_cpp_factoryFuncZombieDog_FUN_004626e0(void)

#include "nocturne.h"

CZombieDog * __cdecl core_dog_cpp_factoryFuncZombieDog_FUN_004626e0(void)

{
  CZombieDog *pCVar1;
  
  pCVar1 = (CZombieDog *)operator_new(0xd064);
  if (pCVar1 == (CZombieDog *)0x0) {
    return (CZombieDog *)0x0;
  }
  pCVar1 = core_dog_cpp_CZombieDog_ctor_FUN_00462710(pCVar1);
  return pCVar1;
}
