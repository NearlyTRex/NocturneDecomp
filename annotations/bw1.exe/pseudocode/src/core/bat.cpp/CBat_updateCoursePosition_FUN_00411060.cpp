// Name: core_bat.cpp_CBat_updateCoursePosition_FUN_00411060
// Address: 00411060
// Address Range: [[00411060, 00411136]]
// Convention: __cdecl
// Signature: void __cdecl core_bat_cpp_CBat_updateCoursePosition_FUN_00411060(CBat *this_ptr)

#include "nocturne.h"

void __cdecl core_bat_cpp_CBat_updateCoursePosition_FUN_00411060(CBat *this_ptr)

{
  float fVar1;
  double dVar2;
  float fStack_20;
  
  fStack_20 = *(float *)&this_ptr->field_0x304;
  fVar1 = (float)*(int *)&this_ptr->field_0x178;
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
  *(float *)&this_ptr->field_0x304 = fStack_20;
  core_course_cpp_FUN_00447f00
            ((CCourse *)&this_ptr->field_0x178,*(float *)&this_ptr->field_0x304,
             (CVector3f *)&this_ptr->field_0x20,(CVector3f *)&this_ptr->field_0x30);
  return;
}
