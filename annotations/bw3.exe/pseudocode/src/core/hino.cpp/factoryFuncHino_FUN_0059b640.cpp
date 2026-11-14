// Name: core_hino.cpp_factoryFuncHino_FUN_0059b640
// Address: 0059b640
// Address Range: [[0059b640, 0059b65b]]
// Convention: __cdecl
// Signature: CHino * __cdecl core_hino_cpp_factoryFuncHino_FUN_0059b640(void)

#include "nocturne.h"

CHino * __cdecl core_hino_cpp_factoryFuncHino_FUN_0059b640(void)

{
  CHino *pCVar1;
  
  pCVar1 = (CHino *)operator_new(0xd0b0);
  if (pCVar1 == (CHino *)0x0) {
    return (CHino *)0x0;
  }
  pCVar1 = core_hino_cpp_CHino_ctor_FUN_0059b670(pCVar1);
  return pCVar1;
}
