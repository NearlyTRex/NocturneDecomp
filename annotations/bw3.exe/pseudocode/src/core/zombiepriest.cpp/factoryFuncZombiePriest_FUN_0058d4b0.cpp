// Name: core_zombiepriest.cpp_factoryFuncZombiePriest_FUN_0058d4b0
// Address: 0058d4b0
// Address Range: [[0058d4b0, 0058d4cb]]
// Convention: __cdecl
// Signature: CZombiePriest * __cdecl core_zombiepriest_cpp_factoryFuncZombiePriest_FUN_0058d4b0(void)

#include "nocturne.h"

CZombiePriest * __cdecl core_zombiepriest_cpp_factoryFuncZombiePriest_FUN_0058d4b0(void)

{
  CZombiePriest *pCVar1;
  
  pCVar1 = (CZombiePriest *)operator_new(0xd114);
  if (pCVar1 == (CZombiePriest *)0x0) {
    return (CZombiePriest *)0x0;
  }
  pCVar1 = core_zombiepriest_cpp_CZombiePriest_ctor_FUN_0058d4e0(pCVar1);
  return pCVar1;
}
