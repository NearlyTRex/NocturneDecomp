// Name: core_spireagl.cpp_CSpiritEagle_renderBackground_FUN_00599a40
// Address: 00599a40
// Address Range: [[00599a40, 00599a69]]
// Convention: __cdecl
// Signature: void __cdecl core_spireagl_cpp_CSpiritEagle_renderBackground_FUN_00599a40(CSpiritEagle *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl core_spireagl_cpp_CSpiritEagle_renderBackground_FUN_00599a40(CSpiritEagle *this_ptr,int layer_flag)

{
  if (*(int *)&this_ptr->field_0x20868 != 0) {
    if (layer_flag != 0) {
      *(uint *)&this_ptr->field_0x24fc = 1;
    }
    core_charactr_cpp_CCharacter_renderBackground_FUN_0042e300((CCharacter *)this_ptr,layer_flag);
  }
  return;
}
