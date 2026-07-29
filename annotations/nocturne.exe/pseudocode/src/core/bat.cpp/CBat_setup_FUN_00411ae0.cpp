// Name: core_bat.cpp_CBat_setup_FUN_00411ae0
// Address: 00411ae0
// Address Range: [[00411ae0, 00411b4f]]
// Convention: unknown
// Signature: void core_bat_cpp_CBat_setup_FUN_00411ae0(CBat *param_1)

#include "nocturne.h"

void core_bat_cpp_CBat_setup_FUN_00411ae0(CBat *param_1)

{
  float fVar1;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(&param_1->model);
  core_course_cpp_CCourse_load_FUN_0043b690(&param_1->course,param_1->course_filename);
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(&param_1->base);
  core_bat_cpp_CBat_updateCoursePosition_FUN_00411f20(param_1);
  param_1->sfx_handle = 0;
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                    (param_1->periodic_sound_timer_min,param_1->periodic_sound_timer_max);
  param_1->sound_timer = fVar1;
  return;
}
