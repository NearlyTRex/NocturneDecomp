// Name: core_bat.cpp_CBat_setup_FUN_00411ae0
// Address: 00411ae0
// Address Range: [[00411ae0, 00411b4f]]
// Convention: unknown
// Signature: void core_bat_cpp_CBat_setup_FUN_00411ae0(int param_1)

#include "nocturne.h"

void core_bat_cpp_CBat_setup_FUN_00411ae0(int param_1)

{
  uint uVar1;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(param_1 + 0x180);
  core_course_cpp_CCourse_load_FUN_0043b690(param_1 + 0x170,param_1 + 0x150);
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(param_1);
  core_bat_cpp_CBat_updateCoursePosition_FUN_00411f20(param_1);
  *(uint *)(param_1 + 0x378) = 0;
  uVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                    (*(uint *)(param_1 + 0x370),*(uint *)(param_1 + 0x374));
  *(uint *)(param_1 + 0x37c) = uVar1;
  return;
}
