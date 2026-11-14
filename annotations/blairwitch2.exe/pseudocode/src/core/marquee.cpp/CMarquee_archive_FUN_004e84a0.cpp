// Name: core_marquee.cpp_CMarquee_archive_FUN_004e84a0
// Address: 004e84a0
// Address Range: [[004e84a0, 004e8513]]
// Convention: __cdecl
// Signature: void __cdecl core_marquee_cpp_CMarquee_archive_FUN_004e84a0(CMarquee *this_ptr)

#include "nocturne.h"

void __cdecl core_marquee_cpp_CMarquee_archive_FUN_004e84a0(CMarquee *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(&this_ptr->base);
  core_actor_cpp_archiveString_FUN_0040b730(this_ptr->course_name,"courseName");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->total_time,"totalTime");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->param,"param");
  core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->phase,"phase");
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->type,&DAT_005dc779);
  return;
}
