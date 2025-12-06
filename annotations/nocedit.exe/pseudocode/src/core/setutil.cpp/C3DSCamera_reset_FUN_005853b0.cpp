// Name: core_setutil.cpp_C3DSCamera_reset_FUN_005853b0
// Address: 005853b0
// Address Range: [[005853b0, 0058541f]]
// Convention: __cdecl
// Signature: void core_setutil.cpp_C3DSCamera_reset_FUN_005853b0(C3DSCamera * this_ptr)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSCamera_reset_FUN_005853b0(C3DSCamera *this_ptr)

{
  float fVar1;
  
  core_setutil_cpp_C3DSCamera_free_FUN_00585360(this_ptr);
  crt_memory_c_memset_FUN_005fde40(this_ptr,0,0x1a4);
  this_ptr->projection_scale = 28.0;
  (this_ptr->box_min).y = -300.0;
  (this_ptr->box_min).z = 0.0;
  (this_ptr->box_max).z = 300.0;
  this_ptr->is_panning = 0;
  fVar1 = (this_ptr->box_max).z;
  (this_ptr->box_min).x = (this_ptr->box_min).y;
  (this_ptr->box_max).y = fVar1;
  (this_ptr->box_max).x = fVar1;
  return;
}
