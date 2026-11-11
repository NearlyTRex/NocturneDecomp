// Name: core_spireagl.cpp_CSpiritEagle_renderBackground_FUN_00599a40
// Address: 00599a40
// Address Range: [[00599a40, 00599a69]]
// Convention: __cdecl
// Signature: void __cdecl core_spireagl_cpp_CSpiritEagle_renderBackground_FUN_00599a40(CSpiritEagle *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl core_spireagl_cpp_CSpiritEagle_renderBackground_FUN_00599a40(CSpiritEagle *this_ptr,int layer_flag)

{
  if (this_ptr->pool_me != 0) {
    if (layer_flag != 0) {
      (this_ptr->base).render_active = 1;
    }
    core_charactr_cpp_CCharacter_renderBackground_FUN_0042e300(&this_ptr->base,layer_flag);
  }
  return;
}
