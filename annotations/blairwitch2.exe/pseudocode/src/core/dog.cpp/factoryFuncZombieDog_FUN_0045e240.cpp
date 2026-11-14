// Name: core_dog.cpp_factoryFuncZombieDog_FUN_0045e240
// Address: 0045e240
// Address Range: [[0045e240, 0045e25b]]
// Convention: __cdecl
// Signature: CZombieDog * __cdecl core_dog_cpp_factoryFuncZombieDog_FUN_0045e240(void)

#include "nocturne.h"

CZombieDog * __cdecl core_dog_cpp_factoryFuncZombieDog_FUN_0045e240(void)

{
  CZombieDog *pCVar1;
  
  pCVar1 = (CZombieDog *)operator_new(0x10b04);
  if (pCVar1 == (CZombieDog *)0x0) {
    return (CZombieDog *)0x0;
  }
  pCVar1 = core_dog_cpp_CZombieDog_ctor_FUN_0045e270(pCVar1);
  return pCVar1;
}
