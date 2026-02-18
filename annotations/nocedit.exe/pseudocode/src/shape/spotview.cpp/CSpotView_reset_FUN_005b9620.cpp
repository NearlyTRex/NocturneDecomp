// Name: shape_spotview.cpp_CSpotView_reset_FUN_005b9620
// Address: 005b9620
// Address Range: [[005b9620, 005b9667]]
// Convention: __cdecl
// Signature: void __cdecl shape_spotview_cpp_CSpotView_reset_FUN_005b9620(CSpotView *this_ptr,uint control_flags)

#include "nocturne.h"

void __cdecl shape_spotview_cpp_CSpotView_reset_FUN_005b9620(CSpotView *this_ptr,uint control_flags)

{
  if ((control_flags & 1) != 0) {
    this_ptr->pitch = this_ptr->default_pitch;
  }
  if ((control_flags & 2) != 0) {
    this_ptr->yaw = this_ptr->default_yaw;
  }
  if ((control_flags & 8) != 0) {
    this_ptr->pan_y = this_ptr->default_pan_y;
    this_ptr->pan_x = this_ptr->default_pan_x;
  }
  if ((control_flags & 4) != 0) {
    this_ptr->distance = this_ptr->default_distance;
  }
  if ((control_flags & 0x10) == 0) {
    return;
  }
  this_ptr->zoom = this_ptr->default_zoom;
  return;
}
