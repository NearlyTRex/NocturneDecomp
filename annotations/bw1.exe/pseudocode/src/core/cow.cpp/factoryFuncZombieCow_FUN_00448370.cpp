// Name: core_cow.cpp_factoryFuncZombieCow_FUN_00448370
// Address: 00448370
// Address Range: [[00448370, 0044838b]]
// Convention: __cdecl
// Signature: CZombieCow * __cdecl core_cow_cpp_factoryFuncZombieCow_FUN_00448370(void)

#include "nocturne.h"

CZombieCow * __cdecl core_cow_cpp_factoryFuncZombieCow_FUN_00448370(void)

{
  CZombieCow *pCVar1;
  
  pCVar1 = (CZombieCow *)operator_new(0xc29c);
  if (pCVar1 == (CZombieCow *)0x0) {
    return (CZombieCow *)0x0;
  }
  pCVar1 = core_cow_cpp_CZombieCow_ctor_FUN_004483a0(pCVar1);
  return pCVar1;
}
