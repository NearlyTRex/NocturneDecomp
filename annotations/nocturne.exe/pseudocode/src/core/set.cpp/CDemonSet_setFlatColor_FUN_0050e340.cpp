// Name: core_set.cpp_CDemonSet_setFlatColor_FUN_0050e340
// Address: 0050e340
// Address Range: [[0050e340, 0050e362]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setFlatColor_FUN_0050e340(CDemonSet *this_ptr,int light_scale,int color_scale,int fog_scale)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_setFlatColor_FUN_0050e340(CDemonSet *this_ptr,int light_scale,int color_scale,int fog_scale)

{
  (this_ptr->flat_color).r = light_scale;
  (this_ptr->flat_color).g = color_scale;
  (this_ptr->flat_color).b = fog_scale;
  return;
}
