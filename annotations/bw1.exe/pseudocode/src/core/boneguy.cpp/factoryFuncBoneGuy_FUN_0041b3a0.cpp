// Name: core_boneguy.cpp_factoryFuncBoneGuy_FUN_0041b3a0
// Address: 0041b3a0
// Address Range: [[0041b3a0, 0041b3bb]]
// Convention: __cdecl
// Signature: CBoneGuy * __cdecl core_boneguy_cpp_factoryFuncBoneGuy_FUN_0041b3a0(void)

#include "nocturne.h"

CBoneGuy * __cdecl core_boneguy_cpp_factoryFuncBoneGuy_FUN_0041b3a0(void)

{
  CBoneGuy *pCVar1;
  
  pCVar1 = (CBoneGuy *)operator_new(0xc890);
  if (pCVar1 == (CBoneGuy *)0x0) {
    return (CBoneGuy *)0x0;
  }
  pCVar1 = core_boneguy_cpp_CBoneGuy_ctor_FUN_0041b750(pCVar1);
  return pCVar1;
}
