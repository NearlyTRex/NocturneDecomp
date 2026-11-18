// Name: shape_spotview.cpp_CSpotView_ctor_FUN_00534200
// Address: 00534200
// Address Range: [[00534200, 0053425d]]
// Convention: __cdecl
// Signature: CSpotView * __cdecl shape_spotview_cpp_CSpotView_ctor_FUN_00534200(CSpotView *this_ptr)

#include "nocturne.h"

CSpotView * __cdecl shape_spotview_cpp_CSpotView_ctor_FUN_00534200(CSpotView *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = g_FLOAT_02dc9ea4;
  fVar3 = g_FLOAT_02dc9ea0;
  fVar2 = 1.0f;
  fVar1 = 12.0f;
  (this_ptr->loat_at).z = 0.0;
  (this_ptr->loat_at).y = (this_ptr->loat_at).z;
  (this_ptr->loat_at).x = (this_ptr->loat_at).y;
  this_ptr->default_pan_x = 0.0;
  this_ptr->default_distance = fVar1;
  this_ptr->default_zoom = fVar2;
  this_ptr->default_pitch = fVar3;
  this_ptr->default_yaw = fVar4;
  this_ptr->default_pan_y = 0.0;
  shape_spotview_cpp_CSpotView_reset_FUN_00534260(this_ptr,0x1f);
  return this_ptr;
}
