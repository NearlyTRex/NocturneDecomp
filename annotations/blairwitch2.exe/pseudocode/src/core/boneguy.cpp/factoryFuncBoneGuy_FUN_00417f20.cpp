// Name: core_boneguy.cpp_factoryFuncBoneGuy_FUN_00417f20
// Address: 00417f20
// Address Range: [[00417f20, 00417f3b]]
// Convention: __cdecl
// Signature: CBoneGuy * __cdecl core_boneguy_cpp_factoryFuncBoneGuy_FUN_00417f20(void)

#include "nocturne.h"

CBoneGuy * __cdecl core_boneguy_cpp_factoryFuncBoneGuy_FUN_00417f20(void)

{
  CBoneGuy *pCVar1;
  
  pCVar1 = (CBoneGuy *)operator_new(0x11120);
  if (pCVar1 == (CBoneGuy *)0x0) {
    return (CBoneGuy *)0x0;
  }
  pCVar1 = core_boneguy_cpp_CBoneGuy_ctor_FUN_004182d0(pCVar1);
  return pCVar1;
}
