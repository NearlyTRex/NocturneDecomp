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
  if ((*(int *)(this_ptr->panels + panel_index) != 0) &&
     ((*(uint *)&this_ptr->panels[panel_index].field_0x8 & 0x7fffffff) == 0)) {
    *out_r = (float)*(int *)&this_ptr->panels[panel_index].field_0x4c;
    *out_g = (float)*(int *)&this_ptr->panels[panel_index].field_0x50;
    *out_b = (float)*(int *)&this_ptr->panels[panel_index].field_0x54;
    return;
  }
  return;
}
