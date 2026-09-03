// Name: core_setutil.cpp_C3DSCamera_reset_FUN_00514470
// Address: 00514470
// Address Range: [[00514470, 005144d5]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSCamera_reset_FUN_00514470(C3DSCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSCamera_reset_FUN_00514470(C3DSCamera *this_ptr)

{
  float fVar1;
  
  core_setutil_cpp_C3DSCamera_free_FUN_00514430(this_ptr);
  memset(this_ptr,0,0x1a0);
  this_ptr->projection_scale = 28.0;
  (this_ptr->box).min.y = -300.0;
  (this_ptr->box).min.z = 0.0;
  (this_ptr->box).max.z = 300.0;
  fVar1 = (this_ptr->box).max.z;
  (this_ptr->box).min.x = (this_ptr->box).min.y;
  (this_ptr->box).max.y = fVar1;
  (this_ptr->box).max.x = fVar1;
  return;
}
