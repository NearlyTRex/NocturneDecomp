// Name: core_set.cpp_CDemonSet_setScaleFactors_FUN_00570ca0
// Address: 00570ca0
// Address Range: [[00570ca0, 00570cc2]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setScaleFactors_FUN_00570ca0(CDemonSet *this_ptr,int light_scale,int color_scale,int fog_scale)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_setScaleFactors_FUN_00570ca0(CDemonSet *this_ptr,int light_scale,int color_scale,int fog_scale)

{
  this_ptr->light_scale_factor = light_scale;
  this_ptr->color_scale_factor = color_scale;
  this_ptr->fog_scale_factor = fog_scale;
  return;
}
