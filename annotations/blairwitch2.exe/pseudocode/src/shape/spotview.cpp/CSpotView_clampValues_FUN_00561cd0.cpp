// Name: shape_spotview.cpp_CSpotView_clampValues_FUN_00561cd0
// Address: 00561cd0
// Address Range: [[00561cd0, 00561d86]]
// Convention: __cdecl
// Signature: void __cdecl shape_spotview_cpp_CSpotView_clampValues_FUN_00561cd0(CSpotView *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_spotview_cpp_CSpotView_clampValues_FUN_00561cd0(CSpotView *this_ptr)

{
  if ((int)this_ptr->yaw < 0x40490fdb) {
    this_ptr->yaw = this_ptr->yaw + _DAT_005eb108;
  }
  if (0x40490fdb < (int)this_ptr->yaw) {
    this_ptr->yaw = this_ptr->yaw + _DAT_005eb10c;
  }
  if (this_ptr->pitch < (float)_DAT_005eb110) {
    this_ptr->pitch = -1.5707964;
  }
  if ((float)_DAT_005eb118 < this_ptr->pitch) {
    this_ptr->pitch = 1.5707964;
  }
  if (this_ptr->distance < (float)_DAT_005eb120) {
    this_ptr->distance = 0.1;
  }
  if ((float)_DAT_005eb128 < this_ptr->distance) {
    this_ptr->distance = 10000.0;
  }
  if (this_ptr->zoom < (float)_DAT_005eb130) {
    this_ptr->zoom = 0.01;
  }
  if (this_ptr->zoom <= (float)_DAT_005eb138) {
    return;
  }
  this_ptr->zoom = 100.0;
  return;
}
