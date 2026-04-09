// Name: core_marquee.cpp_CMarquee_setup_FUN_0050bd60
// Address: 0050bd60
// Address Range: [[0050bd60, 0050bd98]]
// Convention: __cdecl
// Signature: void __cdecl core_marquee_cpp_CMarquee_setup_FUN_0050bd60(CMarquee *this_ptr)

#include "nocturne.h"

void __cdecl core_marquee_cpp_CMarquee_setup_FUN_0050bd60(CMarquee *this_ptr)

{
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  core_course_cpp_CCourse_load_FUN_00442580(&this_ptr->course,this_ptr->course_name);
  core_marquee_cpp_CMarquee_computeBoundingBox_FUN_0050bc30(this_ptr);
  this_ptr->param = 0.0;
  return;
}
