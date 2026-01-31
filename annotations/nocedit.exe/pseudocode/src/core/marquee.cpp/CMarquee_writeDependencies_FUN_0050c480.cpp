// Name: core_marquee.cpp_CMarquee_writeDependencies_FUN_0050c480
// Address: 0050c480
// Address Range: [[0050c480, 0050c4b0]]
// Convention: __cdecl
// Signature: void __cdecl core_marquee_cpp_CMarquee_writeDependencies_FUN_0050c480(CMarquee *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl
core_marquee_cpp_CMarquee_writeDependencies_FUN_0050c480(CMarquee *this_ptr,_FILE *file_handle)

{
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0(&this_ptr->base,file_handle);
  _fprintf(file_handle,"DATA\\%s\n",&this_ptr->course_name);
  return;
}
