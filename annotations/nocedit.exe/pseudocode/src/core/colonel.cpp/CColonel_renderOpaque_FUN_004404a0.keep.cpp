// Name: core_colonel.cpp_CColonel_renderOpaque_FUN_004404a0
// Address: 004404a0
// MANUAL RECONSTRUCTION
// Address Range: [[004404a0, 004404ad]]
// Convention: __cdecl
// Signature: int __cdecl core_colonel_cpp_CColonel_renderOpaque_FUN_004404a0(CColonel *this_ptr)

#include "nocturne.h"

int __cdecl core_colonel_cpp_CColonel_renderOpaque_FUN_004404a0(CColonel *this_ptr)

{
  int iVar1;
  
  iVar1 = core_charactr_cpp_CCharacter_renderOpaque_FUN_0042a2c0((CCharacter *)this_ptr);
#if !NOCTURNE_AUTHENTIC_HERO_ACTIONS
  if (iVar1 != 0) {
    nocturne_colonel_render_gun(this_ptr);
  }
#endif
  return iVar1;
}
