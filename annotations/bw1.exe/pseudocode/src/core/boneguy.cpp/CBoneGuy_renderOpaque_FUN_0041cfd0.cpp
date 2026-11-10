// Name: core_boneguy.cpp_CBoneGuy_renderOpaque_FUN_0041cfd0
// Address: 0041cfd0
// Address Range: [[0041cfd0, 0041cff1]]
// Convention: __cdecl
// Signature: int __cdecl core_boneguy_cpp_CBoneGuy_renderOpaque_FUN_0041cfd0(CBoneGuy *this_ptr)

#include "nocturne.h"

int __cdecl core_boneguy_cpp_CBoneGuy_renderOpaque_FUN_0041cfd0(CBoneGuy *this_ptr)

{
  int iVar1;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = core_charactr_cpp_CCharacter_renderOpaque_FUN_0042f240((CCharacter *)this_ptr);
  return iVar1;
}
