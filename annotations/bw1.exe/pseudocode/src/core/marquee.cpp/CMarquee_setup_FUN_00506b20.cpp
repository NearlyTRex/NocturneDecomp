// Name: core_marquee.cpp_CMarquee_setup_FUN_00506b20
// Address: 00506b20
// Address Range: [[00506b20, 00506b58]]
// Convention: __cdecl
// Signature: void __cdecl core_marquee_cpp_CMarquee_setup_FUN_00506b20(CMarquee *this_ptr)

#include "nocturne.h"

void __cdecl core_marquee_cpp_CMarquee_setup_FUN_00506b20(CMarquee *this_ptr)

{
  core_actor_cpp_CDemonActor_setup_FUN_00408850(&this_ptr->base);
  core_course_cpp_CCourse_load_FUN_00447db0(&this_ptr->course,this_ptr->course_name);
  core_marquee_cpp_CMarquee_computeBoundingBox_FUN_005069f0(this_ptr);
  this_ptr->param = 0.0;
  return;
}
