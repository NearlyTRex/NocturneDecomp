// Name: core_baal.cpp_CBaal_renderOpaque_FUN_00597940
// Address: 00597940
// Address Range: [[00597940, 0059796c]]
// Convention: __cdecl
// Signature: int __cdecl core_baal_cpp_CBaal_renderOpaque_FUN_00597940(CBaal *this_ptr)

#include "nocturne.h"

int __cdecl core_baal_cpp_CBaal_renderOpaque_FUN_00597940(CBaal *this_ptr)

{
  int iVar1;
  
  if ((this_ptr->base).base.fire_count < 1) {
    iVar1 = core_charactr_cpp_CCharacter_renderOpaque_FUN_0042e220((CCharacter *)this_ptr);
    return iVar1;
  }
  core_charactr_cpp_CCharacter_renderFlames_FUN_0042f6f0((CCharacter *)this_ptr);
  iVar1 = core_charactr_cpp_CCharacter_renderOpaque_FUN_0042e220((CCharacter *)this_ptr);
  return iVar1;
}
