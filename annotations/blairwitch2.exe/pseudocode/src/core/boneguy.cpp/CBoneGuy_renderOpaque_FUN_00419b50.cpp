// Name: core_boneguy.cpp_CBoneGuy_renderOpaque_FUN_00419b50
// Address: 00419b50
// Address Range: [[00419b50, 00419b71]]
// Convention: __cdecl
// Signature: int __cdecl core_boneguy_cpp_CBoneGuy_renderOpaque_FUN_00419b50(CBoneGuy *this_ptr)

#include "nocturne.h"

int __cdecl core_boneguy_cpp_CBoneGuy_renderOpaque_FUN_00419b50(CBoneGuy *this_ptr)

{
  int iVar1;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = core_charactr_cpp_FUN_004254b0(this_ptr);
  return iVar1;
}
