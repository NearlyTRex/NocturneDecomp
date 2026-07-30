// Name: core_cow.cpp_factoryFunc_FUN_0043bbb0
// Address: 0043bbb0
// Address Range: [[0043bbb0, 0043bbcb]]
// Convention: __cdecl
// Signature: CZombieCow * __cdecl core_cow_cpp_factoryFunc_FUN_0043bbb0(void)

#include "nocturne.h"

CZombieCow * __cdecl core_cow_cpp_factoryFunc_FUN_0043bbb0(void)

{
  int iVar1;
  CZombieCow *pCVar2;
  
  iVar1 = FUN_0056497c(0xbd58);
  if (iVar1 == 0) {
    return (CZombieCow *)0x0;
  }
  pCVar2 = (CZombieCow *)core_cow_cpp_FUN_0043bbe0(iVar1);
  return pCVar2;
}
