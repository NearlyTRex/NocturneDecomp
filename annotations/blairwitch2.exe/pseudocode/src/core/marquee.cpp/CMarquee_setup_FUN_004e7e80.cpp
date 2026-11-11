// Name: core_marquee.cpp_CMarquee_setup_FUN_004e7e80
// Address: 004e7e80
// Address Range: [[004e7e80, 004e7eb8]]
// Convention: __cdecl
// Signature: void __cdecl core_marquee_cpp_CMarquee_setup_FUN_004e7e80(CMarquee *this_ptr)

#include "nocturne.h"

void __cdecl core_marquee_cpp_CMarquee_setup_FUN_004e7e80(CMarquee *this_ptr)

{
  core_actor_cpp_CDemonActor_setup_FUN_00408a80(&this_ptr->base);
  core_course_cpp_CCourse_load_FUN_00438af0(&this_ptr->course,this_ptr->course_name);
  core_marquee_cpp_CMarquee_computeBoundingBox_FUN_004e7d50(this_ptr);
  this_ptr->param = 0.0;
  return;
}
