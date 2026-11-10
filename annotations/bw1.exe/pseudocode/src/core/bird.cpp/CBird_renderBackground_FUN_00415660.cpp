// Name: core_bird.cpp_CBird_renderBackground_FUN_00415660
// Address: 00415660
// Address Range: [[00415660, 00415689]]
// Convention: __cdecl
// Signature: void __cdecl core_bird_cpp_CBird_renderBackground_FUN_00415660(CBird *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl core_bird_cpp_CBird_renderBackground_FUN_00415660(CBird *this_ptr,int layer_flag)

{
  if (*(int *)&this_ptr->field_0x1fab0 != 0) {
    if (layer_flag != 0) {
      *(uint *)&this_ptr->field_0x24fc = 1;
    }
    core_charactr_cpp_CCharacter_renderBackground_FUN_0042f320((CCharacter *)this_ptr,layer_flag);
  }
  return;
}
