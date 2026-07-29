// Name: core_boneguy.cpp_CBoneGuy_renderOpaque_FUN_00419bf0
// Address: 00419bf0
// Address Range: [[00419bf0, 00419c11]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBoneGuy_renderOpaque_FUN_00419bf0(CBoneGuy *this_ptr)

#include "nocturne.h"

void __cdecl core_boneguy_cpp_CBoneGuy_renderOpaque_FUN_00419bf0(CBoneGuy *this_ptr)

{
  int iVar1;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
  if (iVar1 == 0) {
    return;
  }
  core_charactr_cpp_CCharacter_renderOpaque_FUN_00426440((CCharacter *)this_ptr);
  return;
}
