// Name: core_charactr.cpp_CCharacter_renderTransparent_FUN_00427260
// Address: 00427260
// Address Range: [[00427260, 0042728f]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_renderTransparent_FUN_00427260(CCharacter *this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_renderTransparent_FUN_00427260(CCharacter *this_ptr)

{
  if ((0 < this_ptr->fire_count) && (this_ptr->was_rendered_opaque != 0)) {
    core_charactr_cpp_CCharacter_renderFlames_FUN_00427290(this_ptr);
    return this_ptr->was_rendered_opaque;
  }
  return this_ptr->was_rendered_opaque;
}
