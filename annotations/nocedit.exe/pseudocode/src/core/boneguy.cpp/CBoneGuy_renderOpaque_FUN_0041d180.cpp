// Name: core_boneguy.cpp_CBoneGuy_renderOpaque_FUN_0041d180
// Address: 0041d180
// Address Range: [[0041d180, 0041d1a1]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBoneGuy_renderOpaque_FUN_0041d180(CBoneGuy *this_ptr)

#include "nocturne.h"

void __cdecl core_boneguy_cpp_CBoneGuy_renderOpaque_FUN_0041d180(CBoneGuy *this_ptr)

{
  int iVar1;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  if (iVar1 == 0) {
    return;
  }
  core_charactr_cpp_CCharacter_renderOpaque_FUN_0042a2c0((CCharacter *)this_ptr);
  return;
}
