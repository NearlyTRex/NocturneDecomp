// Name: core_dog.cpp_factoryFuncDogForest_FUN_00463650
// Address: 00463650
// Address Range: [[00463650, 0046366b]]
// Convention: __cdecl
// Signature: CDogForest * __cdecl core_dog_cpp_factoryFuncDogForest_FUN_00463650(void)

#include "nocturne.h"

CDogForest * __cdecl core_dog_cpp_factoryFuncDogForest_FUN_00463650(void)

{
  CDogForest *pCVar1;
  
  pCVar1 = (CDogForest *)operator_new(0xd064);
  if (pCVar1 == (CDogForest *)0x0) {
    return (CDogForest *)0x0;
  }
  pCVar1 = core_dog_cpp_CDogForest_ctor_FUN_00463680(pCVar1);
  return pCVar1;
}
