// Name: core_bat.cpp_CBat_setup_FUN_0040eeb0
// Address: 0040eeb0
// Address Range: [[0040eeb0, 0040ef1f]]
// Convention: __cdecl
// Signature: void __cdecl core_bat_cpp_CBat_setup_FUN_0040eeb0(CBat *this_ptr)

#include "nocturne.h"

void __cdecl core_bat_cpp_CBat_setup_FUN_0040eeb0(CBat *this_ptr)

{
  float fVar1;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580(&this_ptr->model);
  core_course_cpp_CCourse_load_FUN_00444970(&this_ptr->course,this_ptr->course_filename);
  core_actor_cpp_CDemonActor_setup_FUN_00408890(&this_ptr->base);
  core_bat_cpp_CBat_updateCoursePosition_FUN_0040f2f0(this_ptr);
  this_ptr->sfx_handle = 0;
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40
                    (this_ptr->periodic_sound_timer_min,this_ptr->periodic_sound_timer_max);
  this_ptr->sound_timer = fVar1;
  return;
}
