// Name: core_cow.cpp_factoryFuncZombieCow_FUN_004390b0
// Address: 004390b0
// Address Range: [[004390b0, 004390cb]]
// Convention: __cdecl
// Signature: CZombieCow * __cdecl core_cow_cpp_factoryFuncZombieCow_FUN_004390b0(void)

#include "nocturne.h"

CZombieCow * __cdecl core_cow_cpp_factoryFuncZombieCow_FUN_004390b0(void)

{
  CZombieCow *pCVar1;
  
  pCVar1 = (CZombieCow *)operator_new(0x10b2c);
  if (pCVar1 == (CZombieCow *)0x0) {
    return (CZombieCow *)0x0;
  }
  pCVar1 = core_cow_cpp_CZombieCow_ctor_FUN_004390e0(pCVar1);
  return pCVar1;
}
