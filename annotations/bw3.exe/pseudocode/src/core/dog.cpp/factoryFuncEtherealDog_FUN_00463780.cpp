// Name: core_dog.cpp_factoryFuncEtherealDog_FUN_00463780
// Address: 00463780
// Address Range: [[00463780, 0046379b]]
// Convention: __cdecl
// Signature: CEtherealDog * __cdecl core_dog_cpp_factoryFuncEtherealDog_FUN_00463780(void)

#include "nocturne.h"

CEtherealDog * __cdecl core_dog_cpp_factoryFuncEtherealDog_FUN_00463780(void)

{
  CEtherealDog *pCVar1;
  
  pCVar1 = (CEtherealDog *)operator_new(0xd064);
  if (pCVar1 == (CEtherealDog *)0x0) {
    return (CEtherealDog *)0x0;
  }
  pCVar1 = core_dog_cpp_CEtherealDog_ctor_FUN_004637b0(pCVar1);
  return pCVar1;
}
