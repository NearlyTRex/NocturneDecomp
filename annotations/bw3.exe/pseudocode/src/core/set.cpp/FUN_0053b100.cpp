// Name: core_set.cpp_FUN_0053b100
// Address: 0053b100
// Address Range: [[0053b100, 0053b122]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_FUN_0053b100(CDemonSet *this_ptr,int light_scale,int color_scale,int fog_scale)

#include "nocturne.h"

void __cdecl core_set_cpp_FUN_0053b100(CDemonSet *this_ptr,int light_scale,int color_scale,int fog_scale)

{
  *(int *)&this_ptr->field_0x15ae9c = light_scale;
  *(int *)&this_ptr->field_0x15aea0 = color_scale;
  *(int *)&this_ptr->field_0x15aea4 = fog_scale;
  return;
}
