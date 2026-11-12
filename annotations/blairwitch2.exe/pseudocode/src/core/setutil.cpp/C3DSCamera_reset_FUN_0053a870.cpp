// Name: core_setutil.cpp_C3DSCamera_reset_FUN_0053a870
// Address: 0053a870
// Address Range: [[0053a870, 0053a8df]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSCamera_reset_FUN_0053a870(C3DSCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSCamera_reset_FUN_0053a870(C3DSCamera *this_ptr)

{
  float fVar1;
  
  core_setutil_cpp_C3DSCamera_free_FUN_0053a830(this_ptr);
  memset(this_ptr,0,0x1a4);
  this_ptr->projection_scale = 28.0;
  (this_ptr->box).min.y = -300.0;
  (this_ptr->box).min.z = 0.0;
  (this_ptr->box).max.z = 300.0;
  this_ptr->is_panning = 0;
  fVar1 = (this_ptr->box).max.z;
  (this_ptr->box).min.x = (this_ptr->box).min.y;
  (this_ptr->box).max.y = fVar1;
  (this_ptr->box).max.x = fVar1;
  return;
}
