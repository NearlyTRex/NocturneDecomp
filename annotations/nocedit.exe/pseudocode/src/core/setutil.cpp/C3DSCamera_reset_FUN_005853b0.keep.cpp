// Name: core_setutil.cpp_C3DSCamera_reset_FUN_005853b0
// Address: 005853b0
// MANUAL RECONSTRUCTION
// Address Range: [[005853b0, 0058541f]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSCamera_reset_FUN_005853b0(C3DSCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSCamera_reset_FUN_005853b0(C3DSCamera *this_ptr)

{
  float fVar1;
  
  core_setutil_cpp_C3DSCamera_free_FUN_00585360(this_ptr);
  memset(this_ptr,0,sizeof(C3DSCamera));
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
