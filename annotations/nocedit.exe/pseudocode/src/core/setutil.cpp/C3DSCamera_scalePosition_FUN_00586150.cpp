// Name: core_setutil.cpp_C3DSCamera_scalePosition_FUN_00586150
// Address: 00586150
// Address Range: [[00586150, 00586184]]
// Convention: __cdecl
// Signature: void core_setutil.cpp_C3DSCamera_scalePosition_FUN_00586150(C3DSCamera * this_ptr, float scale)

#include "nocturne.h"

void __cdecl
core_setutil_cpp_C3DSCamera_scalePosition_FUN_00586150(C3DSCamera *this_ptr,float scale)

{
  (this_ptr->position).y = (this_ptr->position).y * scale;
  (this_ptr->position).z = (this_ptr->position).z * scale;
  (this_ptr->position).x = (this_ptr->position).x * scale;
  return;
}
