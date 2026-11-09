// Name: core_marquee.cpp_CMarquee_archive_FUN_00507140
// Address: 00507140
// Address Range: [[00507140, 005071b3]]
// Convention: __cdecl
// Signature: void __cdecl core_marquee_cpp_CMarquee_archive_FUN_00507140(CMarquee *this_ptr)

#include "nocturne.h"

void __cdecl core_marquee_cpp_CMarquee_archive_FUN_00507140(CMarquee *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c040((CDemonActor *)this_ptr);
  core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x158,"courseName");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x178,"totalTime");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x17c,"param");
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x180,"phase");
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x1a0,&DAT_005e76c9);
  return;
}
