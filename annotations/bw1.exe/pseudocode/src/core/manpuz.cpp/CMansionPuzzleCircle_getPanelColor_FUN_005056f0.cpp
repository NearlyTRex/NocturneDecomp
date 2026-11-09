// Name: core_manpuz.cpp_CMansionPuzzleCircle_getPanelColor_FUN_005056f0
// Address: 005056f0
// Address Range: [[005056f0, 0050575d]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_getPanelColor_FUN_005056f0(CMansionPuzzleCircle *this_ptr,int panel_index,float *out_r,float *out_g,float *out_b)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_getPanelColor_FUN_005056f0(CMansionPuzzleCircle *this_ptr,int panel_index,float *out_r,float *out_g,float *out_b)

{
  *out_b = 0.0;
  *out_g = *out_b;
  *out_r = *out_g;
  if ((*(int *)(&this_ptr->field_0x5f0 + panel_index * 100) != 0) &&
     ((*(uint *)(&this_ptr->field_0x5f8 + panel_index * 100) & 0x7fffffff) == 0)) {
    *out_r = (float)*(int *)(&this_ptr->field_0x63c + panel_index * 100);
    *out_g = (float)*(int *)(&this_ptr->field_0x640 + panel_index * 100);
    *out_b = (float)*(int *)(&this_ptr->field_0x644 + panel_index * 100);
    return;
  }
  return;
}
