// Name: shape_spotview.cpp_CSpotView_clampValues_FUN_00584720
// Address: 00584720
// Address Range: [[00584720, 005847d6]]
// Convention: __cdecl
// Signature: void __cdecl shape_spotview_cpp_CSpotView_clampValues_FUN_00584720(CSpotView *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_spotview_cpp_CSpotView_clampValues_FUN_00584720(CSpotView *this_ptr)

{
  if ((int)this_ptr->yaw < 0x40490fdb) {
    this_ptr->yaw = this_ptr->yaw + _DAT_005f630c;
  }
  if (0x40490fdb < (int)this_ptr->yaw) {
    this_ptr->yaw = this_ptr->yaw + _DAT_005f6310;
  }
  if (this_ptr->pitch < (float)_DAT_005f6314) {
    this_ptr->pitch = -1.5707964;
  }
  if ((float)_DAT_005f631c < this_ptr->pitch) {
    this_ptr->pitch = 1.5707964;
  }
  if (this_ptr->distance < (float)_DAT_005f6324) {
    this_ptr->distance = 0.1;
  }
  if ((float)_DAT_005f632c < this_ptr->distance) {
    this_ptr->distance = 10000.0;
  }
  if (this_ptr->zoom < (float)_DAT_005f6334) {
    this_ptr->zoom = 0.01;
  }
  if (this_ptr->zoom <= (float)_DAT_005f633c) {
    return;
  }
  this_ptr->zoom = 100.0;
  return;
}
