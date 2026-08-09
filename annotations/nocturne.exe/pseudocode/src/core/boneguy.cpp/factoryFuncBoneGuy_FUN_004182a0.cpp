// Name: core_boneguy.cpp_factoryFuncBoneGuy_FUN_004182a0
// Address: 004182a0
// Address Range: [[004182a0, 004182bb]]
// Convention: __cdecl
// Signature: CBoneGuy * __cdecl core_boneguy_cpp_factoryFuncBoneGuy_FUN_004182a0(void)

#include "nocturne.h"

CBoneGuy * __cdecl core_boneguy_cpp_factoryFuncBoneGuy_FUN_004182a0(void)

{
  CBoneGuy *pCVar1;
  
  pCVar1 = operator_new(0xc34c);
  if (pCVar1 == (CBoneGuy *)0x0) {
    return (CBoneGuy *)0x0;
  }
  pCVar1 = core_boneguy_cpp_CBoneGuy_ctor_FUN_00418630(pCVar1);
  return pCVar1;
}
