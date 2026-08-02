// Name: core_cow.cpp_factoryFunc_FUN_0043bbb0
// Address: 0043bbb0
// Address Range: [[0043bbb0, 0043bbcb]]
// Convention: __cdecl
// Signature: CZombieCow * __cdecl core_cow_cpp_factoryFunc_FUN_0043bbb0(void)

#include "nocturne.h"

CZombieCow * __cdecl core_cow_cpp_factoryFunc_FUN_0043bbb0(void)

{
  CZombieCow *pCVar1;
  
  pCVar1 = (CZombieCow *)FUN_0056497c(0xbd58);
  if (pCVar1 == (CZombieCow *)0x0) {
    return (CZombieCow *)0x0;
  }
  pCVar1 = core_cow_cpp_CZombieCow_ctor_FUN_0043bbe0(pCVar1);
  return pCVar1;
}
