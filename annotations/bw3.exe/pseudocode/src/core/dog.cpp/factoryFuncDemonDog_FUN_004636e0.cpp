// Name: core_dog.cpp_factoryFuncDemonDog_FUN_004636e0
// Address: 004636e0
// Address Range: [[004636e0, 004636fb]]
// Convention: __cdecl
// Signature: CDemonDog * __cdecl core_dog_cpp_factoryFuncDemonDog_FUN_004636e0(void)

#include "nocturne.h"

CDemonDog * __cdecl core_dog_cpp_factoryFuncDemonDog_FUN_004636e0(void)

{
  CDemonDog *pCVar1;
  
  pCVar1 = (CDemonDog *)operator_new(0xd064);
  if (pCVar1 == (CDemonDog *)0x0) {
    return (CDemonDog *)0x0;
  }
  pCVar1 = core_dog_cpp_CDemonDog_ctor_FUN_00463710(pCVar1);
  return pCVar1;
}
