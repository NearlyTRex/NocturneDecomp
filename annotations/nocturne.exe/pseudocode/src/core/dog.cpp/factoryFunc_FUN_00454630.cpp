// Name: core_dog.cpp_factoryFunc_FUN_00454630
// Address: 00454630
// Address Range: [[00454630, 0045464b]]
// Convention: __cdecl
// Signature: CZombieDog * __cdecl core_dog_cpp_factoryFunc_FUN_00454630(void)

#include "nocturne.h"

CZombieDog * __cdecl core_dog_cpp_factoryFunc_FUN_00454630(void)

{
  int iVar1;
  CZombieDog *pCVar2;
  
  iVar1 = FUN_0056497c(0xbd30);
  if (iVar1 == 0) {
    return (CZombieDog *)0x0;
  }
  pCVar2 = (CZombieDog *)core_dog_cpp_FUN_00454660(iVar1);
  return pCVar2;
}
