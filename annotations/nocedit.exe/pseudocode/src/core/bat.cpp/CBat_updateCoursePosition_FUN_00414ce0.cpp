// Name: core_bat.cpp_CBat_updateCoursePosition_FUN_00414ce0
// Address: 00414ce0
// Address Range: [[00414ce0, 00414db6]]
// Convention: __cdecl
// Signature: void __cdecl core_bat_cpp_CBat_updateCoursePosition_FUN_00414ce0(CBat *this_ptr)

#include "nocturne.h"

void __cdecl core_bat_cpp_CBat_updateCoursePosition_FUN_00414ce0(CBat *this_ptr)

{
  float fVar2;
  double dVar2;
  double dVar3;
  float local_20;
  float fVar1;
  
  fVar2 = this_ptr->param;
  fVar1 = (float)(this_ptr->course).len;
  if (0.0 <= fVar2) {
    dVar3 = floor((double)(fVar2 / fVar1));
    local_20 = fVar2 - (float)dVar3 * fVar1;
  }
  else {
    dVar2 = floor((double)(-fVar2 / fVar1));
    local_20 = (float)dVar2 * fVar1 + fVar2;
    if (local_20 < 0.0) {
      local_20 = local_20 + fVar1;
    }
  }
  this_ptr->param = local_20;
  core_course_cpp_CCourse_evaluate_FUN_00442710
            (&this_ptr->course,this_ptr->param,&(this_ptr->base).location.position,
             &(this_ptr->base).orient.vec);
  return;
}
