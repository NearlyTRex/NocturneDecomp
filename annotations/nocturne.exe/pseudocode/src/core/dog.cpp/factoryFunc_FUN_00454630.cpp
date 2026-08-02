// Name: core_dog.cpp_factoryFunc_FUN_00454630
// Address: 00454630
// Address Range: [[00454630, 0045464b]]
// Convention: __cdecl
// Signature: CZombieDog * __cdecl core_dog_cpp_factoryFunc_FUN_00454630(void)

#include "nocturne.h"

CZombieDog * __cdecl core_dog_cpp_factoryFunc_FUN_00454630(void)

{
  CZombieDog *pCVar1;
  
  pCVar1 = (CZombieDog *)FUN_0056497c(0xbd30);
  if (pCVar1 == (CZombieDog *)0x0) {
    return (CZombieDog *)0x0;
  }
  pCVar1 = core_dog_cpp_CZombieDog_ctor_FUN_00454660(pCVar1);
  return pCVar1;
}
