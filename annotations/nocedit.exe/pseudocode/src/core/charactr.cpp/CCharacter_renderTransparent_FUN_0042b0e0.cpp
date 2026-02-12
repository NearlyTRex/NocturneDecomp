// Name: core_charactr.cpp_CCharacter_renderTransparent_FUN_0042b0e0
// Address: 0042b0e0
// Address Range: [[0042b0e0, 0042b10f]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_renderTransparent_FUN_0042b0e0(CCharacter *this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_renderTransparent_FUN_0042b0e0(CCharacter *this_ptr)

{
  if ((0 < this_ptr->fire_count) && (this_ptr->was_rendered_opaque != 0)) {
    core_charactr_cpp_CCharacter_renderFlames_FUN_0042b110(this_ptr);
    return this_ptr->was_rendered_opaque;
  }
  return this_ptr->was_rendered_opaque;
}
