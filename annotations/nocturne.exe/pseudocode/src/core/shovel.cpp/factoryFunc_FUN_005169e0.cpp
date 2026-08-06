// Name: core_shovel.cpp_factoryFunc_FUN_005169e0
// Address: 005169e0
// Address Range: [[005169e0, 005169fb]]
// Convention: __cdecl
// Signature: CShovel * __cdecl core_shovel_cpp_factoryFunc_FUN_005169e0(void)

#include "nocturne.h"

CShovel * __cdecl core_shovel_cpp_factoryFunc_FUN_005169e0(void)

{
  CShovel *pCVar1;
  
  pCVar1 = operator_new(0x570);
  if (pCVar1 == (CShovel *)0x0) {
    return (CShovel *)0x0;
  }
  pCVar1 = core_shovel_cpp_CShovel_ctor_FUN_00516a10(pCVar1);
  return pCVar1;
}
