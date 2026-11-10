// Name: core_bat.cpp_CBat_setup_FUN_004110a0
// Address: 004110a0
// Address Range: [[004110a0, 0041110f]]
// Convention: __cdecl
// Signature: void __cdecl core_bat_cpp_CBat_setup_FUN_004110a0(CBat *this_ptr)

#include "nocturne.h"

void __cdecl core_bat_cpp_CBat_setup_FUN_004110a0(CBat *this_ptr)

{
  float fVar1;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(&this_ptr->model);
  core_course_cpp_CCourse_load_FUN_00438af0
            ((CCourse *)&this_ptr->field_0x2d4,this_ptr->course_filename);
  core_actor_cpp_CDemonActor_setup_FUN_00408a80(&this_ptr->base);
  core_bat_cpp_CBat_updateCoursePosition_FUN_004114e0(this_ptr);
  this_ptr->sfx_handle = 0;
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60
                    (this_ptr->periodic_sound_timer_min,this_ptr->periodic_sound_timer_max);
  this_ptr->sound_timer = fVar1;
  return;
}
