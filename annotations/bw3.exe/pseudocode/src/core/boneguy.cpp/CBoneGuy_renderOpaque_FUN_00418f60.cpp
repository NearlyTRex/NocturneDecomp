// Name: core_boneguy.cpp_CBoneGuy_renderOpaque_FUN_00418f60
// Address: 00418f60
// Address Range: [[00418f60, 00418f81]]
// Convention: __cdecl
// Signature: int __cdecl core_boneguy_cpp_CBoneGuy_renderOpaque_FUN_00418f60(CBoneGuy *this_ptr)

#include "nocturne.h"

int __cdecl core_boneguy_cpp_CBoneGuy_renderOpaque_FUN_00418f60(CBoneGuy *this_ptr)

{
  int iVar1;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = core_charactr_cpp_CCharacter_renderOpaque_FUN_0042e220((CCharacter *)this_ptr);
  return iVar1;
}
