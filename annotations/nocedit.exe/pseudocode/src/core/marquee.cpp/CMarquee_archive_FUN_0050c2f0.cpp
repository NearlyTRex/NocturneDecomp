// Name: core_marquee.cpp_CMarquee_archive_FUN_0050c2f0
// Address: 0050c2f0
// Address Range: [[0050c2f0, 0050c363]]
// Convention: __cdecl
// Signature: void __cdecl core_marquee_cpp_CMarquee_archive_FUN_0050c2f0(CMarquee *this_ptr)

#include "nocturne.h"

void __cdecl core_marquee_cpp_CMarquee_archive_FUN_0050c2f0(CMarquee *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c1c0(&this_ptr->base);
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->course_name,"courseName");
  core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->total_time,"totalTime");
  core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->param,"param");
  core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->phase,"phase");
  core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->type,"type");
  return;
}
