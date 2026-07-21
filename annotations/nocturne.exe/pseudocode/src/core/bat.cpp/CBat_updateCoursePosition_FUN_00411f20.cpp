// Name: core_bat.cpp_CBat_updateCoursePosition_FUN_00411f20
// Address: 00411f20
// Address Range: [[00411f20, 00411ff6]]
// Convention: __cdecl
// Signature: void __cdecl core_bat_cpp_CBat_updateCoursePosition_FUN_00411f20(int param_1)

#include "nocturne.h"

void __cdecl core_bat_cpp_CBat_updateCoursePosition_FUN_00411f20(int param_1)

{
  float fVar1;
  double dVar2;
  float local_20;
  
  local_20 = *(float *)(param_1 + 0x2fc);
  fVar1 = (float)*(int *)(param_1 + 0x170);
  if (0.0 <= local_20) {
    dVar2 = (double)floor((double)(local_20 / fVar1));
    local_20 = local_20 - (float)dVar2 * fVar1;
  }
  else {
    dVar2 = (double)floor((double)(-local_20 / fVar1));
    local_20 = (float)dVar2 * fVar1 + local_20;
    if (local_20 < 0.0) {
      local_20 = local_20 + fVar1;
    }
  }
  *(float *)(param_1 + 0x2fc) = local_20;
  core_course_cpp_CCourse_evaluate_FUN_0043b800
            (param_1 + 0x170,*(uint *)(param_1 + 0x2fc),param_1 + 0x20,param_1 + 0x30);
  return;
}
