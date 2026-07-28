// Name: shape_spotview.cpp_CSpotView_clampValues_FUN_00534590
// Address: 00534590
// Address Range: [[00534590, 00534650]]
// Convention: __cdecl
// Signature: void __cdecl shape_spotview_cpp_CSpotView_clampValues_FUN_00534590(CSpotView *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_spotview_cpp_CSpotView_clampValues_FUN_00534590(CSpotView *this_ptr)

{
  if (this_ptr->yaw < (float)_DAT_00595132) {
    this_ptr->yaw = this_ptr->yaw + _DAT_0059513a;
  }
  if ((float)_DAT_00595132 < this_ptr->yaw) {
    this_ptr->yaw = this_ptr->yaw + _DAT_0059513e;
  }
  if (this_ptr->pitch < (float)_DAT_00595142) {
    this_ptr->pitch = -1.5707964;
  }
  if ((float)_DAT_0059514a < this_ptr->pitch) {
    this_ptr->pitch = 1.5707964;
  }
  if (this_ptr->distance < (float)_DAT_00595152) {
    this_ptr->distance = 0.1;
  }
  if ((float)_DAT_0059515a < this_ptr->distance) {
    this_ptr->distance = 10000.0;
  }
  if (this_ptr->zoom < (float)_DAT_00595162) {
    this_ptr->zoom = 0.01;
  }
  if (this_ptr->zoom <= (float)_DAT_0059516a) {
    return;
  }
  this_ptr->zoom = 100.0;
  return;
}
