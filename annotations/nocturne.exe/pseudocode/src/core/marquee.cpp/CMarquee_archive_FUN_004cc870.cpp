// Name: core_marquee.cpp_CMarquee_archive_FUN_004cc870
// Address: 004cc870
// Address Range: [[004cc870, 004cc8e3]]
// Convention: __cdecl
// Signature: void __cdecl core_marquee_cpp_CMarquee_archive_FUN_004cc870(CMarquee *this_ptr)

#include "nocturne.h"

void __cdecl core_marquee_cpp_CMarquee_archive_FUN_004cc870(CMarquee *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(&this_ptr->base);
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->course_name,"courseName");
  core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->total_time,"totalTime");
  core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->param,"param");
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->phase,"phase");
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->type,"type");
  return;
}
