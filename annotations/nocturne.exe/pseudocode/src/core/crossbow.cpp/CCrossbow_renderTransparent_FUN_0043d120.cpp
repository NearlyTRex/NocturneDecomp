// Name: core_crossbow.cpp_CCrossbow_renderTransparent_FUN_0043d120
// Address: 0043d120
// Address Range: [[0043d120, 0043d143]]
// Convention: __cdecl
// Signature: int __cdecl core_crossbow_cpp_CCrossbow_renderTransparent_FUN_0043d120(CCrossbow *this_ptr)

#include "nocturne.h"

int __cdecl core_crossbow_cpp_CCrossbow_renderTransparent_FUN_0043d120(CCrossbow *this_ptr)

{
  if (this_ptr->flame_active == 0) {
    return 0;
  }
  core_flame_cpp_CFlame_renderTransparent_FUN_0048d5d0(&this_ptr->bolt_flame);
  return 1;
}
