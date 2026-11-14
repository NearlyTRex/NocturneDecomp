// Name: core_bird.cpp_CBird_renderTransparent_FUN_00415730
// Address: 00415730
// Address Range: [[00415730, 00415773]]
// Convention: __cdecl
// Signature: int __cdecl core_bird_cpp_CBird_renderTransparent_FUN_00415730(CBird *this_ptr)

#include "nocturne.h"

int __cdecl core_bird_cpp_CBird_renderTransparent_FUN_00415730(CBird *this_ptr)

{
  int iVar1;
  
  if ((((this_ptr->base).is_spectral != 0) &&
      (iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                         (0x01C51D80,"heroCanSee"), iVar1 != 0)) &&
     (this_ptr->pool_me == 0)) {
    core_charactr_cpp_CCharacter_renderTransparent_FUN_004301e0(&this_ptr->base);
    return (this_ptr->base).was_rendered_opaque;
  }
  return 0;
}
