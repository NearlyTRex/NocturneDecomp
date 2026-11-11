// Name: core_bird.cpp_CBird_renderTransparent_FUN_0040ff30
// Address: 0040ff30
// Address Range: [[0040ff30, 0040ff73]]
// Convention: __cdecl
// Signature: int __cdecl core_bird_cpp_CBird_renderTransparent_FUN_0040ff30(CBird *this_ptr)

#include "nocturne.h"

int __cdecl core_bird_cpp_CBird_renderTransparent_FUN_0040ff30(CBird *this_ptr)

{
  int iVar1;
  
  if ((((this_ptr->base).is_spectral != 0) &&
      (iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                         (0x01C6E360,"heroCanSee"), iVar1 != 0)) &&
     (this_ptr->pool_me == 0)) {
    core_charactr_cpp_CCharacter_renderTransparent_FUN_0042f510(&this_ptr->base);
    return (this_ptr->base).was_rendered_opaque;
  }
  return 0;
}
