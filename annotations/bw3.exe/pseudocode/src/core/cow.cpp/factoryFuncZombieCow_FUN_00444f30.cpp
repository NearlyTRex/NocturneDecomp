// Name: core_cow.cpp_factoryFuncZombieCow_FUN_00444f30
// Address: 00444f30
// Address Range: [[00444f30, 00444f4b]]
// Convention: __cdecl
// Signature: CZombieCow * __cdecl core_cow_cpp_factoryFuncZombieCow_FUN_00444f30(void)

#include "nocturne.h"

CZombieCow * __cdecl core_cow_cpp_factoryFuncZombieCow_FUN_00444f30(void)

{
  CZombieCow *pCVar1;
  
  pCVar1 = (CZombieCow *)operator_new(0xd088);
  if (pCVar1 == (CZombieCow *)0x0) {
    return (CZombieCow *)0x0;
  }
  pCVar1 = core_cow_cpp_CZombieCow_ctor_FUN_00444f60(pCVar1);
  return pCVar1;
}
