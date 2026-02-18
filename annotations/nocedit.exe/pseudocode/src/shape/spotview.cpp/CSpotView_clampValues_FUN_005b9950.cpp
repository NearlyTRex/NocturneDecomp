// Name: shape_spotview.cpp_CSpotView_clampValues_FUN_005b9950
// Address: 005b9950
// Address Range: [[005b9950, 005b9a10]]
// Convention: __cdecl
// Signature: void __cdecl shape_spotview_cpp_CSpotView_clampValues_FUN_005b9950(CSpotView *this_ptr)

#include "nocturne.h"

void __cdecl shape_spotview_cpp_CSpotView_clampValues_FUN_005b9950(CSpotView *this_ptr)

{
  if (this_ptr->yaw < (float)3.1415926535000001) {
    this_ptr->yaw = this_ptr->yaw + 6.283185f;
  }
  if ((float)3.1415926535000001 < this_ptr->yaw) {
    this_ptr->yaw = this_ptr->yaw + -6.283185f;
  }
  if (this_ptr->pitch < (float)-1.57079632675) {
    this_ptr->pitch = -1.5707964;
  }
  if ((float)1.57079632675 < this_ptr->pitch) {
    this_ptr->pitch = 1.5707964;
  }
  if (this_ptr->distance < (float)0.10000000000000001) {
    this_ptr->distance = 0.1;
  }
  if ((float)10000 < this_ptr->distance) {
    this_ptr->distance = 10000.0;
  }
  if (this_ptr->zoom < (float)0.01) {
    this_ptr->zoom = 0.01;
  }
  if (this_ptr->zoom <= (float)100) {
    return;
  }
  this_ptr->zoom = 100.0;
  return;
}
