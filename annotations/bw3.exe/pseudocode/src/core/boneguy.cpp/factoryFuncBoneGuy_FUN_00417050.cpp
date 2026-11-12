// Name: core_boneguy.cpp_factoryFuncBoneGuy_FUN_00417050
// Address: 00417050
// Address Range: [[00417050, 0041706b]]
// Convention: __cdecl
// Signature: CBoneGuy * __cdecl core_boneguy_cpp_factoryFuncBoneGuy_FUN_00417050(void)

#include "nocturne.h"

CBoneGuy * __cdecl core_boneguy_cpp_factoryFuncBoneGuy_FUN_00417050(void)

{
  CBoneGuy *pCVar1;
  
  pCVar1 = (CBoneGuy *)operator_new(0xd698);
  if (pCVar1 == (CBoneGuy *)0x0) {
    return (CBoneGuy *)0x0;
  }
  pCVar1 = core_boneguy_cpp_CBoneGuy_ctor_FUN_00417400(pCVar1);
  return pCVar1;
}
