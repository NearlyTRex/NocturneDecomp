// Name: core_dog.cpp_factoryFuncZombieDog_FUN_00476780
// Address: 00476780
// Address Range: [[00476780, 0047679b]]
// Convention: __cdecl
// Signature: CZombieDog * __cdecl core_dog_cpp_factoryFuncZombieDog_FUN_00476780(void)

#include "nocturne.h"

CZombieDog * __cdecl core_dog_cpp_factoryFuncZombieDog_FUN_00476780(void)

{
  CZombieDog *pCVar1;
  
  pCVar1 = (CZombieDog *)operator_new(0xc274);
  if (pCVar1 == (CZombieDog *)0x0) {
    return (CZombieDog *)0x0;
  }
  pCVar1 = core_dog_cpp_CZombieDog_ctor_FUN_004767b0(pCVar1);
  return pCVar1;
}
