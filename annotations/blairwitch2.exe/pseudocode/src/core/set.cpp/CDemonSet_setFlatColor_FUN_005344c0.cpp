// Name: core_set.cpp_CDemonSet_setFlatColor_FUN_005344c0
// Address: 005344c0
// Address Range: [[005344c0, 005344e2]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setFlatColor_FUN_005344c0(CDemonSet *this_ptr,int light_scale,int color_scale,int fog_scale)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_setFlatColor_FUN_005344c0(CDemonSet *this_ptr,int light_scale,int color_scale,int fog_scale)

{
  (this_ptr->flat_color).r = light_scale;
  (this_ptr->flat_color).g = color_scale;
  (this_ptr->flat_color).b = fog_scale;
  return;
}
