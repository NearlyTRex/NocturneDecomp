// Name: core_boneguy.cpp_factoryFunc_FUN_004182a0
// Address: 004182a0
// Address Range: [[004182a0, 004182bb]]
// Convention: __cdecl
// Signature: CBoneGuy * __cdecl core_boneguy_cpp_factoryFunc_FUN_004182a0(void)

#include "nocturne.h"

CBoneGuy * __cdecl core_boneguy_cpp_factoryFunc_FUN_004182a0(void)

{
  CBoneGuy *pCVar1;
  
  pCVar1 = (CBoneGuy *)FUN_0056497c(0xc34c);
  if (pCVar1 == (CBoneGuy *)0x0) {
    return (CBoneGuy *)0x0;
  }
  pCVar1 = core_boneguy_cpp_FUN_00418630(pCVar1);
  return pCVar1;
}
