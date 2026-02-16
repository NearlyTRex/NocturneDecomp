// Name: core_bat.cpp_CBat_FUN_00414ce0
// Address: 00414ce0
// Address Range: [[00414ce0, 00414db6]]
// Convention: __cdecl
// Signature: void __cdecl core_bat_cpp_CBat_FUN_00414ce0(CBat *this_ptr)

#include "nocturne.h"

void __cdecl core_bat_cpp_CBat_FUN_00414ce0(CBat *this_ptr)

{
  float fVar1;
  double dVar2;
  float local_20;
  
  local_20 = this_ptr->param;
  fVar1 = (float)(this_ptr->course).len;
  if (0.0 <= local_20) {
    dVar2 = floor((double)(local_20 / fVar1));
    local_20 = local_20 - (float)dVar2 * fVar1;
  }
  else {
    dVar2 = floor((double)(-local_20 / fVar1));
    local_20 = (float)dVar2 * fVar1 + local_20;
    if (local_20 < 0.0) {
      local_20 = local_20 + fVar1;
    }
  }
  this_ptr->param = local_20;
  core_course_cpp_CCourse_FUN_00442710(&this_ptr->course);
  return;
}
