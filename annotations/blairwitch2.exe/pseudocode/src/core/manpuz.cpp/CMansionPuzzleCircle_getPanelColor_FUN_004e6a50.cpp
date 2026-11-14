// Name: core_manpuz.cpp_CMansionPuzzleCircle_getPanelColor_FUN_004e6a50
// Address: 004e6a50
// Address Range: [[004e6a50, 004e6abd]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_getPanelColor_FUN_004e6a50(CMansionPuzzleCircle *this_ptr,int panel_index,float *out_r,float *out_g,float *out_b)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_getPanelColor_FUN_004e6a50(CMansionPuzzleCircle *this_ptr,int panel_index,float *out_r,float *out_g,float *out_b)

{
  *out_b = 0.0;
  *out_g = *out_b;
  *out_r = *out_g;
  if ((this_ptr->panels[panel_index].exists != 0) &&
     (ABS(this_ptr->panels[panel_index].anim_speed) == 0.0)) {
    *out_r = (float)this_ptr->panels[panel_index].color.r;
    *out_g = (float)this_ptr->panels[panel_index].color.g;
    *out_b = (float)this_ptr->panels[panel_index].color.b;
    return;
  }
  return;
}
