// Name: core_marquee.cpp_CMarquee_setup_FUN_004cc2e0
// Address: 004cc2e0
// Address Range: [[004cc2e0, 004cc318]]
// Convention: __cdecl
// Signature: void __cdecl core_marquee_cpp_CMarquee_setup_FUN_004cc2e0(CMarquee *this_ptr)

#include "nocturne.h"

void __cdecl core_marquee_cpp_CMarquee_setup_FUN_004cc2e0(CMarquee *this_ptr)

{
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(&this_ptr->base);
  core_course_cpp_CCourse_load_FUN_0043b690(&this_ptr->course,this_ptr->course_name);
  core_marquee_cpp_CMarquee_computeBoundingBox_FUN_004cc1b0(this_ptr);
  this_ptr->param = 0.0;
  return;
}
