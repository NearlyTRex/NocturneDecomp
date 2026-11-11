// Name: core_bird.cpp_CBird_renderBackground_FUN_0040fe60
// Address: 0040fe60
// Address Range: [[0040fe60, 0040fe89]]
// Convention: __cdecl
// Signature: void __cdecl core_bird_cpp_CBird_renderBackground_FUN_0040fe60(CBird *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl core_bird_cpp_CBird_renderBackground_FUN_0040fe60(CBird *this_ptr,int layer_flag)

{
  if (this_ptr->pool_me != 0) {
    if (layer_flag != 0) {
      (this_ptr->base).render_active = 1;
    }
    core_charactr_cpp_CCharacter_renderBackground_FUN_0042e300(&this_ptr->base,layer_flag);
  }
  return;
}
