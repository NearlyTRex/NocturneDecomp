// Name: core_bat.cpp_CBat_updateCoursePosition_FUN_004114e0
// Address: 004114e0
// Address Range: [[004114e0, 004115b6]]
// Convention: __cdecl
// Signature: void __cdecl core_bat_cpp_CBat_updateCoursePosition_FUN_004114e0(CBat *this_ptr)

#include "nocturne.h"

void __cdecl core_bat_cpp_CBat_updateCoursePosition_FUN_004114e0(CBat *this_ptr)

{
  float fVar1;
  double dVar2;
  float fStack_20;
  
  fStack_20 = this_ptr->param;
  fVar1 = (float)(this_ptr->course).len;
  if (0.0 <= fStack_20) {
    dVar2 = floor((double)(fStack_20 / fVar1));
    fStack_20 = fStack_20 - (float)dVar2 * fVar1;
  }
  else {
    dVar2 = floor((double)(-fStack_20 / fVar1));
    fStack_20 = (float)dVar2 * fVar1 + fStack_20;
    if (fStack_20 < 0.0) {
      fStack_20 = fStack_20 + fVar1;
    }
  }
  this_ptr->param = fStack_20;
  core_course_cpp_CCourse_evaluate_FUN_00438c40
            (&this_ptr->course,this_ptr->param,&(this_ptr->base).location.position,
             &(this_ptr->base).orient.vec);
  return;
}
