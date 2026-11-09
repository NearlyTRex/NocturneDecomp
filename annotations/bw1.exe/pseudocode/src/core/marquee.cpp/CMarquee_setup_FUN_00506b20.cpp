// Name: core_marquee.cpp_CMarquee_setup_FUN_00506b20
// Address: 00506b20
// Address Range: [[00506b20, 00506b58]]
// Convention: __cdecl
// Signature: void __cdecl core_marquee_cpp_CMarquee_setup_FUN_00506b20(CMarquee *this_ptr)

#include "nocturne.h"

void __cdecl core_marquee_cpp_CMarquee_setup_FUN_00506b20(CMarquee *this_ptr)

{
  core_actor_cpp_FUN_00408850((CDemonActor *)this_ptr);
  core_course_cpp_CCourse_load_FUN_00447db0
            ((CCourse *)&this_ptr->field_0x1a4,&this_ptr->field_0x158);
  core_marquee_cpp_CMarquee_computeBoundingBox_FUN_005069f0(this_ptr);
  *(uint *)&this_ptr->field_0x17c = 0;
  return;
}
