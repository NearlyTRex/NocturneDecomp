// Name: core_helldog.cpp_factoryFuncDog_FUN_005aba10
// Address: 005aba10
// Address Range: [[005aba10, 005aba2b]]
// Convention: __cdecl
// Signature: CDog * __cdecl core_helldog_cpp_factoryFuncDog_FUN_005aba10(void)

#include "nocturne.h"

CDog * __cdecl core_helldog_cpp_factoryFuncDog_FUN_005aba10(void)

{
  CDog *pCVar1;
  
  pCVar1 = (CDog *)operator_new(0x11870);
  if (pCVar1 == (CDog *)0x0) {
    return (CDog *)0x0;
  }
  pCVar1 = core_helldog_cpp_CDog_ctor_FUN_005aba40(pCVar1);
  return pCVar1;
}
